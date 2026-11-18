// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fbfd00

EAutomationTestFlags __thiscall
FPCGAttributeReduceMixed_Merge::GetTestFlags(FPCGAttributeReduceMixed_Merge *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fbfd10

bool __thiscall FPCGAttributeReduceMixed_Merge::IsStressTest(FPCGAttributeReduceMixed_Merge *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fbfd20

uint __thiscall
FPCGAttributeReduceMixed_Merge::GetRequiredDeviceNum(FPCGAttributeReduceMixed_Merge *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fbfd30

FString * __thiscall
FPCGAttributeReduceMixed_Merge::GetTestSourceFileName
          (FPCGAttributeReduceMixed_Merge *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fbfd60

int __thiscall
FPCGAttributeReduceMixed_Merge::GetTestSourceFileLine(FPCGAttributeReduceMixed_Merge *this)

{
  return 0x105;
}

// GetTests @ 149fbfd70

/* WARNING: Removing unreachable block (ram,0x000149fbfe5d) */
/* WARNING: Removing unreachable block (ram,0x000149fbff28) */

void __thiscall
FPCGAttributeReduceMixed_Merge::GetTests
          (FPCGAttributeReduceMixed_Merge *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeReduce.Mixed.Merge");
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

// RunTest @ 149fbff50

bool __thiscall
FPCGAttributeReduceMixed_Merge::RunTest(FPCGAttributeReduceMixed_Merge *this,FString *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  bool bVar3;
  double local_res18;
  double local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_a8;
  FPCGAttributePropertySelector local_98;
  FPCGAttributePropertySelector local_58;
  
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_98);
  FPCGAttributeReduceTests::PrepareMixedAndSelector
            ((FPCGAttributeReduceTests *)this,&local_a8,
             (FPCGAttributePropertyInputSelector *)&local_98);
  local_res18 = __real_3ff0000000000000;
  local_res20 = __real_3fe0000000000000;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_58,&local_98);
  iVar2 = local_a8.ArrayNum;
  FVar1.Data = local_a8.AllocatorInstance.Data;
  local_58._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a8.ArrayNum == 0) {
    local_b8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,local_a8.ArrayNum,0,&local_b8.AllocatorInstance,local_a8.ArrayNum,
               &local_b8.ArrayMax);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              (local_b8.AllocatorInstance.Data,(FPCGTaggedData *)FVar1.Data,iVar2);
  }
  bVar3 = FPCGAttributeReduceTests::RunAndValidate<double,double>
                    ((FPCGAttributeReduceTests *)this,&local_b8,Max,
                     (FPCGAttributePropertyInputSelector *)&local_58,true,false,&local_res20,
                     &local_res18);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FPCGTaggedData *)local_a8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_98.ExtraNames.AllocatorInstance.Data,local_98.ExtraNames.ArrayNum);
  if (local_98.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ExtraNames.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetBeautifiedTestName @ 149fc0090

FString * __thiscall
FPCGAttributeReduceMixed_Merge::GetBeautifiedTestName
          (FPCGAttributeReduceMixed_Merge *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeReduce.Mixed.Merge");
  return __return_storage_ptr__;
}

