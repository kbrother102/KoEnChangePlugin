// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "Framework/Commands/Commands.h" // 추가: 커맨드 등록용
#include "Framework/Commands/UICommandList.h" // 추가: 커맨드 리스트용
#include "LanguageToolbarSubsystem.generated.h"

/**
 * 
*/// --- 단축키(커맨드)를 정의하는 클래스 ---
class FLanguageToolbarCommands : public TCommands<FLanguageToolbarCommands>
{
public:
	FLanguageToolbarCommands();
	virtual void RegisterCommands() override;
	
	// 토글 기능을 담당할 커맨드 포인터
	TSharedPtr<FUICommandInfo> ToggleLanguageCmd;
};
// ------------------------------------

UCLASS()
class ONECLICKLANGCHANGE_API ULanguageToolbarSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	
private:
	void ResisterToolbarButton();
	
	void ToggleLanguage();
};
