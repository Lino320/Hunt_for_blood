// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hunt_for_blood/Hunt_for_bloodGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHunt_for_bloodGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HUNT_FOR_BLOOD_API UClass* Z_Construct_UClass_AHunt_for_bloodGameMode();
	HUNT_FOR_BLOOD_API UClass* Z_Construct_UClass_AHunt_for_bloodGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Hunt_for_blood();
// End Cross Module References
	void AHunt_for_bloodGameMode::StaticRegisterNativesAHunt_for_bloodGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHunt_for_bloodGameMode);
	UClass* Z_Construct_UClass_AHunt_for_bloodGameMode_NoRegister()
	{
		return AHunt_for_bloodGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHunt_for_bloodGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHunt_for_bloodGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Hunt_for_blood,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunt_for_bloodGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Hunt_for_bloodGameMode.h" },
		{ "ModuleRelativePath", "Hunt_for_bloodGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHunt_for_bloodGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHunt_for_bloodGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHunt_for_bloodGameMode_Statics::ClassParams = {
		&AHunt_for_bloodGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHunt_for_bloodGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHunt_for_bloodGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHunt_for_bloodGameMode()
	{
		if (!Z_Registration_Info_UClass_AHunt_for_bloodGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHunt_for_bloodGameMode.OuterSingleton, Z_Construct_UClass_AHunt_for_bloodGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHunt_for_bloodGameMode.OuterSingleton;
	}
	template<> HUNT_FOR_BLOOD_API UClass* StaticClass<AHunt_for_bloodGameMode>()
	{
		return AHunt_for_bloodGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHunt_for_bloodGameMode);
	AHunt_for_bloodGameMode::~AHunt_for_bloodGameMode() {}
	struct Z_CompiledInDeferFile_FID_Hunt_for_blood_Source_Hunt_for_blood_Hunt_for_bloodGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Hunt_for_blood_Source_Hunt_for_blood_Hunt_for_bloodGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHunt_for_bloodGameMode, AHunt_for_bloodGameMode::StaticClass, TEXT("AHunt_for_bloodGameMode"), &Z_Registration_Info_UClass_AHunt_for_bloodGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHunt_for_bloodGameMode), 1067355325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Hunt_for_blood_Source_Hunt_for_blood_Hunt_for_bloodGameMode_h_112792162(TEXT("/Script/Hunt_for_blood"),
		Z_CompiledInDeferFile_FID_Hunt_for_blood_Source_Hunt_for_blood_Hunt_for_bloodGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Hunt_for_blood_Source_Hunt_for_blood_Hunt_for_bloodGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
