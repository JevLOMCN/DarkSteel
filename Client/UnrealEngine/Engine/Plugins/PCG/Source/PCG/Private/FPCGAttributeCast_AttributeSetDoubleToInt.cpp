// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f76390

EAutomationTestFlags __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::GetTestFlags
          (FPCGAttributeCast_AttributeSetDoubleToInt *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f763a0

bool __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::IsStressTest
          (FPCGAttributeCast_AttributeSetDoubleToInt *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f763b0

uint __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::GetRequiredDeviceNum
          (FPCGAttributeCast_AttributeSetDoubleToInt *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f763c0

FString * __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::GetTestSourceFileName
          (FPCGAttributeCast_AttributeSetDoubleToInt *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f763f0

int __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::GetTestSourceFileLine
          (FPCGAttributeCast_AttributeSetDoubleToInt *this)

{
  return 0x67;
}

// GetTests @ 149f76400

/* WARNING: Removing unreachable block (ram,0x000149f764ed) */
/* WARNING: Removing unreachable block (ram,0x000149f765b8) */

void __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::GetTests
          (FPCGAttributeCast_AttributeSetDoubleToInt *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeCast.AttributeSetDoubleToInt");
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

// RunTest @ 149f765e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::RunTest
          (FPCGAttributeCast_AttributeSetDoubleToInt *this,FString *param_1)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  TArrayView<__int64_const_,int> local_68;
  TArrayView<double_const_,int> local_58;
  long64 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  double local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.DataPtr = &local_48;
  local_48 = ___xmm_00000000000000010000000000000005;
  uStack_40 = _UNK_15201e858;
  local_58.DataPtr = &local_30;
  local_30 = ___xmm_3ff999999999999a4014666666666666;
  uStack_28 = _UNK_15201e8b8;
  local_68.ArrayNum = 3;
  local_58.ArrayNum = 3;
  local_20 = __real_4002666666666666;
  local_38 = 2;
  bVar1 = FPCGAttributeCastTestBase::RunTestInternal<double,__int64,UPCGParamData>
                    ((FPCGAttributeCastTestBase *)this,&local_58,&local_68);
  return bVar1;
}

// GetBeautifiedTestName @ 149f76690

FString * __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::GetBeautifiedTestName
          (FPCGAttributeCast_AttributeSetDoubleToInt *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeCast.AttributeSetDoubleToInt");
  return __return_storage_ptr__;
}

