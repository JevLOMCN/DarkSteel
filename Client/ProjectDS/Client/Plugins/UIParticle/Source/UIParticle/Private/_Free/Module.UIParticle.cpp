// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 165

// `dynamic_initializer_for_'LogUIParticle'' @ 1411dc970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUIParticle__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogUIParticle,L"LogUIParticle",All,All);
  atexit(_dynamic_atexit_destructor_for__LogUIParticle__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantUIParticle'' @ 1411dc9b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantUIParticle__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "UIParticle";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"UIParticle",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FUIParticleModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UIParticleCount'' @ 1411dca00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIParticleCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIParticleCount == (FThreadSafeStaticStat<FStat_STAT_UIParticleCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UIParticleCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleCount,*pFVar1,
               L"UIParticle Count","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UIParticleOnPaintTime'' @ 1411dca90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIParticleOnPaintTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIParticleOnPaintTime ==
      (FThreadSafeStaticStat<FStat_STAT_UIParticleOnPaintTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UIParticleOnPaintTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleOnPaintTime,*pFVar1,
               L"UIParticle OnPaint","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UIParticleSpawnParticle'' @ 1411dcb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIParticleSpawnParticle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIParticleSpawnParticle ==
      (FThreadSafeStaticStat<FStat_STAT_UIParticleSpawnParticle>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UIParticleSpawnParticle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleSpawnParticle,*pFVar1,
               L"UIParticle SpawnParticle","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UIParticleTickTime'' @ 1411dcbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIParticleTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIParticleTickTime == (FThreadSafeStaticStat<FStat_STAT_UIParticleTickTime>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_UIParticleTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleTickTime,*pFVar1,
               L"UIParticle Tick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleAsset_h__Script_UIParticle_1684661590'' @ 1411dcc40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleAsset_h__Script_UIParticle_1684661590__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UIParticle",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleAsset_h__Script_UIParticle_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleAsset_h__Script_UIParticle_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleEmitterAsset_h__Script_UIParticle_897175423'' @ 1411dcc90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleEmitterAsset_h__Script_UIParticle_897175423__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UIParticle",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleEmitterAsset_h__Script_UIParticle_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleEmitterAsset_h__Script_UIParticle_Statics
             ::ScriptStructInfo,0xe,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Asset_UIParticleEmitterAsset_h__Script_UIParticle_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Utility_UIParticleUtility_h__Script_UIParticle_1048858303'' @ 1411dcce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Utility_UIParticleUtility_h__Script_UIParticle_1048858303__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UIParticle",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Utility_UIParticleUtility_h__Script_UIParticle_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Widget_UIParticleEmitter_h__Script_UIParticle_3296639100'' @ 1411dcd20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Widget_UIParticleEmitter_h__Script_UIParticle_3296639100__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UIParticle",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Widget_UIParticleEmitter_h__Script_UIParticle_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Widget_UIParticle_h__Script_UIParticle_1520614388'' @ 1411dcd60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Widget_UIParticle_h__Script_UIParticle_1520614388__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UIParticle",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_UIParticle_Source_UIParticle_Public_Widget_UIParticle_h__Script_UIParticle_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_UIParticle'' @ 1411dcda0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_UIParticle__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x4c595721;
  local_res8[0].DeclarationsHash = 0x539fcaea;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_UIParticle,L"/Script/UIParticle",
             &Z_Registration_Info_UPackage__Script_UIParticle,local_res8);
  return;
}

// Z_Construct_UClass_UUIParticleUtility @ 14ac8a970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIParticleUtility(void)

{
  if (Z_Registration_Info_UClass_UUIParticleUtility.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIParticleUtility.OuterSingleton,
               &Z_Construct_UClass_UUIParticleUtility_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUIParticleUtility.OuterSingleton;
}

// Z_Construct_UFunction_UUIParticleUtility_GetLOD @ 14ac8a9b0

UFunction * __cdecl Z_Construct_UFunction_UUIParticleUtility_GetLOD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUIParticleUtility_GetLOD_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ac8a9f0

void __cdecl
Z_Construct_UFunction_UUIParticleUtility_GetMultiThread_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUIParticleUtility_GetMultiThread @ 14ac8aa00

UFunction * __cdecl Z_Construct_UFunction_UUIParticleUtility_GetMultiThread(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUIParticleUtility_GetMultiThread_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIParticleAsset_NoRegister @ 14ac8aa40

UClass * __cdecl Z_Construct_UClass_UUIParticleAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleAsset",
               &Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton,
               UUIParticleAsset::StaticRegisterNativesUUIParticleAsset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUIParticleAsset>,
               InternalVTableHelperCtorCaller<UUIParticleAsset>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton;
}

// Z_Construct_UFunction_UUIParticleUtility_SetLOD @ 14ac8aa90

UFunction * __cdecl Z_Construct_UFunction_UUIParticleUtility_SetLOD(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUIParticleUtility_SetLOD_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_value_SetBit @ 14ac8aae0

void __cdecl
Z_Construct_UFunction_UUIParticleUtility_SetMultiThread_Statics::NewProp_value_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUIParticleUtility_SetMultiThread @ 14ac8aaf0

UFunction * __cdecl Z_Construct_UFunction_UUIParticleUtility_SetMultiThread(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUIParticleUtility_SetMultiThread_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIParticle @ 14ac8ac30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIParticle(void)

{
  if (Z_Registration_Info_UClass_UUIParticle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIParticle.OuterSingleton,
               &Z_Construct_UClass_UUIParticle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUIParticle.OuterSingleton;
}

// Z_Construct_UDelegateFunction_UIParticle_OnParticleEndEvent__DelegateSignature @ 14ac8ac70

UFunction * __cdecl
Z_Construct_UDelegateFunction_UIParticle_OnParticleEndEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UIParticle_OnParticleEndEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_UIParticle @ 14ac8acb0

UPackage * __cdecl Z_Construct_UPackage__Script_UIParticle(void)

{
  if (Z_Registration_Info_UPackage__Script_UIParticle.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_UIParticle.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_UIParticle.OuterSingleton;
}

// Z_Construct_UFunction_UUIParticle_Play @ 14ac8acf0

UFunction * __cdecl Z_Construct_UFunction_UUIParticle_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUIParticle_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InPlayParticle_SetBit @ 14ac8ad30

void __cdecl
Z_Construct_UFunction_UUIParticle_SetPlayParticle_Statics::NewProp_InPlayParticle_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUIParticle_SetPlayParticle @ 14ac8ad70

UFunction * __cdecl Z_Construct_UFunction_UUIParticle_SetPlayParticle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUIParticle_SetPlayParticle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUIParticle_Stop @ 14ac8adf0

UFunction * __cdecl Z_Construct_UFunction_UUIParticle_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUIParticle_Stop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUIParticle_StopEmit @ 14ac8ae30

UFunction * __cdecl Z_Construct_UFunction_UUIParticle_StopEmit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUIParticle_StopEmit_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPlayParticle_SetBit @ 14ac8ae70

void __cdecl Z_Construct_UClass_UUIParticle_Statics::NewProp_bPlayParticle_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d0) = *(byte *)((longlong)param_1 + 0x1d0) | 1;
  return;
}

// NewProp_IsPlaying_SetBit @ 14ac8ae80

void __cdecl Z_Construct_UClass_UUIParticle_Statics::NewProp_IsPlaying_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  return;
}

// Z_Construct_UDelegateFunction_UIParticle_OnEasyParticleEndEvent__DelegateSignature @ 14ac8b030

UFunction * __cdecl
Z_Construct_UDelegateFunction_UIParticle_OnEasyParticleEndEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UIParticle_OnEasyParticleEndEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIParticleAsset @ 14ac8b070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIParticleAsset(void)

{
  if (Z_Registration_Info_UClass_UUIParticleAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIParticleAsset.OuterSingleton,
               &Z_Construct_UClass_UUIParticleAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUIParticleAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FUIParticleEmitterInfo @ 14ac8b0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUIParticleEmitterInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleEmitterInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUIParticleEmitterInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FUIParticleEmitterInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUIParticleEmitterInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUIParticleEmitterInfo.InnerSingleton;
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

// NewProp_Disable_SetBit @ 14ac8b130

void __cdecl
Z_Construct_UScriptStruct_FUIParticleEmitterInfo_Statics::NewProp_Disable_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14ac8b140

void * __cdecl Z_Construct_UScriptStruct_FUIParticleEmitterInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUIParticleEmitterInfo,&UE::CoreUObject::Private::Construct<FUIParticleEmitterInfo>,&UE::CoreUObject::Private::ConstructForTests<FUIParticleEmitterInfo>,&UE::CoreUObject::Private::Destruct<FUIParticleEmitterInfo>,&UE::CoreUObject::Private::Copy<FUIParticleEmitterInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_AutoPlay_SetBit @ 14ac8b4f0

void __cdecl Z_Construct_UClass_UUIParticleAsset_Statics::NewProp_AutoPlay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UClass_UUIParticleEmitter @ 14ac8b720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIParticleEmitter(void)

{
  if (Z_Registration_Info_UClass_UUIParticleEmitter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIParticleEmitter.OuterSingleton,
               &Z_Construct_UClass_UUIParticleEmitter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUIParticleEmitter.OuterSingleton;
}

// Z_Construct_UFunction_UUIParticleEmitter_Play @ 14ac8b7a0

UFunction * __cdecl Z_Construct_UFunction_UUIParticleEmitter_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUIParticleEmitter_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InPlayParticle_SetBit @ 14ac8b7e0

void __cdecl
Z_Construct_UFunction_UUIParticleEmitter_SetPlayParticle_Statics::NewProp_InPlayParticle_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUIParticleEmitter_SetPlayParticle @ 14ac8b7f0

UFunction * __cdecl Z_Construct_UFunction_UUIParticleEmitter_SetPlayParticle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUIParticleEmitter_SetPlayParticle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUIParticleEmitter_Stop @ 14ac8b830

UFunction * __cdecl Z_Construct_UFunction_UUIParticleEmitter_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUIParticleEmitter_Stop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUIParticleEmitter_StopEmit @ 14ac8b870

UFunction * __cdecl Z_Construct_UFunction_UUIParticleEmitter_StopEmit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUIParticleEmitter_StopEmit_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPlayParticle_SetBit @ 14ac8b8b0

void __cdecl
Z_Construct_UClass_UUIParticleEmitter_Statics::NewProp_bPlayParticle_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1d0) = *(byte *)((longlong)param_1 + 0x1d0) | 1;
  return;
}

// NewProp_IsPlaying_SetBit @ 14ac8b8c0

void __cdecl Z_Construct_UClass_UUIParticleEmitter_Statics::NewProp_IsPlaying_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  return;
}

// Z_Construct_UClass_UUIParticleEmitterAsset @ 14ac8b8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIParticleEmitterAsset(void)

{
  if (Z_Registration_Info_UClass_UUIParticleEmitterAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIParticleEmitterAsset.OuterSingleton,
               &Z_Construct_UClass_UUIParticleEmitterAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUIParticleEmitterAsset.OuterSingleton;
}

// Z_Construct_UEnum_UIParticle_ECurveType @ 14ac8b910

UEnum * __cdecl Z_Construct_UEnum_UIParticle_ECurveType(void)

{
  if (Z_Registration_Info_UEnum_ECurveType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECurveType.InnerSingleton,
               &Z_Construct_UEnum_UIParticle_ECurveType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECurveType.InnerSingleton;
}

// Z_Construct_UEnum_UIParticle_EEmitterType @ 14ac8b950

UEnum * __cdecl Z_Construct_UEnum_UIParticle_EEmitterType(void)

{
  if (Z_Registration_Info_UEnum_EEmitterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEmitterType.InnerSingleton,
               &Z_Construct_UEnum_UIParticle_EEmitterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEmitterType.InnerSingleton;
}

// Z_Construct_UEnum_UIParticle_EParticleDrawEffect @ 14ac8b990

UEnum * __cdecl Z_Construct_UEnum_UIParticle_EParticleDrawEffect(void)

{
  if (Z_Registration_Info_UEnum_EParticleDrawEffect.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EParticleDrawEffect.InnerSingleton,
               &Z_Construct_UEnum_UIParticle_EParticleDrawEffect_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EParticleDrawEffect.InnerSingleton;
}

// Z_Construct_UEnum_UIParticle_EPositionType @ 14ac8b9d0

UEnum * __cdecl Z_Construct_UEnum_UIParticle_EPositionType(void)

{
  if (Z_Registration_Info_UEnum_EPositionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPositionType.InnerSingleton,
               &Z_Construct_UEnum_UIParticle_EPositionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPositionType.InnerSingleton;
}

// Z_Construct_UEnum_UIParticle_EUIParticlePropertyType @ 14ac8ba10

UEnum * __cdecl Z_Construct_UEnum_UIParticle_EUIParticlePropertyType(void)

{
  if (Z_Registration_Info_UEnum_EUIParticlePropertyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUIParticlePropertyType.InnerSingleton,
               &Z_Construct_UEnum_UIParticle_EUIParticlePropertyType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUIParticlePropertyType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FChildEmitter @ 14ac8ba50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChildEmitter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChildEmitter.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChildEmitter.InnerSingleton,
               &Z_Construct_UScriptStruct_FChildEmitter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChildEmitter.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChildEmitter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPosotion_Vector2DCurve @ 14ac8bad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPosotion_Vector2DCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPosotion_Vector2DCurve.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPosotion_Vector2DCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FPosotion_Vector2DCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPosotion_Vector2DCurve.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPosotion_Vector2DCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRange_Float @ 14ac8bb50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRange_Float(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRange_Float.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRange_Float.InnerSingleton,
               &Z_Construct_UScriptStruct_FRange_Float_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRange_Float.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRange_Float.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRange_FloatCurve @ 14ac8bbd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRange_FloatCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRange_FloatCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRange_FloatCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FRange_FloatCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRange_FloatCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRange_FloatCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRange_LinearColorCurve @ 14ac8bc50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRange_LinearColorCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRange_LinearColorCurve.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRange_LinearColorCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FRange_LinearColorCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRange_LinearColorCurve.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRange_LinearColorCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRange_Vector2D @ 14ac8bcd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRange_Vector2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRange_Vector2D.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRange_Vector2D.InnerSingleton,
               &Z_Construct_UScriptStruct_FRange_Vector2D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRange_Vector2D.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRange_Vector2D.InnerSingleton;
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

// Z_Construct_UScriptStruct_FScalarParamCurve @ 14ac8bd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FScalarParamCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FScalarParamCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FScalarParamCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FScalarParamCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FScalarParamCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FScalarParamCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FUIParticleFloatCurve @ 14ac8bdd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUIParticleFloatCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleFloatCurve.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUIParticleFloatCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FUIParticleFloatCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUIParticleFloatCurve.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FUIParticleFloatCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FUIParticleLinearColorCurve @ 14ac8be50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUIParticleLinearColorCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleLinearColorCurve.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUIParticleLinearColorCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FUIParticleLinearColorCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUIParticleLinearColorCurve.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUIParticleLinearColorCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FUIParticleProperty @ 14ac8bed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUIParticleProperty(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleProperty.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUIParticleProperty.InnerSingleton,
               &Z_Construct_UScriptStruct_FUIParticleProperty_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUIParticleProperty.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FUIParticleProperty.InnerSingleton;
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

// ECurveType_StaticEnum @ 14ac8bf50

UEnum * __cdecl ECurveType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECurveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_ECurveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_ECurveType,(UObject *)pUVar1,L"ECurveType");
  }
  return Z_Registration_Info_UEnum_ECurveType.OuterSingleton;
}

// NewStructOps @ 14ac8bf90

void * __cdecl Z_Construct_UScriptStruct_FLerpKeyVector2D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLerpKeyVector2D,&UE::CoreUObject::Private::Construct<FLerpKeyVector2D>,&UE::CoreUObject::Private::ConstructForTests<FLerpKeyVector2D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac8c1a0

void * __cdecl Z_Construct_UScriptStruct_FLerpKeyColor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLerpKeyColor,&UE::CoreUObject::Private::Construct<FLerpKeyColor>,&UE::CoreUObject::Private::ConstructForTests<FLerpKeyColor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_Loop_SetBit @ 14ac8c1e0

void __cdecl
Z_Construct_UScriptStruct_FUIParticleFloatCurve_Statics::NewProp_Loop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewStructOps @ 14ac8c1f0

void * __cdecl Z_Construct_UScriptStruct_FUIParticleFloatCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUIParticleFloatCurve,&UE::CoreUObject::Private::Construct<FUIParticleFloatCurve>,&UE::CoreUObject::Private::ConstructForTests<FUIParticleFloatCurve>,&UE::CoreUObject::Private::Destruct<FUIParticleFloatCurve>,&UE::CoreUObject::Private::Copy<FUIParticleFloatCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_FollowParentPosition_SetBit @ 14ac8c240

void __cdecl
Z_Construct_UScriptStruct_FChildEmitter_Statics::NewProp_FollowParentPosition_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 14ac8c250

void * __cdecl Z_Construct_UScriptStruct_FChildEmitter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChildEmitter,&UE::CoreUObject::Private::Construct<FChildEmitter>,&UE::CoreUObject::Private::ConstructForTests<FChildEmitter>,&UE::CoreUObject::Private::Destruct<FChildEmitter>,&UE::CoreUObject::Private::Copy<FChildEmitter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EEmitterType_StaticEnum @ 14ac8c2b0

UEnum * __cdecl EEmitterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEmitterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_EEmitterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_EEmitterType,(UObject *)pUVar1,L"EEmitterType");
  }
  return Z_Registration_Info_UEnum_EEmitterType.OuterSingleton;
}

// EPositionType_StaticEnum @ 14ac8c2f0

UEnum * __cdecl EPositionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPositionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_EPositionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_EPositionType,(UObject *)pUVar1,L"EPositionType"
                      );
  }
  return Z_Registration_Info_UEnum_EPositionType.OuterSingleton;
}

// EParticleDrawEffect_StaticEnum @ 14ac8c330

UEnum * __cdecl EParticleDrawEffect_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleDrawEffect.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_EParticleDrawEffect.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_EParticleDrawEffect,(UObject *)pUVar1,
                       L"EParticleDrawEffect");
  }
  return Z_Registration_Info_UEnum_EParticleDrawEffect.OuterSingleton;
}

// NewStructOps @ 14ac8c370

void * __cdecl Z_Construct_UScriptStruct_FRange_FloatCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRange_FloatCurve,&UE::CoreUObject::Private::Construct<FRange_FloatCurve>,&UE::CoreUObject::Private::ConstructForTests<FRange_FloatCurve>,&UE::CoreUObject::Private::Destruct<FRange_FloatCurve>,&UE::CoreUObject::Private::Copy<FRange_FloatCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_Loop_SetBit @ 14ac8c3b0

void __cdecl
Z_Construct_UScriptStruct_FUIParticleLinearColorCurve_Statics::NewProp_Loop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x201) = 1;
  return;
}

// NewStructOps @ 14ac8c3c0

void * __cdecl Z_Construct_UScriptStruct_FUIParticleLinearColorCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x208;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUIParticleLinearColorCurve,&UE::CoreUObject::Private::Construct<FUIParticleLinearColorCurve>,&UE::CoreUObject::Private::ConstructForTests<FUIParticleLinearColorCurve>,&UE::CoreUObject::Private::Destruct<FUIParticleLinearColorCurve>,&UE::CoreUObject::Private::Copy<FUIParticleLinearColorCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_RandomKey_R_G_SetBit @ 14ac8c400

void __cdecl
Z_Construct_UScriptStruct_FRange_LinearColorCurve_Statics::NewProp_RandomKey_R_G_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x410) = 1;
  return;
}

// NewProp_RandomKey_R_B_SetBit @ 14ac8c410

void __cdecl
Z_Construct_UScriptStruct_FRange_LinearColorCurve_Statics::NewProp_RandomKey_R_B_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x411) = 1;
  return;
}

// NewProp_RandomKey_R_A_SetBit @ 14ac8c420

void __cdecl
Z_Construct_UScriptStruct_FRange_LinearColorCurve_Statics::NewProp_RandomKey_R_A_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x412) = 1;
  return;
}

// NewProp_RandomKey_G_B_SetBit @ 14ac8c430

void __cdecl
Z_Construct_UScriptStruct_FRange_LinearColorCurve_Statics::NewProp_RandomKey_G_B_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x413) = 1;
  return;
}

// NewProp_RandomKey_G_A_SetBit @ 14ac8c440

void __cdecl
Z_Construct_UScriptStruct_FRange_LinearColorCurve_Statics::NewProp_RandomKey_G_A_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x414) = 1;
  return;
}

// NewProp_RandomKey_B_A_SetBit @ 14ac8c450

void __cdecl
Z_Construct_UScriptStruct_FRange_LinearColorCurve_Statics::NewProp_RandomKey_B_A_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x415) = 1;
  return;
}

// NewStructOps @ 14ac8c460

void * __cdecl Z_Construct_UScriptStruct_FRange_LinearColorCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x418;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRange_LinearColorCurve,&UE::CoreUObject::Private::Construct<FRange_LinearColorCurve>,&UE::CoreUObject::Private::ConstructForTests<FRange_LinearColorCurve>,&UE::CoreUObject::Private::Destruct<FRange_LinearColorCurve>,&UE::CoreUObject::Private::Copy<FRange_LinearColorCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac8c4c0

void * __cdecl Z_Construct_UScriptStruct_FRange_Float_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRange_Float,&UE::CoreUObject::Private::Construct<FRange_Float>,&UE::CoreUObject::Private::ConstructForTests<FRange_Float>,&UE::CoreUObject::Private::Destruct<FRange_Float>,&UE::CoreUObject::Private::Copy<FRange_Float>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac8c500

void * __cdecl Z_Construct_UScriptStruct_FScalarParamFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FScalarParamFloat,&UE::CoreUObject::Private::Construct<FScalarParamFloat>,&UE::CoreUObject::Private::ConstructForTests<FScalarParamFloat>,&UE::CoreUObject::Private::Destruct<FScalarParamFloat>,&UE::CoreUObject::Private::Copy<FScalarParamFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ac8cca0

void * __thiscall
FUIParticleModule::_scalar_deleting_destructor_(FUIParticleModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewProp_RandomKey_X_Y_SetBit @ 14ac8cce0

void __cdecl
Z_Construct_UScriptStruct_FRange_Vector2D_Statics::NewProp_RandomKey_X_Y_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14ac8ccf0

void * __cdecl Z_Construct_UScriptStruct_FRange_Vector2D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRange_Vector2D,&UE::CoreUObject::Private::Construct<FRange_Vector2D>,&UE::CoreUObject::Private::ConstructForTests<FRange_Vector2D>,&UE::CoreUObject::Private::Destruct<FRange_Vector2D>,&UE::CoreUObject::Private::Copy<FRange_Vector2D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EUIParticlePropertyType_StaticEnum @ 14ac8cd70

UEnum * __cdecl EUIParticlePropertyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUIParticlePropertyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_EUIParticlePropertyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_EUIParticlePropertyType,(UObject *)pUVar1,
                       L"EUIParticlePropertyType");
  }
  return Z_Registration_Info_UEnum_EUIParticlePropertyType.OuterSingleton;
}

// NewStructOps @ 14ac8ce00

void * __cdecl Z_Construct_UScriptStruct_FUIParticleProperty_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x800;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUIParticleProperty,&UE::CoreUObject::Private::Construct<FUIParticleProperty>,&UE::CoreUObject::Private::ConstructForTests<FUIParticleProperty>,&UE::CoreUObject::Private::Destruct<FUIParticleProperty>,&UE::CoreUObject::Private::Copy<FUIParticleProperty>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UUIParticleEmitterAsset_NoRegister @ 14ac8ce40

UClass * __cdecl Z_Construct_UClass_UUIParticleEmitterAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleEmitterAsset",
               &Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton,
               UUIParticleEmitterAsset::StaticRegisterNativesUUIParticleEmitterAsset,0xd8f8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UUIParticleEmitterAsset>
               ,InternalVTableHelperCtorCaller<UUIParticleEmitterAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleEmitterAsset.InnerSingleton;
}

// NewStructOps @ 14ac8cef0

void * __cdecl Z_Construct_UScriptStruct_FPosotion_Vector2DCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1000;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPosotion_Vector2DCurve,&UE::CoreUObject::Private::Construct<FPosotion_Vector2DCurve>,&UE::CoreUObject::Private::ConstructForTests<FPosotion_Vector2DCurve>,&UE::CoreUObject::Private::Destruct<FPosotion_Vector2DCurve>,&UE::CoreUObject::Private::Copy<FPosotion_Vector2DCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac8cff0

void * __cdecl Z_Construct_UScriptStruct_FSize_Vector2DCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1000;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSize_Vector2DCurve,&UE::CoreUObject::Private::Construct<FSize_Vector2DCurve>,&UE::CoreUObject::Private::ConstructForTests<FSize_Vector2DCurve>,&UE::CoreUObject::Private::Destruct<FSize_Vector2DCurve>,&UE::CoreUObject::Private::Copy<FSize_Vector2DCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac8d0f0

void * __cdecl Z_Construct_UScriptStruct_FScalarParamCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x808;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FScalarParamCurve,&UE::CoreUObject::Private::Construct<FScalarParamCurve>,&UE::CoreUObject::Private::ConstructForTests<FScalarParamCurve>,&UE::CoreUObject::Private::Destruct<FScalarParamCurve>,&UE::CoreUObject::Private::Copy<FScalarParamCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_AutoPlay_SetBit @ 14ac8d1f0

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_AutoPlay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_AutoEmitPosRange_SetBit @ 14ac8d240

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_AutoEmitPosRange_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2868) = 1;
  return;
}

// NewProp_AutoScale_SetBit @ 14ac8d250

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_AutoScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2869) = 1;
  return;
}

// NewProp_ScaleByX_SetBit @ 14ac8d260

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_ScaleByX_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x286a) = 1;
  return;
}

// NewProp_EmitAngleByWidgetAngle_SetBit @ 14ac8d270

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_EmitAngleByWidgetAngle_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2880) = 1;
  return;
}

// NewProp_RotationFollowSpeed_SetBit @ 14ac8d280

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_RotationFollowSpeed_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5890) = 1;
  return;
}

// NewProp_UseSeparateSize_SetBit @ 14ac8d290

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_UseSeparateSize_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5891) = 1;
  return;
}

// NewProp_UseScaleFollowSpeedDirection_SetBit @ 14ac8d2a0

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_UseScaleFollowSpeedDirection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0c9) = 1;
  return;
}

// NewProp_UseScaleFollowSpeedVertical_SetBit @ 14ac8d2f0

void __cdecl
Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_UseScaleFollowSpeedVertical_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8d0) = 1;
  return;
}

// NewProp_Trail_SetBit @ 14ac8d370

void __cdecl Z_Construct_UClass_UUIParticleEmitterAsset_Statics::NewProp_Trail_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8e8) = 1;
  return;
}

// DestructItems<FEasyParticleChildEmitterArray,int> @ 14ac8d880

void __cdecl
DestructItems<FEasyParticleChildEmitterArray,int>
          (FEasyParticleChildEmitterArray *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FEasyParticleState_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ChildrenParticle;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FScalarParamCurve,int> @ 14ac8d8d0

void __cdecl DestructItems<FScalarParamCurve,int>(FScalarParamCurve *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUIParticleProperty::~FUIParticleProperty(&param_1->Value);
    param_1 = (FScalarParamCurve *)(&param_1->Value + 1);
  }
  return;
}

// DestructItems<TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>,int> @ 14ac8d910

void __cdecl
DestructItems<TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>,int>
          (TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FEasyParticleRootState_*,FEasyParticleStatePool_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FEasyParticleRootState,1>,int> @ 14ac8d970

void __cdecl
DestructItems<TSharedPtr<FEasyParticleRootState,1>,int>
          (TSharedPtr<FEasyParticleRootState,1> *param_1,int param_2)

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

// InternalConstructor<UUIParticle> @ 14ac8dbf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UUIParticle>(FObjectInitializer *param_1)

{
  UWidget *this;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UUIParticle::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UUIParticle::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
  }
  return;
}

// InternalConstructor<UUIParticleAsset> @ 14ac8dc50

void __cdecl InternalConstructor<UUIParticleAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UUIParticleAsset__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined1 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UUIParticleEmitter> @ 14ac8dc90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UUIParticleEmitter>(FObjectInitializer *param_1)

{
  UWidget *this;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UUIParticleEmitter::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UUIParticleEmitter::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
  }
  return;
}

// InternalConstructor<UUIParticleEmitterAsset> @ 14ac8dcf0

void __cdecl InternalConstructor<UUIParticleEmitterAsset>(FObjectInitializer *param_1)

{
  if ((UUIParticleEmitterAsset *)param_1->Obj != (UUIParticleEmitterAsset *)0x0) {
    UUIParticleEmitterAsset::UUIParticleEmitterAsset
              ((UUIParticleEmitterAsset *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UUIParticleUtility> @ 14ac8dd10

void __cdecl InternalConstructor<UUIParticleUtility>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UUIParticleUtility__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UUIParticle> @ 14ac8dd40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUIParticle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIParticle::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UUIParticle::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UUIParticle::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUIParticleAsset> @ 14ac8de20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUIParticleAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIParticleAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUIParticleAsset__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUIParticleEmitter> @ 14ac8dee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUIParticleEmitter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIParticleEmitter::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UUIParticleEmitter::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UUIParticleEmitter::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUIParticleEmitterAsset> @ 14ac8dfc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUIParticleEmitterAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUIParticleEmitterAsset *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIParticleEmitterAsset::GetPrivateStaticClass();
  pUVar3 = (UUIParticleEmitterAsset *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UUIParticleEmitterAsset *)0x0) {
    pUVar3 = UUIParticleEmitterAsset::UUIParticleEmitterAsset(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUIParticleUtility> @ 14ac8e060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUIParticleUtility>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIParticleUtility::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUIParticleUtility__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UUIParticleEmitterAsset,UUIParticleEmitterAsset_*,0> @ 14ac8e110

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UUIParticleEmitterAsset,UUIParticleEmitterAsset_*,0>
          (TObjectPtr<UUIParticleEmitterAsset> *param_1,UUIParticleEmitterAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UUIParticleEmitterAsset *)0x0) {
    return *param_2 == (UUIParticleEmitterAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeTDecl<SUIParticle,RequiredArgs::T0RequiredArgs> @ 14ac8e130

TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SUIParticle,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> @ 14ac8e1e0

TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewObject<UUIParticleEmitterAsset> @ 14ac8e290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUIParticleEmitterAsset * __cdecl NewObject<UUIParticleEmitterAsset>(UObject *param_1)

{
  UClass *pUVar1;
  UUIParticleEmitterAsset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UUIParticleEmitterAsset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUIParticleEmitterAsset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_ECurveType> @ 14ac8e4b0

UEnum * __cdecl StaticEnum<enum_ECurveType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECurveType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_ECurveType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_ECurveType,(UObject *)pUVar1,L"ECurveType");
  }
  return Z_Registration_Info_UEnum_ECurveType.OuterSingleton;
}

// StaticEnum<enum_EEmitterType> @ 14ac8e4f0

UEnum * __cdecl StaticEnum<enum_EEmitterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEmitterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_EEmitterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_EEmitterType,(UObject *)pUVar1,L"EEmitterType");
  }
  return Z_Registration_Info_UEnum_EEmitterType.OuterSingleton;
}

// StaticEnum<enum_EParticleDrawEffect> @ 14ac8e530

UEnum * __cdecl StaticEnum<enum_EParticleDrawEffect>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleDrawEffect.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_EParticleDrawEffect.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_EParticleDrawEffect,(UObject *)pUVar1,
                       L"EParticleDrawEffect");
  }
  return Z_Registration_Info_UEnum_EParticleDrawEffect.OuterSingleton;
}

// StaticEnum<enum_EPositionType> @ 14ac8e570

UEnum * __cdecl StaticEnum<enum_EPositionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPositionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_EPositionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_EPositionType,(UObject *)pUVar1,L"EPositionType"
                      );
  }
  return Z_Registration_Info_UEnum_EPositionType.OuterSingleton;
}

// StaticEnum<enum_EUIParticlePropertyType> @ 14ac8e5b0

UEnum * __cdecl StaticEnum<enum_EUIParticlePropertyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUIParticlePropertyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UEnum_EUIParticlePropertyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UIParticle_EUIParticlePropertyType,(UObject *)pUVar1,
                       L"EUIParticlePropertyType");
  }
  return Z_Registration_Info_UEnum_EUIParticlePropertyType.OuterSingleton;
}

// FThreadSafeStaticStat<`FPaintParticleTask::GetStatId'::__l2::FStat_FTickParticleTask> @ 14ac8e5f0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FPaintParticleTask::GetStatId(void)_::_2_::FStat_FTickParticleTask>
* __thiscall
FThreadSafeStaticStat<`FPaintParticleTask::GetStatId'::__l2::FStat_FTickParticleTask>::
FThreadSafeStaticStat<_FPaintParticleTask::GetStatId_::__l2::FStat_FTickParticleTask>(void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FTickParticleTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FTickParticleTask","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced"
               ,L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FTickParticleTask::GetStatId'::__l2::FStat_FTickParticleTask> @ 14ac8e680

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickParticleTask::GetStatId(void)_::_2_::FStat_FTickParticleTask>
* __thiscall
FThreadSafeStaticStat<`FTickParticleTask::GetStatId'::__l2::FStat_FTickParticleTask>::
FThreadSafeStaticStat<_FTickParticleTask::GetStatId_::__l2::FStat_FTickParticleTask>(void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FTickParticleTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FTickParticleTask","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced"
               ,L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// `vector_deleting_destructor' @ 14ac91be0

void * __thiscall
FEasyParticleState::_vector_deleting_destructor_(FEasyParticleState *this,uint param_1)

{
  FEasyParticleState *pFVar1;
  FEasyParticleState *this_00;
  
  if ((param_1 & 2) != 0) {
    pFVar1 = this[-1].ParentParticle;
    this_00 = this + (longlong)pFVar1;
    for (; pFVar1 != (FEasyParticleState *)0x0;
        pFVar1 = (FEasyParticleState *)((longlong)&pFVar1[-1].RootParticle + 7)) {
      this_00 = this_00 + -1;
      ~FEasyParticleState(this_00);
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].ParentParticle,(longlong)this[-1].ParentParticle * 0x410 + 0x10);
    }
    return &this[-1].ParentParticle;
  }
  ~FEasyParticleState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x410);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ac91c9c

/* [thunk]:public: virtual void * __ptr64 __cdecl UUIParticle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUIParticle::_vector_deleting_destructor__adjustor_40__(UUIParticle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUIParticle *)&this[-1].EventOnEnd.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ac91cac

/* [thunk]:public: virtual void * __ptr64 __cdecl UUIParticleEmitter::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUIParticleEmitter::_vector_deleting_destructor__adjustor_40__
          (UUIParticleEmitter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UUIParticleEmitter *)&this[-1].EventOnEnd.field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ac91cc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FUIParticleModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FUIParticleModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91cf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UUIParticle,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UUIParticle,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91d20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UUIParticleEmitter,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UUIParticleEmitter,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91d50

void * __thiscall
TGraphTask<FPaintParticleTask>::_scalar_deleting_destructor_
          (TGraphTask<FPaintParticleTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91db0

void * __thiscall
TGraphTask<FTickParticleTask>::_scalar_deleting_destructor_
          (TGraphTask<FTickParticleTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91e10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUIParticle,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SUIParticle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91e50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUIParticleEmitter,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SUIParticleEmitter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91e90

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEasyParticleGroupState,SharedPointerInternals::DefaultDeleter<FEasyParticleGroupState>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FEasyParticleGroupState,SharedPointerInternals::DefaultDeleter<FEasyParticleGroupState>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91ed0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEasyParticleRootState,SharedPointerInternals::DefaultDeleter<FEasyParticleRootState>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FEasyParticleRootState,SharedPointerInternals::DefaultDeleter<FEasyParticleRootState>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac91f10

void * __thiscall
FEasyParticleGroupState::_scalar_deleting_destructor_(FEasyParticleGroupState *this,uint param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FEasyParticleRootState *pFVar3;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  pFVar5 = (this->Emitters).AllocatorInstance.Data;
  iVar1 = (this->Emitters).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FEasyParticleRootState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    pFVar3 = *(FEasyParticleRootState **)pFVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 != (FEasyParticleRootState *)0x0) {
      pFVar4 = FUIParticleFactory::m_Instance;
      if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
        this_00 = ::operator_new(0x30);
        pFVar4 = (FUIParticleFactory *)0x0;
        if (this_00 != (FUIParticleFactory *)0x0) {
          pFVar4 = FUIParticleFactory::FUIParticleFactory(this_00);
        }
      }
      FUIParticleFactory::m_Instance = pFVar4;
      FUIParticleFactory::ClearChildren(FUIParticleFactory::m_Instance,pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar5 = pFVar5 + 0x10;
  }
  DestructItems<TSharedPtr<FEasyParticleRootState,1>,int>
            ((TSharedPtr<FEasyParticleRootState,1> *)(this->Emitters).AllocatorInstance.Data,
             (this->Emitters).ArrayNum);
  pFVar5 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac92020

void * __thiscall
FEasyParticleRootState::_scalar_deleting_destructor_(FEasyParticleRootState *this,uint param_1)

{
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar1;
  
  *(undefined ***)this = &___7FEasyParticleRootState__6B_;
  pFVar1 = FUIParticleFactory::m_Instance;
  if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
    this_00 = ::operator_new(0x30);
    pFVar1 = (FUIParticleFactory *)0x0;
    if (this_00 != (FUIParticleFactory *)0x0) {
      pFVar1 = FUIParticleFactory::FUIParticleFactory(this_00);
    }
  }
  FUIParticleFactory::m_Instance = pFVar1;
  FUIParticleFactory::ClearChildren(FUIParticleFactory::m_Instance,this);
  FEasyParticleState::~FEasyParticleState((FEasyParticleState *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x420);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac920a0

void * __thiscall
FUIParticleFactory::_scalar_deleting_destructor_(FUIParticleFactory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FEasyParticleRootState,1>,int>
            ((TSharedPtr<FEasyParticleRootState,1> *)(this->ParticleRefArray).AllocatorInstance.Data
             ,(this->ParticleRefArray).ArrayNum);
  pFVar1 = (this->ParticleRefArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>,int>
            ((TMap<FEasyParticleRootState_*,FEasyParticleStatePool_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEasyParticleRootState_*,FEasyParticleStatePool_*,0>_>
              *)(this->ParticlePoolMapArray).AllocatorInstance.Data,
             (this->ParticlePoolMapArray).ArrayNum);
  pFVar1 = (this->ParticlePoolMapArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac92120

void * __thiscall SUIParticle::_scalar_deleting_destructor_(SUIParticle *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EmitterGroup).SharedReferenceCount.ReferenceController);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac92190

void * __thiscall
SUIParticleEmitter::_scalar_deleting_destructor_(SUIParticleEmitter *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RootEmitter).SharedReferenceCount.ReferenceController);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac92200

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UUIParticle::_scalar_deleting_destructor_(UUIParticle *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParticleCanvas).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->EventOnEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EventOnEnd);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac922b0

void * __thiscall
UUIParticleAsset::_scalar_deleting_destructor_(UUIParticleAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UUIParticleAsset__6B_;
  pFVar1 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac92320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UUIParticleEmitter::_scalar_deleting_destructor_(UUIParticleEmitter *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParticleCanvas).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->EventOnEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EventOnEnd);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac923d0

void * __thiscall
UUIParticleEmitterAsset::_scalar_deleting_destructor_(UUIParticleEmitterAsset *this,uint param_1)

{
  ~UUIParticleEmitterAsset(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac92430

void * __thiscall
UUIParticleUtility::_scalar_deleting_destructor_(UUIParticleUtility *this,uint param_1)

{
  *(undefined ***)this = &___7UUIParticleUtility__6B_;
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

// EmptyLinkFunctionForGeneratedCodeUIParticle @ 14ac96020

void __cdecl EmptyLinkFunctionForGeneratedCodeUIParticle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIParticleAsset @ 14ac96030

void __cdecl EmptyLinkFunctionForGeneratedCodeUIParticleAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIParticleEmitter @ 14ac96040

void __cdecl EmptyLinkFunctionForGeneratedCodeUIParticleEmitter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIParticleEmitterAsset @ 14ac96050

void __cdecl EmptyLinkFunctionForGeneratedCodeUIParticleEmitterAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIParticleUtility @ 14ac96060

void __cdecl EmptyLinkFunctionForGeneratedCodeUIParticleUtility(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIParticle_init @ 14ac96070

void __cdecl EmptyLinkFunctionForGeneratedCodeUIParticle_init(void)

{
  return;
}

// FOnEasyParticleEndEvent_DelegateWrapper @ 14ac96d50

void __cdecl
FOnEasyParticleEndEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnParticleEndEvent_DelegateWrapper @ 14ac96d60

void __cdecl
FOnParticleEndEvent_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// Z_Construct_UClass_UUIParticleEmitter_NoRegister @ 14aca3190

UClass * __cdecl Z_Construct_UClass_UUIParticleEmitter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleEmitter",
               &Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton,
               UUIParticleEmitter::StaticRegisterNativesUUIParticleEmitter,0x1e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUIParticleEmitter>,
               InternalVTableHelperCtorCaller<UUIParticleEmitter>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleEmitter.InnerSingleton;
}

// Z_Construct_UClass_UUIParticleUtility_NoRegister @ 14aca3250

UClass * __cdecl Z_Construct_UClass_UUIParticleUtility_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleUtility",
               &Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton,
               UUIParticleUtility::StaticRegisterNativesUUIParticleUtility,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUIParticleUtility>,
               InternalVTableHelperCtorCaller<UUIParticleUtility>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleUtility.InnerSingleton;
}

// Z_Construct_UClass_UUIParticle_NoRegister @ 14aca3300

UClass * __cdecl Z_Construct_UClass_UUIParticle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticle.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticle",
               &Z_Registration_Info_UClass_UUIParticle.InnerSingleton,
               UUIParticle::StaticRegisterNativesUUIParticle,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUIParticle>,
               InternalVTableHelperCtorCaller<UUIParticle>,aFStackX_8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticle.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLerpKeyColor @ 14aca3310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLerpKeyColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLerpKeyColor.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLerpKeyColor.InnerSingleton,
               &Z_Construct_UScriptStruct_FLerpKeyColor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLerpKeyColor.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLerpKeyColor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLerpKeyVector2D @ 14aca3390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLerpKeyVector2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLerpKeyVector2D.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLerpKeyVector2D.InnerSingleton,
               &Z_Construct_UScriptStruct_FLerpKeyVector2D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLerpKeyVector2D.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLerpKeyVector2D.InnerSingleton;
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

// Z_Construct_UScriptStruct_FScalarParamFloat @ 14aca3410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FScalarParamFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FScalarParamFloat.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FScalarParamFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FScalarParamFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FScalarParamFloat.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FScalarParamFloat.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSize_Vector2DCurve @ 14aca3490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSize_Vector2DCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSize_Vector2DCurve.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSize_Vector2DCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FSize_Vector2DCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSize_Vector2DCurve.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSize_Vector2DCurve.InnerSingleton;
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

// IMPLEMENT_MODULE_UIParticle @ 14aca3a30

void __cdecl IMPLEMENT_MODULE_UIParticle(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogUIParticle'' @ 150422a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUIParticle__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUIParticle);
  return;
}

