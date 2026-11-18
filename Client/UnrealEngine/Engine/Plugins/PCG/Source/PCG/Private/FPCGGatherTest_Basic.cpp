// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fc38e0

EAutomationTestFlags __thiscall FPCGGatherTest_Basic::GetTestFlags(FPCGGatherTest_Basic *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fc38f0

bool __thiscall FPCGGatherTest_Basic::IsStressTest(FPCGGatherTest_Basic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fc3900

uint __thiscall FPCGGatherTest_Basic::GetRequiredDeviceNum(FPCGGatherTest_Basic *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fc3910

FString * __thiscall
FPCGGatherTest_Basic::GetTestSourceFileName
          (FPCGGatherTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGGatherTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fc3940

int __thiscall FPCGGatherTest_Basic::GetTestSourceFileLine(FPCGGatherTest_Basic *this)

{
  return 0xb;
}

// GetTests @ 149fc3950

/* WARNING: Removing unreachable block (ram,0x000149fc3a3d) */
/* WARNING: Removing unreachable block (ram,0x000149fc3b08) */

void __thiscall
FPCGGatherTest_Basic::GetTests
          (FPCGGatherTest_Basic *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Gather.Basic");
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

// RunTest @ 149fc3b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FPCGGatherTest_Basic::RunTest(FPCGGatherTest_Basic *this,FString *param_1)

{
  code *pcVar1;
  FPCGContext *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UPCGBasePointData *pUVar6;
  UClass *pUVar7;
  ForAnyElementType FVar8;
  FPCGDataPtrWrapper *this_00;
  FObjectPtr_u_0 FVar9;
  FObjectPtr_u_0 local_res18;
  FPCGContext *local_res20;
  UClass *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  TSharedPtr<IPCGElement,1> local_110;
  FString local_100;
  FTestData local_e8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_58;
  
  local_148 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_e8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_148);
  FVar9.Handle = (UObject *)0x0;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGGatherSettings>(&local_e8,&local_58);
  UPCGSettings::GetElement(local_e8.Settings,&local_110);
  if (local_e8.InputData.TaggedData.ArrayNum == local_e8.InputData.TaggedData.ArrayMax) {
    local_e8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_e8.InputData,
                    &local_e8.InputData.TaggedData.ArrayMax);
  }
  this_00 = (FPCGDataPtrWrapper *)
            (local_e8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_e8.InputData.TaggedData.ArrayNum * 0x78);
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
  local_e8.InputData.TaggedData.ArrayNum = local_e8.InputData.TaggedData.ArrayNum + 1;
  pUVar6 = PCGTestsCommon::CreateRandomBasePointData(100,0x2a,false);
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar6);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_e8,(UPCGNode *)&local_res20);
  do {
    if ((local_110.Object == (IPCGElement *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = IPCGElement::Execute(local_110.Object,local_res20);
    pFVar2 = local_res20;
  } while (!bVar3);
  iVar5 = (local_res20->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_140,"Output count");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_140.Data.ArrayNum != 0) {
    FVar8.Data = local_140.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar5,1);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (((pFVar2->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_res18 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar2->OutputData).TaggedData.AllocatorInstance.Data)->Handle
    ;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fc3d59:
      if (local_res18.Handle != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar7);
        if (bVar3) {
          FVar9 = local_res18;
        }
      }
    }
    else if (local_res18.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res18.Handle);
      goto LAB_149fc3d59;
    }
    ::FString::FString(&local_130,"Output point data");
    if (FVar9.Handle == (UObject *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_100,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_100,0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      iVar5 = (**(code **)(*(longlong *)FVar9.Handle + 0x488))(FVar9.Handle);
      ::FString::FString(&local_120,"Output point count");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar8.Data = local_120.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,iVar5,100);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        bVar3 = true;
        goto LAB_149fc3e4b;
      }
    }
  }
  bVar3 = false;
LAB_149fc3e4b:
  if (local_res20 != (FPCGContext *)0x0) {
    (**(code **)local_res20->_padding_)(local_res20,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_e8);
  return bVar3;
}

// GetBeautifiedTestName @ 149fc3ea0

FString * __thiscall
FPCGGatherTest_Basic::GetBeautifiedTestName
          (FPCGGatherTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Gather.Basic");
  return __return_storage_ptr__;
}

