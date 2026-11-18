// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 57

// `dynamic_initializer_for_'LogWorldMetrics'' @ 141453950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWorldMetrics__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWorldMetrics,L"LogWorldMetrics",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWorldMetrics__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWorldMetricsCore'' @ 141453990

void __cdecl _dynamic_initializer_for__ModuleRegistrantWorldMetricsCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WorldMetricsCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WorldMetricsCore",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricCollection_h__Script_WorldMetricsCore_4200201935'' @ 1414539e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricCollection_h__Script_WorldMetricsCore_4200201935__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WorldMetricsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricCollection_h__Script_WorldMetricsCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h__Script_WorldMetricsCore_2807386504'' @ 141453a20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h__Script_WorldMetricsCore_2807386504__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WorldMetricsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h__Script_WorldMetricsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h__Script_WorldMetricsCore_468392553'' @ 141453a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h__Script_WorldMetricsCore_468392553__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WorldMetricsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h__Script_WorldMetricsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h__Script_WorldMetricsCore_2225094752'' @ 141453aa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h__Script_WorldMetricsCore_2225094752__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WorldMetricsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h__Script_WorldMetricsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h__Script_WorldMetricsCore_4072991989'' @ 141453ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h__Script_WorldMetricsCore_4072991989__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WorldMetricsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsExtension_h__Script_WorldMetricsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h__Script_WorldMetricsCore_3816708351'' @ 141453b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h__Script_WorldMetricsCore_3816708351__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WorldMetricsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h__Script_WorldMetricsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WorldMetricsCore'' @ 141453b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WorldMetricsCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xcb0ab8bf;
  local_res8[0].DeclarationsHash = 0x5b16696c;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WorldMetricsCore,L"/Script/WorldMetricsCore",
             &Z_Registration_Info_UPackage__Script_WorldMetricsCore,local_res8);
  return;
}

// Z_Construct_UClass_UWorldMetricInterface_NoRegister @ 14f1307c0

UClass * __cdecl Z_Construct_UClass_UWorldMetricInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricInterface",
               &Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton,
               UWorldMetricInterface::StaticRegisterNativesUWorldMetricInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricInterface>,
               InternalVTableHelperCtorCaller<UWorldMetricInterface>,local_res8,UObject::StaticClass
               ,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricInterface.InnerSingleton;
}

// Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister @ 14f130940

UClass * __cdecl Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UWorldMetricsSubsystem::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsSubsystem",
               &Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton,
               UWorldMetricsSubsystem::StaticRegisterNativesUWorldMetricsSubsystem,0x2a48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricsSubsystem>,
               InternalVTableHelperCtorCaller<UWorldMetricsSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UWorldMetricsActorTracker @ 14f130ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldMetricsActorTracker(void)

{
  if (Z_Registration_Info_UClass_UWorldMetricsActorTracker.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldMetricsActorTracker.OuterSingleton,
               &Z_Construct_UClass_UWorldMetricsActorTracker_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldMetricsActorTracker.OuterSingleton;
}

// Z_Construct_UClass_UWorldMetricsSubsystem @ 14f130b00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldMetricsSubsystem(void)

{
  if (Z_Registration_Info_UClass_UWorldMetricsSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldMetricsSubsystem.OuterSingleton,
               &Z_Construct_UClass_UWorldMetricsSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldMetricsSubsystem.OuterSingleton;
}

// Z_Construct_UPackage__Script_WorldMetricsCore @ 14f130b40

UPackage * __cdecl Z_Construct_UPackage__Script_WorldMetricsCore(void)

{
  if (Z_Registration_Info_UPackage__Script_WorldMetricsCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WorldMetricsCore.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_WorldMetricsCore.OuterSingleton;
}

// Z_Construct_UClass_UWorldMetricInterface @ 14f130b80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldMetricInterface(void)

{
  if (Z_Registration_Info_UClass_UWorldMetricInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldMetricInterface.OuterSingleton,
               &Z_Construct_UClass_UWorldMetricInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldMetricInterface.OuterSingleton;
}

// Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber @ 14f130c80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber(void)

{
  if (Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.OuterSingleton,
               &Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.OuterSingleton;
}

// Z_Construct_UClass_UWorldMetricsExtension @ 14f130d80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldMetricsExtension(void)

{
  if (Z_Registration_Info_UClass_UWorldMetricsExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldMetricsExtension.OuterSingleton,
               &Z_Construct_UClass_UWorldMetricsExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldMetricsExtension.OuterSingleton;
}

// NewProp_bIsEnabled_SetBit @ 14f130e00

void __cdecl
Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14f130e10

void * __cdecl Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldMetricCollection,&UE::CoreUObject::Private::Construct<FWorldMetricCollection>,&UE::CoreUObject::Private::ConstructForTests<FWorldMetricCollection>,&UE::CoreUObject::Private::Destruct<FWorldMetricCollection>,&UE::CoreUObject::Private::Copy<FWorldMetricCollection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// CastChecked<UWorldMetricsSubsystem,UObject> @ 14f131160

UWorldMetricsSubsystem * __cdecl CastChecked<UWorldMetricsSubsystem,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UWorldMetricsSubsystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWorldMetricsSubsystem::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UWorldMetricsSubsystem *)param_1;
  }
  pFVar3 = GetTypeName<UWorldMetricsSubsystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UWorldMetricInterface>,TObjectPtr<UWorldMetricInterface>,int> @ 14f131220

void __cdecl
ConstructItems<TObjectPtr<UWorldMetricInterface>,TObjectPtr<UWorldMetricInterface>,int>
          (void *param_1,TObjectPtr<UWorldMetricInterface> *param_2,int param_3)

{
  TObjectPtr<UWorldMetricInterface> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UWorldMetricInterface>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UWorldMetricInterface>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UWorldMetricInterface *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UWorldMetricInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// GetTypeName<UWorldMetricsSubsystem> @ 14f131c50

FString * __cdecl GetTypeName<UWorldMetricsSubsystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWorldMetricsSubsystem::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IndexOfBy<TArray<TObjectPtr<UWorldMetricInterface>,TSizedDefaultAllocator<32>_>,UWorldMetricInterface_*,FIdentityFunctor> @ 14f131c90

int __cdecl
AlgoImpl::
IndexOfBy<TArray<TObjectPtr<UWorldMetricInterface>,TSizedDefaultAllocator<32>_>,UWorldMetricInterface_*,FIdentityFunctor>
          (TArray<TObjectPtr<UWorldMetricInterface>,TSizedDefaultAllocator<32>_> *param_1,
          UWorldMetricInterface **param_2,FIdentityFunctor param_3)

{
  UWorldMetricInterface *pUVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar2 = 0;
  if (0 < param_1->ArrayNum) {
    uVar3 = uVar2;
    do {
      pUVar1 = *(UWorldMetricInterface **)((param_1->AllocatorInstance).Data + uVar2 * 8);
      if (pUVar1 == (UWorldMetricInterface *)0x0) {
        bVar4 = *param_2 == (UWorldMetricInterface *)0x0;
      }
      else {
        bVar4 = pUVar1 == *param_2;
      }
      if (bVar4) {
        return (int)uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// InternalConstructor<UWorldMetricInterface> @ 14f131ce0

void __cdecl InternalConstructor<UWorldMetricInterface>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldMetricInterface__6B_;
  }
  return;
}

// InternalConstructor<UWorldMetricsActorTracker> @ 14f131d10

void __cdecl InternalConstructor<UWorldMetricsActorTracker>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldMetricsActorTracker__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    *(undefined4 *)&this[4].field_0x24 = 0x10;
    *(undefined1 *)(this + 5) = 0;
  }
  return;
}

// InternalConstructor<UWorldMetricsActorTrackerSubscriber> @ 14f131d70

void __cdecl InternalConstructor<UWorldMetricsActorTrackerSubscriber>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UWorldMetricsActorTrackerSubscriber__6B_;
  }
  return;
}

// InternalConstructor<UWorldMetricsExtension> @ 14f131da0

void __cdecl InternalConstructor<UWorldMetricsExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldMetricsExtension__6B_;
  }
  return;
}

// InternalConstructor<UWorldMetricsSubsystem> @ 14f131dd0

void __cdecl InternalConstructor<UWorldMetricsSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UWorldMetricsSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[0xbf]._padding_ = 0;
    *(undefined4 *)&this[0xbf]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0xbf]._padding_ + 4) = 0x10;
    this[0xbf]._padding_ = 0;
    *(undefined4 *)&this[0xbf].field_0x30 = 0;
    *(undefined4 *)&this[0xbf].field_0x34 = 0x20;
    *(undefined4 *)&this[0xc0]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[0xc0]._padding_ + 4) = 0;
    this[0xc0]._padding_ = 0;
    *(undefined4 *)&this[0xc0].field_0x30 = 0;
    *(undefined4 *)&this[0xc1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[0xc1]._padding_ + 4) = 8;
  }
  return;
}

// InternalVTableHelperCtorCaller<UWorldMetricInterface> @ 14f131e70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldMetricInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldMetricInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldMetricInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldMetricsActorTracker> @ 14f131f20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldMetricsActorTracker>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldMetricsActorTracker::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldMetricsActorTracker__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0x10;
    *(undefined1 *)(pUVar1 + 5) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldMetricsActorTrackerSubscriber> @ 14f131ff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldMetricsActorTrackerSubscriber>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldMetricsActorTrackerSubscriber::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldMetricsActorTrackerSubscriber__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldMetricsExtension> @ 14f1320a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldMetricsExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldMetricsExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldMetricsExtension__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldMetricsSubsystem> @ 14f132150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldMetricsSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldMetricsSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UWorldMetricsSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[0xbf]._padding_ = 0;
    *(undefined4 *)&this[0xbf]._padding_ = 0;
    *(undefined4 *)((longlong)&this[0xbf]._padding_ + 4) = 0x10;
    this[0xbf]._padding_ = 0;
    *(undefined4 *)&this[0xbf].field_0x30 = 0;
    *(undefined4 *)&this[0xbf].field_0x34 = 0x20;
    *(undefined4 *)&this[0xc0]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[0xc0]._padding_ + 4) = 0;
    this[0xc0]._padding_ = 0;
    *(undefined4 *)&this[0xc0].field_0x30 = 0;
    *(undefined4 *)&this[0xc1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[0xc1]._padding_ + 4) = 8;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UWorldMetricInterface,UWorldMetricInterface_*,0> @ 14f132270

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UWorldMetricInterface,UWorldMetricInterface_*,0>
          (TObjectPtr<UWorldMetricInterface> *param_1,UWorldMetricInterface **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UWorldMetricInterface *)0x0) {
    return *param_2 == (UWorldMetricInterface *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UWorldMetricInterface> @ 14f132290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWorldMetricInterface * __cdecl
NewObject<UWorldMetricInterface>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = UWorldMetricInterface::StaticClass();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UWorldMetricInterface *)pUVar2;
}

// NewObject<UWorldMetricsExtension> @ 14f132390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWorldMetricsExtension * __cdecl
NewObject<UWorldMetricsExtension>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = UWorldMetricsExtension::StaticClass();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UWorldMetricsExtension *)pUVar2;
}

// `scalar_deleting_destructor' @ 14f133a90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_*),FDefaultDelegateUserPolicy,`UWorldMetricsActorTracker::BindWorldCallbacks'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f133ac0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_*),FDefaultDelegateUserPolicy,`UWorldMetricsActorTracker::BindWorldCallbacks'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f133af0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UWorldMetricsSubsystem::Enable'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f133b20

void * __thiscall
UWorldMetricInterface::_scalar_deleting_destructor_(UWorldMetricInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldMetricInterface__6B_;
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

// `scalar_deleting_destructor' @ 14f133b80

void * __thiscall
UWorldMetricsActorTracker::_scalar_deleting_destructor_
          (UWorldMetricsActorTracker *this,uint param_1)

{
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar1;
  
  this->_padding_ = (longlong)&___7UWorldMetricsActorTracker__6B_;
  FVar1 = (this->Subscribers).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7UWorldMetricsExtension__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f133c00

void * __thiscall
UWorldMetricsActorTrackerSubscriber::_scalar_deleting_destructor_
          (UWorldMetricsActorTrackerSubscriber *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 14f133c60

void * __thiscall
UWorldMetricsExtension::_scalar_deleting_destructor_(UWorldMetricsExtension *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldMetricsExtension__6B_;
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

// `scalar_deleting_destructor' @ 14f133cc0

void * __thiscall
UWorldMetricsSubsystem::_scalar_deleting_destructor_(UWorldMetricsSubsystem *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  this->_padding_ = (longlong)&___7UWorldMetricsSubsystem__6B_;
  *(undefined4 *)&(this->Extensions).field_0x29d8 = 0;
  pvVar3 = *(void **)&(this->Extensions).field_0x29d0;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UWorldMetricsExtension>,UWorldMetricsSubsystem::FExtension>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)&this->Extensions);
  pFVar4 = (this->Metrics).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2a48);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricCollection @ 14f135eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricInterface @ 14f135ec0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricsActorTracker @ 14f135ed0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricsActorTracker(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricsActorTrackerSubscriber @ 14f135ee0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricsActorTrackerSubscriber(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricsCore_init @ 14f135ef0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricsCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricsExtension @ 14f135f00

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricsExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldMetricsSubsystem @ 14f135f10

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldMetricsSubsystem(void)

{
  return;
}

// Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_NoRegister @ 14f13a1c0

UClass * __cdecl Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsActorTrackerSubscriber",
               &Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton,
               UWorldMetricsActorTrackerSubscriber::
               StaticRegisterNativesUWorldMetricsActorTrackerSubscriber,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricsActorTrackerSubscriber>,
               InternalVTableHelperCtorCaller<UWorldMetricsActorTrackerSubscriber>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton;
}

// Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister @ 14f13a280

UClass * __cdecl Z_Construct_UClass_UWorldMetricsActorTracker_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsActorTracker",
               &Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton,
               UWorldMetricsActorTracker::StaticRegisterNativesUWorldMetricsActorTracker,0xd0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricsActorTracker>,
               InternalVTableHelperCtorCaller<UWorldMetricsActorTracker>,local_res8,
               UWorldMetricsExtension::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsActorTracker.InnerSingleton;
}

// Z_Construct_UClass_UWorldMetricsExtension_NoRegister @ 14f13a340

UClass * __cdecl Z_Construct_UClass_UWorldMetricsExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsExtension",
               &Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton,
               UWorldMetricsExtension::StaticRegisterNativesUWorldMetricsExtension,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricsExtension>,
               InternalVTableHelperCtorCaller<UWorldMetricsExtension>,local_res8,
               UObject::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsExtension.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWorldMetricCollection @ 14f13a400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldMetricCollection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldMetricCollection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldMetricCollection.InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldMetricCollection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldMetricCollection.InnerSingleton;
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

// IMPLEMENT_MODULE_WorldMetricsCore @ 14f13a480

void __cdecl IMPLEMENT_MODULE_WorldMetricsCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogWorldMetrics'' @ 150472390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWorldMetrics__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWorldMetrics);
  return;
}

