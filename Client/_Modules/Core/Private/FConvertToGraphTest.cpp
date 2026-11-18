// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 1414c7d40

EAutomationTestFlags __thiscall FConvertToGraphTest::GetTestFlags(FConvertToGraphTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414c7d50

bool __thiscall FConvertToGraphTest::IsStressTest(FConvertToGraphTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414c7d60

uint __thiscall FConvertToGraphTest::GetRequiredDeviceNum(FConvertToGraphTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414c7d70

FString * __thiscall
FConvertToGraphTest::GetTestSourceFileName
          (FConvertToGraphTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x61,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x61,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x61,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\Graph\\GraphConvert.cpp"
             ,0x61);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414c7e10

int __thiscall FConvertToGraphTest::GetTestSourceFileLine(FConvertToGraphTest *this)

{
  return 0x18e;
}

// GetTests @ 1414c7e20

/* WARNING: Removing unreachable block (ram,0x0001414c7f69) */
/* WARNING: Removing unreachable block (ram,0x0001414c8034) */

void __thiscall
FConvertToGraphTest::GetTests
          (FConvertToGraphTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x21,"System.Core.Graph.ConvertToGraph",0x21);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_28.Data;
  *(int *)(pFVar4 + 8) = local_20[0];
  *(int *)(pFVar4 + 0xc) = local_20[1];
  local_20[0] = 0;
  local_20[1] = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_18;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar4 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1414c8060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FConvertToGraphTest::RunTest(FConvertToGraphTest *this,FString *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1b8;
  int local_1b0 [2];
  ForAnyElementType local_1a8;
  int local_1a0 [2];
  ForAnyElementType local_198;
  int local_190;
  int local_18c [9];
  FGraph local_168;
  FGraph local_140;
  FConvertToGraphTest *local_118;
  ForAnyElementType *local_110;
  ForAnyElementType *local_108;
  TArrayView<int_const_,int> local_100;
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  uVar5 = _UNK_150631f08;
  uVar4 = ___xmm_0000000c000000080000000600000005;
  uVar3 = _UNK_150631e08;
  uVar2 = __xmm_00000003000000020000000100000000;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FVar12.Data = (FScriptContainerElement *)0x0;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,8,0,&local_198,8,local_18c);
  local_50 = uVar2;
  uStack_48 = uVar3;
  local_40 = uVar4;
  uStack_38 = uVar5;
  *(undefined8 *)local_198.Data = uVar2;
  *(undefined8 *)(local_198.Data + 8) = uVar3;
  *(undefined8 *)(local_198.Data + 0x10) = uVar4;
  *(undefined8 *)(local_198.Data + 0x18) = uVar5;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0[0] = 0;
  local_1b0[1] = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  uVar10 = 0;
  if ((int)(local_190 - 1U) < local_190) {
    uVar10 = ~(local_190 - 1U) >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  iVar9 = *(int *)(local_198.Data + (longlong)(local_190 + -1) * 4);
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar9 + 1,&local_1b8,local_1b0,local_1b0 + 1);
  memset(local_1b8.Data + (longlong)iVar8 * 0x10,0,(longlong)(iVar9 + 1) << 4);
  lVar11 = (longlong)local_190;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_190,&local_1a8,local_1a0,local_1a0 + 1);
  memset(local_1a8.Data + (longlong)iVar9 * 0x10,0,lVar11 << 4);
  local_f0[0] = 2;
  local_f0[1] = 8;
  local_f0[2] = 3;
  if ((local_1b0[0] < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b8.Data,local_f0,3,
             *(int *)(local_1b8.Data + 0xc));
  local_e0[0] = 2;
  local_e0[1] = 3;
  local_e0[2] = 6;
  if ((local_1a0[0] < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1a8.Data,local_e0,3,
             *(int *)(local_1a8.Data + 0xc));
  local_d0[0] = 7;
  local_d0[1] = 0xb;
  local_d0[2] = 9;
  if ((local_1b0[0] < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b8.Data + 0x10),local_d0,3,
             *(int *)(local_1b8.Data + 0x1c));
  if ((local_1a0[0] < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8.Data + 0x10),(int *)0x0,0,
             *(int *)(local_1a8.Data + 0x1c));
  local_c0[0] = 0xc;
  local_c0[1] = 4;
  local_c0[2] = 9;
  if ((local_1b0[0] < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b8.Data + 0x20),local_c0,3,
             *(int *)(local_1b8.Data + 0x2c));
  local_18c[1] = 7;
  if ((local_1a0[0] < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8.Data + 0x20),local_18c + 1,1,
             *(int *)(local_1a8.Data + 0x2c));
  local_90 = ___xmm_0000000c000000070000000300000000;
  uStack_88 = _UNK_150631ef8;
  if ((local_1b0[0] < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b8.Data + 0x30),(int *)&local_90,4,
             *(int *)(local_1b8.Data + 0x3c));
  local_18c[3] = 0;
  local_18c[4] = 7;
  if ((local_1a0[0] < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8.Data + 0x30),local_18c + 3,2,
             *(int *)(local_1a8.Data + 0x3c));
  local_b0[0] = 2;
  local_b0[1] = 1;
  local_b0[2] = 7;
  if ((local_1b0[0] < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b8.Data + 0x40),local_b0,3,
             *(int *)(local_1b8.Data + 0x4c));
  local_80 = ___xmm_0000000c0000000b0000000600000004;
  uStack_78 = _UNK_150631f18;
  if ((local_1b0[0] < 6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b8.Data + 0x50),(int *)&local_80,4,
             *(int *)(local_1b8.Data + 0x5c));
  local_18c[5] = 5;
  local_18c[6] = 7;
  if ((local_1a0[0] < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8.Data + 0x40),local_18c + 5,2,
             *(int *)(local_1a8.Data + 0x4c));
  local_70 = ___xmm_00000002000000050000000100000000;
  uStack_68 = _UNK_150631df8;
  if ((local_1b0[0] < 7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b8.Data + 0x60),(int *)&local_70,4,
             *(int *)(local_1b8.Data + 0x6c));
  local_60 = ___xmm_00000004000000020000000100000000;
  uStack_58 = _UNK_150631e28;
  if ((local_1a0[0] < 6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8.Data + 0x50),(int *)&local_60,4,
             *(int *)(local_1a8.Data + 0x5c));
  local_18c[2] = 4;
  if ((local_1b0[0] < 9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b8.Data + 0x80),local_18c + 2,1,
             *(int *)(local_1b8.Data + 0x8c));
  if ((local_1a0[0] < 7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8.Data + 0x60),(int *)0x0,0,
             *(int *)(local_1a8.Data + 0x6c));
  local_a0[0] = 0;
  local_a0[1] = 4;
  local_a0[2] = 8;
  if ((local_1b0[0] < 0xd) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1b8.Data + 0xc0),local_a0,3,
             *(int *)(local_1b8.Data + 0xcc));
  local_18c[7] = 0;
  local_18c[8] = 6;
  if ((local_1a0[0] < 8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8.Data + 0x70),local_18c + 7,2,
             *(int *)(local_1a8.Data + 0x7c));
  local_100.ArrayNum = local_190;
  local_100.DataPtr = (int *)local_198.Data;
  if ((local_190 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  UE::Graph::
  ConvertToGraph<TArrayView<int_const_,int>,_FConvertToGraphTest::RunTest_::__l2::<lambda_1>_>
            (&local_168,&local_100,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &local_1b8,Shrink);
  local_110 = &local_1a8;
  local_108 = &local_198;
  local_118 = this;
  bVar6 = `FConvertToGraphTest::RunTest'::__l2::<lambda_2>::operator()(&local_118,&local_168);
  if (bVar6) {
    local_140.Buffer.AllocatorInstance.Data = local_168.Buffer.AllocatorInstance.Data;
    local_140.Buffer.ArrayNum = local_168.Buffer.ArrayNum;
    local_140.Buffer.ArrayMax = local_168.Buffer.ArrayMax;
    local_140.EdgeLists.AllocatorInstance.Data = local_168.EdgeLists.AllocatorInstance.Data;
    local_140.EdgeLists.ArrayNum = local_168.EdgeLists.ArrayNum;
    local_140.EdgeLists.ArrayMax = local_168.EdgeLists.ArrayMax;
    bVar6 = `FConvertToGraphTest::RunTest'::__l2::<lambda_2>::operator()(&local_118,&local_140);
    if (local_140.EdgeLists.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.EdgeLists.AllocatorInstance.Data);
    }
    local_168.Buffer.AllocatorInstance.Data = FVar12.Data;
    if (local_140.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Buffer.AllocatorInstance.Data);
      local_168.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    bVar6 = false;
    FVar12.Data = local_168.EdgeLists.AllocatorInstance.Data;
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (local_168.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Buffer.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1a8.Data,local_1a0[0]);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1a8.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b8.Data,local_1b0[0]);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b8.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return bVar6;
}

// GetBeautifiedTestName @ 1414c8a60

FString * __thiscall
FConvertToGraphTest::GetBeautifiedTestName
          (FConvertToGraphTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x21,
             "System.Core.Graph.ConvertToGraph",0x21);
  return __return_storage_ptr__;
}

// operator() @ 141595da0

bool __thiscall
`FConvertToGraphTest::RunTest'::__l2::<lambda_2>::operator()(void *this,FGraph *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  uint local_res18;
  longlong local_98;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  if ((param_1->EdgeLists).ArrayNum != *(int *)(*(longlong *)((longlong)this + 8) + 8)) {
    plVar4 = *(longlong **)this;
    pcVar5 = *(code **)(*plVar4 + 0x28);
    ::FString::PrintfImpl(&local_80,L"Wrong number of edge lists. Expected %d, got %d");
    (*pcVar5)(plVar4,&local_80,0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    return false;
  }
  local_res18 = 0;
  if (0 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8)) {
    local_98 = 0;
    do {
      uVar11 = 0;
      if ((int)local_res18 < (param_1->EdgeLists).ArrayNum) {
        uVar11 = ~local_res18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      plVar4 = *(longlong **)((longlong)this + 8);
      pFVar1 = (param_1->EdgeLists).AllocatorInstance.Data + local_98;
      piVar13 = *(int **)pFVar1;
      uVar6 = *(undefined8 *)(pFVar1 + 8);
      uVar11 = 0;
      if ((int)local_res18 < (int)plVar4[1]) {
        uVar11 = ~local_res18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar12 = *plVar4;
      iVar2 = *(int *)(local_98 + 8 + lVar12);
      lVar12 = *(longlong *)(local_98 + lVar12);
      if ((iVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar10 = (int)uVar6;
      if (iVar10 == iVar2) {
        uVar11 = 0;
        if (0 < iVar10) {
          lVar12 = lVar12 - (longlong)piVar13;
          do {
            uVar9 = 0;
            if ((int)uVar11 < iVar2) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            iVar3 = *(int *)((longlong)piVar13 + lVar12);
            uVar9 = 0;
            if ((int)uVar11 < iVar10) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*piVar13 != iVar3) {
              plVar4 = *(longlong **)this;
              pcVar5 = *(code **)(*plVar4 + 0x28);
              ::FString::PrintfImpl
                        (local_60,L"Wrong vertex for edge %d from vertex %d. Expected %d, got %d");
              (*pcVar5)(plVar4,local_60,0);
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
            }
            uVar11 = uVar11 + 1;
            piVar13 = piVar13 + 1;
          } while ((int)uVar11 < iVar10);
        }
      }
      else {
        plVar4 = *(longlong **)this;
        pcVar5 = *(code **)(*plVar4 + 0x28);
        ::FString::PrintfImpl(&local_70,L"Wrong size edge list for vertex %d. Expected %d, got %d");
        (*pcVar5)(plVar4,&local_70,0);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      local_res18 = local_res18 + 1;
      local_98 = local_98 + 0x10;
    } while ((int)local_res18 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8));
  }
  return true;
}

