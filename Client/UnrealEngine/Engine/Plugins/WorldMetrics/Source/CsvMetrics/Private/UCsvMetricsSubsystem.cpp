// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CsvMetrics
// Functions: 13

// StaticClass @ 14f149e50

UClass * __cdecl UCsvMetricsSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CsvMetrics",L"CsvMetricsSubsystem",
               &Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton,
               StaticRegisterNativesUCsvMetricsSubsystem,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCsvMetricsSubsystem>,
               InternalVTableHelperCtorCaller<UCsvMetricsSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton;
}

// UCsvMetricsSubsystem @ 14f14a6d0

UCsvMetricsSubsystem * __thiscall
UCsvMetricsSubsystem::UCsvMetricsSubsystem(UCsvMetricsSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UCsvMetricsSubsystem__6B_;
  (this->MetricClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetricClasses).ArrayNum = 0;
  (this->MetricClasses).ArrayMax = 0;
  (this->Metrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metrics).ArrayNum = 0;
  (this->Metrics).ArrayMax = 0;
  (this->ProfileStartHandle).ID = 0;
  (this->ProfileEndHandle).ID = 0;
  return this;
}

// UCsvMetricsSubsystem @ 14f14a720

UCsvMetricsSubsystem * __thiscall
UCsvMetricsSubsystem::UCsvMetricsSubsystem(UCsvMetricsSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UCsvMetricsSubsystem__6B_;
  (this->MetricClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetricClasses).ArrayNum = 0;
  (this->MetricClasses).ArrayMax = 0;
  (this->Metrics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metrics).ArrayNum = 0;
  (this->Metrics).ArrayMax = 0;
  (this->ProfileStartHandle).ID = 0;
  (this->ProfileEndHandle).ID = 0;
  return this;
}

// ~UCsvMetricsSubsystem @ 14f14a800

void __thiscall UCsvMetricsSubsystem::~UCsvMetricsSubsystem(UCsvMetricsSubsystem *this)

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
  return;
}

// AddMetrics @ 14f14aa00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCsvMetricsSubsystem::AddMetrics(UCsvMetricsSubsystem *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  UWorldMetricsSubsystem *this_00;
  UWorldMetricInterface *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  pUVar7 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UWorldMetricsSubsystem::Get(pUVar7);
  if (this_00 == (UWorldMetricsSubsystem *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6273823050420977742>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\CsvMetrics\\Private\\CsvMetricsSubsystem.cpp"
                       ,0x4e,"WorldMetricsSubsystem");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (((this->Metrics).ArrayNum != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metrics.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\CsvMetrics\\Private\\CsvMetricsSubsystem.cpp"
                           ,0x50,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = (this->MetricClasses).AllocatorInstance.Data;
    iVar3 = (this->MetricClasses).ArrayNum;
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->MetricClasses).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TSubclassOf<UWorldMetricInterface>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar2) break;
      pUVar8 = UWorldMetricsSubsystem::AddMetric
                         (this_00,(TSubclassOf<UWorldMetricInterface> *)pFVar9);
      piVar1 = &(this->Metrics).ArrayMax;
      iVar6 = (this->Metrics).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Metrics).AllocatorInstance,piVar1);
      }
      pFVar9 = pFVar9 + 8;
      (this->Metrics).ArrayNum = iVar6 + 1;
      *(UWorldMetricInterface **)((this->Metrics).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           pUVar8;
    }
  }
  return;
}

// BindProfilerCallbacks @ 14f14ab30

void __thiscall UCsvMetricsSubsystem::BindProfilerCallbacks(UCsvMetricsSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  FCsvProfiler *pFVar3;
  FDelegateHandle FVar4;
  
  pFVar3 = FCsvProfiler::Get();
  if (pFVar3 == (FCsvProfiler *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6273823050420977718>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\CsvMetrics\\Private\\CsvMetricsSubsystem.cpp"
                       ,0x36,"CsvProfiler");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FVar4 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddUObject<UCsvMetricsSubsystem>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&pFVar3->OnCSVProfileStartDelegate,
                       (UCsvMetricsSubsystem *)&stack0x00000010,(pmf_92aa70a5)this);
                    /* WARNING: Load size is inaccurate */
    (this->ProfileStartHandle).ID = *FVar4.ID;
    FVar4 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddUObject<UCsvMetricsSubsystem>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&pFVar3->OnCSVProfileEndDelegate,(UCsvMetricsSubsystem *)&stack0x00000018,
                       (pmf_92aa70a5)this);
                    /* WARNING: Load size is inaccurate */
    (this->ProfileEndHandle).ID = *FVar4.ID;
  }
  return;
}

// Deinitialize @ 14f14ae40

void __thiscall UCsvMetricsSubsystem::Deinitialize(UCsvMetricsSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  FCsvProfiler *pFVar3;
  
  pFVar3 = FCsvProfiler::Get();
  if (pFVar3 == (FCsvProfiler *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6273823050420977731>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\CsvMetrics\\Private\\CsvMetricsSubsystem.cpp"
                       ,0x43,"CsvProfiler");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar3->OnCSVProfileStartDelegate,(FDelegateHandle)(this->ProfileStartHandle).ID);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar3->OnCSVProfileEndDelegate,(FDelegateHandle)(this->ProfileEndHandle).ID);
  }
  (this->Metrics).ArrayNum = 0;
  if ((this->Metrics).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Metrics).AllocatorInstance,0,&(this->Metrics).ArrayMax);
  }
  return;
}

// GetPrivateStaticClass @ 14f14b150

UClass * __cdecl UCsvMetricsSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CsvMetrics",L"CsvMetricsSubsystem",
               &Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton,
               StaticRegisterNativesUCsvMetricsSubsystem,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCsvMetricsSubsystem>,
               InternalVTableHelperCtorCaller<UCsvMetricsSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCsvMetricsSubsystem.InnerSingleton;
}

// Initialize @ 14f14b2e0

void __thiscall
UCsvMetricsSubsystem::Initialize(UCsvMetricsSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCsvProfiler *pFVar3;
  FDelegateHandle FVar4;
  
  pFVar3 = FCsvProfiler::Get();
  if (pFVar3 == (FCsvProfiler *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6273823050420977718>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\CsvMetrics\\Private\\CsvMetricsSubsystem.cpp"
                       ,0x36,"CsvProfiler");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FVar4 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddUObject<UCsvMetricsSubsystem>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&pFVar3->OnCSVProfileStartDelegate,
                       (UCsvMetricsSubsystem *)&stack0x00000018,(pmf_92aa70a5)this);
                    /* WARNING: Load size is inaccurate */
    (this->ProfileStartHandle).ID = *FVar4.ID;
    FVar4 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddUObject<UCsvMetricsSubsystem>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&pFVar3->OnCSVProfileEndDelegate,(UCsvMetricsSubsystem *)&stack0x00000020,
                       (pmf_92aa70a5)this);
                    /* WARNING: Load size is inaccurate */
    (this->ProfileEndHandle).ID = *FVar4.ID;
  }
  UWorldSubsystem::Initialize((UWorldSubsystem *)this,param_1);
  return;
}

// RemoveMetrics @ 14f14b560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCsvMetricsSubsystem::RemoveMetrics(UCsvMetricsSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UWorldMetricsSubsystem *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UWorldMetricsSubsystem::Get(pUVar5);
  if (this_00 == (UWorldMetricsSubsystem *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6273823050420977755>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\CsvMetrics\\Private\\CsvMetricsSubsystem.cpp"
                       ,0x5b,"WorldMetricsSubsystem");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar6 = (this->Metrics).AllocatorInstance.Data;
    iVar2 = (this->Metrics).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Metrics).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UWorldMetricInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar1) break;
      UWorldMetricsSubsystem::RemoveMetric(this_00,*(UWorldMetricInterface **)pFVar6);
      pFVar6 = pFVar6 + 8;
    }
    (this->Metrics).ArrayNum = 0;
    if ((this->Metrics).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Metrics).AllocatorInstance,0,&(this->Metrics).ArrayMax);
    }
  }
  return;
}

// ShouldCreateSubsystem @ 14f14b640

bool __thiscall
UCsvMetricsSubsystem::ShouldCreateSubsystem(UCsvMetricsSubsystem *this,UObject *param_1)

{
  return false;
}

// StaticRegisterNativesUCsvMetricsSubsystem @ 14f14b660

void __cdecl UCsvMetricsSubsystem::StaticRegisterNativesUCsvMetricsSubsystem(void)

{
  return;
}

// UnbindProfilerCallbacks @ 14f14b680

void __thiscall UCsvMetricsSubsystem::UnbindProfilerCallbacks(UCsvMetricsSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  FCsvProfiler *pFVar3;
  
  pFVar3 = FCsvProfiler::Get();
  if (pFVar3 == (FCsvProfiler *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6273823050420977731>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\CsvMetrics\\Private\\CsvMetricsSubsystem.cpp"
                       ,0x43,"CsvProfiler");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar3->OnCSVProfileStartDelegate,(FDelegateHandle)(this->ProfileStartHandle).ID);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar3->OnCSVProfileEndDelegate,(FDelegateHandle)(this->ProfileEndHandle).ID);
  }
  return;
}

