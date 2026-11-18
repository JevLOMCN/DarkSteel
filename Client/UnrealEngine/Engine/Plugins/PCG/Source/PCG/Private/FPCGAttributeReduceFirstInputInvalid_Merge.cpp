// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fc0620

EAutomationTestFlags __thiscall
FPCGAttributeReduceFirstInputInvalid_Merge::GetTestFlags
          (FPCGAttributeReduceFirstInputInvalid_Merge *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fc0630

bool __thiscall
FPCGAttributeReduceFirstInputInvalid_Merge::IsStressTest
          (FPCGAttributeReduceFirstInputInvalid_Merge *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fc0640

uint __thiscall
FPCGAttributeReduceFirstInputInvalid_Merge::GetRequiredDeviceNum
          (FPCGAttributeReduceFirstInputInvalid_Merge *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fc0650

FString * __thiscall
FPCGAttributeReduceFirstInputInvalid_Merge::GetTestSourceFileName
          (FPCGAttributeReduceFirstInputInvalid_Merge *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fc0680

int __thiscall
FPCGAttributeReduceFirstInputInvalid_Merge::GetTestSourceFileLine
          (FPCGAttributeReduceFirstInputInvalid_Merge *this)

{
  return 0x108;
}

// GetTests @ 149fc0690

/* WARNING: Removing unreachable block (ram,0x000149fc077d) */
/* WARNING: Removing unreachable block (ram,0x000149fc0848) */

void __thiscall
FPCGAttributeReduceFirstInputInvalid_Merge::GetTests
          (FPCGAttributeReduceFirstInputInvalid_Merge *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeReduce.FirstInputInvalid.Merge");
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

// RunTest @ 149fc0870

bool __thiscall
FPCGAttributeReduceFirstInputInvalid_Merge::RunTest
          (FPCGAttributeReduceFirstInputInvalid_Merge *this,FString *param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UPCGAttributeReduceSettings *pUVar5;
  FString *pFVar6;
  double local_res18;
  double local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_a8;
  FPCGAttributePropertySelector local_98;
  FPCGAttributePropertySelector local_58;
  
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_98);
  FPCGAttributeReduceTests::PrepareMixedAndSelector
            ((FPCGAttributeReduceTests *)this,&local_b8,
             (FPCGAttributePropertyInputSelector *)&local_98);
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,1,&local_b8.AllocatorInstance,&local_b8.ArrayNum,&local_b8.ArrayMax);
  memmove((FPCGTaggedData *)(local_b8.AllocatorInstance.Data + 0x78),local_b8.AllocatorInstance.Data
          ,(longlong)iVar3 * 0x78);
  FVar1.Data = local_b8.AllocatorInstance.Data;
  (((FPCGDataPtrWrapper *)(local_b8.AllocatorInstance.Data + 0x20))->Data).field0_0x0.DebugPtr =
       (UPCGData *)0x0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x28) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x2c) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x48) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x4c) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x58) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x5c) = 0;
  *(undefined4 *)(local_b8.AllocatorInstance.Data + 0x68) = 0x100;
  *(undefined8 *)local_b8.AllocatorInstance.Data = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 8) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0xc) = 0;
  (((FPCGDataPtrWrapper *)(local_b8.AllocatorInstance.Data + 0x10))->Data).field0_0x0.DebugPtr =
       (UPCGData *)0x0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x18) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x1c) = 0;
  (((FPCGDataPtrWrapper *)(local_b8.AllocatorInstance.Data + 0x30))->Data).field0_0x0.DebugPtr =
       (UPCGData *)0x0;
  *(undefined4 *)(local_b8.AllocatorInstance.Data + 0x38) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x3c) = 0x80;
  *(undefined4 *)
   &(((FPCGDataPtrWrapper *)(local_b8.AllocatorInstance.Data + 0x40))->Data).field0_0x0 = 0xffffffff
  ;
  *(undefined4 *)(local_b8.AllocatorInstance.Data + 0x44) = 0;
  (((FPCGDataPtrWrapper *)(local_b8.AllocatorInstance.Data + 0x50))->Data).field0_0x0.DebugPtr =
       (UPCGData *)0x0;
  (((FPCGDataPtrWrapper *)(local_b8.AllocatorInstance.Data + 0x60))->Data).field0_0x0.DebugPtr =
       (UPCGData *)0x0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x6c) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x70) = 0;
  *(int *)(local_b8.AllocatorInstance.Data + 0x74) = -1;
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UPCGAttributeReduceSettings>(pUVar4);
  FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)FVar1.Data,(UPCGData *)pUVar5);
  pFVar6 = ::FString::FString((FString *)&local_a8,L"Invalid input data.");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar6,Contains,1,true);
  local_res18 = __real_3fc999999999999a;
  local_res20 = __real_3fb999999999999a;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_58,&local_98);
  iVar3 = local_b8.ArrayNum;
  FVar1.Data = local_b8.AllocatorInstance.Data;
  local_58._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b8.ArrayNum == 0) {
    local_a8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,local_b8.ArrayNum,0,&local_a8.AllocatorInstance,local_b8.ArrayNum,
               &local_a8.ArrayMax);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              (local_a8.AllocatorInstance.Data,(FPCGTaggedData *)FVar1.Data,iVar3);
  }
  bVar2 = FPCGAttributeReduceTests::RunAndValidate<double,double>
                    ((FPCGAttributeReduceTests *)this,&local_a8,Min,
                     (FPCGAttributePropertyInputSelector *)&local_58,true,false,&local_res20,
                     &local_res18);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FPCGTaggedData *)local_b8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_98.ExtraNames.AllocatorInstance.Data,local_98.ExtraNames.ArrayNum);
  if (local_98.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ExtraNames.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 149fc0a90

FString * __thiscall
FPCGAttributeReduceFirstInputInvalid_Merge::GetBeautifiedTestName
          (FPCGAttributeReduceFirstInputInvalid_Merge *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeReduce.FirstInputInvalid.Merge");
  return __return_storage_ptr__;
}

