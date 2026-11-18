// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 157

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h__Script_Engine_3168907877'' @ 1410cc040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h__Script_Engine_3168907877__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h__Script_Engine_Statics
             ::EnumInfo,9);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h__Script_Engine_4064706284'' @ 1410cc090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h__Script_Engine_4064706284__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h__Script_Engine_Statics
             ::ScriptStructInfo,0xe,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h__Script_Engine_3576747227'' @ 1410cc0e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h__Script_Engine_3576747227__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Engine'' @ 1410cc120

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Engine__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf35db074;
  local_res8[0].DeclarationsHash = 0x364bd1ad;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Engine,L"/Script/Engine",
             &Z_Registration_Info_UPackage__Script_Engine,local_res8);
  return;
}

// Z_Construct_UClass_AEmitterCameraLensEffectBase @ 147273250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AEmitterCameraLensEffectBase(void)

{
  if (Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton,
               &Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton;
}

// Z_Construct_UPackage__Script_Engine @ 147273290

UPackage * __cdecl Z_Construct_UPackage__Script_Engine(void)

{
  if (Z_Registration_Info_UPackage__Script_Engine.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Engine.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Engine.OuterSingleton;
}

// NewProp_bAllowMultipleInstances_SetBit @ 1472732d0

void __cdecl
Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3b4) = *(byte *)((longlong)param_1 + 0x3b4) | 1;
  return;
}

// NewProp_bResetWhenRetriggered_SetBit @ 1472732e0

void __cdecl
Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x3b4) = *(byte *)((longlong)param_1 + 0x3b4) | 2;
  return;
}

// Z_Construct_UClass_UEngine @ 1472733c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEngine(void)

{
  if (Z_Registration_Info_UClass_UEngine.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEngine.OuterSingleton,
               &Z_Construct_UClass_UEngine_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEngine.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EFullyLoadPackageType @ 147273440

UEnum * __cdecl Z_Construct_UEnum_Engine_EFullyLoadPackageType(void)

{
  if (Z_Registration_Info_UEnum_EFullyLoadPackageType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFullyLoadPackageType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EFullyLoadPackageType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFullyLoadPackageType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETransitionType @ 147273480

UEnum * __cdecl Z_Construct_UEnum_Engine_ETransitionType(void)

{
  if (Z_Registration_Info_UEnum_ETransitionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransitionType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETransitionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransitionType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FClassRedirect @ 1472734c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClassRedirect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClassRedirect.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClassRedirect.InnerSingleton,
               &Z_Construct_UScriptStruct_FClassRedirect_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClassRedirect.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClassRedirect.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FDropNoteInfo @ 147273540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDropNoteInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDropNoteInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDropNoteInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FDropNoteInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDropNoteInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDropNoteInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo @ 1472735c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFullyLoadedPackagesInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFullyLoadedPackagesInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFullyLoadedPackagesInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFullyLoadedPackagesInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameNameRedirect @ 147273640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameNameRedirect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameNameRedirect.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameNameRedirect.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameNameRedirect_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameNameRedirect.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameNameRedirect.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FIrisNetDriverConfig @ 1472736c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIrisNetDriverConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIrisNetDriverConfig.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIrisNetDriverConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIrisNetDriverConfig.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FIrisNetDriverConfig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FLevelStreamingStatus @ 147273740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLevelStreamingStatus(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLevelStreamingStatus.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLevelStreamingStatus.InnerSingleton,
               &Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLevelStreamingStatus.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FLevelStreamingStatus.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNamedNetDriver @ 1472737c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamedNetDriver(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamedNetDriver.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamedNetDriver.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamedNetDriver_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamedNetDriver.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNamedNetDriver.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNetDriverDefinition @ 147273840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetDriverDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetDriverDefinition.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetDriverDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetDriverDefinition.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNetDriverDefinition.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPluginRedirect @ 1472738c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPluginRedirect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPluginRedirect.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPluginRedirect.InnerSingleton,
               &Z_Construct_UScriptStruct_FPluginRedirect_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPluginRedirect.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPluginRedirect.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FStatColorMapEntry @ 147273940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStatColorMapEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStatColorMapEntry.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStatColorMapEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStatColorMapEntry.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStatColorMapEntry.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FStatColorMapping @ 1472739c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStatColorMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStatColorMapping.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStatColorMapping.InnerSingleton,
               &Z_Construct_UScriptStruct_FStatColorMapping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStatColorMapping.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStatColorMapping.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FStructRedirect @ 147273a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructRedirect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructRedirect.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructRedirect.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructRedirect_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructRedirect.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructRedirect.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FURL @ 147273ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FURL(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FURL.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FURL.InnerSingleton,
               &Z_Construct_UScriptStruct_FURL_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FURL.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FURL.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EFullyLoadPackageType_StaticEnum @ 147273b40

UEnum * __cdecl EFullyLoadPackageType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EFullyLoadPackageType,(UObject *)pUVar1,
                       L"EFullyLoadPackageType");
  }
  return Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton;
}

// ETransitionType_StaticEnum @ 147273c00

UEnum * __cdecl ETransitionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionType,(UObject *)pUVar1,L"ETransitionType"
                      );
  }
  return Z_Registration_Info_UEnum_ETransitionType.OuterSingleton;
}

// NewStructOps @ 147273c40

void * __cdecl Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFullyLoadedPackagesInfo,&UE::CoreUObject::Private::Construct<FFullyLoadedPackagesInfo>,&UE::CoreUObject::Private::ConstructForTests<FFullyLoadedPackagesInfo>,&UE::CoreUObject::Private::Destruct<FFullyLoadedPackagesInfo>,&UE::CoreUObject::Private::Copy<FFullyLoadedPackagesInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShouldBeLoaded_SetBit @ 147273e30

void __cdecl
Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) | 1;
  return;
}

// NewProp_bShouldBeVisible_SetBit @ 147273e40

void __cdecl
Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) | 2;
  return;
}

// NewStructOps @ 147273e50

void * __cdecl Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLevelStreamingStatus,&UE::CoreUObject::Private::Construct<FLevelStreamingStatus>,&UE::CoreUObject::Private::ConstructForTests<FLevelStreamingStatus>,&UE::CoreUObject::Private::Destruct<FLevelStreamingStatus>,&UE::CoreUObject::Private::Copy<FLevelStreamingStatus>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147273e90

void * __cdecl Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetDriverDefinition,&UE::CoreUObject::Private::Construct<FNetDriverDefinition>,&UE::CoreUObject::Private::ConstructForTests<FNetDriverDefinition>,&UE::CoreUObject::Private::Destruct<FNetDriverDefinition>,&UE::CoreUObject::Private::Copy<FNetDriverDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCanUseIris_SetBit @ 147274050

void __cdecl
Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewProp_bCanUseIris_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 147274060

void * __cdecl Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIrisNetDriverConfig,&UE::CoreUObject::Private::Construct<FIrisNetDriverConfig>,&UE::CoreUObject::Private::ConstructForTests<FIrisNetDriverConfig>,&UE::CoreUObject::Private::Destruct<FIrisNetDriverConfig>,&UE::CoreUObject::Private::Copy<FIrisNetDriverConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147274130

void * __cdecl Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamedNetDriver,&UE::CoreUObject::Private::Construct<FNamedNetDriver>,&UE::CoreUObject::Private::ConstructForTests<FNamedNetDriver>,&UE::CoreUObject::Private::Destruct<FNamedNetDriver>,&UE::CoreUObject::Private::Copy<FNamedNetDriver>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147274170

void * __cdecl Z_Construct_UScriptStruct_FWorldContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldContext,&UE::CoreUObject::Private::Construct<FWorldContext>,&UE::CoreUObject::Private::ConstructForTests<FWorldContext>,&UE::CoreUObject::Private::Destruct<FWorldContext>,&UE::CoreUObject::Private::Copy<FWorldContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1472741b0

void * __cdecl Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStatColorMapEntry,&UE::CoreUObject::Private::Construct<FStatColorMapEntry>,&UE::CoreUObject::Private::ConstructForTests<FStatColorMapEntry>,&UE::CoreUObject::Private::Destruct<FStatColorMapEntry>,&UE::CoreUObject::Private::Copy<FStatColorMapEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_DisableBlend_SetBit @ 147274220

void __cdecl
Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x20) = *(uint *)((longlong)param_1 + 0x20) | 1;
  return;
}

// NewStructOps @ 147274230

void * __cdecl Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStatColorMapping,&UE::CoreUObject::Private::Construct<FStatColorMapping>,&UE::CoreUObject::Private::ConstructForTests<FStatColorMapping>,&UE::CoreUObject::Private::Destruct<FStatColorMapping>,&UE::CoreUObject::Private::Copy<FStatColorMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147274270

void * __cdecl Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDropNoteInfo,&UE::CoreUObject::Private::Construct<FDropNoteInfo>,&UE::CoreUObject::Private::ConstructForTests<FDropNoteInfo>,&UE::CoreUObject::Private::Destruct<FDropNoteInfo>,&UE::CoreUObject::Private::Copy<FDropNoteInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1472742b0

void * __cdecl Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FScreenMessageString,&UE::CoreUObject::Private::Construct<FScreenMessageString>,&UE::CoreUObject::Private::ConstructForTests<FScreenMessageString>,&UE::CoreUObject::Private::Destruct<FScreenMessageString>,&UE::CoreUObject::Private::Copy<FScreenMessageString>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147274350

void * __cdecl Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameNameRedirect,&UE::CoreUObject::Private::Construct<FGameNameRedirect>,&UE::CoreUObject::Private::ConstructForTests<FGameNameRedirect>,&UE::CoreUObject::Private::Destruct<FGameNameRedirect>,&UE::CoreUObject::Private::Copy<FGameNameRedirect>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_InstanceOnly_SetBit @ 147274390

void __cdecl
Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewStructOps @ 1472743a0

void * __cdecl Z_Construct_UScriptStruct_FClassRedirect_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClassRedirect,&UE::CoreUObject::Private::Construct<FClassRedirect>,&UE::CoreUObject::Private::ConstructForTests<FClassRedirect>,&UE::CoreUObject::Private::Destruct<FClassRedirect>,&UE::CoreUObject::Private::Copy<FClassRedirect>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1472743e0

void * __cdecl Z_Construct_UScriptStruct_FStructRedirect_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructRedirect,&UE::CoreUObject::Private::Construct<FStructRedirect>,&UE::CoreUObject::Private::ConstructForTests<FStructRedirect>,&UE::CoreUObject::Private::Destruct<FStructRedirect>,&UE::CoreUObject::Private::Copy<FStructRedirect>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1472744a0

void * __cdecl Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPluginRedirect,&UE::CoreUObject::Private::Construct<FPluginRedirect>,&UE::CoreUObject::Private::ConstructForTests<FPluginRedirect>,&UE::CoreUObject::Private::Destruct<FPluginRedirect>,&UE::CoreUObject::Private::Copy<FPluginRedirect>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRenderLightMapDensityGrayscale_SetBit @ 147274560

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x854) = *(uint *)((longlong)param_1 + 0x854) | 1;
  return;
}

// NewProp_bSubtitlesEnabled_SetBit @ 1472745d0

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xca4) = *(uint *)((longlong)param_1 + 0xca4) | 1;
  return;
}

// NewProp_bSubtitlesForcedOff_SetBit @ 1472745e0

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xca4) = *(uint *)((longlong)param_1 + 0xca4) | 2;
  return;
}

// NewProp_bCanBlueprintsTickByDefault_SetBit @ 1472745f0

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xcac) = *(uint *)((longlong)param_1 + 0xcac) | 1;
  return;
}

// NewProp_bOptimizeAnimBlueprintMemberVariableAccess_SetBit @ 147274600

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xcac) = *(uint *)((longlong)param_1 + 0xcac) | 2;
  return;
}

// NewProp_bAllowMultiThreadedAnimationUpdate_SetBit @ 147274610

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xcac) = *(uint *)((longlong)param_1 + 0xcac) | 4;
  return;
}

// NewProp_bEnableEditorPSysRealtimeLOD_SetBit @ 147274620

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xcac) = *(uint *)((longlong)param_1 + 0xcac) | 8;
  return;
}

// NewProp_bSmoothFrameRate_SetBit @ 147274630

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xcac) = *(uint *)((longlong)param_1 + 0xcac) | 0x20;
  return;
}

// NewProp_bUseFixedFrameRate_SetBit @ 147274640

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xcac) = *(uint *)((longlong)param_1 + 0xcac) | 0x40;
  return;
}

// NewProp_bGenerateDefaultTimecode_SetBit @ 147274650

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bGenerateDefaultTimecode_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd68) = 1;
  return;
}

// NewProp_bCheckForMultiplePawnsSpawnedInAFrame_SetBit @ 147274660

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd78) = *(uint *)((longlong)param_1 + 0xd78) | 1;
  return;
}

// NewProp_bShouldGenerateLowQualityLightmaps_SetBit @ 147274670

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd80) = *(uint *)((longlong)param_1 + 0xd80) | 1;
  return;
}

// NewProp_UseStaticMeshMinLODPerQualityLevels_SetBit @ 147274680

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_UseStaticMeshMinLODPerQualityLevels_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdc8) = 1;
  return;
}

// NewProp_UseSkeletalMeshMinLODPerQualityLevels_SetBit @ 147274690

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_UseSkeletalMeshMinLODPerQualityLevels_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdc9) = 1;
  return;
}

// NewProp_UseClothAssetMinLODPerQualityLevels_SetBit @ 1472746a0

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_UseClothAssetMinLODPerQualityLevels_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdca) = 1;
  return;
}

// NewProp_UseGrassVarityPerQualityLevels_SetBit @ 1472746b0

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_UseGrassVarityPerQualityLevels_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xdcb) = 1;
  return;
}

// NewProp_bAllowMatureLanguage_SetBit @ 1472746c0

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xdf0) = *(uint *)((longlong)param_1 + 0xdf0) | 1;
  return;
}

// NewProp_bPauseOnLossOfFocus_SetBit @ 1472746d0

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xe04) = *(uint *)((longlong)param_1 + 0xe04) | 1;
  return;
}

// NewProp_bIsOverridingSelectedColor_SetBit @ 1472746e0

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe7c) = 1;
  return;
}

// NewProp_bEnableOnScreenDebugMessages_SetBit @ 1472746f0

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xe80) = *(uint *)((longlong)param_1 + 0xe80) | 1;
  return;
}

// NewProp_bEnableOnScreenDebugMessagesDisplay_SetBit @ 147274700

void __cdecl
Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xe80) = *(uint *)((longlong)param_1 + 0xe80) | 2;
  return;
}

// NewProp_bSuppressMapWarnings_SetBit @ 147274710

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xe80) = *(uint *)((longlong)param_1 + 0xe80) | 4;
  return;
}

// NewProp_bDisableAILogging_SetBit @ 147274720

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xe80) = *(uint *)((longlong)param_1 + 0xe80) | 8;
  return;
}

// NewProp_bLockReadOnlyLevels_SetBit @ 147274730

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xe8c) = *(uint *)((longlong)param_1 + 0xe8c) | 1;
  return;
}

// NewProp_bStartedLoadMapMovie_SetBit @ 147274740

void __cdecl Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x11f4) = *(uint *)((longlong)param_1 + 0x11f4) | 1;
  return;
}

// Z_Construct_UClass_UEngineBaseTypes @ 147274c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEngineBaseTypes(void)

{
  if (Z_Registration_Info_UClass_UEngineBaseTypes.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEngineBaseTypes.OuterSingleton,
               &Z_Construct_UClass_UEngineBaseTypes_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEngineBaseTypes.OuterSingleton;
}

// Z_Construct_UClass_UViewModeUtils @ 147274c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UViewModeUtils(void)

{
  if (Z_Registration_Info_UClass_UViewModeUtils.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UViewModeUtils.OuterSingleton,
               &Z_Construct_UClass_UViewModeUtils_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UViewModeUtils.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ETickingGroup @ 147274cf0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETickingGroup(void)

{
  if (Z_Registration_Info_UEnum_ETickingGroup.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETickingGroup.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETickingGroup_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETickingGroup.InnerSingleton;
}

// Z_Construct_UScriptStruct_FTickFunction @ 147274d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTickFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTickFunction.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTickFunction.InnerSingleton,
               &Z_Construct_UScriptStruct_FTickFunction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTickFunction.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTickFunction.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EInputEvent_StaticEnum @ 147274df0

UEnum * __cdecl EInputEvent_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInputEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInputEvent,(UObject *)pUVar1,L"EInputEvent");
  }
  return Z_Registration_Info_UEnum_EInputEvent.OuterSingleton;
}

// EMouseCaptureMode_StaticEnum @ 147274f30

UEnum * __cdecl EMouseCaptureMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMouseCaptureMode,(UObject *)pUVar1,
                       L"EMouseCaptureMode");
  }
  return Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton;
}

// EMouseLockMode_StaticEnum @ 147274f70

UEnum * __cdecl EMouseLockMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMouseLockMode,(UObject *)pUVar1,L"EMouseLockMode");
  }
  return Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton;
}

// ETickingGroup_StaticEnum @ 147274fb0

UEnum * __cdecl ETickingGroup_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETickingGroup,(UObject *)pUVar1,L"ETickingGroup");
  }
  return Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton;
}

// NewStructOps @ 147274ff0

void * __cdecl Z_Construct_UScriptStruct_FTickPrerequisite_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTickPrerequisite,&UE::CoreUObject::Private::Construct<FTickPrerequisite>,&UE::CoreUObject::Private::ConstructForTests<FTickPrerequisite>,&UE::CoreUObject::Private::Destruct<FTickPrerequisite>,&UE::CoreUObject::Private::Copy<FTickPrerequisite>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bTickEvenWhenPaused_SetBit @ 147275030

void __cdecl
Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 1;
  return;
}

// NewProp_bCanEverTick_SetBit @ 147275040

void __cdecl
Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 2;
  return;
}

// NewProp_bStartWithTickEnabled_SetBit @ 147275050

void __cdecl
Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 4;
  return;
}

// NewProp_bAllowTickOnDedicatedServer_SetBit @ 147275060

void __cdecl
Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 8;
  return;
}

// NewStructOps @ 147275070

void * __cdecl Z_Construct_UScriptStruct_FTickFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTickFunction,&UE::CoreUObject::Private::Construct<FTickFunction>,&UE::CoreUObject::Private::ConstructForTests<FTickFunction>,&UE::CoreUObject::Private::Destruct<FTickFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1472750b0

void * __cdecl Z_Construct_UScriptStruct_FActorTickFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorTickFunction,&UE::CoreUObject::Private::Construct<FActorTickFunction>,&UE::CoreUObject::Private::ConstructForTests<FActorTickFunction>,&UE::CoreUObject::Private::Destruct<FActorTickFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147275150

void * __cdecl Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorComponentTickFunction,&UE::CoreUObject::Private::Construct<FActorComponentTickFunction>,&UE::CoreUObject::Private::ConstructForTests<FActorComponentTickFunction>,&UE::CoreUObject::Private::Destruct<FActorComponentTickFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENetworkLagState_StaticEnum @ 147275190

UEnum * __cdecl ENetworkLagState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkLagState,(UObject *)pUVar1,
                       L"ENetworkLagState");
  }
  return Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton;
}

// ETravelFailure_StaticEnum @ 1472751d0

UEnum * __cdecl ETravelFailure_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETravelFailure,(UObject *)pUVar1,L"ETravelFailure");
  }
  return Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton;
}

// ETravelType_StaticEnum @ 147275210

UEnum * __cdecl ETravelType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETravelType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETravelType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETravelType,(UObject *)pUVar1,L"ETravelType");
  }
  return Z_Registration_Info_UEnum_ETravelType.OuterSingleton;
}

// EDemoPlayFailure_StaticEnum @ 147275250

UEnum * __cdecl EDemoPlayFailure_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDemoPlayFailure,(UObject *)pUVar1,
                       L"EDemoPlayFailure");
  }
  return Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton;
}

// NewStructOps @ 147275290

void * __cdecl Z_Construct_UScriptStruct_FURL_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FURL,&UE::CoreUObject::Private::Construct<FURL>,&UE::CoreUObject::Private::ConstructForTests<FURL>,&UE::CoreUObject::Private::Destruct<FURL>,&UE::CoreUObject::Private::Copy<FURL>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EViewModeIndex_StaticEnum @ 147275350

UEnum * __cdecl EViewModeIndex_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EViewModeIndex,(UObject *)pUVar1,L"EViewModeIndex");
  }
  return Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton;
}

// NewProp_bFixed_SetBit @ 147275410

void __cdecl
Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 147275420

void * __cdecl Z_Construct_UScriptStruct_FExposureSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FExposureSettings,&UE::CoreUObject::Private::Construct<FExposureSettings>,&UE::CoreUObject::Private::ConstructForTests<FExposureSettings>,&UE::CoreUObject::Private::Destruct<FExposureSettings>,&UE::CoreUObject::Private::Copy<FExposureSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1472757a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FActorTickFunction::_scalar_deleting_destructor_(FActorTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147275820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FActorComponentTickFunction::_scalar_deleting_destructor_
          (FActorComponentTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// ConstructItems<TObjectPtr<ULevel>,TObjectPtr<ULevel>,int> @ 147275930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ConstructItems<TObjectPtr<ULevel>,TObjectPtr<ULevel>,int>
          (void *param_1,TObjectPtr<ULevel> *param_2,int param_3)

{
  TObjectPtr<ULevel> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<ULevel>_u_0)param_2->field0_0x0;
      ((TObjectPtr<ULevel>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr = (ULevel *)TVar1.field0_0x0
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (ULevel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UObjectReferencer>,TObjectPtr<UObjectReferencer>,int> @ 147275990

void __cdecl
ConstructItems<TObjectPtr<UObjectReferencer>,TObjectPtr<UObjectReferencer>,int>
          (void *param_1,TObjectPtr<UObjectReferencer> *param_2,int param_3)

{
  TObjectPtr<UObjectReferencer> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UObjectReferencer>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UObjectReferencer>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UObjectReferencer *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UObjectReferencer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFullyLoadedPackagesInfo,FFullyLoadedPackagesInfo,int> @ 1472759f0

void __cdecl
ConstructItems<FFullyLoadedPackagesInfo,FFullyLoadedPackagesInfo,int>
          (void *param_1,FFullyLoadedPackagesInfo *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x30);
    piVar4 = &(param_2->LoadedObjects).ArrayNum;
    do {
      *(char *)((longlong)piVar4 + (longlong)param_1 + (-0x30 - (longlong)param_2)) =
           (char)piVar4[-0xc];
      FString::FString((FString *)(piVar3 + -10),(FString *)(piVar4 + -10));
      piVar3[-6] = 0;
      piVar3[-5] = 0;
      iVar1 = piVar4[-4];
      _Src = *(void **)(piVar4 + -6);
      piVar3[-4] = iVar1;
      if (iVar1 == 0) {
        piVar3[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar1,0,(ForAnyElementType *)(piVar3 + -6),iVar1,piVar3 + -3);
        memcpy(((ForAnyElementType *)(piVar3 + -6))->Data,_Src,(longlong)iVar1 << 3);
      }
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      iVar1 = *piVar4;
      pFVar2 = (((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
               AllocatorInstance).Data;
      *piVar3 = iVar1;
      if (iVar1 == 0) {
        piVar3[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,0,(ForAnyElementType *)(piVar3 + -2),iVar1,piVar3 + 1);
        ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                  (((ForAnyElementType *)(piVar3 + -2))->Data,(TObjectPtr<UObject> *)pFVar2,iVar1);
      }
      piVar4 = piVar4 + 0xe;
      piVar3 = piVar3 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNamedNetDriver,FNamedNetDriver,int> @ 147275b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ConstructItems<FNamedNetDriver,FNamedNetDriver,int>
          (void *param_1,FNamedNetDriver *param_2,int param_3)

{
  UNetDriver *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->NetDriver).field0_0x0.DebugPtr;
      *(UNetDriver **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UNetDriver *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(FNetDriverDefinition **)(lVar2 + 8 + (longlong)param_2) = param_2->NetDriverDef;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FDropNoteInfo,int> @ 147275ba0

void __cdecl DestructItems<FDropNoteInfo,int>(FDropNoteInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Comment;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UEngine::FEngineStatFuncs,int> @ 147275be0

void __cdecl DestructItems<UEngine::FEngineStatFuncs,int>(FEngineStatFuncs *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->RenderFunc;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (this + 1);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
      if (*(longlong **)&this[-1].field_0x8 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&this[-1].field_0x8 + 0x10))();
      }
      if (*(void **)&this[-2].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-2].field_0x8);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[4].field_0x8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFullyLoadedPackagesInfo,int> @ 147275c40

void __cdecl
DestructItems<FFullyLoadedPackagesInfo,int>(FFullyLoadedPackagesInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PackagesToLoad;
    do {
      pFVar1 = (((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FIrisNetDriverConfig,int> @ 147275ca0

void __cdecl DestructItems<FIrisNetDriverConfig,int>(FIrisNetDriverConfig *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->NetDriverWildcardName;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPluginRedirect,int> @ 147275ce0

void __cdecl DestructItems<FPluginRedirect,int>(FPluginRedirect *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->NewPluginName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->OldPluginName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FScreenMessageString,int> @ 147275d30

void __cdecl DestructItems<FScreenMessageString,int>(FScreenMessageString *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ScreenMessage;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStatColorMapping,int> @ 147275d70

void __cdecl DestructItems<FStatColorMapping,int>(FStatColorMapping *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ColorMap).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->StatName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<IPerformanceDataConsumer,1>,int> @ 147275dc0

void __cdecl
DestructItems<TSharedPtr<IPerformanceDataConsumer,1>,int>
          (TSharedPtr<IPerformanceDataConsumer,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<AEmitterCameraLensEffectBase> @ 147275e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl InternalConstructor<AEmitterCameraLensEffectBase>(FObjectInitializer *param_1)

{
  if ((AEmitterCameraLensEffectBase *)param_1->Obj != (AEmitterCameraLensEffectBase *)0x0) {
    AEmitterCameraLensEffectBase::AEmitterCameraLensEffectBase
              ((AEmitterCameraLensEffectBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEngine> @ 147275e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UEngine>(FObjectInitializer *param_1)

{
  if ((UEngine *)param_1->Obj != (UEngine *)0x0) {
    UEngine::UEngine((UEngine *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UEngineBaseTypes> @ 147275e40

void __cdecl InternalConstructor<UEngineBaseTypes>(FObjectInitializer *param_1)

{
  if ((UEngineBaseTypes *)param_1->Obj != (UEngineBaseTypes *)0x0) {
    UEngineBaseTypes::UEngineBaseTypes((UEngineBaseTypes *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UViewModeUtils> @ 147275e60

void __cdecl InternalConstructor<UViewModeUtils>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UViewModeUtils__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<AEmitterCameraLensEffectBase> @ 147275e90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AEmitterCameraLensEffectBase>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  AEmitter *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = AEmitterCameraLensEffectBase::GetPrivateStaticClass();
  this = (AEmitter *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AEmitter *)0x0) {
    AEmitter::AEmitter(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AEmitterCameraLensEffectBase::_vftable__for__AEmitter__;
    this[1]._padding_ =
         (longlong)&AEmitterCameraLensEffectBase::_vftable__for__ICameraLensEffectInterface__;
    this[1]._padding_ = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1]._padding_ = (longlong)(double)fVar1;
    this[1]._padding_ = (longlong)(double)fVar2;
    this[1]._padding_ = (longlong)(double)fVar3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEngine> @ 147275fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEngine>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngine *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEngine::GetPrivateStaticClass();
  pUVar3 = (UEngine *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UEngine *)0x0) {
    pUVar3 = UEngine::UEngine(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEngineBaseTypes> @ 147276070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEngineBaseTypes>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEngineBaseTypes::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEngineBaseTypes__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UViewModeUtils> @ 147276120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UViewModeUtils>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UViewModeUtils::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UViewModeUtils__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EFullyLoadPackageType> @ 1472761d0

UEnum * __cdecl StaticEnum<enum_EFullyLoadPackageType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EFullyLoadPackageType,(UObject *)pUVar1,
                       L"EFullyLoadPackageType");
  }
  return Z_Registration_Info_UEnum_EFullyLoadPackageType.OuterSingleton;
}

// StaticEnum<enum_EInputEvent> @ 147276210

UEnum * __cdecl StaticEnum<enum_EInputEvent>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInputEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInputEvent,(UObject *)pUVar1,L"EInputEvent");
  }
  return Z_Registration_Info_UEnum_EInputEvent.OuterSingleton;
}

// StaticEnum<enum_EMouseCaptureMode> @ 147276250

UEnum * __cdecl StaticEnum<enum_EMouseCaptureMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMouseCaptureMode,(UObject *)pUVar1,
                       L"EMouseCaptureMode");
  }
  return Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton;
}

// StaticEnum<enum_EMouseLockMode> @ 147276290

UEnum * __cdecl StaticEnum<enum_EMouseLockMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMouseLockMode,(UObject *)pUVar1,L"EMouseLockMode");
  }
  return Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton;
}

// StaticEnum<enum_ETickingGroup> @ 1472762d0

UEnum * __cdecl StaticEnum<enum_ETickingGroup>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETickingGroup,(UObject *)pUVar1,L"ETickingGroup");
  }
  return Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton;
}

// StaticEnum<enum_ETransitionType> @ 147276310

UEnum * __cdecl StaticEnum<enum_ETransitionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransitionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETransitionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionType,(UObject *)pUVar1,L"ETransitionType"
                      );
  }
  return Z_Registration_Info_UEnum_ETransitionType.OuterSingleton;
}

// StaticEnum<enum_ETravelType> @ 147276350

UEnum * __cdecl StaticEnum<enum_ETravelType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETravelType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETravelType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETravelType,(UObject *)pUVar1,L"ETravelType");
  }
  return Z_Registration_Info_UEnum_ETravelType.OuterSingleton;
}

// StaticEnum<enum_EViewModeIndex> @ 147276390

UEnum * __cdecl StaticEnum<enum_EViewModeIndex>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EViewModeIndex,(UObject *)pUVar1,L"EViewModeIndex");
  }
  return Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton;
}

// StaticEnum<enum_EDemoPlayFailure::Type> @ 1472763d0

UEnum * __cdecl StaticEnum<enum_EDemoPlayFailure::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDemoPlayFailure,(UObject *)pUVar1,
                       L"EDemoPlayFailure");
  }
  return Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton;
}

// StaticEnum<enum_ENetworkLagState::Type> @ 147276410

UEnum * __cdecl StaticEnum<enum_ENetworkLagState::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkLagState,(UObject *)pUVar1,
                       L"ENetworkLagState");
  }
  return Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton;
}

// StaticEnum<enum_ETravelFailure::Type> @ 147276450

UEnum * __cdecl StaticEnum<enum_ETravelFailure::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETravelFailure,(UObject *)pUVar1,L"ETravelFailure");
  }
  return Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{816}' @ 147278c78

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AEmitterCameraLensEffectBase::`vector deleting
   destructor'`adjustor{816}' (unsigned int) __ptr64 */

void * __thiscall
AEmitterCameraLensEffectBase::_vector_deleting_destructor__adjustor_816__
          (AEmitterCameraLensEffectBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AEmitterCameraLensEffectBase *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147278c8c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UEngine::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall UEngine::_vector_deleting_destructor__adjustor_40__(UEngine *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UEngine *)&this[-1].EngineSubsystemCollection.field_0xc0,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147278ca0

void * __thiscall
FObjectSubsystemCollection<UEngineSubsystem>::_scalar_deleting_destructor_
          (FObjectSubsystemCollection<UEngineSubsystem> *this,uint param_1)

{
  FSubsystemCollectionBase::~FSubsystemCollectionBase((FSubsystemCollectionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147278ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
AEmitterCameraLensEffectBase::_scalar_deleting_destructor_
          (AEmitterCameraLensEffectBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AEmitter__;
  this->_padding_ = (longlong)&_vftable__for__ICameraLensEffectInterface__;
  pFVar1 = (this->EmittersToTreatAsSame).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICameraLensEffectInterface__6B_;
  AEmitter::~AEmitter((AEmitter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147278d70

void * __thiscall
ICameraLensEffectInterface::_scalar_deleting_destructor_
          (ICameraLensEffectInterface *this,uint param_1)

{
  *this = (ICameraLensEffectInterface)&___7ICameraLensEffectInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147278db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall UEngine::_scalar_deleting_destructor_(UEngine *this,uint param_1)

{
  ~UEngine(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147278e10

void * __thiscall
UEngineBaseTypes::_scalar_deleting_destructor_(UEngineBaseTypes *this,uint param_1)

{
  *(undefined ***)this = &___7UEngineBaseTypes__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147278e70

void * __thiscall UViewModeUtils::_scalar_deleting_destructor_(UViewModeUtils *this,uint param_1)

{
  *(undefined ***)this = &___7UViewModeUtils__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeEmitterCameraLensEffectBase @ 1472790d0

void __cdecl EmptyLinkFunctionForGeneratedCodeEmitterCameraLensEffectBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEngine @ 1472790e0

void __cdecl EmptyLinkFunctionForGeneratedCodeEngine(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEngineBaseTypes @ 1472790f0

void __cdecl EmptyLinkFunctionForGeneratedCodeEngineBaseTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEngine_init @ 147279100

void __cdecl EmptyLinkFunctionForGeneratedCodeEngine_init(void)

{
  return;
}

// Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister @ 1472796b0

UClass * __cdecl Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EmitterCameraLensEffectBase",
               &Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton,
               AEmitterCameraLensEffectBase::StaticRegisterNativesAEmitterCameraLensEffectBase,0x3d0
               ,0x10,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AEmitterCameraLensEffectBase>,
               InternalVTableHelperCtorCaller<AEmitterCameraLensEffectBase>,local_res8,
               AEmitter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.InnerSingleton;
}

// Z_Construct_UClass_UEngineBaseTypes_NoRegister @ 147279770

UClass * __cdecl Z_Construct_UClass_UEngineBaseTypes_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineBaseTypes",
               &Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton,
               UEngineBaseTypes::StaticRegisterNativesUEngineBaseTypes,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEngineBaseTypes>,
               InternalVTableHelperCtorCaller<UEngineBaseTypes>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineBaseTypes.InnerSingleton;
}

// Z_Construct_UClass_UEngine_NoRegister @ 147279780

UClass * __cdecl Z_Construct_UClass_UEngine_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UEngine.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UEngine::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Engine",&Z_Registration_Info_UClass_UEngine.InnerSingleton,
               UEngine::StaticRegisterNativesUEngine,0x1350,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngine>,
               InternalVTableHelperCtorCaller<UEngine>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngine.InnerSingleton;
}

// Z_Construct_UClass_UViewModeUtils_NoRegister @ 147279790

UClass * __cdecl Z_Construct_UClass_UViewModeUtils_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ViewModeUtils",
               &Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton,
               UViewModeUtils::StaticRegisterNativesUViewModeUtils,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UViewModeUtils>,
               InternalVTableHelperCtorCaller<UViewModeUtils>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewModeUtils.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EDemoPlayFailure @ 1472797a0

UEnum * __cdecl Z_Construct_UEnum_Engine_EDemoPlayFailure(void)

{
  if (Z_Registration_Info_UEnum_EDemoPlayFailure.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDemoPlayFailure.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDemoPlayFailure.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EInputEvent @ 1472797e0

UEnum * __cdecl Z_Construct_UEnum_Engine_EInputEvent(void)

{
  if (Z_Registration_Info_UEnum_EInputEvent.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputEvent.InnerSingleton,
               &Z_Construct_UEnum_Engine_EInputEvent_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputEvent.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMouseCaptureMode @ 147279820

UEnum * __cdecl Z_Construct_UEnum_Engine_EMouseCaptureMode(void)

{
  if (Z_Registration_Info_UEnum_EMouseCaptureMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMouseCaptureMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMouseCaptureMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMouseLockMode @ 147279860

UEnum * __cdecl Z_Construct_UEnum_Engine_EMouseLockMode(void)

{
  if (Z_Registration_Info_UEnum_EMouseLockMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMouseLockMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMouseLockMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMouseLockMode.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENetworkLagState @ 1472798a0

UEnum * __cdecl Z_Construct_UEnum_Engine_ENetworkLagState(void)

{
  if (Z_Registration_Info_UEnum_ENetworkLagState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENetworkLagState.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENetworkLagState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENetworkLagState.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETravelFailure @ 1472798e0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETravelFailure(void)

{
  if (Z_Registration_Info_UEnum_ETravelFailure.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETravelFailure.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETravelFailure_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETravelFailure.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETravelType @ 147279920

UEnum * __cdecl Z_Construct_UEnum_Engine_ETravelType(void)

{
  if (Z_Registration_Info_UEnum_ETravelType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETravelType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETravelType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETravelType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EViewModeIndex @ 147279960

UEnum * __cdecl Z_Construct_UEnum_Engine_EViewModeIndex(void)

{
  if (Z_Registration_Info_UEnum_EViewModeIndex.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EViewModeIndex.InnerSingleton,
               &Z_Construct_UEnum_Engine_EViewModeIndex_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EViewModeIndex.InnerSingleton;
}

// Z_Construct_UScriptStruct_FActorComponentTickFunction @ 1472799a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorComponentTickFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorComponentTickFunction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorComponentTickFunction.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorComponentTickFunction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorComponentTickFunction.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FActorTickFunction @ 147279a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorTickFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorTickFunction.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorTickFunction.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorTickFunction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorTickFunction.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorTickFunction.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FExposureSettings @ 147279aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FExposureSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FExposureSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FExposureSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FExposureSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FExposureSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FExposureSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FScreenMessageString @ 147279b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FScreenMessageString(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FScreenMessageString.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FScreenMessageString.InnerSingleton,
               &Z_Construct_UScriptStruct_FScreenMessageString_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FScreenMessageString.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FScreenMessageString.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTickPrerequisite @ 147279ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTickPrerequisite(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTickPrerequisite.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTickPrerequisite.InnerSingleton,
               &Z_Construct_UScriptStruct_FTickPrerequisite_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTickPrerequisite.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTickPrerequisite.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FWorldContext @ 147279c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldContext.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

