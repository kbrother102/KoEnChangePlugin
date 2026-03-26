// Fill out your copyright notice in the Description page of Project Settings.


#include "LanguageToolbarSubsystem.h"

#include "Internationalization/Culture.h"
// 에디터 환경에서만 컴파일 되도록 매크로 처리
#if WITH_EDITOR
#include "ToolMenus.h"
#include "Internationalization/Internationalization.h"
#endif

void ULanguageToolbarSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if WITH_EDITOR
	// 에디터 메뉴 시스템이 초기화될 때 우리의 버튼도 같이 등록되도록 콜백을 걸어둡니다.
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ULanguageToolbarSubsystem::ResisterToolbarButton));
#endif
}

void ULanguageToolbarSubsystem::Deinitialize()
{
#if WITH_EDITOR
	// 서브시스템이 종료될 때 콜백을 안전하게 해제합니다.
	UToolMenus::UnRegisterStartupCallback(this);
#endif

	Super::Deinitialize();
}

void ULanguageToolbarSubsystem::ResisterToolbarButton()
{
	UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.User");
	if (!ToolbarMenu) {return;}
	
	FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
	// 툴바에 들어갈 버튼을 구성합니다.
	FToolMenuEntry LanguageEntry = FToolMenuEntry::InitToolBarButton(
		"ToggleLanguageButton", // 내부 ID
		FExecuteAction::CreateUObject(this, &ULanguageToolbarSubsystem::ToggleLanguage), // 클릭 시 실행할 함수 바인딩
		FText::FromString(TEXT("한/영 변환")), // 버튼에 표시될 텍스트
		FText::FromString(TEXT("에디터 언어를 한국어와 영어로 번갈아 변경합니다.")), // 마우스를 올렸을 때 툴팁
		FSlateIcon() // 아이콘은 생략
	);

	// 텍스트가 잘 보이도록 스타일 지정 (UE5 스타일)
	LanguageEntry.StyleNameOverride = "CalloutToolbar";

	// 툴바 섹션에 버튼을 최종 추가합니다.
	Section.AddEntry(LanguageEntry);
	
	
	
}

void ULanguageToolbarSubsystem::ToggleLanguage()
{
#if WITH_EDITOR
	// 현재 설정된 언어를 가져와서 비교한 뒤 전환합니다.
	FString CurrentCulture = FInternationalization::Get().GetCurrentCulture()->GetName();
	FString NewCulture = CurrentCulture.StartsWith(TEXT("ko")) ? TEXT("en") : TEXT("ko");
		
	FInternationalization::Get().SetCurrentCulture(NewCulture);
#endif
}