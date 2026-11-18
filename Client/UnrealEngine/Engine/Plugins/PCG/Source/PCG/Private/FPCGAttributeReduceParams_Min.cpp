// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fbbd90

EAutomationTestFlags __thiscall
FPCGAttributeReduceParams_Min::GetTestFlags(FPCGAttributeReduceParams_Min *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fbbda0

bool __thiscall FPCGAttributeReduceParams_Min::IsStressTest(FPCGAttributeReduceParams_Min *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fbbdb0

uint __thiscall
FPCGAttributeReduceParams_Min::GetRequiredDeviceNum(FPCGAttributeReduceParams_Min *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fbbdc0

FString * __thiscall
FPCGAttributeReduceParams_Min::GetTestSourceFileName
          (FPCGAttributeReduceParams_Min *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fbbdf0

int __thiscall
FPCGAttributeReduceParams_Min::GetTestSourceFileLine(FPCGAttributeReduceParams_Min *this)

{
  return 0xfc;
}

// GetTests @ 149fbbe00

/* WARNING: Removing unreachable block (ram,0x000149fbbeed) */
/* WARNING: Removing unreachable block (ram,0x000149fbbfb8) */

void __thiscall
FPCGAttributeReduceParams_Min::GetTests
          (FPCGAttributeReduceParams_Min *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeReduce.Params.Min");
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

// RunTest @ 149fbbfe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGAttributeReduceParams_Min::RunTest(FPCGAttributeReduceParams_Min *this,FString *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int local_res18 [2];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_108;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f8;
  TVector2<double>_u_0 local_e8;
  FPCGAttributePropertySelector local_d8;
  FPCGAttributePropertySelector local_98;
  FPCGAttributePropertySelector local_58;
  
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_98);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_d8);
  FPCGAttributeReduceTests::PrepareParamAndSelectors
            ((FPCGAttributeReduceTests *)this,&local_f8,
             (FPCGAttributePropertyInputSelector *)&local_98,
             (FPCGAttributePropertyInputSelector *)&local_d8);
  local_res18[0] = 0;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_58,&local_98);
  iVar2 = local_f8.ArrayNum;
  FVar1.Data = local_f8.AllocatorInstance.Data;
  local_58._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_f8.ArrayNum == 0) {
    local_108.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,local_f8.ArrayNum,0,&local_108.AllocatorInstance,local_f8.ArrayNum,
               &local_108.ArrayMax);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              (local_108.AllocatorInstance.Data,(FPCGTaggedData *)FVar1.Data,iVar2);
  }
  bVar3 = FPCGAttributeReduceTests::RunAndValidate<int>
                    ((FPCGAttributeReduceTests *)this,&local_108,Min,
                     (FPCGAttributePropertyInputSelector *)&local_58,false,false,local_res18);
  local_e8._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_e8._s_0.Y = _UNK_15061cbc8;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_58,&local_d8);
  iVar2 = local_f8.ArrayNum;
  FVar1.Data = local_f8.AllocatorInstance.Data;
  local_58._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_f8.ArrayNum == 0) {
    local_108.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,local_f8.ArrayNum,0,&local_108.AllocatorInstance,local_f8.ArrayNum,
               &local_108.ArrayMax);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              (local_108.AllocatorInstance.Data,(FPCGTaggedData *)FVar1.Data,iVar2);
  }
  bVar4 = FPCGAttributeReduceTests::RunAndValidate<UE::Math::TVector2<double>_>
                    ((FPCGAttributeReduceTests *)this,&local_108,Min,
                     (FPCGAttributePropertyInputSelector *)&local_58,false,false,
                     (TVector2<double> *)&local_e8._s_0);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FPCGTaggedData *)local_f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_d8.ExtraNames.AllocatorInstance.Data,local_d8.ExtraNames.ArrayNum);
  if (local_d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.ExtraNames.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_98.ExtraNames.AllocatorInstance.Data,local_98.ExtraNames.ArrayNum);
  if (local_98.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ExtraNames.AllocatorInstance.Data);
  }
  return bVar4 && bVar3;
}

// GetBeautifiedTestName @ 149fbc210

FString * __thiscall
FPCGAttributeReduceParams_Min::GetBeautifiedTestName
          (FPCGAttributeReduceParams_Min *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeReduce.Params.Min");
  return __return_storage_ptr__;
}

