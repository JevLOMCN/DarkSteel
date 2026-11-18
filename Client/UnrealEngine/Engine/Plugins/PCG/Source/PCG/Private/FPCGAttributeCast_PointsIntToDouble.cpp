// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f77840

EAutomationTestFlags __thiscall
FPCGAttributeCast_PointsIntToDouble::GetTestFlags(FPCGAttributeCast_PointsIntToDouble *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f77850

bool __thiscall
FPCGAttributeCast_PointsIntToDouble::IsStressTest(FPCGAttributeCast_PointsIntToDouble *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f77860

uint __thiscall
FPCGAttributeCast_PointsIntToDouble::GetRequiredDeviceNum(FPCGAttributeCast_PointsIntToDouble *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f77870

FString * __thiscall
FPCGAttributeCast_PointsIntToDouble::GetTestSourceFileName
          (FPCGAttributeCast_PointsIntToDouble *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f778a0

int __thiscall
FPCGAttributeCast_PointsIntToDouble::GetTestSourceFileLine
          (FPCGAttributeCast_PointsIntToDouble *this)

{
  return 0x6d;
}

// GetTests @ 149f778b0

/* WARNING: Removing unreachable block (ram,0x000149f7799d) */
/* WARNING: Removing unreachable block (ram,0x000149f77a68) */

void __thiscall
FPCGAttributeCast_PointsIntToDouble::GetTests
          (FPCGAttributeCast_PointsIntToDouble *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeCast.PointsIntToDouble");
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

// RunTest @ 149f77a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGAttributeCast_PointsIntToDouble::RunTest
          (FPCGAttributeCast_PointsIntToDouble *this,FString *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  TArrayView<double_const_,int> local_58;
  TArrayView<double_const_,int> local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  double local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  pTVar1 = CVarPCGEnablePointArrayData.Ref;
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_149f77ad5;
    }
  }
  lVar3 = 0;
LAB_149f77ad5:
  local_48.DataPtr = &local_28;
  local_28 = ___xmm_3ff00000000000004014000000000000;
  uStack_20 = _UNK_15201e8a8;
  local_58.ArrayNum = 3;
  local_18 = __real_4000000000000000;
  local_38 = 5;
  local_34 = 1;
  local_30 = 2;
  local_48.ArrayNum = 3;
  if (pTVar1->ShadowedValue[lVar3] == false) {
    local_58.DataPtr = (double *)&local_38;
    bVar2 = FPCGAttributeCastTestBase::RunTestInternal<int,double,UPCGPointData>
                      ((FPCGAttributeCastTestBase *)this,(TArrayView<int_const_,int> *)&local_58,
                       &local_48);
  }
  else {
    local_58.DataPtr = local_48.DataPtr;
    local_48.DataPtr = (double *)&local_38;
    bVar2 = FPCGAttributeCastTestBase::RunTestInternal<int,double,UPCGPointArrayData>
                      ((FPCGAttributeCastTestBase *)this,(TArrayView<int_const_,int> *)&local_48,
                       &local_58);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 149f77ba0

FString * __thiscall
FPCGAttributeCast_PointsIntToDouble::GetBeautifiedTestName
          (FPCGAttributeCast_PointsIntToDouble *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeCast.PointsIntToDouble");
  return __return_storage_ptr__;
}

