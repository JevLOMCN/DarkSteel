// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fb9180

EAutomationTestFlags __thiscall
FPCGAttributeReducePoints_Join::GetTestFlags(FPCGAttributeReducePoints_Join *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fb9190

bool __thiscall FPCGAttributeReducePoints_Join::IsStressTest(FPCGAttributeReducePoints_Join *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fb91a0

uint __thiscall
FPCGAttributeReducePoints_Join::GetRequiredDeviceNum(FPCGAttributeReducePoints_Join *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fb91b0

FString * __thiscall
FPCGAttributeReducePoints_Join::GetTestSourceFileName
          (FPCGAttributeReducePoints_Join *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fb91e0

int __thiscall
FPCGAttributeReducePoints_Join::GetTestSourceFileLine(FPCGAttributeReducePoints_Join *this)

{
  return 0xf8;
}

// GetTests @ 149fb91f0

/* WARNING: Removing unreachable block (ram,0x000149fb92dd) */
/* WARNING: Removing unreachable block (ram,0x000149fb93a8) */

void __thiscall
FPCGAttributeReducePoints_Join::GetTests
          (FPCGAttributeReducePoints_Join *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeReduce.Points.Join");
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

// RunTest @ 149fb93d0

bool __thiscall
FPCGAttributeReducePoints_Join::RunTest(FPCGAttributeReducePoints_Join *this,FString *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  bool bVar3;
  FString *pFVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FPCGAttributePropertySelector local_c8;
  undefined1 local_88 [48];
  int local_58;
  FPCGAttributePropertySelector local_48;
  
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_c8);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)local_88);
  FPCGAttributeReduceTests::PreparePointsAndSelectors
            ((FPCGAttributeReduceTests *)this,&local_e8,
             (FPCGAttributePropertyInputSelector *)&local_c8,
             (FPCGAttributePropertyInputSelector *)local_88);
  pFVar4 = ::FString::FString(&local_d8,L"0.100000, 0.200000, 0.300000, 0.400000, 0.500000");
  FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_48,&local_c8);
  iVar2 = local_e8.ArrayNum;
  FVar1.Data = local_e8.AllocatorInstance.Data;
  local_48._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_e8.ArrayNum == 0) {
    local_f8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,local_e8.ArrayNum,0,&local_f8.AllocatorInstance,local_e8.ArrayNum,
               &local_f8.ArrayMax);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              (local_f8.AllocatorInstance.Data,(FPCGTaggedData *)FVar1.Data,iVar2);
  }
  bVar3 = FPCGAttributeReduceTests::RunAndValidate<FString>
                    ((FPCGAttributeReduceTests *)this,&local_f8,Join,
                     (FPCGAttributePropertyInputSelector *)&local_48,false,false,pFVar4);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FPCGTaggedData *)local_e8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_88._40_8_,local_58);
  if ((FString *)local_88._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_88._40_8_);
  }
  DestructItems<FString,int>
            ((FString *)local_c8.ExtraNames.AllocatorInstance.Data,local_c8.ExtraNames.ArrayNum);
  if (local_c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ExtraNames.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetBeautifiedTestName @ 149fb9560

FString * __thiscall
FPCGAttributeReducePoints_Join::GetBeautifiedTestName
          (FPCGAttributeReducePoints_Join *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeReduce.Points.Join");
  return __return_storage_ptr__;
}

