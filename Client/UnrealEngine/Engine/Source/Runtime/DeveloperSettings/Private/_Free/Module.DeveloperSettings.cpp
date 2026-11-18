// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 40

// `dynamic_initializer_for_'ModuleRegistrantDeveloperSettings'' @ 140f3a830

void __cdecl _dynamic_initializer_for__ModuleRegistrantDeveloperSettings__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DeveloperSettings";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DeveloperSettings",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDeveloperSettingsModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h__Script_DeveloperSettings_1908838726'' @ 140f3a880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h__Script_DeveloperSettings_1908838726__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DeveloperSettings",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h__Script_DeveloperSettings_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h__Script_DeveloperSettings_1751103749'' @ 140f3a8c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h__Script_DeveloperSettings_1751103749__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DeveloperSettings",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h__Script_DeveloperSettings_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h__Script_DeveloperSettings_2759261450'' @ 140f3a900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h__Script_DeveloperSettings_2759261450__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DeveloperSettings",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h__Script_DeveloperSettings_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h__Script_DeveloperSettings_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h__Script_DeveloperSettings_3267975112'' @ 140f3a950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h__Script_DeveloperSettings_3267975112__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DeveloperSettings",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h__Script_DeveloperSettings_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h__Script_DeveloperSettings_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DeveloperSettings'' @ 140f3a9a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DeveloperSettings__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xcdaac7d9;
  local_res8[0].DeclarationsHash = 0x37d607d0;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DeveloperSettings,L"/Script/DeveloperSettings",
             &Z_Registration_Info_UPackage__Script_DeveloperSettings,local_res8);
  return;
}

// Z_Construct_UClass_UPlatformSettingsManager @ 14241a460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPlatformSettingsManager(void)

{
  if (Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton,
               &Z_Construct_UClass_UPlatformSettingsManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPlatformSettingsInstances @ 14241a4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlatformSettingsInstances(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPlatformSettingsInstances.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPlatformSettingsInstances.InnerSingleton,
               &Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPlatformSettingsInstances.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPlatformSettingsInstances.InnerSingleton;
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

// NewStructOps @ 14241a520

void * __cdecl Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPlatformSettingsInstances,&UE::CoreUObject::Private::Construct<FPlatformSettingsInstances>,&UE::CoreUObject::Private::ConstructForTests<FPlatformSettingsInstances>,&UE::CoreUObject::Private::Destruct<FPlatformSettingsInstances>,&UE::CoreUObject::Private::Copy<FPlatformSettingsInstances>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPlatformSettings_NoRegister @ 14241a560

UClass * __cdecl Z_Construct_UClass_UPlatformSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"PlatformSettings",
               &Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton,
               UPlatformSettings::StaticRegisterNativesUPlatformSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlatformSettings>,
               InternalVTableHelperCtorCaller<UPlatformSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton;
}

// Z_Construct_UClass_UPlatformSettings @ 14241a700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPlatformSettings(void)

{
  if (Z_Registration_Info_UClass_UPlatformSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPlatformSettings.OuterSingleton,
               &Z_Construct_UClass_UPlatformSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPlatformSettings.OuterSingleton;
}

// NewStructOps @ 14241a740

void * __cdecl Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerPlatformSettings,&UE::CoreUObject::Private::Construct<FPerPlatformSettings>,&UE::CoreUObject::Private::ConstructForTests<FPerPlatformSettings>,&UE::CoreUObject::Private::Destruct<FPerPlatformSettings>,&UE::CoreUObject::Private::Copy<FPerPlatformSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_DeveloperSettings @ 14241a780

UPackage * __cdecl Z_Construct_UPackage__Script_DeveloperSettings(void)

{
  if (Z_Registration_Info_UPackage__Script_DeveloperSettings.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DeveloperSettings.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_DeveloperSettings.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14241a7e0

void * __thiscall
FDeveloperSettingsModule::_scalar_deleting_destructor_(FDeveloperSettingsModule *this,uint param_1)

{
  *this = (FDeveloperSettingsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UDeveloperSettings @ 14241a8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDeveloperSettings(void)

{
  if (Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton,
               &Z_Construct_UClass_UDeveloperSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton;
}

// Z_Construct_UClass_UDeveloperSettingsBackedByCVars @ 14241abb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDeveloperSettingsBackedByCVars(void)

{
  if (Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton,
               &Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton;
}

// ConstructItems<TObjectPtr<UPlatformSettings>,TObjectPtr<UPlatformSettings>,int> @ 14241af20

void __cdecl
ConstructItems<TObjectPtr<UPlatformSettings>,TObjectPtr<UPlatformSettings>,int>
          (void *param_1,TObjectPtr<UPlatformSettings> *param_2,int param_3)

{
  TObjectPtr<UPlatformSettings> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UPlatformSettings>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UPlatformSettings>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UPlatformSettings *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UPlatformSettings *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// InternalConstructor<UDeveloperSettings> @ 14241b660

void __cdecl InternalConstructor<UDeveloperSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDeveloperSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UDeveloperSettingsBackedByCVars> @ 14241b6b0

void __cdecl InternalConstructor<UDeveloperSettingsBackedByCVars>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDeveloperSettingsBackedByCVars__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UPlatformSettings> @ 14241b700

void __cdecl InternalConstructor<UPlatformSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPlatformSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UPlatformSettingsManager> @ 14241b740

void __cdecl InternalConstructor<UPlatformSettingsManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPlatformSettingsManager__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    FName::FName((FName *)(this + 3),"Windows");
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDeveloperSettings> @ 14241b7b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDeveloperSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDeveloperSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDeveloperSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDeveloperSettingsBackedByCVars> @ 14241b870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDeveloperSettingsBackedByCVars>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDeveloperSettingsBackedByCVars::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDeveloperSettingsBackedByCVars__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPlatformSettings> @ 14241b930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPlatformSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPlatformSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPlatformSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPlatformSettingsManager> @ 14241b9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPlatformSettingsManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPlatformSettingsManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPlatformSettingsManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UPlatformSettings> @ 14241bad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPlatformSettings * __cdecl
NewObject<UPlatformSettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UPlatformSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UPlatformSettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UPlatformSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `scalar_deleting_destructor' @ 14241c300

void * __thiscall
UDeveloperSettings::_scalar_deleting_destructor_(UDeveloperSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDeveloperSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14241c360

void * __thiscall
UDeveloperSettingsBackedByCVars::_scalar_deleting_destructor_
          (UDeveloperSettingsBackedByCVars *this,uint param_1)

{
  *(undefined ***)this = &___7UDeveloperSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14241c3c0

void * __thiscall
UPlatformSettings::_scalar_deleting_destructor_(UPlatformSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPlatformSettings__6B_;
  pFVar1 = (this->ConfigPlatformNameStr).Data.AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14241c430

void * __thiscall
UPlatformSettingsManager::_scalar_deleting_destructor_(UPlatformSettingsManager *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPlatformSettingsManager__6B_;
  *(undefined4 *)&(this->SettingsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SettingsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SettingsMap);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDeveloperSettings @ 14241c970

void __cdecl EmptyLinkFunctionForGeneratedCodeDeveloperSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDeveloperSettingsBackedByCVars @ 14241c980

void __cdecl EmptyLinkFunctionForGeneratedCodeDeveloperSettingsBackedByCVars(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDeveloperSettings_init @ 14241c990

void __cdecl EmptyLinkFunctionForGeneratedCodeDeveloperSettings_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePlatformSettings @ 14241c9a0

void __cdecl EmptyLinkFunctionForGeneratedCodePlatformSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePlatformSettingsManager @ 14241c9b0

void __cdecl EmptyLinkFunctionForGeneratedCodePlatformSettingsManager(void)

{
  return;
}

// Z_Construct_UClass_UDeveloperSettingsBackedByCVars_NoRegister @ 14241db30

UClass * __cdecl Z_Construct_UClass_UDeveloperSettingsBackedByCVars_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"DeveloperSettingsBackedByCVars",
               &Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton,
               UDeveloperSettingsBackedByCVars::StaticRegisterNativesUDeveloperSettingsBackedByCVars
               ,0x38,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeveloperSettingsBackedByCVars>,
               InternalVTableHelperCtorCaller<UDeveloperSettingsBackedByCVars>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton;
}

// Z_Construct_UClass_UDeveloperSettings_NoRegister @ 14241dbf0

UClass * __cdecl Z_Construct_UClass_UDeveloperSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"DeveloperSettings",
               &Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton,
               UDeveloperSettings::StaticRegisterNativesUDeveloperSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeveloperSettings>,
               InternalVTableHelperCtorCaller<UDeveloperSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton;
}

// Z_Construct_UClass_UPlatformSettingsManager_NoRegister @ 14241dca0

UClass * __cdecl Z_Construct_UClass_UPlatformSettingsManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"PlatformSettingsManager",
               &Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton,
               UPlatformSettingsManager::StaticRegisterNativesUPlatformSettingsManager,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlatformSettingsManager>,
               InternalVTableHelperCtorCaller<UPlatformSettingsManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPerPlatformSettings @ 14241dd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerPlatformSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerPlatformSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerPlatformSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerPlatformSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPerPlatformSettings.InnerSingleton;
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

// IMPLEMENT_MODULE_DeveloperSettings @ 14241ddd0

void __cdecl IMPLEMENT_MODULE_DeveloperSettings(void)

{
  return;
}

