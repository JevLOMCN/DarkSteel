// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149ffac10

EAutomationTestFlags __thiscall
FPCGSanityCheckPointData_MinPointCount::GetTestFlags(FPCGSanityCheckPointData_MinPointCount *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149ffac20

bool __thiscall
FPCGSanityCheckPointData_MinPointCount::IsStressTest(FPCGSanityCheckPointData_MinPointCount *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149ffac30

uint __thiscall
FPCGSanityCheckPointData_MinPointCount::GetRequiredDeviceNum
          (FPCGSanityCheckPointData_MinPointCount *this)

{
  return 1;
}

// GetTestSourceFileName @ 149ffac40

FString * __thiscall
FPCGSanityCheckPointData_MinPointCount::GetTestSourceFileName
          (FPCGSanityCheckPointData_MinPointCount *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSanityCheckPointDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149ffac70

int __thiscall
FPCGSanityCheckPointData_MinPointCount::GetTestSourceFileLine
          (FPCGSanityCheckPointData_MinPointCount *this)

{
  return 0xe;
}

// GetTests @ 149ffac80

/* WARNING: Removing unreachable block (ram,0x000149ffad6d) */
/* WARNING: Removing unreachable block (ram,0x000149ffae38) */

void __thiscall
FPCGSanityCheckPointData_MinPointCount::GetTests
          (FPCGSanityCheckPointData_MinPointCount *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.SanityCheckPointData.MinPointCount");
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

// RunTest @ 149ffae60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGSanityCheckPointData_MinPointCount::RunTest
          (FPCGSanityCheckPointData_MinPointCount *this,FString *param_1)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGSanityCheckPointDataSettings *pUVar7;
  longlong lVar8;
  UPCGPointArrayData *pUVar9;
  FString *pFVar10;
  FPCGDataPtrWrapper *this_00;
  FPCGContext *local_res18;
  FTestData local_e8;
  TSharedPtr<IPCGElement,1> local_58;
  FString local_48;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_38;
  
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_e8.Seed = 0x2a;
  local_e8.InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InputData.TaggedData.ArrayNum = 0;
  local_e8.InputData.TaggedData.ArrayMax = 0;
  local_e8.InputData.bCancelExecutionOnEmpty = false;
  local_e8.InputData.bCancelExecution = false;
  local_e8.InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.InputData.DataCrcs.ArrayNum = 0;
  local_e8.InputData.DataCrcs.ArrayMax = 0;
  local_e8.InputData.InactiveOutputPinBitmask = 0;
  local_e8.OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.OutputData.TaggedData.ArrayNum = 0;
  local_e8.OutputData.TaggedData.ArrayMax = 0;
  local_e8.OutputData.bCancelExecutionOnEmpty = false;
  local_e8.OutputData.bCancelExecution = false;
  local_e8.OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.OutputData.DataCrcs.ArrayNum = 0;
  local_e8.OutputData.DataCrcs.ArrayMax = 0;
  local_e8.OutputData.InactiveOutputPinBitmask = 0;
  local_e8.TestActor = (AActor *)0x0;
  local_e8.TestPCGComponent = (UPCGComponent *)0x0;
  local_e8.Settings = (UPCGSettings *)0x0;
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_e8.RandomStream.InitialSeed = 0x2a;
  local_e8.RandomStream.Seed = 0x2a;
  PCGTestsCommon::GenerateSettings<UPCGSanityCheckPointDataSettings>(&local_e8,&local_38);
  pUVar7 = CastChecked<UPCGSanityCheckPointDataSettings,UPCGSettings>(local_e8.Settings);
  pUVar7->MinPointCount = 10;
  pUVar7->MaxPointCount = 100;
  UPCGSettings::GetElement(local_e8.Settings,&local_58);
  pTVar2 = CVarPCGEnablePointArrayData.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 1;
    if (!bVar3) goto LAB_149ffaf57;
  }
  lVar8 = 0;
LAB_149ffaf57:
  if (pTVar2->ShadowedValue[lVar8] == false) {
    pUVar9 = (UPCGPointArrayData *)
             PCGTestsCommon::CreateRandomPointData<UPCGPointData,0>(2,0x2a,false);
  }
  else {
    pUVar9 = PCGTestsCommon::CreateRandomPointData<UPCGPointArrayData,0>(2,0x2a,false);
  }
  iVar5 = local_e8.InputData.TaggedData.ArrayNum;
  if (local_e8.InputData.TaggedData.ArrayNum == local_e8.InputData.TaggedData.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&local_e8.InputData,
                       &local_e8.InputData.TaggedData.ArrayMax);
  }
  local_e8.InputData.TaggedData.ArrayNum = iVar5 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            (local_e8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar5 * 0x78);
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
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar9);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_e8,(UPCGNode *)&local_res18);
  pFVar10 = ::FString::FString(&local_48,L"Expected at least 10 Points, found 2");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar10,Contains,1,true);
  do {
    if (local_58.Object == (IPCGElement *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    bVar3 = IPCGElement::Execute(local_58.Object,local_res18);
  } while (!bVar3);
  if (local_res18 != (FPCGContext *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_e8.OutputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.OutputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_e8.OutputData.TaggedData.AllocatorInstance.Data,
             local_e8.OutputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_e8.OutputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_e8.OutputData.TaggedData.AllocatorInstance.Data);
  }
  if (local_e8.InputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.InputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_e8.InputData.TaggedData.AllocatorInstance.Data,
             local_e8.InputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_e8.InputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_e8.InputData.TaggedData.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 149ffb130

FString * __thiscall
FPCGSanityCheckPointData_MinPointCount::GetBeautifiedTestName
          (FPCGSanityCheckPointData_MinPointCount *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.SanityCheckPointData.MinPointCount");
  return __return_storage_ptr__;
}

