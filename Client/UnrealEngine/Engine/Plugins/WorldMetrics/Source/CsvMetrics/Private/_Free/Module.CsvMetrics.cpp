// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CsvMetrics
// Functions: 24

// `dynamic_initializer_for_'CVarCsvRecordActorCountThreshold'' @ 1414544c0

void __cdecl
UE::WorldMetrics::Private::_dynamic_initializer_for__CVarCsvRecordActorCountThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvRecordActorCountThreshold,L"csv.RecordActorCountThreshold",local_res8,
             L"Number of instances of a native Actor class required before recording to a CSV stat",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvRecordActorCountThreshold__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCsvMetrics'' @ 141454510

void __cdecl _dynamic_initializer_for__ModuleRegistrantCsvMetrics__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CsvMetrics";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CsvMetrics",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h__Script_CsvMetrics_2611779730'' @ 141454560

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h__Script_CsvMetrics_2611779730__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CsvMetrics",
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h__Script_CsvMetrics_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h__Script_CsvMetrics_3970257767'' @ 1414545a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h__Script_CsvMetrics_3970257767__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CsvMetrics",
             Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h__Script_CsvMetrics_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CsvMetrics'' @ 1414545e0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CsvMetrics__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x6a6877cd;
  local_res8[0].DeclarationsHash = 0xe51a3ce0;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CsvMetrics,L"/Script/CsvMetrics",
             &Z_Registration_Info_UPackage__Script_CsvMetrics,local_res8);
  return;
}

// Z_Construct_UClass_UCsvMetricsSubsystem @ 14f149f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCsvMetricsSubsystem(void)

{
  if (Z_Registration_Info_UClass_UCsvMetricsSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCsvMetricsSubsystem.OuterSingleton,
               &Z_Construct_UClass_UCsvMetricsSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCsvMetricsSubsystem.OuterSingleton;
}

// Z_Construct_UPackage__Script_CsvMetrics @ 14f149f50

UPackage * __cdecl Z_Construct_UPackage__Script_CsvMetrics(void)

{
  if (Z_Registration_Info_UPackage__Script_CsvMetrics.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CsvMetrics.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CsvMetrics.OuterSingleton;
}

// Z_Construct_UClass_UCsvActorCountMetric @ 14f14a050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCsvActorCountMetric(void)

{
  if (Z_Registration_Info_UClass_UCsvActorCountMetric.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCsvActorCountMetric.OuterSingleton,
               &Z_Construct_UClass_UCsvActorCountMetric_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCsvActorCountMetric.OuterSingleton;
}

// InternalConstructor<UCsvActorCountMetric> @ 14f14a370

void __cdecl InternalConstructor<UCsvActorCountMetric>(FObjectInitializer *param_1)

{
  UWorldMetricInterface *this;
  
  this = (UWorldMetricInterface *)param_1->Obj;
  if (this != (UWorldMetricInterface *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface(this,param_1);
    *(undefined ***)this = &UCsvActorCountMetric::_vftable__for__UWorldMetricInterface__;
    *(undefined ***)(this + 1) =
         &UCsvActorCountMetric::_vftable__for__IWorldMetricsActorTrackerSubscriber__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UCsvMetricsSubsystem> @ 14f14a3e0

void __cdecl InternalConstructor<UCsvMetricsSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UCsvMetricsSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UCsvActorCountMetric> @ 14f14a430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCsvActorCountMetric>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCsvActorCountMetric::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UCsvActorCountMetric::_vftable__for__UWorldMetricInterface__;
    *(undefined ***)(pUVar1 + 1) =
         &UCsvActorCountMetric::_vftable__for__IWorldMetricsActorTrackerSubscriber__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCsvMetricsSubsystem> @ 14f14a520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCsvMetricsSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCsvMetricsSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UCsvMetricsSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f14a844

/* [thunk]:public: virtual void * __ptr64 __cdecl UCsvActorCountMetric::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCsvActorCountMetric::_vector_deleting_destructor__adjustor_40__
          (UCsvActorCountMetric *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCsvActorCountMetric *)&this[-1].ActorClassNameCounter.field_0x30,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f14a860

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCsvMetricsSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UCsvMetricsSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f14a890

void * __thiscall
IWorldMetricsActorTrackerSubscriber::_scalar_deleting_destructor_
          (IWorldMetricsActorTrackerSubscriber *this,uint param_1)

{
  *this = (IWorldMetricsActorTrackerSubscriber)&___7IWorldMetricsActorTrackerSubscriber__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f14a8d0

void * __thiscall
UCsvActorCountMetric::_scalar_deleting_destructor_(UCsvActorCountMetric *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldMetricInterface__;
  this->_padding_ = (longlong)&_vftable__for__IWorldMetricsActorTrackerSubscriber__;
  *(undefined4 *)&(this->ActorClassNameCounter).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActorClassNameCounter).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActorClassNameCounter);
  this->_padding_ = (longlong)&___7IWorldMetricsActorTrackerSubscriber__6B_;
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f14a980

void * __thiscall
UCsvMetricsSubsystem::_scalar_deleting_destructor_(UCsvMetricsSubsystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCsvMetricsSubsystem__6B_;
  pFVar1 = (this->Metrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MetricClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCsvActorCountMetric @ 14f14aef0

void __cdecl EmptyLinkFunctionForGeneratedCodeCsvActorCountMetric(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCsvMetricsSubsystem @ 14f14af00

void __cdecl EmptyLinkFunctionForGeneratedCodeCsvMetricsSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCsvMetrics_init @ 14f14af10

void __cdecl EmptyLinkFunctionForGeneratedCodeCsvMetrics_init(void)

{
  return;
}

// Z_Construct_UClass_UCsvActorCountMetric_NoRegister @ 14f14b9c0

UClass * __cdecl Z_Construct_UClass_UCsvActorCountMetric_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CsvMetrics",L"CsvActorCountMetric",
               &Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton,
               UCsvActorCountMetric::StaticRegisterNativesUCsvActorCountMetric,0x88,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCsvActorCountMetric>,
               InternalVTableHelperCtorCaller<UCsvActorCountMetric>,local_res8,
               UWorldMetricInterface::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UCsvActorCountMetric.InnerSingleton;
}

// Z_Construct_UClass_UCsvMetricsSubsystem_NoRegister @ 14f14ba80

UClass * __cdecl Z_Construct_UClass_UCsvMetricsSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CsvMetrics",L"CsvMetricsSubsystem",
               &Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton,
               UCsvMetricsSubsystem::StaticRegisterNativesUCsvMetricsSubsystem,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCsvMetricsSubsystem>,
               InternalVTableHelperCtorCaller<UCsvMetricsSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton;
}

// IMPLEMENT_MODULE_CsvMetrics @ 14f14bb60

void __cdecl IMPLEMENT_MODULE_CsvMetrics(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvRecordActorCountThreshold'' @ 1504726b0

void __cdecl
UE::WorldMetrics::Private::_dynamic_atexit_destructor_for__CVarCsvRecordActorCountThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvRecordActorCountThreshold);
  return;
}

