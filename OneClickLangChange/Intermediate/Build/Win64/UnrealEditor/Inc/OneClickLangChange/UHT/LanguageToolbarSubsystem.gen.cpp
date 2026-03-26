// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LanguageToolbarSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLanguageToolbarSubsystem() {}

// ********** Begin Cross Module References ********************************************************
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ONECLICKLANGCHANGE_API UClass* Z_Construct_UClass_ULanguageToolbarSubsystem();
ONECLICKLANGCHANGE_API UClass* Z_Construct_UClass_ULanguageToolbarSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OneClickLangChange();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULanguageToolbarSubsystem ************************************************
void ULanguageToolbarSubsystem::StaticRegisterNativesULanguageToolbarSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULanguageToolbarSubsystem;
UClass* ULanguageToolbarSubsystem::GetPrivateStaticClass()
{
	using TClass = ULanguageToolbarSubsystem;
	if (!Z_Registration_Info_UClass_ULanguageToolbarSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LanguageToolbarSubsystem"),
			Z_Registration_Info_UClass_ULanguageToolbarSubsystem.InnerSingleton,
			StaticRegisterNativesULanguageToolbarSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULanguageToolbarSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_ULanguageToolbarSubsystem_NoRegister()
{
	return ULanguageToolbarSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULanguageToolbarSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ------------------------------------\n" },
		{ "IncludePath", "LanguageToolbarSubsystem.h" },
		{ "ModuleRelativePath", "Public/LanguageToolbarSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULanguageToolbarSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULanguageToolbarSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OneClickLangChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULanguageToolbarSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULanguageToolbarSubsystem_Statics::ClassParams = {
	&ULanguageToolbarSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULanguageToolbarSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULanguageToolbarSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULanguageToolbarSubsystem()
{
	if (!Z_Registration_Info_UClass_ULanguageToolbarSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULanguageToolbarSubsystem.OuterSingleton, Z_Construct_UClass_ULanguageToolbarSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULanguageToolbarSubsystem.OuterSingleton;
}
ULanguageToolbarSubsystem::ULanguageToolbarSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULanguageToolbarSubsystem);
ULanguageToolbarSubsystem::~ULanguageToolbarSubsystem() {}
// ********** End Class ULanguageToolbarSubsystem **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_01_GameProgramming_05_MyProject_00_Practice_OneClickLangChange_OneClickLangChange_HostProject_Plugins_OneClickLangChange_Source_OneClickLangChange_Public_LanguageToolbarSubsystem_h__Script_OneClickLangChange_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULanguageToolbarSubsystem, ULanguageToolbarSubsystem::StaticClass, TEXT("ULanguageToolbarSubsystem"), &Z_Registration_Info_UClass_ULanguageToolbarSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULanguageToolbarSubsystem), 2904144558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_01_GameProgramming_05_MyProject_00_Practice_OneClickLangChange_OneClickLangChange_HostProject_Plugins_OneClickLangChange_Source_OneClickLangChange_Public_LanguageToolbarSubsystem_h__Script_OneClickLangChange_285346299(TEXT("/Script/OneClickLangChange"),
	Z_CompiledInDeferFile_FID_01_GameProgramming_05_MyProject_00_Practice_OneClickLangChange_OneClickLangChange_HostProject_Plugins_OneClickLangChange_Source_OneClickLangChange_Public_LanguageToolbarSubsystem_h__Script_OneClickLangChange_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_01_GameProgramming_05_MyProject_00_Practice_OneClickLangChange_OneClickLangChange_HostProject_Plugins_OneClickLangChange_Source_OneClickLangChange_Public_LanguageToolbarSubsystem_h__Script_OneClickLangChange_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
