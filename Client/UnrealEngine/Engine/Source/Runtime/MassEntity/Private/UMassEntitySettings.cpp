// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 17

// StaticClass @ 1471b4cf0

UClass * __cdecl UMassEntitySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassEntitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassEntitySettings",
               &Z_Registration_Info_UClass_UMassEntitySettings.InnerSingleton,
               StaticRegisterNativesUMassEntitySettings,0x138,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassEntitySettings>,
               InternalVTableHelperCtorCaller<UMassEntitySettings>,local_res8,
               UMassModuleSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassEntitySettings.InnerSingleton;
}

// UMassEntitySettings @ 1471dca50

UMassEntitySettings * __thiscall
UMassEntitySettings::UMassEntitySettings(UMassEntitySettings *this,FVTableHelper *param_1)

{
  UClass *pUVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->ChunkMemorySize = 0x20000;
  this->_padding_ = (longlong)&___7UMassEntitySettings__6B_;
  (this->DumpDependencyGraphFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DumpDependencyGraphFileName).Data.ArrayNum = 0;
  (this->DumpDependencyGraphFileName).Data.ArrayMax = 0;
  this->ProcessingPhasesConfig[0].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[0].PhaseName.Number = 0;
  pUVar1 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[0].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ProcessingPhasesConfig[0].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[0].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[0].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[1].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[1].PhaseName.Number = 0;
  pUVar1 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[1].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ProcessingPhasesConfig[1].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[1].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[1].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[2].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[2].PhaseName.Number = 0;
  pUVar1 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[2].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ProcessingPhasesConfig[2].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[2].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[2].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[3].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[3].PhaseName.Number = 0;
  pUVar1 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[3].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ProcessingPhasesConfig[3].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[3].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[3].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[4].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[4].PhaseName.Number = 0;
  pUVar1 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[4].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ProcessingPhasesConfig[4].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[4].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[4].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[5].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[5].PhaseName.Number = 0;
  pUVar1 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[5].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->ProcessingPhasesConfig[5].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[5].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[5].ProcessorCDOs.ArrayMax = 0;
  (this->ProcessorCDOs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessorCDOs).ArrayNum = 0;
  (this->ProcessorCDOs).ArrayMax = 0;
  this->bInitialized = false;
  this->bEngineInitialized = false;
  *(undefined8 *)&this->OnInitializedEvent = 0;
  *(undefined8 *)&(this->OnInitializedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInitializedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnInitializedEvent).field_0x18 = 2;
  return this;
}

// UMassEntitySettings @ 1471dcc00

UMassEntitySettings * __thiscall
UMassEntitySettings::UMassEntitySettings(UMassEntitySettings *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UMassEntitySettings *pUVar5;
  FString *pFVar6;
  UEnum *pUVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FText local_28;
  
  UObject::UObject((UObject *)this,param_1);
  this->ChunkMemorySize = 0x20000;
  this->_padding_ = (longlong)&___7UMassEntitySettings__6B_;
  (this->DumpDependencyGraphFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DumpDependencyGraphFileName).Data.ArrayNum = 0;
  (this->DumpDependencyGraphFileName).Data.ArrayMax = 0;
  this->ProcessingPhasesConfig[0].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[0].PhaseName.Number = 0;
  pUVar3 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[0].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->ProcessingPhasesConfig[0].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[0].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[0].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[1].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[1].PhaseName.Number = 0;
  pUVar3 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[1].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->ProcessingPhasesConfig[1].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[1].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[1].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[2].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[2].PhaseName.Number = 0;
  pUVar3 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[2].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->ProcessingPhasesConfig[2].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[2].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[2].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[3].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[3].PhaseName.Number = 0;
  pUVar3 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[3].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->ProcessingPhasesConfig[3].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[3].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[3].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[4].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[4].PhaseName.Number = 0;
  pUVar3 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[4].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->ProcessingPhasesConfig[4].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[4].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[4].ProcessorCDOs.ArrayMax = 0;
  this->ProcessingPhasesConfig[5].PhaseName.ComparisonIndex = 0;
  this->ProcessingPhasesConfig[5].PhaseName.Number = 0;
  pUVar3 = UMassCompositeProcessor::StaticClass();
  this->ProcessingPhasesConfig[5].PhaseGroupClass.Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->ProcessingPhasesConfig[5].ProcessorCDOs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ProcessingPhasesConfig[5].ProcessorCDOs.ArrayNum = 0;
  this->ProcessingPhasesConfig[5].ProcessorCDOs.ArrayMax = 0;
  (this->ProcessorCDOs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessorCDOs).ArrayNum = 0;
  (this->ProcessorCDOs).ArrayMax = 0;
  this->bInitialized = false;
  this->bEngineInitialized = false;
  *(undefined8 *)&this->OnInitializedEvent = 0;
  *(undefined8 *)&(this->OnInitializedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInitializedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnInitializedEvent).field_0x18 = 2;
  if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar4,
                       L"EMassProcessingPhase");
  }
  pUVar7 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
  pwVar9 = L"";
  if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xd13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMassEntitySettings *)(*pcVar1)();
      return pUVar5;
    }
  }
  UEnum::GetDisplayNameTextByValue(pUVar7,&local_28,0);
  pFVar6 = FText::ToString(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar8);
  this->ProcessingPhasesConfig[0].PhaseName = local_res8;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pUVar7 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
  if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntity();
    pUVar7 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar4,
                           L"EMassProcessingPhase");
    Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar7;
    if (pUVar7 == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMassEntitySettings *)(*pcVar1)();
        return pUVar5;
      }
    }
  }
  UEnum::GetDisplayNameTextByValue(pUVar7,&local_28,1);
  pFVar6 = FText::ToString(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar8);
  this->ProcessingPhasesConfig[1].PhaseName = local_res8;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pUVar7 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
  if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntity();
    pUVar7 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar4,
                           L"EMassProcessingPhase");
    Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar7;
    if (pUVar7 == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMassEntitySettings *)(*pcVar1)();
        return pUVar5;
      }
    }
  }
  UEnum::GetDisplayNameTextByValue(pUVar7,&local_28,2);
  pFVar6 = FText::ToString(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar8);
  this->ProcessingPhasesConfig[2].PhaseName = local_res8;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pUVar7 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
  if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntity();
    pUVar7 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar4,
                           L"EMassProcessingPhase");
    Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar7;
    if (pUVar7 == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMassEntitySettings *)(*pcVar1)();
        return pUVar5;
      }
    }
  }
  UEnum::GetDisplayNameTextByValue(pUVar7,&local_28,3);
  pFVar6 = FText::ToString(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar8);
  this->ProcessingPhasesConfig[3].PhaseName = local_res8;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pUVar7 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
  if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntity();
    pUVar7 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar4,
                           L"EMassProcessingPhase");
    Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar7;
    if (pUVar7 == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMassEntitySettings *)(*pcVar1)();
        return pUVar5;
      }
    }
  }
  UEnum::GetDisplayNameTextByValue(pUVar7,&local_28,4);
  pFVar6 = FText::ToString(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar8);
  this->ProcessingPhasesConfig[4].PhaseName = local_res8;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pUVar7 = Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
  if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntity();
    pUVar7 = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar4,
                           L"EMassProcessingPhase");
    Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = pUVar7;
    if (pUVar7 == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMassEntitySettings *)(*pcVar1)();
        return pUVar5;
      }
    }
  }
  UEnum::GetDisplayNameTextByValue(pUVar7,&local_28,5);
  pFVar6 = FText::ToString(&local_28);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar9);
  this->ProcessingPhasesConfig[5].PhaseName = local_res8;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMassEntitySettings>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(UMassEntitySettings *)&stack0x00000018,
             (pmf_6b6b2b61)this);
  TMulticastDelegateRegistration<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
  ::AddUObject<UMassEntitySettings>
            ((TMulticastDelegateRegistration<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
              *)&FCoreUObjectDelegates::CompiledInUObjectsRemovedDelegate,
             (UMassEntitySettings *)&stack0x00000020,(pmf_0ebc3131)this);
  return this;
}

// ~UMassEntitySettings @ 1471e0d00

void __thiscall UMassEntitySettings::~UMassEntitySettings(UMassEntitySettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMassEntitySettings__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInitializedEvent).field_0x8,*(int *)&(this->OnInitializedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnInitializedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInitializedEvent);
  pFVar2 = (this->ProcessorCDOs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ProcessingPhasesConfig[5].ProcessorCDOs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ProcessingPhasesConfig[4].ProcessorCDOs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ProcessingPhasesConfig[3].ProcessorCDOs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ProcessingPhasesConfig[2].ProcessorCDOs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ProcessingPhasesConfig[1].ProcessorCDOs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ProcessingPhasesConfig[0].ProcessorCDOs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DumpDependencyGraphFileName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UMassModuleSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1471e2e60

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
`UMassEntitySettings::BuildProcessorList'::__l2::<lambda_1>::operator()
          (void *this,UMassProcessor *param_1,UMassProcessor *param_2)

{
  int iVar1;
  ForAnyElementType _Str1;
  ForAnyElementType _Str2;
  ForAnyElementType FVar2;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res10,&local_18);
  local_res10[0] = (FName)param_2->_padding_;
  ::FName::ToString(local_res10,&local_28);
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  _Str2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    _Str2.Data = local_28.Data.AllocatorInstance.Data;
  }
  _Str1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    _Str1.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar1 = wcscmp((wchar_t *)_Str1.Data,(wchar_t *)_Str2.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// AddToActiveProcessorsList @ 1471f0290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMassEntitySettings::AddToActiveProcessorsList
          (UMassEntitySettings *this,TSubclassOf<UMassProcessor> param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UMassProcessor *pUVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 auStack_588 [32];
  FScriptContainerElement *local_568;
  FScriptContainerElement *local_560;
  longlong local_558;
  longlong local_550;
  undefined8 local_548;
  undefined1 local_538 [8];
  UMassProcessor *local_530;
  UMassProcessor *local_528;
  FName local_520;
  FName local_518;
  FName local_510;
  FName local_508;
  UMassProcessor **local_500;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_588;
  lVar12 = *(longlong *)param_1.Class.field0_0x0;
  pUVar10 = (UClass *)0x0;
  pUVar9 = pUVar10;
  if ((lVar12 != 0) && (pUVar8 = UMassProcessor::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar12 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar9 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  local_530 = GetMutableDefault<UMassProcessor>(pUVar9);
  if (local_530 != (UMassProcessor *)0x0) {
    lVar12 = *(longlong *)param_1.Class.field0_0x0;
    pUVar9 = pUVar10;
    if ((lVar12 != 0) && (pUVar8 = UMassProcessor::StaticClass(), pUVar8 != (UClass *)0x0)) {
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar12 + 0x38) < iVar7) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        pUVar9 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    pUVar8 = UMassCompositeProcessor::StaticClass();
    if (pUVar9 == pUVar8) {
      if (FVisualLogger::bIsRecording != 0) {
        local_4b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4b8,"UMassEntitySettings::AddToActiveProcessorsList",0x2e,Yes);
        local_568 = (FScriptContainerElement *)local_4b8.Ptr;
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogMass.field_0x4,Log,
                   L"%s adding MassCompositeProcessor to the global processor list is unsupported");
        if ((void *)local_4b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4b8._padding_);
        }
      }
      if (4 < (byte)LogMass._0_1_) {
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UMassEntitySettings::AddToActiveProcessorsList",0x2e,Yes);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
    }
    else {
      lVar12 = *(longlong *)param_1.Class.field0_0x0;
      pUVar9 = pUVar10;
      if ((lVar12 != 0) && (pUVar8 = UMassProcessor::StaticClass(), pUVar8 != (UClass *)0x0)) {
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar12 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar9 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      pUVar5 = local_530;
      if ((pUVar9->ClassFlags & CLASS_Abstract) == CLASS_None) {
        pTVar2 = &this->ProcessorCDOs;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_530 != (UMassProcessor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_530);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)(this->ProcessorCDOs).ArrayNum * 8;
            pFVar11 = pFVar11 + 8) {
          if (*(UMassProcessor **)pFVar11 == pUVar5) {
            if ((int)((longlong)pFVar11 - (longlong)pFVar3 >> 3) != -1) {
              if (FVisualLogger::bIsRecording != 0) {
                local_510 = (FName)local_530->_padding_;
                ::FName::ToString(&local_510,&local_4d8);
                local_568 = (FScriptContainerElement *)L"";
                if (local_4d8.Data.ArrayNum != 0) {
                  local_568 = local_4d8.Data.AllocatorInstance.Data;
                }
                FVisualLogger::CategorizedLogfImpl
                          ((UObject *)this,(FName *)&LogMass.field_0x4,Log,
                           L"%s already in global processor list");
                if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
                }
              }
              if ((byte)LogMass._0_1_ < 5) {
                return;
              }
              local_508 = (FName)local_530->_padding_;
              ::FName::ToString(&local_508,&local_4c8);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
              if (local_4c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return;
              }
              FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
              return;
            }
            break;
          }
        }
        if (local_530->bAutoRegisterWithProcessingPhases != 0) {
          local_500 = &local_530;
          `UMassEntitySettings::AddToActiveProcessorsList'::__l81::<lambda_1>::operator()
                    (&local_500);
        }
        local_528 = local_530;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_530 != (UMassProcessor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_530);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_528) &&
           (lVar12 = (longlong)(this->ProcessorCDOs).ArrayMax,
           (FScriptContainerElement *)&local_528 < pFVar3 + lVar12 * 8)) {
          local_550 = (longlong)(this->ProcessorCDOs).ArrayNum;
          local_548 = 8;
          local_568 = (FScriptContainerElement *)&local_528;
          local_560 = pFVar3;
          local_558 = lVar12;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = (this->ProcessorCDOs).ArrayNum;
        piVar1 = &(this->ProcessorCDOs).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ProcessorCDOs).ArrayNum = iVar7 + 1;
        *(UMassProcessor **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_528;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_528 != (UMassProcessor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_528);
        }
        pUVar5 = local_530;
        if (((local_530->_padding_ & 0x10) != 0) ||
           (bVar6 = `UMassProcessor::SetShouldAutoRegisterWithGlobalList'::__l3::<lambda_1>::
                    operator()(local_538), bVar6)) {
          pUVar5->bAutoRegisterWithProcessingPhases = '\x01';
        }
      }
      else {
        if (FVisualLogger::bIsRecording != 0) {
          lVar12 = *(longlong *)param_1.Class.field0_0x0;
          pUVar9 = pUVar10;
          if ((lVar12 != 0) && (pUVar8 = UMassProcessor::StaticClass(), pUVar8 != (UClass *)0x0)) {
            iVar7 = (int)pUVar8->_padding_;
            if ((*(int *)(lVar12 + 0x38) < iVar7) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar8->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pUVar9 = *(UClass **)param_1.Class.field0_0x0;
            }
          }
          local_520 = (FName)pUVar9->_padding_;
          ::FName::ToString(&local_520,&local_4f8);
          local_278._padding_ = 0;
          local_560 = (FScriptContainerElement *)L"";
          if (local_4f8.Data.ArrayNum != 0) {
            local_560 = local_4f8.Data.AllocatorInstance.Data;
          }
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UMassEntitySettings::AddToActiveProcessorsList",0x2e,Yes);
          local_568 = (FScriptContainerElement *)local_278.Ptr;
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this,(FName *)&LogMass.field_0x4,Log,
                     L"%s unable to add %s due to it being an abstract class");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
          if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
          }
        }
        if (4 < (byte)LogMass._0_1_) {
          lVar12 = *(longlong *)param_1.Class.field0_0x0;
          if ((lVar12 != 0) && (pUVar9 = UMassProcessor::StaticClass(), pUVar9 != (UClass *)0x0)) {
            iVar7 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar12 + 0x38) < iVar7) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar9->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pUVar10 = *(UClass **)param_1.Class.field0_0x0;
            }
          }
          local_518 = (FName)pUVar10->_padding_;
          ::FName::ToString(&local_518,&local_4e8);
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UMassEntitySettings::AddToActiveProcessorsList",0x2e,Yes);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// BeginDestroy @ 1471fb000

void __thiscall UMassEntitySettings::BeginDestroy(UMassEntitySettings *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::CompiledInUObjectsRemovedDelegate,this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BuildPhases @ 1471fe740

void __thiscall UMassEntitySettings::BuildPhases(UMassEntitySettings *this)

{
  return;
}

// BuildProcessorList @ 1471fe750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UMassEntitySettings::BuildProcessorList(UMassEntitySettings *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *pTVar3;
  UObject *pUVar4;
  longlong lVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  FUObjectItem *this_00;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  FUObjectCppClassStaticFunctions local_res18;
  TObjectPtr<UObject>_u_0 local_58;
  TObjectPtr<UObject>_u_0 local_50;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_48;
  
  pTVar3 = &this->ProcessorCDOs;
  piVar1 = &(this->ProcessorCDOs).ArrayMax;
  (this->ProcessorCDOs).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  if (this->ProcessingPhasesConfig != (FMassProcessingPhaseConfig *)&this->ProcessorCDOs) {
    piVar15 = &this->ProcessingPhasesConfig[0].ProcessorCDOs.ArrayMax;
    do {
      piVar15[-1] = 0;
      if (*piVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar15 + -3),0,piVar15);
      }
      puVar2 = (undefined1 *)(piVar15 + 1);
      piVar15 = piVar15 + 8;
    } while ((TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)puVar2 !=
             &this->ProcessorCDOs);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pUVar13 = UMassProcessor::StaticClass();
  GetDerivedClasses(pUVar13,&local_48,true);
  iVar16 = local_48.ArrayNum + -1;
  if (-1 < iVar16) {
    lVar17 = (longlong)iVar16 * 8;
    do {
      if ((local_48.ArrayNum <= iVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(byte *)(*(longlong *)(local_48.AllocatorInstance.Data + lVar17) + 0xd4) & 1) == 0) {
        if ((local_48.ArrayNum <= iVar16) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar13 = *(UClass **)(local_48.AllocatorInstance.Data + lVar17);
        if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar13);
        }
        pUVar4 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar14 = UMassProcessor::StaticClass();
        lVar5 = *(longlong *)&pUVar4->field_0x10;
        iVar12 = (int)pUVar14->_padding_;
        if (((*(int *)(lVar5 + 0x38) < iVar12) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 8) !=
             &pUVar14->_padding_)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0x1479,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar13);
        }
        TVar6 = (TObjectPtr<UObject>_u_0)(pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
        if (TVar6.DebugPtr != (UObject *)0x0) {
          if ((local_48.ArrayNum <= iVar16) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar9.Data = local_48.AllocatorInstance.Data;
          if (Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton == (UClass *)0x0) {
            local_res18.AddReferencedObjects = UObject::AddReferencedObjects;
            GetPrivateStaticClassBody
                      (L"/Script/MassEntity",L"MassCompositeProcessor",
                       &Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton,
                       UMassCompositeProcessor::StaticRegisterNativesUMassCompositeProcessor,0x128,8
                       ,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
                       InternalConstructor<UMassCompositeProcessor>,
                       InternalVTableHelperCtorCaller<UMassCompositeProcessor>,&local_res18,
                       UMassProcessor::StaticClass,UObject::StaticClass);
          }
          if (*(UClass **)(FVar9.Data + lVar17) !=
              Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton) {
            if (((*(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex) &&
                (GUObjectArray.ObjLastNonGCIndex < *(int *)&(TVar6.DebugPtr)->field_0xc)) &&
               ((*(uint *)&(TVar6.DebugPtr)->field_0x8 >> 7 & 1) == 0)) {
              this_00 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,*(int *)&(TVar6.DebugPtr)->field_0xc);
              FUObjectItem::SetRootFlags(this_00,RootSet);
            }
            local_58 = TVar6;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(TVar6.DebugPtr);
            }
            pTVar7 = (TObjectPtr<UObject>_u_0 *)(pTVar3->AllocatorInstance).Data;
            if (((pTVar7 <= &local_58) && (&local_58 < pTVar7 + *piVar1)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = (this->ProcessorCDOs).ArrayNum;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->ProcessorCDOs).ArrayNum = iVar12 + 1;
            ((TObjectPtr<UObject>_u_0 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8))->
            DebugPtr = (UObject *)local_58;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_58.DebugPtr != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_58.DebugPtr);
            }
            if ((TVar6.DebugPtr[2].field_0x12 & 1) != 0) {
              bVar11 = (**(code **)(*(longlong *)TVar6.DebugPtr + 0x2d0))(TVar6.DebugPtr);
              local_50 = TVar6;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(TVar6.DebugPtr);
              }
              pTVar7 = (TObjectPtr<UObject>_u_0 *)
                       this->ProcessingPhasesConfig[bVar11].ProcessorCDOs.AllocatorInstance.Data;
              if (((pTVar7 <= &local_50) &&
                  (&local_50 < pTVar7 + this->ProcessingPhasesConfig[bVar11].ProcessorCDOs.ArrayMax)
                  ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar12 = this->ProcessingPhasesConfig[bVar11].ProcessorCDOs.ArrayNum;
              piVar15 = &this->ProcessingPhasesConfig[bVar11].ProcessorCDOs.ArrayMax;
              if (iVar12 == *piVar15) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&this->ProcessingPhasesConfig[bVar11].ProcessorCDOs.
                                           AllocatorInstance,piVar15);
              }
              this->ProcessingPhasesConfig[bVar11].ProcessorCDOs.ArrayNum = iVar12 + 1;
              ((TObjectPtr<UObject>_u_0 *)
              (this->ProcessingPhasesConfig[bVar11].ProcessorCDOs.AllocatorInstance.Data +
              (longlong)iVar12 * 8))->DebugPtr = (UObject *)local_50;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_50.DebugPtr != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_50.DebugPtr);
              }
            }
          }
        }
      }
      lVar17 = lVar17 + -8;
      iVar16 = iVar16 + -1;
    } while (-1 < iVar16);
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<TObjectPtr<UMassProcessor>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMassProcessor>,_UMassEntitySettings::BuildProcessorList_::__l2::<lambda_1>_>_>
            ((TObjectPtr<UMassProcessor> *)(pTVar3->AllocatorInstance).Data,
             (this->ProcessorCDOs).ArrayNum,local_res8,(<lambda_1> *)local_res10);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// BuildProcessorListAndPhases @ 1471feca0

void __thiscall UMassEntitySettings::BuildProcessorListAndPhases(UMassEntitySettings *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_28;
  
  if ((this->bInitialized != true) && (this->bEngineInitialized != false)) {
    BuildProcessorList(this);
    this->bInitialized = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnInitializedEvent,
               (FWriteAccessScope *)&local_28);
    puVar1 = &(this->OnInitializedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->OnInitializedEvent).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->OnInitializedEvent).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnInitializedEvent).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->OnInitializedEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnInitializedEvent,
                 false);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// GetPrivateStaticClass @ 147224790

UClass * __cdecl UMassEntitySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassEntitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassEntitySettings",
               &Z_Registration_Info_UClass_UMassEntitySettings.InnerSingleton,
               StaticRegisterNativesUMassEntitySettings,0x138,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassEntitySettings>,
               InternalVTableHelperCtorCaller<UMassEntitySettings>,local_res8,
               UMassModuleSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassEntitySettings.InnerSingleton;
}

// GetProcessingPhasesConfig @ 147225260

TArrayView<FMassProcessingPhaseConfig_const_,int> * __thiscall
UMassEntitySettings::GetProcessingPhasesConfig
          (UMassEntitySettings *this,
          TArrayView<FMassProcessingPhaseConfig_const_,int> *__return_storage_ptr__)

{
  BuildProcessorListAndPhases(this);
  __return_storage_ptr__->ArrayNum = 6;
  __return_storage_ptr__->DataPtr = this->ProcessingPhasesConfig;
  return __return_storage_ptr__;
}

// OnModulePackagesUnloaded @ 147237ae0

void __thiscall
UMassEntitySettings::OnModulePackagesUnloaded
          (UMassEntitySettings *this,TArrayView<UPackage_*_const,int> *param_1)

{
  undefined4 *puVar1;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *pTVar2;
  UPackage **ppUVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UPackage *pUVar10;
  UPackage **ppUVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  int *piVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  UObject *local_38 [2];
  
  piVar15 = &(this->ProcessorCDOs).ArrayNum;
  iVar4 = *piVar15;
  pTVar2 = &this->ProcessorCDOs;
  pFVar18 = (pTVar2->AllocatorInstance).Data;
  pFVar17 = pFVar18 + (longlong)iVar4 * 8;
  pFVar13 = pFVar18;
LAB_147237b20:
  do {
    if (pFVar13 == pFVar17) {
LAB_147237bb9:
      iVar9 = (this->ProcessorCDOs).ArrayNum;
      uVar14 = (longlong)pFVar13 - (longlong)pFVar18 >> 3;
      uVar12 = (uint)uVar14;
      if (iVar9 < (int)uVar12) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar12 - iVar9,&pTVar2->AllocatorInstance,piVar15,
                           &(this->ProcessorCDOs).ArrayMax);
        memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,0,
               (longlong)(int)(uVar12 - iVar9) << 3);
      }
      else {
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar14 & 0xffffffff);
        }
        if ((int)uVar12 < iVar9) {
          uVar16 = iVar9 - uVar12;
          if (((int)(uVar16 | uVar12) < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar16 != 0) {
            pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 8;
            iVar9 = ((this->ProcessorCDOs).ArrayNum - uVar16) - uVar12;
            if (iVar9 != 0) {
              memmove(pFVar17,pFVar17 + (longlong)(int)uVar16 * 8,(longlong)iVar9 << 3);
            }
            iVar9 = (this->ProcessorCDOs).ArrayNum - uVar16;
            (this->ProcessorCDOs).ArrayNum = iVar9;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&pTVar2->AllocatorInstance,iVar9,&(this->ProcessorCDOs).ArrayMax);
          }
        }
      }
      if ((this->ProcessorCDOs).ArrayNum != iVar4) {
        if (this->ProcessingPhasesConfig != (FMassProcessingPhaseConfig *)&this->ProcessorCDOs) {
          piVar15 = &this->ProcessingPhasesConfig[0].ProcessorCDOs.ArrayNum;
          do {
            *piVar15 = 0;
            if (piVar15[1] < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,(ForAnyElementType *)(piVar15 + -2),0,piVar15 + 1);
            }
            puVar1 = piVar15 + 2;
            piVar15 = piVar15 + 8;
          } while ((TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)puVar1 !=
                   &this->ProcessorCDOs);
        }
        pFVar18 = (this->ProcessorCDOs).AllocatorInstance.Data;
        iVar4 = (this->ProcessorCDOs).ArrayNum;
        pFVar17 = pFVar18 + (longlong)iVar4 * 8;
        while( true ) {
          if ((this->ProcessorCDOs).ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UMassProcessor>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar18 == pFVar17) break;
          local_38[0] = *(UObject **)pFVar18;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_38[0] != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_38[0]);
          }
          if ((local_38[0][2].field_0x12 & 1) != 0) {
            bVar6 = (**(code **)(*(longlong *)local_38[0] + 0x2d0))();
            pFVar13 = this->ProcessingPhasesConfig[bVar6].ProcessorCDOs.AllocatorInstance.Data;
            if (((pFVar13 <= (FScriptContainerElement *)local_38) &&
                ((FScriptContainerElement *)local_38 <
                 pFVar13 + (longlong)this->ProcessingPhasesConfig[bVar6].ProcessorCDOs.ArrayMax * 8)
                ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = this->ProcessingPhasesConfig[bVar6].ProcessorCDOs.ArrayNum;
            piVar15 = &this->ProcessingPhasesConfig[bVar6].ProcessorCDOs.ArrayMax;
            if (iVar9 == *piVar15) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&this->ProcessingPhasesConfig[bVar6].ProcessorCDOs.
                                        AllocatorInstance,piVar15);
            }
            this->ProcessingPhasesConfig[bVar6].ProcessorCDOs.ArrayNum = iVar9 + 1;
            *(UObject **)
             (this->ProcessingPhasesConfig[bVar6].ProcessorCDOs.AllocatorInstance.Data +
             (longlong)iVar9 * 8) = local_38[0];
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_38[0] != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_38[0]);
            }
          }
          pFVar18 = pFVar18 + 8;
        }
      }
      return;
    }
    if (*(UObjectBaseUtility **)pFVar13 == (UObjectBaseUtility *)0x0) {
LAB_147237b60:
      while (pFVar17 = pFVar17 + -8, pFVar13 != pFVar17) {
        if (*(UObjectBaseUtility **)pFVar17 != (UObjectBaseUtility *)0x0) {
          pUVar10 = UObjectBaseUtility::GetPackage(*(UObjectBaseUtility **)pFVar17);
          ppUVar11 = param_1->DataPtr;
          ppUVar3 = ppUVar11 + param_1->ArrayNum;
          while( true ) {
            if (ppUVar11 == ppUVar3) {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (*(UObject **)pFVar17 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(*(UObject **)pFVar17);
              }
              *(undefined8 *)pFVar13 = *(undefined8 *)pFVar17;
              pFVar13 = pFVar13 + 8;
              goto LAB_147237b20;
            }
            if (*ppUVar11 == pUVar10) break;
            ppUVar11 = ppUVar11 + 1;
          }
        }
      }
      goto LAB_147237bb9;
    }
    pUVar10 = UObjectBaseUtility::GetPackage(*(UObjectBaseUtility **)pFVar13);
    ppUVar11 = param_1->DataPtr;
    ppUVar3 = ppUVar11 + param_1->ArrayNum;
    for (; ppUVar11 != ppUVar3; ppUVar11 = ppUVar11 + 1) {
      if (*ppUVar11 == pUVar10) goto LAB_147237b60;
    }
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// OnPostEngineInit @ 147238f80

void __thiscall UMassEntitySettings::OnPostEngineInit(UMassEntitySettings *this)

{
  this->bEngineInitialized = true;
  BuildProcessorListAndPhases(this);
  return;
}

// PostInitProperties @ 14723ca50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMassEntitySettings::PostInitProperties(UMassEntitySettings *this)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  UClass *this_00;
  undefined1 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  longlong local_res10;
  UMassEntitySettings *local_res18 [2];
  longlong *local_28;
  UMassEntitySettings **local_20;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x10) != 0) && ((*(byte *)(this->_padding_ + 0xd4) & 1) == 0)) {
    this_00 = UMassSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((this->_padding_ & 0x10) == 0) {
      `UMassSettings::RegisterModuleSettings'::__l2::<lambda_1>::operator()(local_res8);
    }
    local_res10 = *(longlong *)(this->_padding_ + 0x18);
    local_res18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    lVar6 = local_res10;
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)local_res10);
    uVar2 = uVar2 + (int)((ulonglong)lVar6 >> 0x20);
    if (*(int *)&pUVar1[1].field_0x18 != *(int *)&pUVar1[2].field_0x1c) {
      puVar4 = *(undefined1 **)(pUVar1 + 3);
      if (*(undefined1 **)(pUVar1 + 3) == (undefined1 *)0x0) {
        puVar4 = &pUVar1[2].field_0x20;
      }
      iVar7 = *(int *)(puVar4 + (ulonglong)(*(int *)&pUVar1[3].field_0x8 - 1U & uVar2) * 4);
      if (iVar7 != -1) {
        do {
          lVar6 = *(longlong *)&pUVar1[1].field_0x10 + (longlong)iVar7 * 0x18;
          if (*(longlong *)(*(longlong *)&pUVar1[1].field_0x10 + (longlong)iVar7 * 0x18) ==
              local_res10) {
            if (lVar6 != 0) goto LAB_14723cb96;
            break;
          }
          iVar7 = *(int *)(lVar6 + 0x10);
        } while (iVar7 != -1);
      }
    }
    local_28 = &local_res10;
    local_20 = local_res18;
    TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&>_>
              ((TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
                *)&pUVar1[1].field_0x10,(uint)local_res8,
               (TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&> *)
               (ulonglong)uVar2,(bool *)&local_28);
    lVar6 = *(longlong *)&pUVar1[1].field_0x10 + (longlong)local_res8[0] * 0x18;
LAB_14723cb96:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UMassEntitySettings **)(lVar6 + 8) = this;
  }
  uVar2 = this->ChunkMemorySize;
  uVar3 = 0x80000;
  if (uVar2 < 0x80000) {
    uVar3 = uVar2;
  }
  uVar5 = 0x400;
  if (0x400 < uVar3) {
    uVar5 = uVar3;
  }
  if ((2 < (byte)LogMass._0_1_) && (uVar5 != uVar2)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
  }
  this->ChunkMemorySize = uVar5;
  return;
}

// StaticRegisterNativesUMassEntitySettings @ 147250700

void __cdecl UMassEntitySettings::StaticRegisterNativesUMassEntitySettings(void)

{
  return;
}

// operator() @ 1505053d0

bool __thiscall
`UMassEntitySettings::AddToActiveProcessorsList'::__l81::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4647778415322071232>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4647778415322071232>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150505448;
    }
  }
  bVar2 = false;
LAB_150505448:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

