// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149ffb740

EAutomationTestFlags __thiscall
FPCGSanityCheckPointData_Success::GetTestFlags(FPCGSanityCheckPointData_Success *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149ffb750

bool __thiscall
FPCGSanityCheckPointData_Success::IsStressTest(FPCGSanityCheckPointData_Success *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149ffb760

uint __thiscall
FPCGSanityCheckPointData_Success::GetRequiredDeviceNum(FPCGSanityCheckPointData_Success *this)

{
  return 1;
}

// GetTestSourceFileName @ 149ffb770

FString * __thiscall
FPCGSanityCheckPointData_Success::GetTestSourceFileName
          (FPCGSanityCheckPointData_Success *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSanityCheckPointDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149ffb7a0

int __thiscall
FPCGSanityCheckPointData_Success::GetTestSourceFileLine(FPCGSanityCheckPointData_Success *this)

{
  return 0x46;
}

// GetTests @ 149ffb7b0

/* WARNING: Removing unreachable block (ram,0x000149ffb89d) */
/* WARNING: Removing unreachable block (ram,0x000149ffb968) */

void __thiscall
FPCGSanityCheckPointData_Success::GetTests
          (FPCGSanityCheckPointData_Success *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.SanityCheckPointData.Success");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 149ffb990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGSanityCheckPointData_Success::RunTest(FPCGSanityCheckPointData_Success *this,FString *param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UPCGSanityCheckPointDataSettings *pUVar8;
  longlong lVar9;
  UPCGPointArrayData *pUVar10;
  UPCGGraph *this_00;
  FPCGDataPtrWrapper *this_01;
  ForAnyElementType FVar11;
  FPCGContext *local_res18;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_128;
  FTestData local_118;
  FString local_88;
  FString local_78;
  TSharedPtr<IPCGElement,1> local_68;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_58;
  
  pUVar7 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_118.Seed = 0x2a;
  local_118.InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.InputData.TaggedData.ArrayNum = 0;
  local_118.InputData.TaggedData.ArrayMax = 0;
  local_118.InputData.bCancelExecutionOnEmpty = false;
  local_118.InputData.bCancelExecution = false;
  local_118.InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.InputData.DataCrcs.ArrayNum = 0;
  local_118.InputData.DataCrcs.ArrayMax = 0;
  local_118.InputData.InactiveOutputPinBitmask = 0;
  local_118.OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.OutputData.TaggedData.ArrayNum = 0;
  local_118.OutputData.TaggedData.ArrayMax = 0;
  local_118.OutputData.bCancelExecutionOnEmpty = false;
  local_118.OutputData.bCancelExecution = false;
  local_118.OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.OutputData.DataCrcs.ArrayNum = 0;
  local_118.OutputData.DataCrcs.ArrayMax = 0;
  local_118.OutputData.InactiveOutputPinBitmask = 0;
  local_118.TestActor = (AActor *)0x0;
  local_118.TestPCGComponent = (UPCGComponent *)0x0;
  local_118.Settings = (UPCGSettings *)0x0;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  local_118.RandomStream.InitialSeed = 0x2a;
  local_118.RandomStream.Seed = 0x2a;
  PCGTestsCommon::GenerateSettings<UPCGSanityCheckPointDataSettings>(&local_118,&local_58);
  pUVar8 = CastChecked<UPCGSanityCheckPointDataSettings,UPCGSettings>(local_118.Settings);
  pUVar8->MinPointCount = 10;
  pUVar8->MaxPointCount = 100;
  UPCGSettings::GetElement(local_118.Settings,&local_68);
  pTVar3 = CVarPCGEnablePointArrayData.Ref;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_149ffba8a:
    lVar9 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    lVar9 = 1;
    if (bVar4) goto LAB_149ffba8a;
  }
  if (pTVar3->ShadowedValue[lVar9] == false) {
    pUVar10 = (UPCGPointArrayData *)
              PCGTestsCommon::CreateRandomPointData<UPCGPointData,0>(0x32,0x2a,false);
  }
  else {
    pUVar10 = PCGTestsCommon::CreateRandomPointData<UPCGPointArrayData,0>(0x32,0x2a,false);
  }
  iVar6 = local_118.InputData.TaggedData.ArrayNum;
  if (local_118.InputData.TaggedData.ArrayNum == local_118.InputData.TaggedData.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&local_118.InputData,
                       &local_118.InputData.TaggedData.ArrayMax);
  }
  local_118.InputData.TaggedData.ArrayNum = iVar6 + 1;
  this_01 = (FPCGDataPtrWrapper *)
            (local_118.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
  this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
  this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
  this_01[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)pUVar10);
  this_00 = UPCGComponent::GetGraph(local_118.TestPCGComponent);
  UPCGGraph::AddNode(this_00,(UPCGSettingsInterface *)pUVar8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_118,(UPCGNode *)&local_res18);
  do {
    if (local_68.Object == (IPCGElement *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    bVar4 = IPCGElement::Execute(local_68.Object,local_res18);
  } while (!bVar4);
  FPCGDataCollection::GetAllSpatialInputs(&local_res18->OutputData,&local_128);
  iVar6 = local_128.ArrayNum;
  ::FString::FString(&local_88,"Output count");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar11.Data = local_88.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar6,1)
  ;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if (local_128.ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pUVar1 = *(UPCGPointArrayData **)local_128.AllocatorInstance.Data;
    ::FString::FString(&local_78,"Data was forwarded");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar11.Data = local_78.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,pUVar1 == pUVar10);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      bVar4 = true;
      goto LAB_149ffbc9d;
    }
  }
  bVar4 = false;
LAB_149ffbc9d:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FPCGTaggedData *)local_128.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_res18 != (FPCGContext *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_118.OutputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.OutputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_118.OutputData.TaggedData.AllocatorInstance.Data,
             local_118.OutputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_118.OutputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_118.OutputData.TaggedData.AllocatorInstance.Data);
  }
  if (local_118.InputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.InputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_118.InputData.TaggedData.AllocatorInstance.Data,
             local_118.InputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_118.InputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_118.InputData.TaggedData.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 149ffbd50

FString * __thiscall
FPCGSanityCheckPointData_Success::GetBeautifiedTestName
          (FPCGSanityCheckPointData_Success *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.SanityCheckPointData.Success");
  return __return_storage_ptr__;
}

