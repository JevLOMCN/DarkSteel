// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FTestData @ 14a018de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTestData * __thiscall
PCGTestsCommon::FTestData::FTestData
          (FTestData *this,int param_1,UPCGSettings *param_2,TSubclassOf<AActor> param_3)

{
  this->Seed = param_1;
  (this->InputData).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputData).TaggedData.ArrayNum = 0;
  (this->InputData).TaggedData.ArrayMax = 0;
  (this->InputData).bCancelExecutionOnEmpty = false;
  (this->InputData).bCancelExecution = false;
  (this->InputData).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputData).DataCrcs.ArrayNum = 0;
  (this->InputData).DataCrcs.ArrayMax = 0;
  (this->InputData).InactiveOutputPinBitmask = 0;
  (this->OutputData).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputData).TaggedData.ArrayNum = 0;
  (this->OutputData).TaggedData.ArrayMax = 0;
  (this->OutputData).bCancelExecutionOnEmpty = false;
  (this->OutputData).bCancelExecution = false;
  (this->OutputData).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputData).DataCrcs.ArrayNum = 0;
  (this->OutputData).DataCrcs.ArrayMax = 0;
  (this->OutputData).InactiveOutputPinBitmask = 0;
  this->TestActor = (AActor *)0x0;
  this->TestPCGComponent = (UPCGComponent *)0x0;
  this->Settings = (UPCGSettings *)0x0;
  (this->RandomStream).InitialSeed = param_1;
  (this->RandomStream).Seed = param_1;
  return this;
}

// ~FTestData @ 14a0191c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall PCGTestsCommon::FTestData::~FTestData(FTestData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OutputData).DataCrcs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->OutputData).TaggedData.AllocatorInstance.Data,
             (this->OutputData).TaggedData.ArrayNum);
  pFVar1 = (this->OutputData).TaggedData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputData).DataCrcs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->InputData).TaggedData.AllocatorInstance.Data,
             (this->InputData).TaggedData.ArrayNum);
  pFVar1 = (this->InputData).TaggedData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// InitializeTestContext @ 14a01d0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> __thiscall
PCGTestsCommon::FTestData::InitializeTestContext(FTestData *this,UPCGNode *param_1)

{
  UPCGComponent *this_00;
  IPCGElement *pIVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> TVar4;
  TSharedPtr<IPCGElement,1> *pTVar5;
  UClass *pUVar6;
  FPCGContext *this_01;
  UPCGComponent *local_res8;
  FWeakObjectPtr local_58;
  void *pvStack_50;
  TSharedPtr<IPCGElement,1> local_48;
  FPCGDataCollection *local_38;
  FWeakObjectPtr local_30;
  void *pvStack_28;
  
  if (this->Settings == (UPCGSettings *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\PCGTestsCommon.cpp"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (FPCGContext *)(*pcVar2)();
      return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)TVar4.Ptr;
    }
  }
  this_00 = this->TestPCGComponent;
  pTVar5 = UPCGSettings::GetElement(this->Settings,&local_48);
  pIVar1 = pTVar5->Object;
  if (pIVar1 == (IPCGElement *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElement",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\PCGTestsCommon.cpp"
                       ,0x71,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (FPCGContext *)(*pcVar2)();
      return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)TVar4.Ptr;
    }
  }
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  if (this_00 == (UPCGComponent *)0x0) {
    pvStack_50 = (void *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister();
    pvStack_50 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar6);
    if (pvStack_50 != (void *)0x0) {
      local_res8 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res8);
    }
  }
  local_38 = &this->InputData;
  local_30 = local_58;
  pvStack_28 = pvStack_50;
  if (local_38 == (FPCGDataCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGElement.h"
                       ,0x6d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (FPCGContext *)(*pcVar2)();
      return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)TVar4.Ptr;
    }
  }
  this_01 = (FPCGContext *)(*pcVar2)(pIVar1);
  param_1->_padding_ = (longlong)this_01;
  FPCGContext::InitializeSettings(this_01,false);
  *(undefined4 *)(param_1->_padding_ + 0x90) = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)(FPCGContext *)param_1;
}

// Reset @ 14a020f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall PCGTestsCommon::FTestData::Reset(FTestData *this,UPCGSettings *param_1)

{
  int *piVar1;
  int *piVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  uint uVar8;
  FPCGDataPtrWrapper *this_00;
  uint uVar9;
  FName local_res8;
  
  (this->RandomStream).Seed = (this->RandomStream).InitialSeed;
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->InputData).TaggedData.AllocatorInstance.Data,
             (this->InputData).TaggedData.ArrayNum);
  piVar1 = &(this->InputData).TaggedData.ArrayMax;
  (this->InputData).TaggedData.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)&this->InputData,0,piVar1);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->OutputData).TaggedData.AllocatorInstance.Data,
             (this->OutputData).TaggedData.ArrayNum);
  piVar2 = &(this->OutputData).TaggedData.ArrayMax;
  (this->OutputData).TaggedData.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)&this->OutputData,0,piVar2);
  }
  this->Settings = param_1;
  if (param_1 != (UPCGSettings *)0x0) {
    iVar6 = (this->InputData).TaggedData.ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&this->InputData,piVar1);
    }
    (this->InputData).TaggedData.ArrayNum = iVar6 + 1;
    this_00 = (FPCGDataPtrWrapper *)
              ((this->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
    this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
    this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
    FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)param_1);
    pFVar7 = ::FName::FName(&local_res8,L"Settings");
    iVar6 = (this->InputData).TaggedData.ArrayNum;
    FVar3 = *pFVar7;
    uVar8 = iVar6 - 1;
    uVar9 = 0;
    if ((int)uVar8 < iVar6) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(FName *)((this->InputData).TaggedData.AllocatorInstance.Data +
              (longlong)(this->InputData).TaggedData.ArrayNum * 0x78 + -0x18) = FVar3;
  }
  return;
}

// SetCurrentGenerationTask @ 14a021430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall PCGTestsCommon::FTestData::SetCurrentGenerationTask(FTestData *this,ulong64 param_1)

{
  if (this->TestPCGComponent != (UPCGComponent *)0x0) {
    this->TestPCGComponent->CurrentGenerationTask = param_1;
  }
  return;
}

