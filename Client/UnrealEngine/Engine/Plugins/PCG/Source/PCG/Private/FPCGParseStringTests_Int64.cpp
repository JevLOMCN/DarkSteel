// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd36c0

EAutomationTestFlags __thiscall
FPCGParseStringTests_Int64::GetTestFlags(FPCGParseStringTests_Int64 *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd36d0

bool __thiscall FPCGParseStringTests_Int64::IsStressTest(FPCGParseStringTests_Int64 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd36e0

uint __thiscall FPCGParseStringTests_Int64::GetRequiredDeviceNum(FPCGParseStringTests_Int64 *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd36f0

FString * __thiscall
FPCGParseStringTests_Int64::GetTestSourceFileName
          (FPCGParseStringTests_Int64 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd3720

int __thiscall FPCGParseStringTests_Int64::GetTestSourceFileLine(FPCGParseStringTests_Int64 *this)

{
  return 0x45;
}

// GetTests @ 149fd3770

/* WARNING: Removing unreachable block (ram,0x000149fd385d) */
/* WARNING: Removing unreachable block (ram,0x000149fd3928) */

void __thiscall
FPCGParseStringTests_Int64::GetTests
          (FPCGParseStringTests_Int64 *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Int64");
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

// RunTest @ 149fd3950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGParseStringTests_Int64::RunTest(FPCGParseStringTests_Int64 *this,FString *param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined1 auStack_148 [32];
  TArrayView<__int64_const_,int> local_128;
  TArrayView<FString_const_,int> local_118;
  long64 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FString local_b8;
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
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.DataPtr = &local_108;
  local_108 = ___xmm_00000000000000010000000000000000;
  uStack_100 = _UNK_150ae1708;
  local_e8 = ___xmm_80000000000000007fffffffffffffff;
  uStack_e0 = _UNK_152030158;
  lVar3 = 10;
  local_f8 = ___xmm_00000000000004e6ffffffffffffffff;
  uStack_f0 = _UNK_15202fd68;
  local_c8 = ___xmm_000000000000022300000000000000ff;
  uStack_c0 = _UNK_15202fd58;
  local_d8 = ___xmm_00000000000000007fffffffffffffff;
  uStack_d0 = _UNK_151158348;
  local_128.ArrayNum = 10;
  ::FString::FString(&local_b8,"0");
  ::FString::FString(&local_a8,"1");
  ::FString::FString(&local_98,"-1");
  ::FString::FString(&local_88,"1254");
  ::FString::FString(&local_78,"9223372036854775807");
  ::FString::FString(&local_68,"-9223372036854775808");
  ::FString::FString(&local_58,"99999999999999999999999999999999999999999");
  ::FString::FString(&local_48,"Bla");
  ::FString::FString(&local_38,"0xff");
  ::FString::FString(&local_28,"0547");
  local_118.DataPtr = &local_b8;
  local_118.ArrayNum = 10;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<__int64>
                    ((FPCGParseStringTestsBase *)this,&local_118,&local_128);
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

// GetBeautifiedTestName @ 149fd3b30

FString * __thiscall
FPCGParseStringTests_Int64::GetBeautifiedTestName
          (FPCGParseStringTests_Int64 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Int64");
  return __return_storage_ptr__;
}

