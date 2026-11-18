// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f76de0

EAutomationTestFlags __thiscall
FPCGAttributeCast_AttributeSetIntToString::GetTestFlags
          (FPCGAttributeCast_AttributeSetIntToString *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f76df0

bool __thiscall
FPCGAttributeCast_AttributeSetIntToString::IsStressTest
          (FPCGAttributeCast_AttributeSetIntToString *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f76e00

uint __thiscall
FPCGAttributeCast_AttributeSetIntToString::GetRequiredDeviceNum
          (FPCGAttributeCast_AttributeSetIntToString *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f76e10

FString * __thiscall
FPCGAttributeCast_AttributeSetIntToString::GetTestSourceFileName
          (FPCGAttributeCast_AttributeSetIntToString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f76e40

int __thiscall
FPCGAttributeCast_AttributeSetIntToString::GetTestSourceFileLine
          (FPCGAttributeCast_AttributeSetIntToString *this)

{
  return 0x6a;
}

// GetTests @ 149f76e50

/* WARNING: Removing unreachable block (ram,0x000149f76f3d) */
/* WARNING: Removing unreachable block (ram,0x000149f77008) */

void __thiscall
FPCGAttributeCast_AttributeSetIntToString::GetTests
          (FPCGAttributeCast_AttributeSetIntToString *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeCast.AttributeSetIntToString");
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

// RunTest @ 149f77030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGAttributeCast_AttributeSetIntToString::RunTest
          (FPCGAttributeCast_AttributeSetIntToString *this,FString *param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined1 auStack_c8 [32];
  TArrayView<FString_const_,int> local_a8;
  TArrayView<int_const_,int> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_c8;
  ::FString::FString(&local_68,L"0");
  ::FString::FString(&local_58,L"8");
  ::FString::FString(&local_48,L"7");
  ::FString::FString(&local_38,L"4");
  ::FString::FString(&local_28,L"-5");
  local_a8.DataPtr = &local_68;
  local_98.DataPtr = (int *)&local_88;
  local_78 = 0xfffffffb;
  lVar3 = 5;
  local_a8.ArrayNum = 5;
  local_98.ArrayNum = 5;
  local_88 = ___xmm_00000004000000070000000800000000;
  uStack_80 = _UNK_15201e868;
  bVar2 = FPCGAttributeCastTestBase::RunTestInternal<int,FString,UPCGParamData>
                    ((FPCGAttributeCastTestBase *)this,&local_98,&local_a8);
  puVar4 = local_18;
  do {
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  return bVar2;
}

// GetBeautifiedTestName @ 149f77170

FString * __thiscall
FPCGAttributeCast_AttributeSetIntToString::GetBeautifiedTestName
          (FPCGAttributeCast_AttributeSetIntToString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeCast.AttributeSetIntToString");
  return __return_storage_ptr__;
}

