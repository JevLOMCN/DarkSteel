// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd28e0

EAutomationTestFlags __thiscall
FPCGParseStringTests_Int32::GetTestFlags(FPCGParseStringTests_Int32 *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd28f0

bool __thiscall FPCGParseStringTests_Int32::IsStressTest(FPCGParseStringTests_Int32 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd2900

uint __thiscall FPCGParseStringTests_Int32::GetRequiredDeviceNum(FPCGParseStringTests_Int32 *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd2910

FString * __thiscall
FPCGParseStringTests_Int32::GetTestSourceFileName
          (FPCGParseStringTests_Int32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd2940

int __thiscall FPCGParseStringTests_Int32::GetTestSourceFileLine(FPCGParseStringTests_Int32 *this)

{
  return 0x44;
}

// GetTests @ 149fd2950

/* WARNING: Removing unreachable block (ram,0x000149fd2a3d) */
/* WARNING: Removing unreachable block (ram,0x000149fd2b08) */

void __thiscall
FPCGParseStringTests_Int32::GetTests
          (FPCGParseStringTests_Int32 *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Int32");
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

// RunTest @ 149fd2b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGParseStringTests_Int32::RunTest(FPCGParseStringTests_Int32 *this,FString *param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined1 auStack_118 [32];
  TArrayView<int_const_,int> local_f8;
  TArrayView<FString_const_,int> local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
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
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8.DataPtr = (int *)&local_d8;
  lVar3 = 9;
  local_b8 = 0x223;
  local_f8.ArrayNum = 9;
  local_d8 = ___xmm_000004e6ffffffff0000000100000000;
  uStack_d0 = _UNK_15202fdd8;
  local_c8 = ___xmm_000000ff00000000ffffffffffffffff;
  uStack_c0 = _UNK_15202fdc8;
  ::FString::FString(&local_a8,"0");
  ::FString::FString(&local_98,"1");
  ::FString::FString(&local_88,"-1");
  ::FString::FString(&local_78,"1254");
  ::FString::FString(&local_68,"9223372036854775807");
  ::FString::FString(&local_58,"-9223372036854775808");
  ::FString::FString(&local_48,"Bla");
  ::FString::FString(&local_38,"0xff");
  ::FString::FString(&local_28,"0547");
  local_e8.DataPtr = &local_a8;
  local_e8.ArrayNum = 9;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<int>
                    ((FPCGParseStringTestsBase *)this,&local_e8,&local_f8);
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

// GetBeautifiedTestName @ 149fd2cd0

FString * __thiscall
FPCGParseStringTests_Int32::GetBeautifiedTestName
          (FPCGParseStringTests_Int32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Int32");
  return __return_storage_ptr__;
}

