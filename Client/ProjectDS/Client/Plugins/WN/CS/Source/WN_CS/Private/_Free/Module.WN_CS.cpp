// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 154

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 1411c9370

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'CS'' @ 1411c9390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CS__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&CS,L"CS",Log,All);
  atexit(_dynamic_atexit_destructor_for__CS__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWN_CS'' @ 1411c93d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantWN_CS__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WN_CS";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WN_CS",5);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWN_CS_Module>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1411c9420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'WN_CVarUseAnimBudget'' @ 1411c94b0

void __cdecl _dynamic_initializer_for__WN_CVarUseAnimBudget__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&WN_CVarUseAnimBudget,L"WN.UseAnimBudget",local_res8,
             L"Use animation budget allocator. (default: 1)\nRequires the AnimationBudgetAllocator plugin to be enabled\nRequires a.Budget.Enabled to be 1   0: Don\'t use.\n   1: Use.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__WN_CVarUseAnimBudget__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterCore_h__Script_WN_CS_2487478778'' @ 1411c9500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterCore_h__Script_WN_CS_2487478778__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_CS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterCore_h__Script_WN_CS_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterCore_h__Script_WN_CS_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterDescs_h__Script_WN_CS_3075934242'' @ 1411c9550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterDescs_h__Script_WN_CS_3075934242__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_CS",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterDescs_h__Script_WN_CS_Statics
             ::ScriptStructInfo,0xe,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterDescs_h__Script_WN_CS_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterWorkspace_h__Script_WN_CS_2485474718'' @ 1411c95a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterWorkspace_h__Script_WN_CS_2485474718__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_CS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterWorkspace_h__Script_WN_CS_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_CharacterWorkspace_h__Script_WN_CS_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_Subsystem_h__Script_WN_CS_2911441012'' @ 1411c95f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_Subsystem_h__Script_WN_CS_2911441012__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_CS",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_CS_Source_WN_CS_Public_WN_CS_Subsystem_h__Script_WN_CS_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WN_CS'' @ 1411c9630

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WN_CS__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x84f650b2;
  local_res8[0].DeclarationsHash = 0x27240746;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WN_CS,L"/Script/WN_CS",
             &Z_Registration_Info_UPackage__Script_WN_CS,local_res8);
  return;
}

// Z_Construct_UClass_UWN_CS_CharacterCore @ 14a69b360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_CS_CharacterCore(void)

{
  if (Z_Registration_Info_UClass_UWN_CS_CharacterCore.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_CS_CharacterCore.OuterSingleton,
               &Z_Construct_UClass_UWN_CS_CharacterCore_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterCore.OuterSingleton;
}

// Z_Construct_UClass_UWN_CS_CharacterPart @ 14a69b3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_CS_CharacterPart(void)

{
  if (Z_Registration_Info_UClass_UWN_CS_CharacterPart.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_CS_CharacterPart.OuterSingleton,
               &Z_Construct_UClass_UWN_CS_CharacterPart_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterPart.OuterSingleton;
}

// Z_Construct_UClass_UWN_CS_CharacterSoul @ 14a69b3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_CS_CharacterSoul(void)

{
  if (Z_Registration_Info_UClass_UWN_CS_CharacterSoul.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_CS_CharacterSoul.OuterSingleton,
               &Z_Construct_UClass_UWN_CS_CharacterSoul_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterSoul.OuterSingleton;
}

// Z_Construct_UEnum_WN_CS_EWN_CS_AnimationType @ 14a69b420

UEnum * __cdecl Z_Construct_UEnum_WN_CS_EWN_CS_AnimationType(void)

{
  if (Z_Registration_Info_UEnum_EWN_CS_AnimationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_CS_AnimationType.InnerSingleton,
               &Z_Construct_UEnum_WN_CS_EWN_CS_AnimationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_CS_AnimationType.InnerSingleton;
}

// Z_Construct_UEnum_WN_CS_EWN_CS_CharacterSlotName @ 14a69b460

UEnum * __cdecl Z_Construct_UEnum_WN_CS_EWN_CS_CharacterSlotName(void)

{
  if (Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.InnerSingleton,
               &Z_Construct_UEnum_WN_CS_EWN_CS_CharacterSlotName_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.InnerSingleton;
}

// Z_Construct_UEnum_WN_CS_EWN_CS_CharacterWorkspaceVersion @ 14a69b4a0

UEnum * __cdecl Z_Construct_UEnum_WN_CS_EWN_CS_CharacterWorkspaceVersion(void)

{
  if (Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.InnerSingleton,
               &Z_Construct_UEnum_WN_CS_EWN_CS_CharacterWorkspaceVersion_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.InnerSingleton;
}

// Z_Construct_UEnum_WN_CS_EWN_CS_ResourceType @ 14a69b4e0

UEnum * __cdecl Z_Construct_UEnum_WN_CS_EWN_CS_ResourceType(void)

{
  if (Z_Registration_Info_UEnum_EWN_CS_ResourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_CS_ResourceType.InnerSingleton,
               &Z_Construct_UEnum_WN_CS_EWN_CS_ResourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_CS_ResourceType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWN_CS_CharacterNonePartInfo @ 14a69b520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterNonePartInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterNonePartInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterNonePartInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterNonePartInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterNonePartInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterNonePartInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_CharacterPartInfo @ 14a69b5a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPartInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterPartInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotMaterialDesc @ 14a69b620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotMaterialDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotMaterialDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotMaterialDesc.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotMaterialDesc_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotMaterialDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotMaterialDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_CharacterSoulInfo @ 14a69b6a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterSoulInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterSoulInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterSoulInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterSoulInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterSoulInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterSoulInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_ColliderContainer @ 14a69b720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_ColliderContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_ColliderContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_ColliderContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_ColliderContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_ColliderContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_ColliderContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_HitSphereContainer @ 14a69b7a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_HitSphereContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_HitSphereContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_HitSphereInfo @ 14a69b820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_HitSphereInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereInfo.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_HitSphereInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereInfo.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_LightInfo @ 14a69b8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_LightInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_LightInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_LightInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_LightInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_LightInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_LightInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_PartColliderInfo @ 14a69b920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_PartColliderInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_PartColliderInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_PartColliderInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_PartColliderInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_PartColliderInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_PartColliderInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleContainer @ 14a69b9a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_ServerHitCapsuleContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_ServerHitCapsuleContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_ServerHitCapsuleContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_ServerHitCapsuleContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleInfo @ 14a69ba20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_ServerHitCapsuleInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_ServerHitCapsuleInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_ServerHitCapsuleInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_ServerHitCapsuleInfo.InnerSingleton;
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

// NewProp_bIsHidden_SetBit @ 14a69baa0

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterSoulInfo_Statics::NewProp_bIsHidden_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 14a69bab0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterSoulInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterSoulInfo,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterSoulInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterSoulInfo>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterSoulInfo>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterSoulInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsTickable_SetBit @ 14a69bc00

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterPartInfo_Statics::NewProp_bIsTickable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsHidden_SetBit @ 14a69bc10

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterPartInfo_Statics::NewProp_bIsHidden_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bUseLeaderPose_SetBit @ 14a69bc20

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterPartInfo_Statics::NewProp_bUseLeaderPose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewStructOps @ 14a69bc30

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPartInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterPartInfo,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterPartInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPartInfo>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPartInfo>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterPartInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69bcb0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterNonePartInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterNonePartInfo,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterNonePartInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterNonePartInfo>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterNonePartInfo>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterNonePartInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69be10

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_HitSphereContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_HitSphereContainer,&UE::CoreUObject::Private::Construct<FWN_CS_HitSphereContainer>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_HitSphereContainer>,&UE::CoreUObject::Private::Destruct<FWN_CS_HitSphereContainer>,&UE::CoreUObject::Private::Copy<FWN_CS_HitSphereContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_WN_CS @ 14a69be50

UPackage * __cdecl Z_Construct_UPackage__Script_WN_CS(void)

{
  if (Z_Registration_Info_UPackage__Script_WN_CS.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WN_CS.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_WN_CS.OuterSingleton;
}

// NewStructOps @ 14a69be90

void * __cdecl
Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_ServerHitCapsuleContainer,&UE::CoreUObject::Private::Construct<FWN_CS_ServerHitCapsuleContainer>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_ServerHitCapsuleContainer>,&UE::CoreUObject::Private::Destruct<FWN_CS_ServerHitCapsuleContainer>,&UE::CoreUObject::Private::Copy<FWN_CS_ServerHitCapsuleContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69bed0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_ColliderContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_ColliderContainer,&UE::CoreUObject::Private::Construct<FWN_CS_ColliderContainer>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_ColliderContainer>,&UE::CoreUObject::Private::Destruct<FWN_CS_ColliderContainer>,&UE::CoreUObject::Private::Copy<FWN_CS_ColliderContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69bfc0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_LightContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_LightContainer,&UE::CoreUObject::Private::Construct<FWN_CS_LightContainer>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_LightContainer>,&UE::CoreUObject::Private::Destruct<FWN_CS_LightContainer>,&UE::CoreUObject::Private::Copy<FWN_CS_LightContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_WN_CS_EWN_Parts_ColliderType @ 14a69c140

UEnum * __cdecl Z_Construct_UEnum_WN_CS_EWN_Parts_ColliderType(void)

{
  if (Z_Registration_Info_UEnum_EWN_Parts_ColliderType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_Parts_ColliderType.InnerSingleton,
               &Z_Construct_UEnum_WN_CS_EWN_Parts_ColliderType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_Parts_ColliderType.InnerSingleton;
}

// Z_Construct_UEnum_WN_CS_EWN_Parts_LightType @ 14a69c180

UEnum * __cdecl Z_Construct_UEnum_WN_CS_EWN_Parts_LightType(void)

{
  if (Z_Registration_Info_UEnum_EWN_Parts_LightType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_Parts_LightType.InnerSingleton,
               &Z_Construct_UEnum_WN_CS_EWN_Parts_LightType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_Parts_LightType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWN_CS_CharacterDesc @ 14a69c1c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterDesc.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterDesc.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_CharacterLightDesc @ 14a69c240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterLightDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterLightDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterLightDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterLightDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterLightDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterLightDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_CharacterPartDesc @ 14a69c2c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPartDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterPartDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPartDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_CharacterPresetDesc @ 14a69c340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPresetDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterPresetDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotDesc @ 14a69c3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_FixedBoundBoneSlotParam @ 14a69c440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_FixedBoundBoneSlotParam(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_FixedBoundBoneSlotParam.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_FixedBoundBoneSlotParam.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_FixedBoundBoneSlotParam_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_FixedBoundBoneSlotParam.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_FixedBoundBoneSlotParam.InnerSingleton;
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

// EWN_CS_CharacterSlotName_StaticEnum @ 14a69c540

UEnum * __cdecl EWN_CS_CharacterSlotName_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_CS_CharacterSlotName,(UObject *)pUVar1,
                       L"EWN_CS_CharacterSlotName");
  }
  return Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.OuterSingleton;
}

// EWN_CS_ResourceType_StaticEnum @ 14a69c6c0

UEnum * __cdecl EWN_CS_ResourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_CS_ResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_CS_ResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_CS_ResourceType,(UObject *)pUVar1,
                       L"EWN_CS_ResourceType");
  }
  return Z_Registration_Info_UEnum_EWN_CS_ResourceType.OuterSingleton;
}

// NewProp_bUseSoulLeaderPose_SetBit @ 14a69c790

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_PartSKMHashingData_Statics::NewProp_bUseSoulLeaderPose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 14a69c7a0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_PartSKMHashingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_PartSKMHashingData,&UE::CoreUObject::Private::Construct<FWN_CS_PartSKMHashingData>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_PartSKMHashingData>,&UE::CoreUObject::Private::Destruct<FWN_CS_PartSKMHashingData>,&UE::CoreUObject::Private::Copy<FWN_CS_PartSKMHashingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69c820

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_SkeletonHashingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_SkeletonHashingData,&UE::CoreUObject::Private::Construct<FWN_CS_SkeletonHashingData>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_SkeletonHashingData>,&UE::CoreUObject::Private::Destruct<FWN_CS_SkeletonHashingData>,&UE::CoreUObject::Private::Copy<FWN_CS_SkeletonHashingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69c860

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_AnimHashingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_AnimHashingData,&UE::CoreUObject::Private::Construct<FWN_CS_AnimHashingData>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_AnimHashingData>,&UE::CoreUObject::Private::Destruct<FWN_CS_AnimHashingData>,&UE::CoreUObject::Private::Copy<FWN_CS_AnimHashingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EWN_CS_AnimationType_StaticEnum @ 14a69c930

UEnum * __cdecl EWN_CS_AnimationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_CS_AnimationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_CS_AnimationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_CS_AnimationType,(UObject *)pUVar1,
                       L"EWN_CS_AnimationType");
  }
  return Z_Registration_Info_UEnum_EWN_CS_AnimationType.OuterSingleton;
}

// EWN_Parts_LightType_StaticEnum @ 14a69c970

UEnum * __cdecl EWN_Parts_LightType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_Parts_LightType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_Parts_LightType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_Parts_LightType,(UObject *)pUVar1,
                       L"EWN_Parts_LightType");
  }
  return Z_Registration_Info_UEnum_EWN_Parts_LightType.OuterSingleton;
}

// NewStructOps @ 14a69c9b0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_FixedBoundBoneSlotParam_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_FixedBoundBoneSlotParam,&UE::CoreUObject::Private::Construct<FWN_CS_FixedBoundBoneSlotParam>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_FixedBoundBoneSlotParam>,&UE::CoreUObject::Private::Destruct<FWN_CS_FixedBoundBoneSlotParam>,&UE::CoreUObject::Private::Copy<FWN_CS_FixedBoundBoneSlotParam>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69c9f0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_LightInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_LightInfo,&UE::CoreUObject::Private::Construct<FWN_CS_LightInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_LightInfo>,&UE::CoreUObject::Private::Destruct<FWN_CS_LightInfo>,&UE::CoreUObject::Private::Copy<FWN_CS_LightInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69cb00

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_HitSphereInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_HitSphereInfo,&UE::CoreUObject::Private::Construct<FWN_CS_HitSphereInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_HitSphereInfo>,&UE::CoreUObject::Private::Destruct<FWN_CS_HitSphereInfo>,&UE::CoreUObject::Private::Copy<FWN_CS_HitSphereInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsActivated_SetBit @ 14a69ccd0

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleInfo_Statics::NewProp_bIsActivated_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14a69cce0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_ServerHitCapsuleInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_ServerHitCapsuleInfo,&UE::CoreUObject::Private::Construct<FWN_CS_ServerHitCapsuleInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_ServerHitCapsuleInfo>,&UE::CoreUObject::Private::Destruct<FWN_CS_ServerHitCapsuleInfo>,&UE::CoreUObject::Private::Copy<FWN_CS_ServerHitCapsuleInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_CS_Subsystem @ 14a69cd20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_CS_Subsystem(void)

{
  if (Z_Registration_Info_UClass_UWN_CS_Subsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_CS_Subsystem.OuterSingleton,
               &Z_Construct_UClass_UWN_CS_Subsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_CS_Subsystem.OuterSingleton;
}

// EWN_Parts_ColliderType_StaticEnum @ 14a69cd60

UEnum * __cdecl EWN_Parts_ColliderType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_Parts_ColliderType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_Parts_ColliderType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_Parts_ColliderType,(UObject *)pUVar1,
                       L"EWN_Parts_ColliderType");
  }
  return Z_Registration_Info_UEnum_EWN_Parts_ColliderType.OuterSingleton;
}

// NewStructOps @ 14a69cda0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_PartColliderInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_PartColliderInfo,&UE::CoreUObject::Private::Construct<FWN_CS_PartColliderInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_PartColliderInfo>,&UE::CoreUObject::Private::Destruct<FWN_CS_PartColliderInfo>,&UE::CoreUObject::Private::Copy<FWN_CS_PartColliderInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsTickable_SetBit @ 14a69cee0

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterPartDesc_Statics::NewProp_bIsTickable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIsHidden_SetBit @ 14a69cef0

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterPartDesc_Statics::NewProp_bIsHidden_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bUseLeaderPose_SetBit @ 14a69cf00

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterPartDesc_Statics::NewProp_bUseLeaderPose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewStructOps @ 14a69cfe0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPartDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterPartDesc,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterPartDesc>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPartDesc>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPartDesc>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterPartDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69d0a0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterLightDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterLightDesc,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterLightDesc>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterLightDesc>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterLightDesc>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterLightDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69d0e0

void * __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotMaterialDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterPresetSlotMaterialDesc,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterPresetSlotMaterialDesc>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPresetSlotMaterialDesc>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPresetSlotMaterialDesc>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterPresetSlotMaterialDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69d230

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterPresetSlotDesc,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterPresetSlotDesc>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPresetSlotDesc>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPresetSlotDesc>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterPresetSlotDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a69d330

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterPresetDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterPresetDesc,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterPresetDesc>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPresetDesc>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPresetDesc>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterPresetDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsSoulVisible_SetBit @ 14a69d690

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterDesc_Statics::NewProp_bIsSoulVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bUseISKM_SetBit @ 14a69d6a0

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterDesc_Statics::NewProp_bUseISKM_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bIsHidden_SetBit @ 14a69d6b0

void __cdecl
Z_Construct_UScriptStruct_FWN_CS_CharacterDesc_Statics::NewProp_bIsHidden_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewStructOps @ 14a69d6c0

void * __cdecl Z_Construct_UScriptStruct_FWN_CS_CharacterDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_CS_CharacterDesc,&UE::CoreUObject::Private::Construct<FWN_CS_CharacterDesc>,&UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterDesc>,&UE::CoreUObject::Private::Destruct<FWN_CS_CharacterDesc>,&UE::CoreUObject::Private::Copy<FWN_CS_CharacterDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_CS_CharacterSoul_NoRegister @ 14a69d700

UClass * __cdecl Z_Construct_UClass_UWN_CS_CharacterSoul_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterSoul",
               &Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton,
               UWN_CS_CharacterSoul::StaticRegisterNativesUWN_CS_CharacterSoul,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWN_CS_CharacterSoul>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterSoul>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterSoul.InnerSingleton;
}

// Z_Construct_UClass_UWN_CS_CharacterPart_NoRegister @ 14a69d7b0

UClass * __cdecl Z_Construct_UClass_UWN_CS_CharacterPart_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterPart",
               &Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton,
               UWN_CS_CharacterPart::StaticRegisterNativesUWN_CS_CharacterPart,0x130,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWN_CS_CharacterPart>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterPart>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterPart.InnerSingleton;
}

// Z_Construct_UClass_UWN_CS_CharacterWorkspace @ 14a69da30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_CS_CharacterWorkspace(void)

{
  if (Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.OuterSingleton,
               &Z_Construct_UClass_UWN_CS_CharacterWorkspace_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.OuterSingleton;
}

// Z_Construct_UClass_UWN_CS_OutGame_CharacterWorkspace @ 14a69da70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_CS_OutGame_CharacterWorkspace(void)

{
  if (Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.OuterSingleton,
               &Z_Construct_UClass_UWN_CS_OutGame_CharacterWorkspace_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.OuterSingleton;
}

// EWN_CS_CharacterWorkspaceVersion_StaticEnum @ 14a69dab0

UEnum * __cdecl EWN_CS_CharacterWorkspaceVersion_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_CS_CharacterWorkspaceVersion,(UObject *)pUVar1,
                       L"EWN_CS_CharacterWorkspaceVersion");
  }
  return Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a69e330

void * __thiscall FWN_CS_Module::_scalar_deleting_destructor_(FWN_CS_Module *this,uint param_1)

{
  *this = (FWN_CS_Module)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ConstructItems<TObjectPtr<UBoxComponent>,TObjectPtr<UBoxComponent>,int> @ 14a69ea10

void __cdecl
ConstructItems<TObjectPtr<UBoxComponent>,TObjectPtr<UBoxComponent>,int>
          (void *param_1,TObjectPtr<UBoxComponent> *param_2,int param_3)

{
  TObjectPtr<UBoxComponent> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UBoxComponent>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UBoxComponent>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UBoxComponent *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UBoxComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UCapsuleComponent>,TObjectPtr<UCapsuleComponent>,int> @ 14a69ea70

void __cdecl
ConstructItems<TObjectPtr<UCapsuleComponent>,TObjectPtr<UCapsuleComponent>,int>
          (void *param_1,TObjectPtr<UCapsuleComponent> *param_2,int param_3)

{
  TObjectPtr<UCapsuleComponent> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UCapsuleComponent>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UCapsuleComponent>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UCapsuleComponent *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UCapsuleComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<ULightComponent>,TObjectPtr<ULightComponent>,int> @ 14a69ead0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
ConstructItems<TObjectPtr<ULightComponent>,TObjectPtr<ULightComponent>,int>
          (void *param_1,TObjectPtr<ULightComponent> *param_2,int param_3)

{
  TObjectPtr<ULightComponent> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<ULightComponent>_u_0)param_2->field0_0x0;
      ((TObjectPtr<ULightComponent>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (ULightComponent *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (ULightComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<USphereComponent>,TObjectPtr<USphereComponent>,int> @ 14a69eb30

void __cdecl
ConstructItems<TObjectPtr<USphereComponent>,TObjectPtr<USphereComponent>,int>
          (void *param_1,TObjectPtr<USphereComponent> *param_2,int param_3)

{
  TObjectPtr<USphereComponent> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<USphereComponent>_u_0)param_2->field0_0x0;
      ((TObjectPtr<USphereComponent>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (USphereComponent *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (USphereComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWN_CS_CharacterPartDesc,FWN_CS_CharacterPartDesc,int> @ 14a69eb90

/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __cdecl
ConstructItems<FWN_CS_CharacterPartDesc,FWN_CS_CharacterPartDesc,int>
          (void *param_1,FWN_CS_CharacterPartDesc *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x70);
    piVar6 = &(param_2->ServerHitCapsuleInfoArray).ArrayNum;
    do {
      *(int *)((longlong)piVar6 + (longlong)param_1 + (-0x70 - (longlong)param_2)) = piVar6[-0x1c];
      *(undefined8 *)(piVar5 + -0x1b) = *(undefined8 *)(piVar6 + -0x1b);
      piVar5[-0x19] = piVar6[-0x19];
      *(undefined8 *)(piVar5 + -0x18) = *(undefined8 *)(piVar6 + -0x18);
      *(char *)(piVar5 + -0x16) = (char)piVar6[-0x16];
      *(undefined1 *)((longlong)piVar5 + -0x57) = *(undefined1 *)((longlong)piVar6 + -0x57);
      piVar5[-0x15] = piVar6[-0x15];
      uVar4 = *(undefined8 *)(piVar6 + -0x12);
      *(undefined8 *)(piVar5 + -0x14) = *(undefined8 *)(piVar6 + -0x14);
      *(undefined8 *)(piVar5 + -0x12) = uVar4;
      FUtf8String::FUtf8String((FUtf8String *)(piVar5 + -0x10),(FUtf8String *)(piVar6 + -0x10));
      pFVar1 = (ForAnyElementType *)(piVar5 + -6);
      *(char *)(piVar5 + -0xc) = (char)piVar6[-0xc];
      *(undefined8 *)(piVar5 + -0xb) = *(undefined8 *)(piVar6 + -0xb);
      *(undefined8 *)(piVar5 + -9) = *(undefined8 *)(piVar6 + -9);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar6[-4];
      pvVar3 = *(void **)(piVar6 + -6);
      piVar5[-4] = iVar2;
      if (iVar2 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar2,0,pFVar1,iVar2,piVar5 + -3);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 * 0x50);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar2 = *piVar6;
      _Src = (((TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
             AllocatorInstance).Data;
      *piVar5 = iVar2;
      if (iVar2 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar2,0,(ForAnyElementType *)(piVar5 + -2),iVar2,piVar5 + 1);
        memcpy(((ForAnyElementType *)(piVar5 + -2))->Data,_Src,(longlong)iVar2 * 0x50);
      }
      piVar5[2] = 0;
      piVar5[3] = 0;
      iVar2 = piVar6[4];
      pvVar3 = *(void **)(piVar6 + 2);
      piVar5[4] = iVar2;
      if (iVar2 == 0) {
        piVar5[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,iVar2,0,(ForAnyElementType *)(piVar5 + 2),iVar2,piVar5 + 5);
        memcpy(((ForAnyElementType *)(piVar5 + 2))->Data,pvVar3,(longlong)iVar2 * 0x60);
      }
      piVar5 = piVar5 + 0x22;
      piVar6 = piVar6 + 0x22;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWN_CS_CharacterPresetDesc,FWN_CS_CharacterPresetDesc,int> @ 14a69ed80

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __cdecl
ConstructItems<FWN_CS_CharacterPresetDesc,FWN_CS_CharacterPresetDesc,int>
          (void *param_1,FWN_CS_CharacterPresetDesc *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  FWN_CS_CharacterPresetSlotDesc *pFVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0x70);
    piVar8 = &(param_2->CharacterPresetSlotDescs).ArrayNum;
    do {
      *(int *)((longlong)piVar8 + (longlong)param_1 + (-0x70 - (longlong)param_2)) = piVar8[-0x1c];
      *(undefined8 *)(piVar7 + -0x1b) = *(undefined8 *)(piVar8 + -0x1b);
      piVar7[-0x19] = piVar8[-0x19];
      *(undefined8 *)(piVar7 + -0x18) = *(undefined8 *)(piVar8 + -0x18);
      uVar6 = *(undefined8 *)(piVar8 + -0x14);
      *(undefined8 *)(piVar7 + -0x16) = *(undefined8 *)(piVar8 + -0x16);
      *(undefined8 *)(piVar7 + -0x14) = uVar6;
      FUtf8String::FUtf8String((FUtf8String *)(piVar7 + -0x12),(FUtf8String *)(piVar8 + -0x12));
      uVar6 = *(undefined8 *)(piVar8 + -0xc);
      pFVar1 = (ForAnyElementType *)(piVar7 + -6);
      *(undefined8 *)(piVar7 + -0xe) = *(undefined8 *)(piVar8 + -0xe);
      *(undefined8 *)(piVar7 + -0xc) = uVar6;
      piVar7[-10] = piVar8[-10];
      *(undefined8 *)(piVar7 + -9) = *(undefined8 *)(piVar8 + -9);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar8[-4];
      pvVar4 = *(void **)(piVar8 + -6);
      piVar7[-4] = iVar3;
      if (iVar3 == 0) {
        piVar7[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,iVar3,0,pFVar1,iVar3,piVar7 + -3);
        memcpy(pFVar1->Data,pvVar4,(longlong)iVar3 * 0x68);
      }
      piVar7[-2] = 0;
      piVar7[-1] = 0;
      iVar3 = *piVar8;
      pFVar5 = (FWN_CS_CharacterPresetSlotDesc *)
               (((TArray<FWN_CS_CharacterPresetSlotDesc,TSizedDefaultAllocator<32>_> *)(piVar8 + -2)
                )->AllocatorInstance).Data;
      *piVar7 = iVar3;
      if (iVar3 == 0) {
        piVar7[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,0,(ForAnyElementType *)(piVar7 + -2),iVar3,piVar7 + 1);
        ConstructItems<FWN_CS_CharacterPresetSlotDesc,FWN_CS_CharacterPresetSlotDesc,int>
                  (((ForAnyElementType *)(piVar7 + -2))->Data,pFVar5,iVar3);
      }
      piVar7[2] = 0;
      piVar7[3] = 0;
      iVar3 = piVar8[4];
      pvVar4 = *(void **)(piVar8 + 2);
      piVar7[4] = iVar3;
      if (iVar3 == 0) {
        piVar7[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,0,(ForAnyElementType *)(piVar7 + 2),iVar3,piVar7 + 5);
        memcpy(((ForAnyElementType *)(piVar7 + 2))->Data,pvVar4,(longlong)iVar3 << 4);
      }
      piVar2 = piVar8 + 6;
      piVar8 = piVar8 + 0x24;
      piVar7[6] = *piVar2;
      piVar7 = piVar7 + 0x24;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWN_CS_CharacterPresetSlotDesc,FWN_CS_CharacterPresetSlotDesc,int> @ 14a69ef50

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __cdecl
ConstructItems<FWN_CS_CharacterPresetSlotDesc,FWN_CS_CharacterPresetSlotDesc,int>
          (void *param_1,FWN_CS_CharacterPresetSlotDesc *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  EWN_CS_CharacterSlotName *pEVar2;
  undefined4 uVar3;
  FWN_CS_CharacterPresetSlotMaterialDesc *pFVar4;
  EWN_CS_CharacterSlotName *pEVar5;
  EWN_CS_CharacterSlotName *pEVar6;
  
  if (param_3 != 0) {
    pEVar5 = &param_2->SlotName;
    pEVar6 = (EWN_CS_CharacterSlotName *)((longlong)param_1 + 4);
    do {
      pFVar1 = (ForAnyElementType *)(pEVar6 + 0x14);
      *(int *)(pEVar5 + (longlong)param_1 + (-4 - (longlong)param_2)) =
           ((FWN_CS_CharacterPresetSlotDesc *)(pEVar5 + -4))->ID;
      *pEVar6 = *pEVar5;
      *(undefined4 *)(pEVar6 + 4) = *(undefined4 *)(pEVar5 + 4);
      *(undefined4 *)(pEVar6 + 8) = *(undefined4 *)(pEVar5 + 8);
      *(undefined4 *)(pEVar6 + 0xc) = *(undefined4 *)(pEVar5 + 0xc);
      *(float *)(pEVar6 + 0x10) = *(float *)(pEVar5 + 0x10);
      pEVar2 = pEVar6 + 0x20;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      uVar3 = *(undefined4 *)(pEVar5 + 0x1c);
      pFVar4 = (FWN_CS_CharacterPresetSlotMaterialDesc *)
               (((TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
                (pEVar5 + 0x14))->AllocatorInstance).Data;
      *(undefined4 *)(pEVar6 + 0x1c) = uVar3;
      if (uVar3 == FullBody) {
        pEVar2[0] = FullBody;
        pEVar2[1] = FullBody;
        pEVar2[2] = FullBody;
        pEVar2[3] = FullBody;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa8,8,uVar3,0,pFVar1,uVar3,(int *)pEVar2);
        ConstructItems<FWN_CS_CharacterPresetSlotMaterialDesc,FWN_CS_CharacterPresetSlotMaterialDesc,int>
                  (pFVar1->Data,pFVar4,uVar3);
      }
      pEVar6 = pEVar6 + 0x28;
      pEVar5 = pEVar5 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWN_CS_CharacterPresetSlotMaterialDesc,FWN_CS_CharacterPresetSlotMaterialDesc,int> @ 14a69f050

void __cdecl
ConstructItems<FWN_CS_CharacterPresetSlotMaterialDesc,FWN_CS_CharacterPresetSlotMaterialDesc,int>
          (void *param_1,FWN_CS_CharacterPresetSlotMaterialDesc *param_2,int param_3)

{
  longlong lVar1;
  TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
  *pTVar2;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 0x14;
    pTVar2 = (TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
              *)&param_2->VectorParameters;
    do {
      *(undefined8 *)((longlong)pTVar2 + (longlong)param_1 + (-0x58 - (longlong)param_2)) =
           *(undefined8 *)&pTVar2[-2].HashSize;
      *(undefined8 *)
       &((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          *)(lVar1 + -0xc))->Elements = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      operator=((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                 *)(lVar1 + -0xc),
                (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                 *)(pTVar2 + -1));
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined4 *)(lVar1 + 0x6c) = 0;
      *(undefined4 *)(lVar1 + 0x70) = 0x80;
      *(undefined4 *)(lVar1 + 0x74) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined4 *)(lVar1 + 0x8c) = 0;
      TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x44),pTVar2);
      pTVar2 = (TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                *)&pTVar2[2].Elements.field_0x8;
      lVar1 = lVar1 + 0xa8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FWN_CS_CharacterDesc,int> @ 14a69f150

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __cdecl DestructItems<FWN_CS_CharacterDesc,int>(FWN_CS_CharacterDesc *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FWN_CS_CharacterPresetDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->CharacterPresetDescs;
    do {
      DestructItems<FWN_CS_CharacterPresetDesc,int>
                ((FWN_CS_CharacterPresetDesc *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FWN_CS_CharacterPartDesc,int>
                ((FWN_CS_CharacterPartDesc *)
                 (((TArray<FWN_CS_CharacterPartDesc,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 AllocatorInstance).Data,
                 ((TArray<FWN_CS_CharacterPartDesc,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 ArrayNum);
      pFVar1 = (((TArray<FWN_CS_CharacterPartDesc,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FUtf8String *)(pTVar2 + -2))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -5) + 8));
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_CS_CharacterPartDesc,int> @ 14a69f1d0

/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __cdecl
DestructItems<FWN_CS_CharacterPartDesc,int>(FWN_CS_CharacterPartDesc *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ServerHitCapsuleInfoArray;
    do {
      pFVar1 = (((TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((FName *)(pTVar2 + -4) + 1) != (void *)0x0) {
        FMemory::Free(*(void **)((FName *)(pTVar2 + -4) + 1));
      }
      pTVar2 = (TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_CS_CharacterPartInfo,int> @ 14a69f240

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __cdecl
DestructItems<FWN_CS_CharacterPartInfo,int>(FWN_CS_CharacterPartInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->MaterialDescs;
    do {
      DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
                ((FWN_CS_CharacterPresetSlotMaterialDesc *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FUtf8String *)(pTVar2 + -5))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_CS_CharacterPresetDesc,int> @ 14a69f2d0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __cdecl
DestructItems<FWN_CS_CharacterPresetDesc,int>(FWN_CS_CharacterPresetDesc *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FWN_CS_CharacterPresetSlotDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->CharacterPresetSlotDescs;
    do {
      pFVar1 = (((TArray<FWN_CS_FixedBoundBoneSlotParam,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FWN_CS_CharacterPresetSlotDesc,int>
                ((FWN_CS_CharacterPresetSlotDesc *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum
                );
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FWN_CS_CharacterLightDesc,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pTVar2 + -4) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -4));
      }
      pTVar2 = pTVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_CS_CharacterPresetSlotDesc,int> @ 14a69f350

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __cdecl
DestructItems<FWN_CS_CharacterPresetSlotDesc,int>
          (FWN_CS_CharacterPresetSlotDesc *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->MaterialDescs;
    do {
      DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
                ((FWN_CS_CharacterPresetSlotMaterialDesc *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int> @ 14a69f3a0

void __cdecl
DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
          (FWN_CS_CharacterPresetSlotMaterialDesc *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->VectorParameters).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      *(undefined4 *)(puVar1 + -9) = 0;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      puVar1 = puVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`UWN_CS_CharacterWorkspace::FillInfosByPreset'::__l12::<lambda_1>_> @ 14a69fb10

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

FWN_CS_CharacterPartDesc * __thiscall
TArray<FWN_CS_CharacterPartDesc,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UWN_CS_CharacterWorkspace::FillInfosByPreset_::__l12::<lambda_1>_>
          (TArray<FWN_CS_CharacterPartDesc,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  FScriptContainerElement *pFVar1;
  FWN_CS_CharacterPartDesc *pFVar2;
  FWN_CS_CharacterPartDesc *pFVar3;
  
  pFVar3 = (FWN_CS_CharacterPartDesc *)(this->AllocatorInstance).Data;
  pFVar2 = pFVar3 + this->ArrayNum;
  if (pFVar3 != pFVar2) {
    do {
      if (pFVar3->ID == (param_1->slotDesc).ID_Part) {
        DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
                  ((FWN_CS_CharacterPresetSlotMaterialDesc *)
                   (param_1->slotDesc).MaterialDescs.AllocatorInstance.Data,
                   (param_1->slotDesc).MaterialDescs.ArrayNum);
        pFVar1 = (param_1->slotDesc).MaterialDescs.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar2);
  }
  DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
            ((FWN_CS_CharacterPresetSlotMaterialDesc *)
             (param_1->slotDesc).MaterialDescs.AllocatorInstance.Data,
             (param_1->slotDesc).MaterialDescs.ArrayNum);
  pFVar1 = (param_1->slotDesc).MaterialDescs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (FWN_CS_CharacterPartDesc *)0x0;
}

// FindLastByPredicate<`UWN_CS_CharacterCore::DestroyPart'::__l2::<lambda_1>_> @ 14a69fba0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UWN_CS_CharacterPart>,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UWN_CS_CharacterCore::DestroyPart_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UWN_CS_CharacterPart>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar2 + (longlong)param_2 * 8;
  do {
    if (pFVar6 == pFVar2) {
      return -1;
    }
    pFVar1 = pFVar6 + -8;
    pFVar6 = pFVar6 + -8;
  } while (*(EWN_CS_CharacterSlotName *)(*(longlong *)pFVar1 + 0x28) != param_1.InSlotName);
  return (int)((longlong)pFVar6 - (longlong)pFVar2 >> 3);
}

// FindLastByPredicate<`UWN_CS_CharacterCore::RemovePartInfo'::__l2::<lambda_1>_> @ 14a69fc50

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

int __thiscall
TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UWN_CS_CharacterCore::RemovePartInfo_::__l2::<lambda_1>_>
          (TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar2 + (longlong)param_2 * 0x88;
  do {
    if (pFVar4 == pFVar2) {
      return -1;
    }
    pFVar7 = pFVar4 + -0x88;
    pFVar1 = pFVar4 + -0x80;
    pFVar4 = pFVar7;
  } while ((FScriptContainerElement)param_1.InSlotName != *pFVar1);
  return (int)(((longlong)pFVar7 - (longlong)pFVar2) / 0x88);
}

// FindLastByPredicate<`UWN_CS_CharacterCore::SetPartInfo'::__l2::<lambda_1>_> @ 14a69fd10

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

int __thiscall
TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UWN_CS_CharacterCore::SetPartInfo_::__l2::<lambda_1>_>
          (TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar2 + (longlong)param_2 * 0x88;
  do {
    if (pFVar4 == pFVar2) {
      return -1;
    }
    pFVar7 = pFVar4 + -0x88;
    pFVar1 = pFVar4 + -0x80;
    pFVar4 = pFVar7;
  } while ((FScriptContainerElement)param_1.slotName != *pFVar1);
  return (int)(((longlong)pFVar7 - (longlong)pFVar2) / 0x88);
}

// FindLastByPredicate<`UWN_CS_CharacterCore::SetPartInfos'::__l6::<lambda_1>_> @ 14a69fdd0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

int __thiscall
TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UWN_CS_CharacterCore::SetPartInfos_::__l6::<lambda_1>_>
          (TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar2 + (longlong)param_2 * 0x88;
  do {
    if (pFVar4 == pFVar2) {
      return -1;
    }
    pFVar7 = pFVar4 + -0x88;
    pFVar1 = pFVar4 + -0x80;
    pFVar4 = pFVar7;
  } while ((FScriptContainerElement)param_1.slotName != *pFVar1);
  return (int)(((longlong)pFVar7 - (longlong)pFVar2) / 0x88);
}

// InternalConstructor<UWN_CS_CharacterCore> @ 14a69fe90

void __cdecl InternalConstructor<UWN_CS_CharacterCore>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWN_CS_CharacterCore__6B_;
    *(undefined2 *)(this + 1) = 1;
    this[1].field_0x2 = 1;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x20,0);
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    this[3].field_0x4 = 0;
    *(undefined4 *)(this + 3) = 3;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined4 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 2;
  }
  return;
}

// InternalConstructor<UWN_CS_CharacterPart> @ 14a69ffa0

void __cdecl InternalConstructor<UWN_CS_CharacterPart>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0x2f;
    *(undefined ***)this = &___7UWN_CS_CharacterPart__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0xffffffffffffffff;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x1c = 0x80;
    *(undefined4 *)&this[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x24 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined4 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x1c = 0x80;
    *(undefined4 *)&this[6].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[6].field_0x24 = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined4 *)&this[7].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UWN_CS_CharacterSoul> @ 14a6a00a0

void __cdecl InternalConstructor<UWN_CS_CharacterSoul>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWN_CS_CharacterSoul__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UWN_CS_CharacterWorkspace> @ 14a6a00e0

void __cdecl InternalConstructor<UWN_CS_CharacterWorkspace>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UWN_CS_CharacterWorkspace__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UWN_CS_OutGame_CharacterWorkspace> @ 14a6a0120

void __cdecl InternalConstructor<UWN_CS_OutGame_CharacterWorkspace>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UWN_CS_OutGame_CharacterWorkspace__6B_;
  }
  return;
}

// InternalConstructor<UWN_CS_Subsystem> @ 14a6a0160

void __cdecl InternalConstructor<UWN_CS_Subsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this);
    this->_padding_ = (longlong)&UWN_CS_Subsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UWN_CS_Subsystem::_vftable__for__FTickableGameObject__;
  }
  return;
}

// InternalVTableHelperCtorCaller<UWN_CS_CharacterCore> @ 14a6a01a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_CS_CharacterCore>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_CS_CharacterCore::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWN_CS_CharacterCore__6B_;
    *(undefined2 *)(pUVar1 + 1) = 1;
    pUVar1[1].field_0x2 = 1;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x20,0);
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 3;
    pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_CS_CharacterPart> @ 14a6a0320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_CS_CharacterPart>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_CS_CharacterPart::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0x2f;
    *(undefined ***)pUVar1 = &___7UWN_CS_CharacterPart__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0xffffffffffffffff;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x24 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_CS_CharacterSoul> @ 14a6a04a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_CS_CharacterSoul>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_CS_CharacterSoul::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWN_CS_CharacterSoul__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_CS_CharacterWorkspace> @ 14a6a0550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_CS_CharacterWorkspace>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_CS_CharacterWorkspace::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UWN_CS_CharacterWorkspace__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_CS_OutGame_CharacterWorkspace> @ 14a6a0610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_CS_OutGame_CharacterWorkspace>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_CS_OutGame_CharacterWorkspace::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UWN_CS_OutGame_CharacterWorkspace__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_CS_Subsystem> @ 14a6a06d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_CS_Subsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_CS_Subsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&UWN_CS_Subsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UWN_CS_Subsystem::_vftable__for__FTickableGameObject__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UBoxComponent> @ 14a6a0790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBoxComponent * __cdecl
NewObject<UBoxComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UBoxComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UBoxComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UBoxComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCapsuleComponent> @ 14a6a0880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCapsuleComponent * __cdecl
NewObject<UCapsuleComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UCapsuleComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UCapsuleComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USkeletalMeshComponent> @ 14a6a0970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USkeletalMeshComponent * __cdecl
NewObject<USkeletalMeshComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  USkeletalMeshComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (USkeletalMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USkeletalMeshComponentBudgeted> @ 14a6a0a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USkeletalMeshComponentBudgeted * __cdecl
NewObject<USkeletalMeshComponentBudgeted>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  USkeletalMeshComponentBudgeted *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (USkeletalMeshComponentBudgeted *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USphereComponent> @ 14a6a0b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USphereComponent * __cdecl
NewObject<USphereComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  USphereComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_USphereComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (USphereComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USpotLightComponent> @ 14a6a0c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USpotLightComponent * __cdecl
NewObject<USpotLightComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  USpotLightComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_USpotLightComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (USpotLightComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWN_CS_CharacterPart> @ 14a6a0d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_CS_CharacterPart * __cdecl
NewObject<UWN_CS_CharacterPart>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UWN_CS_CharacterPart *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UWN_CS_CharacterPart::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UWN_CS_CharacterPart *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWN_CS_CharacterSoul> @ 14a6a0e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_CS_CharacterSoul * __cdecl
NewObject<UWN_CS_CharacterSoul>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UWN_CS_CharacterSoul *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UWN_CS_CharacterSoul::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UWN_CS_CharacterSoul *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWidgetComponent> @ 14a6a0f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWidgetComponent * __cdecl
NewObject<UWidgetComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UWidgetComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UWidgetComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UWidgetComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EWN_CS_AnimationType> @ 14a6a14e0

UEnum * __cdecl StaticEnum<enum_EWN_CS_AnimationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_CS_AnimationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_CS_AnimationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_CS_AnimationType,(UObject *)pUVar1,
                       L"EWN_CS_AnimationType");
  }
  return Z_Registration_Info_UEnum_EWN_CS_AnimationType.OuterSingleton;
}

// StaticEnum<enum_EWN_CS_CharacterSlotName> @ 14a6a1520

UEnum * __cdecl StaticEnum<enum_EWN_CS_CharacterSlotName>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_CS_CharacterSlotName,(UObject *)pUVar1,
                       L"EWN_CS_CharacterSlotName");
  }
  return Z_Registration_Info_UEnum_EWN_CS_CharacterSlotName.OuterSingleton;
}

// StaticEnum<enum_EWN_CS_CharacterWorkspaceVersion> @ 14a6a1560

UEnum * __cdecl StaticEnum<enum_EWN_CS_CharacterWorkspaceVersion>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_CS_CharacterWorkspaceVersion,(UObject *)pUVar1,
                       L"EWN_CS_CharacterWorkspaceVersion");
  }
  return Z_Registration_Info_UEnum_EWN_CS_CharacterWorkspaceVersion.OuterSingleton;
}

// StaticEnum<enum_EWN_CS_ResourceType> @ 14a6a15a0

UEnum * __cdecl StaticEnum<enum_EWN_CS_ResourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_CS_ResourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_CS_ResourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_CS_ResourceType,(UObject *)pUVar1,
                       L"EWN_CS_ResourceType");
  }
  return Z_Registration_Info_UEnum_EWN_CS_ResourceType.OuterSingleton;
}

// StaticEnum<enum_EWN_Parts_ColliderType> @ 14a6a15e0

UEnum * __cdecl StaticEnum<enum_EWN_Parts_ColliderType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_Parts_ColliderType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_Parts_ColliderType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_Parts_ColliderType,(UObject *)pUVar1,
                       L"EWN_Parts_ColliderType");
  }
  return Z_Registration_Info_UEnum_EWN_Parts_ColliderType.OuterSingleton;
}

// StaticEnum<enum_EWN_Parts_LightType> @ 14a6a1620

UEnum * __cdecl StaticEnum<enum_EWN_Parts_LightType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_Parts_LightType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UEnum_EWN_Parts_LightType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_CS_EWN_Parts_LightType,(UObject *)pUVar1,
                       L"EWN_Parts_LightType");
  }
  return Z_Registration_Info_UEnum_EWN_Parts_LightType.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14a6a3198

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_CS_Subsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UWN_CS_Subsystem::_vector_deleting_destructor__adjustor_56__(UWN_CS_Subsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_CS_Subsystem *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a6a31b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void * __thiscall
UWN_CS_CharacterCore::_scalar_deleting_destructor_(UWN_CS_CharacterCore *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UWN_CS_CharacterCore__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreDestroyComponent).field_0x8,
             *(int *)&(this->OnPreDestroyComponent).field_0x10);
  pvVar1 = *(void **)&(this->OnPreDestroyComponent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreDestroyComponent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCharacterCoreDeInitialized);
  pvVar1 = *(void **)&(this->OnCharacterCoreDeInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCharacterCoreDeInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPartsListChanged);
  pvVar1 = *(void **)&(this->OnPartsListChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPartsListChanged);
  pFVar2 = (this->LightComponentArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Parts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NonePartInfo).LightInfoArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FWN_CS_CharacterPartInfo,int>
            ((FWN_CS_CharacterPartInfo *)(this->PartInfos).AllocatorInstance.Data,
             (this->PartInfos).ArrayNum);
  pFVar2 = (this->PartInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SoulInfo).AnimPath.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->SoulInfo).SkeletalMesh.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6a3320

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UWN_CS_CharacterPart::_scalar_deleting_destructor_(UWN_CS_CharacterPart *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UWN_CS_CharacterPart__6B_;
  *(undefined4 *)&(this->ColliderContainerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColliderContainerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ColliderContainerMap);
  *(undefined4 *)&(this->ServerHitCapsuleContainerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ServerHitCapsuleContainerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ServerHitCapsuleContainerMap);
  *(undefined4 *)&(this->HitSphereContainerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HitSphereContainerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->HitSphereContainerMap);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6a3410

void * __thiscall
UWN_CS_CharacterSoul::_scalar_deleting_destructor_(UWN_CS_CharacterSoul *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWN_CS_CharacterSoul__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6a3470

/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

void * __thiscall
UWN_CS_CharacterWorkspace::_scalar_deleting_destructor_
          (UWN_CS_CharacterWorkspace *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWN_CS_CharacterWorkspace__6B_;
  DestructItems<FWN_CS_CharacterDesc,int>
            ((FWN_CS_CharacterDesc *)(this->CharacterDescs).AllocatorInstance.Data,
             (this->CharacterDescs).ArrayNum);
  pFVar1 = (this->CharacterDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6a34f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

void * __thiscall
UWN_CS_OutGame_CharacterWorkspace::_scalar_deleting_destructor_
          (UWN_CS_OutGame_CharacterWorkspace *this,uint param_1)

{
  *(undefined ***)this = &___7UWN_CS_CharacterWorkspace__6B_;
  DestructItems<FWN_CS_CharacterDesc,int>
            (*(FWN_CS_CharacterDesc **)&this->field_0x30,*(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a6a3570

void * __thiscall
UWN_CS_Subsystem::_scalar_deleting_destructor_(UWN_CS_Subsystem *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UWorldSubsystem__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__FTickableGameObject__;
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWN_CS_CharacterCore @ 14a6a7b50

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_CS_CharacterCore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_CS_CharacterDescs @ 14a6a7b60

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_CS_CharacterDescs(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_CS_CharacterWorkspace @ 14a6a7b70

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_CS_CharacterWorkspace(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_CS_Subsystem @ 14a6a7b80

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_CS_Subsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_CS_init @ 14a6a7b90

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_CS_init(void)

{
  return;
}

// WN_CS_GetAnimationTypeString @ 14a6aad90

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

FString * __cdecl
WN_CS_GetAnimationTypeString(FString *__return_storage_ptr__,EWN_CS_AnimationType param_1)

{
  UClass *pUVar1;
  UEnum *this;
  FText *this_00;
  FString *pFVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = L"/Script/WN_CS.EWN_CS_AnimationType";
  local_18.Size = 0x22;
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  this = (UEnum *)StaticFindObject(pUVar1,(UObject *)0x0,&local_18,ExactClass);
  if (this == (UEnum *)0x0) {
    FString::FString(__return_storage_ptr__,"InvalidEnum");
    return __return_storage_ptr__;
  }
  this_00 = UEnum::GetDisplayNameTextByValue(this,(FText *)&local_18,(longlong)(int)param_1);
  pFVar2 = FText::ToString(this_00);
  FString::FString(__return_storage_ptr__,pFVar2);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  return __return_storage_ptr__;
}

// WN_CS_GetCharacterSlotNameString @ 14a6aae50

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FString * __cdecl
WN_CS_GetCharacterSlotNameString(FString *__return_storage_ptr__,EWN_CS_CharacterSlotName param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  FText *this;
  FString *pFVar3;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = L"/Script/WN_CS.EWN_CS_CharacterSlotName";
  local_18.Size = 0x26;
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  pUVar2 = StaticFindObject(pUVar1,(UObject *)0x0,&local_18,ExactClass);
  if (pUVar2 == (UObject *)0x0) {
    FString::FString(__return_storage_ptr__,"InvalidEnum");
    return __return_storage_ptr__;
  }
  this = (FText *)(**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,&local_18,param_1);
  pFVar3 = FText::ToString(this);
  FString::FString(__return_storage_ptr__,pFVar3);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  return __return_storage_ptr__;
}

// WN_CS_GetResourceTypeString @ 14a6aaf10

/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

FString * __cdecl
WN_CS_GetResourceTypeString(FString *__return_storage_ptr__,EWN_CS_ResourceType param_1)

{
  UClass *pUVar1;
  UEnum *this;
  FText *this_00;
  FString *pFVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = L"/Script/WN_CS.EWN_CS_ResourceType";
  local_18.Size = 0x21;
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  this = (UEnum *)StaticFindObject(pUVar1,(UObject *)0x0,&local_18,ExactClass);
  if (this == (UEnum *)0x0) {
    FString::FString(__return_storage_ptr__,"InvalidEnum");
    return __return_storage_ptr__;
  }
  this_00 = UEnum::GetDisplayNameTextByValue(this,(FText *)&local_18,(longlong)(int)param_1);
  pFVar2 = FText::ToString(this_00);
  FString::FString(__return_storage_ptr__,pFVar2);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UWN_CS_CharacterCore_NoRegister @ 14a6aafd0

UClass * __cdecl Z_Construct_UClass_UWN_CS_CharacterCore_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterCore",
               &Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton,
               UWN_CS_CharacterCore::StaticRegisterNativesUWN_CS_CharacterCore,0x120,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWN_CS_CharacterCore>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterCore.InnerSingleton;
}

// Z_Construct_UClass_UWN_CS_CharacterWorkspace_NoRegister @ 14a6ab080

UClass * __cdecl Z_Construct_UClass_UWN_CS_CharacterWorkspace_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_CharacterWorkspace",
               &Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton,
               UWN_CS_CharacterWorkspace::StaticRegisterNativesUWN_CS_CharacterWorkspace,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_CS_CharacterWorkspace>,
               InternalVTableHelperCtorCaller<UWN_CS_CharacterWorkspace>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_CharacterWorkspace.InnerSingleton;
}

// Z_Construct_UClass_UWN_CS_OutGame_CharacterWorkspace_NoRegister @ 14a6ab140

UClass * __cdecl Z_Construct_UClass_UWN_CS_OutGame_CharacterWorkspace_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_OutGame_CharacterWorkspace",
               &Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton,
               UWN_CS_OutGame_CharacterWorkspace::
               StaticRegisterNativesUWN_CS_OutGame_CharacterWorkspace,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_CS_OutGame_CharacterWorkspace>,
               InternalVTableHelperCtorCaller<UWN_CS_OutGame_CharacterWorkspace>,local_res8,
               UWN_CS_CharacterWorkspace::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_OutGame_CharacterWorkspace.InnerSingleton;
}

// Z_Construct_UClass_UWN_CS_Subsystem_NoRegister @ 14a6ab200

UClass * __cdecl Z_Construct_UClass_UWN_CS_Subsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_Subsystem",
               &Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton,
               UWN_CS_Subsystem::StaticRegisterNativesUWN_CS_Subsystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_CS_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_CS_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWN_CS_AnimHashingData @ 14a6ab2c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_AnimHashingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_AnimHashingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_AnimHashingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_AnimHashingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_AnimHashingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_AnimHashingData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_LightContainer @ 14a6ab340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_LightContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_LightContainer.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_LightContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_LightContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_LightContainer.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_LightContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_PartSKMHashingData @ 14a6ab3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_PartSKMHashingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_PartSKMHashingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_PartSKMHashingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_PartSKMHashingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_PartSKMHashingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_PartSKMHashingData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_CS_SkeletonHashingData @ 14a6ab440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_CS_SkeletonHashingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_SkeletonHashingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_CS_SkeletonHashingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_CS_SkeletonHashingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_CS_SkeletonHashingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_CS_SkeletonHashingData.InnerSingleton;
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

// IMPLEMENT_MODULE_WN_CS @ 14a6ab4c0

void __cdecl IMPLEMENT_MODULE_WN_CS(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CS'' @ 15041ff40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CS__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&CS);
  return;
}

// `dynamic_atexit_destructor_for_'WN_CVarUseAnimBudget'' @ 15041ff60

void __cdecl _dynamic_atexit_destructor_for__WN_CVarUseAnimBudget__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&WN_CVarUseAnimBudget);
  return;
}

