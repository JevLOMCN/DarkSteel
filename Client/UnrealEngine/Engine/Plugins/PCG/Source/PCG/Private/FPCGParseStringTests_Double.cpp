// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd4c20

EAutomationTestFlags __thiscall
FPCGParseStringTests_Double::GetTestFlags(FPCGParseStringTests_Double *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd4c30

bool __thiscall FPCGParseStringTests_Double::IsStressTest(FPCGParseStringTests_Double *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd4c40

uint __thiscall FPCGParseStringTests_Double::GetRequiredDeviceNum(FPCGParseStringTests_Double *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd4c50

FString * __thiscall
FPCGParseStringTests_Double::GetTestSourceFileName
          (FPCGParseStringTests_Double *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd4c80

int __thiscall FPCGParseStringTests_Double::GetTestSourceFileLine(FPCGParseStringTests_Double *this)

{
  return 0x47;
}

// GetTests @ 149fd4c90

/* WARNING: Removing unreachable block (ram,0x000149fd4d7d) */
/* WARNING: Removing unreachable block (ram,0x000149fd4e48) */

void __thiscall
FPCGParseStringTests_Double::GetTests
          (FPCGParseStringTests_Double *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Double");
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

// RunTest @ 149fd4e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGParseStringTests_Double::RunTest(FPCGParseStringTests_Double *this,FString *param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  TArrayView<double_const_,int> local_118;
  TArrayView<FString_const_,int> local_108;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.DataPtr = &local_f8;
  local_f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_f0 = _UNK_15061cbc8;
  local_d8 = ___xmm_c235798ee2308c3a4235798ee2308c3a;
  uStack_d0 = _UNK_152030258;
  lVar4 = 9;
  local_e8 = ___xmm_4029147ae147ae14bff0000000000000;
  uStack_e0 = _UNK_152030008;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = __real_3f50624dd2f1a9fc;
  local_118.ArrayNum = 9;
  ::FString::FString(&local_a8,"0.0");
  ::FString::FString(&local_98,"1.0");
  ::FString::FString(&local_88,"-1.0");
  ::FString::FString(&local_78,"12.54");
  ::FString::FString(&local_68,"92233720368.54775807");
  ::FString::FString(&local_58,"-92233720368.54775808");
  ::FString::FString(&local_48,"Bla");
  ::FString::FString(&local_38,"0xff");
  ::FString::FString(&local_28,"1e-3");
  local_108.DataPtr = &local_a8;
  local_108.ArrayNum = 9;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<double>
                    ((FPCGParseStringTestsBase *)this,&local_108,&local_118);
  puVar3 = local_18;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar4 != 0);
  return bVar2;
}

// GetBeautifiedTestName @ 149fd5040

FString * __thiscall
FPCGParseStringTests_Double::GetBeautifiedTestName
          (FPCGParseStringTests_Double *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Double");
  return __return_storage_ptr__;
}

