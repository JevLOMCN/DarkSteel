// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 1414d90c0

EAutomationTestFlags __thiscall FStringSubstringTest::GetTestFlags(FStringSubstringTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414d90d0

bool __thiscall FStringSubstringTest::IsStressTest(FStringSubstringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414d90e0

uint __thiscall FStringSubstringTest::GetRequiredDeviceNum(FStringSubstringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414d90f0

FString * __thiscall
FStringSubstringTest::GetTestSourceFileName
          (FStringSubstringTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x57,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\StringTest.cpp"
             ,0x57);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414d9190

int __thiscall FStringSubstringTest::GetTestSourceFileLine(FStringSubstringTest *this)

{
  return 0x11e;
}

// GetTests @ 1414d91a0

/* WARNING: Removing unreachable block (ram,0x0001414d92e9) */
/* WARNING: Removing unreachable block (ram,0x0001414d93b4) */

void __thiscall
FStringSubstringTest::GetTests
          (FStringSubstringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x1d,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1d,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x1d,"System.Core.String.Substring",0x1d);
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

// RunTest @ 1414d93e0

/* WARNING: Removing unreachable block (ram,0x0001414da3c8) */
/* WARNING: Removing unreachable block (ram,0x0001414da06d) */
/* WARNING: Removing unreachable block (ram,0x0001414da1c2) */
/* WARNING: Removing unreachable block (ram,0x0001414da4f6) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FStringSubstringTest::RunTest(FStringSubstringTest *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  FStringSubstringTest *local_res8;
  ForAnyElementType local_508;
  uint local_500 [2];
  ForAnyElementType local_4f8;
  uint local_4f0;
  int local_4ec;
  ForAnyElementType local_4e8;
  uint local_4e0;
  int local_4dc;
  ForAnyElementType local_4d8;
  uint local_4d0;
  int local_4cc;
  ForAnyElementType local_4c8;
  int local_4c0 [2];
  ForAnyElementType local_4b8;
  uint local_4b0 [2];
  ForAnyElementType local_4a8;
  int local_4a0 [2];
  ForAnyElementType local_498;
  uint local_490 [2];
  ForAnyElementType local_488;
  int local_480 [2];
  ForAnyElementType local_478;
  uint local_470 [2];
  FString local_468;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_458;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_448;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_438;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_428;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_418;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_408;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_398;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_348;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_338;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_328;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_318;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_308;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar22 = false;
  local_508.Data = (FScriptContainerElement *)0x0;
  local_500[0] = 0;
  local_500[1] = 0;
  local_res8 = this;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,&local_508,0,(int *)(local_500 + 1));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,&local_508,(int *)local_500,(int *)(local_500 + 1));
  _Src.Data = local_508.Data;
  FGenericPlatformString::Memcpy(local_508.Data,L"0123456789",0x16);
  uVar13 = local_500[0];
  lVar14 = (longlong)(int)local_500[0];
  iVar3 = local_500[0] - 1;
  if (local_500[0] == 0) {
    iVar3 = 0;
  }
  if (4 < iVar3) {
    iVar3 = 4;
  }
  iVar18 = 0;
  if (0 < iVar3) {
    iVar18 = iVar3;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_500[0] != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize(&local_258,(wchar_t *)FVar16.Data,iVar18);
  local_488.Data = (FScriptContainerElement *)0x0;
  local_480[0] = 0;
  local_480[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_488,0,local_480 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_488,local_480,local_480 + 1);
  FVar16.Data = local_488.Data;
  FGenericPlatformString::Memcpy(local_488.Data,L"0123",10);
  if (local_258.Data.ArrayNum == local_480[0]) {
    if (1 < local_258.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_258.Data.AllocatorInstance.Data,(wchar_t *)FVar16.Data);
      bVar22 = iVar3 == 0;
      goto LAB_1414d9555;
    }
  }
  else {
    bVar22 = local_480[0] + local_258.Data.ArrayNum == 1;
LAB_1414d9555:
    bVar22 = !bVar22;
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  if (bVar22) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1d8,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_1d8);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  local_4d0 = uVar13;
  local_4d8.Data = (FScriptContainerElement *)0x0;
  if (uVar13 == 0) {
    local_4cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,&local_4d8,uVar13,&local_4cc);
    memcpy(local_4d8.Data,_Src.Data,lVar14 * 2);
  }
  uVar21 = local_4d0;
  uVar20 = 0;
  uVar15 = local_4d0 - 1;
  if (local_4d0 == 0) {
    uVar15 = 0;
  }
  uVar4 = uVar15;
  if (4 < (int)uVar15) {
    uVar4 = 4;
  }
  uVar19 = uVar20;
  if (0 < (int)uVar4) {
    uVar19 = uVar4;
  }
  uVar4 = uVar20;
  if (0 < (int)(uVar15 - uVar19)) {
    uVar4 = uVar15 - uVar19;
  }
  if ((int)(uVar4 + uVar19) <= (int)local_4d0) {
    uVar20 = ~(uVar4 | uVar19) >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar22)) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return (bool)uVar2;
  }
  if (uVar4 != 0) {
    uVar21 = uVar21 - uVar4;
    if (uVar21 - uVar19 != 0) {
      memmove(local_4d8.Data + (longlong)(int)uVar19 * 2,
              local_4d8.Data + (longlong)(int)uVar19 * 2 + (longlong)(int)uVar4 * 2,
              (longlong)(int)(uVar21 - uVar19) * 2);
    }
    local_4d0 = uVar21;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,&local_4d8,uVar21,&local_4cc);
    uVar21 = local_4d0;
  }
  bVar22 = false;
  local_478.Data = (FScriptContainerElement *)0x0;
  local_470[0] = 0;
  local_470[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_478,0,(int *)(local_470 + 1));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_478,(int *)local_470,(int *)(local_470 + 1));
  FVar16.Data = local_478.Data;
  FGenericPlatformString::Memcpy(local_478.Data,L"0123",10);
  if (uVar21 == local_470[0]) {
    if (1 < (int)uVar21) {
      iVar3 = wcscmp((wchar_t *)local_4d8.Data,(wchar_t *)FVar16.Data);
      bVar22 = iVar3 == 0;
      goto LAB_1414d97a7;
    }
  }
  else {
    bVar22 = local_470[0] + uVar21 == 1;
LAB_1414d97a7:
    bVar22 = !bVar22;
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  if (bVar22) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = uVar13 - 1;
  bVar22 = false;
  if (uVar13 == 0) {
    iVar3 = 0;
  }
  if (10 < iVar3) {
    iVar3 = 10;
  }
  iVar18 = 0;
  if (0 < iVar3) {
    iVar18 = iVar3;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize(&local_358,(wchar_t *)FVar16.Data,iVar18);
  local_4c8.Data = (FScriptContainerElement *)0x0;
  local_4c0[0] = 0;
  FVar16.Data = (FScriptContainerElement *)0x0;
  local_4c0[1] = 0;
  if (uVar13 == 0) {
    FVar17.Data = (FScriptContainerElement *)L"";
LAB_1414d9870:
    if (*(wchar_t *)FVar17.Data != L'\0') {
      sVar6 = wcslen((wchar_t *)FVar17.Data);
      uVar15 = (int)sVar6 + 1;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if (0 < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar15,&local_4c8,0,local_4c0 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,&local_4c8,local_4c0,local_4c0 + 1);
      FVar16.Data = local_4c8.Data;
      FGenericPlatformString::Memcpy(local_4c8.Data,FVar17.Data,(longlong)(int)uVar15 * 2);
    }
  }
  else {
    FVar17.Data = _Src.Data;
    if (_Src.Data != (FScriptContainerElement *)0x0) goto LAB_1414d9870;
  }
  if (local_358.Data.ArrayNum == local_4c0[0]) {
    if (1 < local_358.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_358.Data.AllocatorInstance.Data,(wchar_t *)FVar16.Data);
      bVar22 = iVar3 == 0;
      goto LAB_1414d9912;
    }
  }
  else {
    bVar22 = local_4c0[0] + local_358.Data.ArrayNum == 1;
LAB_1414d9912:
    bVar22 = !bVar22;
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  if (bVar22) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_1b8);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  local_4e0 = uVar13;
  local_4e8.Data = (FScriptContainerElement *)0x0;
  if (uVar13 == 0) {
    local_4dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,&local_4e8,uVar13,&local_4dc);
    memcpy(local_4e8.Data,_Src.Data,(longlong)(int)uVar13 * 2);
  }
  uVar21 = local_4e0;
  uVar20 = 0;
  uVar15 = local_4e0 - 1;
  if (local_4e0 == 0) {
    uVar15 = 0;
  }
  uVar4 = uVar15;
  if (10 < (int)uVar15) {
    uVar4 = 10;
  }
  uVar19 = uVar20;
  if (0 < (int)uVar4) {
    uVar19 = uVar4;
  }
  uVar4 = uVar20;
  if (0 < (int)(uVar15 - uVar19)) {
    uVar4 = uVar15 - uVar19;
  }
  if ((int)(uVar4 + uVar19) <= (int)local_4e0) {
    uVar20 = ~(uVar4 | uVar19) >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar22)) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return (bool)uVar2;
  }
  if (uVar4 != 0) {
    uVar21 = uVar21 - uVar4;
    if (uVar21 - uVar19 != 0) {
      memmove(local_4e8.Data + (longlong)(int)uVar19 * 2,
              local_4e8.Data + (longlong)(int)uVar19 * 2 + (longlong)(int)uVar4 * 2,
              (longlong)(int)(uVar21 - uVar19) * 2);
    }
    local_4e0 = uVar21;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,&local_4e8,uVar21,&local_4dc);
    uVar21 = local_4e0;
  }
  local_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0[0] = 0;
  local_4b0[1] = 0;
  uVar15 = 0;
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
LAB_1414d9b01:
    FVar17.Data = (FScriptContainerElement *)0x0;
    if (*(wchar_t *)FVar16.Data != L'\0') {
      sVar6 = wcslen((wchar_t *)FVar16.Data);
      uVar15 = (int)sVar6 + 1;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if (0 < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar15,&local_4b8,0,(int *)(local_4b0 + 1));
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,&local_4b8,(int *)local_4b0,(int *)(local_4b0 + 1));
      FVar17.Data = local_4b8.Data;
      FGenericPlatformString::Memcpy(local_4b8.Data,FVar16.Data,(longlong)(int)uVar15 * 2);
      uVar15 = local_4b0[0];
    }
  }
  else {
    FVar17.Data = (FScriptContainerElement *)0x0;
    FVar16.Data = _Src.Data;
    if (_Src.Data != (FScriptContainerElement *)0x0) goto LAB_1414d9b01;
  }
  if (uVar21 == uVar15) {
    if ((int)uVar21 < 2) {
      bVar22 = false;
    }
    else {
      iVar3 = wcscmp((wchar_t *)local_4e8.Data,(wchar_t *)FVar17.Data);
      bVar22 = iVar3 != 0;
    }
  }
  else {
    bVar22 = uVar15 + uVar21 != 1;
  }
  if (FVar17.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar17.Data);
  }
  if (bVar22) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1a8,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_1a8,0);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = uVar13 - 1;
  bVar22 = false;
  if (uVar13 == 0) {
    iVar3 = 0;
  }
  if (0x14 < iVar3) {
    iVar3 = 0x14;
  }
  iVar18 = 0;
  if (0 < iVar3) {
    iVar18 = iVar3;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize(&local_368,(wchar_t *)FVar16.Data,iVar18);
  local_4a8.Data = (FScriptContainerElement *)0x0;
  local_4a0[0] = 0;
  FVar16.Data = (FScriptContainerElement *)0x0;
  local_4a0[1] = 0;
  if (uVar13 == 0) {
    FVar17.Data = (FScriptContainerElement *)L"";
LAB_1414d9c72:
    if (*(wchar_t *)FVar17.Data != L'\0') {
      sVar6 = wcslen((wchar_t *)FVar17.Data);
      uVar15 = (int)sVar6 + 1;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if (0 < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar15,&local_4a8,0,local_4a0 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,&local_4a8,local_4a0,local_4a0 + 1);
      FVar16.Data = local_4a8.Data;
      FGenericPlatformString::Memcpy(local_4a8.Data,FVar17.Data,(longlong)(int)uVar15 * 2);
    }
  }
  else {
    FVar17.Data = _Src.Data;
    if (_Src.Data != (FScriptContainerElement *)0x0) goto LAB_1414d9c72;
  }
  if (local_368.Data.ArrayNum == local_4a0[0]) {
    if (1 < local_368.Data.ArrayNum) {
      iVar3 = wcscmp((wchar_t *)local_368.Data.AllocatorInstance.Data,(wchar_t *)FVar16.Data);
      bVar22 = iVar3 == 0;
      goto LAB_1414d9d14;
    }
  }
  else {
    bVar22 = local_4a0[0] + local_368.Data.ArrayNum == 1;
LAB_1414d9d14:
    bVar22 = !bVar22;
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  if (bVar22) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_198,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  local_4f0 = uVar13;
  local_4f8.Data = (FScriptContainerElement *)0x0;
  if (uVar13 == 0) {
    local_4ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,&local_4f8,uVar13,&local_4ec);
    memcpy(local_4f8.Data,_Src.Data,(longlong)(int)uVar13 * 2);
  }
  uVar21 = local_4f0;
  uVar20 = 0;
  uVar15 = local_4f0 - 1;
  if (local_4f0 == 0) {
    uVar15 = 0;
  }
  uVar4 = uVar15;
  if (0x14 < (int)uVar15) {
    uVar4 = 0x14;
  }
  uVar19 = uVar20;
  if (0 < (int)uVar4) {
    uVar19 = uVar4;
  }
  uVar4 = uVar20;
  if (0 < (int)(uVar15 - uVar19)) {
    uVar4 = uVar15 - uVar19;
  }
  if ((int)(uVar4 + uVar19) <= (int)local_4f0) {
    uVar20 = ~(uVar4 | uVar19) >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar22)) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return (bool)uVar2;
  }
  if (uVar4 != 0) {
    uVar21 = uVar21 - uVar4;
    if (uVar21 - uVar19 != 0) {
      memmove(local_4f8.Data + (longlong)(int)uVar19 * 2,
              local_4f8.Data + (longlong)(int)uVar19 * 2 + (longlong)(int)uVar4 * 2,
              (longlong)(int)(uVar21 - uVar19) * 2);
    }
    local_4f0 = uVar21;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,&local_4f8,uVar21,&local_4ec);
    uVar21 = local_4f0;
  }
  local_498.Data = (FScriptContainerElement *)0x0;
  local_490[0] = 0;
  local_490[1] = 0;
  uVar15 = 0;
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
LAB_1414d9efd:
    FVar17.Data = (FScriptContainerElement *)0x0;
    if (*(wchar_t *)FVar16.Data != L'\0') {
      sVar6 = wcslen((wchar_t *)FVar16.Data);
      uVar15 = (int)sVar6 + 1;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if (0 < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar15,&local_498,0,(int *)(local_490 + 1));
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,&local_498,(int *)local_490,(int *)(local_490 + 1));
      FVar17.Data = local_498.Data;
      FGenericPlatformString::Memcpy(local_498.Data,FVar16.Data,(longlong)(int)uVar15 * 2);
      uVar15 = local_490[0];
    }
  }
  else {
    FVar17.Data = (FScriptContainerElement *)0x0;
    FVar16.Data = _Src.Data;
    if (_Src.Data != (FScriptContainerElement *)0x0) goto LAB_1414d9efd;
  }
  if (uVar21 == uVar15) {
    if ((int)uVar21 < 2) {
      bVar22 = false;
    }
    else {
      iVar3 = wcscmp((wchar_t *)local_4f8.Data,(wchar_t *)FVar17.Data);
      bVar22 = iVar3 != 0;
    }
  }
  else {
    bVar22 = uVar15 + uVar21 != 1;
  }
  if (FVar17.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar17.Data);
  }
  if (bVar22) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_188,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_188,0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  uVar21 = uVar13 - 1;
  uVar15 = uVar21;
  if (uVar13 == 0) {
    uVar15 = 0;
  }
  uVar20 = uVar15;
  if (0 < (int)uVar15) {
    uVar20 = 0;
  }
  uVar4 = 0;
  if (0 < (int)uVar20) {
    uVar4 = uVar20;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize(&local_378,(wchar_t *)FVar16.Data,uVar4);
  if (1 < (uint)local_378.Data.ArrayNum) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_178,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_178,0);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.Data.ArrayNum = uVar13;
  if (uVar13 == 0) {
    local_468.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,(ForAnyElementType *)&local_468,uVar13,&local_468.Data.ArrayMax);
    memcpy(local_468.Data.AllocatorInstance.Data,_Src.Data,(longlong)(int)uVar13 * 2);
  }
  uVar20 = local_468.Data.ArrayNum - 1;
  if (local_468.Data.ArrayNum == 0) {
    uVar20 = 0;
  }
  uVar19 = 0;
  uVar4 = uVar20;
  if (0 < (int)uVar20) {
    uVar4 = uVar19;
  }
  uVar10 = uVar19;
  if (0 < (int)uVar4) {
    uVar10 = uVar4;
  }
  ::FString::RemoveAt(&local_468,uVar10,uVar20 - uVar10,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineZeroLeft",&local_468,L"");
  if (-1 < (int)uVar15) {
    uVar15 = 0xffffffff;
  }
  if (0 < (int)uVar15) {
    uVar19 = uVar15;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize(&local_268,(wchar_t *)FVar16.Data,uVar19);
  if (1 < (uint)local_268.Data.ArrayNum) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_168,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  uVar15 = 0;
  local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_388,(wchar_t *)_Src.Data,uVar13,0);
  iVar3 = local_388.ArrayNum + -1;
  if (local_388.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar18 = iVar3;
  if (-1 < iVar3) {
    iVar18 = -1;
  }
  iVar11 = 0;
  if (0 < iVar18) {
    iVar11 = iVar18;
  }
  ::FString::RemoveAt((FString *)&local_388,iVar11,iVar3 - iVar11,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineNegativeLeft",(FString *)&local_388,L"");
  if (uVar13 == 0) {
    uVar20 = 0;
LAB_1414da2ce:
    FVar16.Data = (FScriptContainerElement *)L"";
  }
  else {
    uVar4 = uVar21;
    if ((int)(uVar13 - 5) < (int)uVar21) {
      uVar4 = uVar13 - 5;
    }
    uVar20 = uVar15;
    if (0 < (int)uVar4) {
      uVar20 = uVar4;
    }
    FVar16.Data = _Src.Data;
    uVar15 = uVar13;
    if (uVar13 == 0) goto LAB_1414da2ce;
  }
  ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)FVar16.Data,uVar20);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"LeftChop",&local_48,L"012345");
  local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_398,(wchar_t *)_Src.Data,uVar15,0);
  iVar3 = local_398.ArrayNum + -1;
  if (local_398.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (iVar3 + -4 < iVar3) {
    iVar3 = iVar3 + -4;
  }
  iVar18 = 0;
  if (0 < iVar3) {
    iVar18 = iVar3;
  }
  ::FString::RemoveAt((FString *)&local_398,iVar18,4,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineLeftChop",(FString *)&local_398,L"012345");
  if (uVar15 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    iVar3 = 0;
  }
  else {
    iVar18 = uVar15 - 1;
    if ((int)(uVar15 - 0xb) < (int)(uVar15 - 1)) {
      iVar18 = uVar15 - 0xb;
    }
    FVar16.Data = _Src.Data;
    iVar3 = 0;
    if (0 < iVar18) {
      iVar3 = iVar18;
    }
  }
  ::FString::ConstructFromPtrSize(&local_278,(wchar_t *)FVar16.Data,iVar3);
  if (1 < (uint)local_278.Data.ArrayNum) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_158,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_3a8,(wchar_t *)_Src.Data,uVar13,0);
  iVar3 = local_3a8.ArrayNum + -1;
  if (local_3a8.ArrayNum == 0) {
    iVar3 = 0;
  }
  if (iVar3 + -10 < iVar3) {
    iVar3 = iVar3 + -10;
  }
  iVar18 = 0;
  if (0 < iVar3) {
    iVar18 = iVar3;
  }
  ::FString::RemoveAt((FString *)&local_3a8,iVar18,10,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineExactLengthLeftChop",(FString *)&local_3a8,L"");
  uVar15 = 0;
  if (uVar13 == 0) {
LAB_1414da4c5:
    pwVar12 = L"";
  }
  else {
    uVar20 = uVar21;
    if ((int)(uVar13 - 0x15) < (int)uVar21) {
      uVar20 = uVar13 - 0x15;
    }
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    pwVar12 = (wchar_t *)_Src.Data;
    if (uVar13 == 0) goto LAB_1414da4c5;
  }
  ::FString::ConstructFromPtrSize(&local_288,pwVar12,uVar15);
  if (1 < (uint)local_288.Data.ArrayNum) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_148,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(this,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  lVar14 = 0;
  uVar4 = 0;
  local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_3b8,(wchar_t *)_Src.Data,uVar13,0);
  uVar20 = 0;
  uVar15 = local_3b8.ArrayNum - 1;
  if (local_3b8.ArrayNum == 0) {
    uVar15 = uVar20;
  }
  if ((int)(uVar15 - 0x14) < (int)uVar15) {
    uVar15 = uVar15 - 0x14;
  }
  uVar19 = uVar20;
  if (0 < (int)uVar15) {
    uVar19 = uVar15;
  }
  ::FString::RemoveAt((FString *)&local_3b8,uVar19,0x14,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineLongerThanLeftChop",(FString *)&local_3b8,L"");
  if (uVar13 == 0) {
    uVar13 = 0;
    uVar15 = uVar20;
  }
  else {
    uVar15 = uVar4;
    if (0 < (int)uVar21) {
      uVar15 = uVar21;
    }
    if (uVar13 != 0) {
      ::FString::ConstructFromPtrSize(&local_1e8,(wchar_t *)_Src.Data,uVar15);
      pwVar12 = (wchar_t *)_Src.Data;
      goto LAB_1414da61d;
    }
  }
  ::FString::ConstructFromPtrSize(&local_1e8,L"",uVar15);
  pwVar12 = L"";
LAB_1414da61d:
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"ZeroLeftChop",&local_1e8,pwVar12);
  local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_428,(wchar_t *)_Src.Data,uVar13,0);
  uVar21 = 0;
  uVar15 = local_428.ArrayNum - 1;
  if (local_428.ArrayNum == 0) {
    uVar15 = uVar21;
  }
  uVar19 = uVar21;
  if (0 < (int)uVar15) {
    uVar19 = uVar15;
  }
  ::FString::RemoveAt((FString *)&local_428,uVar19,0,Default);
  uVar15 = 0;
  if (uVar13 == 0) {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineZeroLeftChop",(FString *)&local_428,L"");
    ::FString::ConstructFromPtrSize(&local_1f8,L"",0);
    pwVar12 = L"";
  }
  else {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineZeroLeftChop",(FString *)&local_428,(wchar_t *)_Src.Data);
    uVar19 = uVar13 - 1;
    if ((int)uVar13 < (int)(uVar13 - 1)) {
      uVar19 = uVar13;
    }
    uVar10 = uVar15;
    if (0 < (int)uVar19) {
      uVar10 = uVar19;
    }
    ::FString::ConstructFromPtrSize(&local_1f8,(wchar_t *)_Src.Data,uVar10);
    pwVar12 = (wchar_t *)_Src.Data;
  }
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"NegativeLeftChop",&local_1f8,pwVar12);
  local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_438,(wchar_t *)_Src.Data,uVar13,0);
  uVar19 = local_438.ArrayNum - 1;
  if (local_438.ArrayNum == 0) {
    uVar19 = uVar20;
  }
  if ((int)(uVar19 + 1) < (int)uVar19) {
    uVar19 = uVar19 + 1;
  }
  uVar10 = uVar21;
  if (0 < (int)uVar19) {
    uVar10 = uVar19;
  }
  ::FString::RemoveAt((FString *)&local_438,uVar10,-1,Default);
  if (uVar13 == 0) {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineNegativeLeftChop",(FString *)&local_438,L"");
    pwVar12 = L"";
    uVar19 = uVar20;
  }
  else {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineNegativeLeftChop",(FString *)&local_438,(wchar_t *)_Src.Data);
    pwVar12 = (wchar_t *)_Src.Data;
    uVar19 = uVar13 - 1;
  }
  uVar10 = uVar13 - 1;
  uVar8 = uVar19;
  if (4 < (int)uVar19) {
    uVar8 = 4;
  }
  if (0 < (int)uVar8) {
    uVar21 = uVar8;
  }
  ::FString::FString(&local_58,
                     (wchar_t *)
                     ((longlong)pwVar12 + ((longlong)(int)uVar19 - (longlong)(int)uVar21) * 2));
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"Right",&local_58,L"6789");
  local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_3c8,(wchar_t *)_Src.Data,uVar13,0);
  uVar21 = local_3c8.ArrayNum - 1;
  if (local_3c8.ArrayNum == 0) {
    uVar21 = uVar15;
  }
  uVar19 = uVar21;
  if (4 < (int)uVar21) {
    uVar19 = 4;
  }
  uVar8 = uVar15;
  if (0 < (int)uVar19) {
    uVar8 = uVar19;
  }
  ::FString::RemoveAt((FString *)&local_3c8,0,uVar21 - uVar8,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineRight",(FString *)&local_3c8,L"6789");
  FVar16.Data = _Src.Data;
  uVar21 = uVar10;
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    uVar21 = uVar15;
  }
  uVar19 = uVar21;
  if (10 < (int)uVar21) {
    uVar19 = 10;
  }
  uVar8 = uVar15;
  if (0 < (int)uVar19) {
    uVar8 = uVar19;
  }
  ::FString::FString(&local_68,
                     (wchar_t *)(FVar16.Data + ((longlong)(int)uVar21 - (longlong)(int)uVar8) * 2));
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"ExactLengthRight",&local_68,(wchar_t *)FVar16.Data);
  local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_448,(wchar_t *)_Src.Data,uVar13,0);
  uVar21 = local_448.ArrayNum - 1;
  if (local_448.ArrayNum == 0) {
    uVar21 = uVar15;
  }
  uVar19 = uVar21;
  if (10 < (int)uVar21) {
    uVar19 = 10;
  }
  uVar8 = uVar15;
  if (0 < (int)uVar19) {
    uVar8 = uVar19;
  }
  ::FString::RemoveAt((FString *)&local_448,0,uVar21 - uVar8,Default);
  uVar21 = 0;
  if (uVar13 == 0) {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineExactLengthRight",(FString *)&local_448,L"");
    pwVar12 = L"";
    uVar19 = uVar21;
  }
  else {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineExactLengthRight",(FString *)&local_448,(wchar_t *)_Src.Data);
    pwVar12 = (wchar_t *)_Src.Data;
    uVar19 = uVar10;
  }
  uVar8 = uVar19;
  if (0x14 < (int)uVar19) {
    uVar8 = 0x14;
  }
  uVar5 = uVar21;
  if (0 < (int)uVar8) {
    uVar5 = uVar8;
  }
  ::FString::FString(&local_78,
                     (wchar_t *)
                     ((longlong)pwVar12 + ((longlong)(int)uVar19 - (longlong)(int)uVar5) * 2));
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"LongerThanRight",&local_78,(wchar_t *)FVar16.Data);
  local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_458,(wchar_t *)_Src.Data,uVar13,0);
  uVar19 = local_458.ArrayNum - 1;
  if (local_458.ArrayNum == 0) {
    uVar19 = uVar4;
  }
  uVar8 = uVar19;
  if (0x14 < (int)uVar19) {
    uVar8 = 0x14;
  }
  uVar5 = uVar4;
  if (0 < (int)uVar8) {
    uVar5 = uVar8;
  }
  ::FString::RemoveAt((FString *)&local_458,0,uVar19 - uVar5,Default);
  if (uVar13 == 0) {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineLongerThanRight",(FString *)&local_458,L"");
    pwVar12 = L"";
    uVar19 = uVar21;
  }
  else {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineLongerThanRight",(FString *)&local_458,(wchar_t *)_Src.Data);
    pwVar12 = (wchar_t *)_Src.Data;
    uVar19 = uVar10;
  }
  uVar8 = uVar19;
  if (0 < (int)uVar19) {
    uVar8 = uVar21;
  }
  uVar5 = uVar21;
  if (0 < (int)uVar8) {
    uVar5 = uVar8;
  }
  ::FString::FString(&local_88,
                     (wchar_t *)
                     ((longlong)pwVar12 + ((longlong)(int)uVar19 - (longlong)(int)uVar5) * 2));
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"ZeroRight",&local_88,L"");
  local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_3d8,(wchar_t *)_Src.Data,uVar13,0);
  uVar19 = local_3d8.ArrayNum - 1;
  if (local_3d8.ArrayNum == 0) {
    uVar19 = uVar21;
  }
  uVar8 = uVar19;
  if (0 < (int)uVar19) {
    uVar8 = uVar21;
  }
  uVar5 = uVar21;
  if (0 < (int)uVar8) {
    uVar5 = uVar8;
  }
  ::FString::RemoveAt((FString *)&local_3d8,0,uVar19 - uVar5,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineZeroRight",(FString *)&local_3d8,L"");
  FVar16.Data = _Src.Data;
  uVar19 = uVar10;
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    uVar19 = uVar21;
  }
  uVar8 = uVar19;
  if (-1 < (int)uVar19) {
    uVar8 = 0xffffffff;
  }
  uVar5 = uVar21;
  if (0 < (int)uVar8) {
    uVar5 = uVar8;
  }
  ::FString::FString(&local_98,
                     (wchar_t *)(FVar16.Data + ((longlong)(int)uVar19 - (longlong)(int)uVar5) * 2));
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"NegativeRight",&local_98,L"");
  local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_3e8,(wchar_t *)_Src.Data,uVar13,0);
  uVar19 = local_3e8.ArrayNum - 1;
  if (local_3e8.ArrayNum == 0) {
    uVar19 = uVar4;
  }
  uVar8 = uVar19;
  if (-1 < (int)uVar19) {
    uVar8 = 0xffffffff;
  }
  uVar5 = uVar4;
  if (0 < (int)uVar8) {
    uVar5 = uVar8;
  }
  ::FString::RemoveAt((FString *)&local_3e8,0,uVar19 - uVar5,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineNegativeRight",(FString *)&local_3e8,L"");
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    uVar10 = 0xffffffff;
    uVar19 = uVar4;
    uVar8 = uVar4;
  }
  else {
    uVar5 = uVar10;
    if (4 < (int)uVar10) {
      uVar5 = 4;
    }
    FVar16.Data = _Src.Data;
    uVar19 = uVar20;
    uVar8 = uVar10;
    if (0 < (int)uVar5) {
      uVar19 = uVar5;
    }
  }
  ::FString::ConstructFromPtrSize
            (&local_a8,(wchar_t *)(FVar16.Data + (longlong)(int)uVar19 * 2),uVar8 - uVar19);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"RightChop",&local_a8,L"456789");
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_298,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::RemoveAt((FString *)&local_298,0,4,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineRightChop",(FString *)&local_298,L"456789");
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    uVar19 = uVar4;
    uVar8 = uVar4;
  }
  else {
    uVar5 = uVar10;
    if (10 < (int)uVar10) {
      uVar5 = 10;
    }
    FVar16.Data = _Src.Data;
    uVar19 = uVar20;
    uVar8 = uVar10;
    if (0 < (int)uVar5) {
      uVar19 = uVar5;
    }
  }
  ::FString::ConstructFromPtrSize
            (&local_b8,(wchar_t *)(FVar16.Data + (longlong)(int)uVar19 * 2),uVar8 - uVar19);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"ExactLengthRightChop",&local_b8,L"");
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_2a8,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::RemoveAt((FString *)&local_2a8,0,10,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineExactLengthRightChop",(FString *)&local_2a8,L"");
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    uVar19 = uVar4;
    uVar8 = uVar4;
  }
  else {
    uVar5 = uVar10;
    if (0x14 < (int)uVar10) {
      uVar5 = 0x14;
    }
    FVar16.Data = _Src.Data;
    uVar19 = uVar20;
    uVar8 = uVar10;
    if (0 < (int)uVar5) {
      uVar19 = uVar5;
    }
  }
  ::FString::ConstructFromPtrSize
            (&local_c8,(wchar_t *)(FVar16.Data + (longlong)(int)uVar19 * 2),uVar8 - uVar19);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"LongerThanRightChop",&local_c8,L"");
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_2b8,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::RemoveAt((FString *)&local_2b8,0,0x14,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineLongerThanRightChop",(FString *)&local_2b8,L"");
  if (uVar13 == 0) {
    ::FString::ConstructFromPtrSize(&local_208,L"",0);
    pwVar12 = L"";
  }
  else {
    uVar19 = uVar10;
    if (0 < (int)uVar10) {
      uVar19 = uVar21;
    }
    uVar8 = uVar21;
    if (0 < (int)uVar19) {
      uVar8 = uVar19;
    }
    ::FString::ConstructFromPtrSize
              (&local_208,(wchar_t *)(_Src.Data + (longlong)(int)uVar8 * 2),uVar10 - uVar8);
    pwVar12 = (wchar_t *)_Src.Data;
  }
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"ZeroRightChop",&local_208,pwVar12);
  local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_3f8,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::RemoveAt((FString *)&local_3f8,0,0,Default);
  if (uVar13 == 0) {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineZeroRightChop",(FString *)&local_3f8,L"");
    ::FString::ConstructFromPtrSize(&local_218,L"",0);
    pwVar12 = L"";
  }
  else {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineZeroRightChop",(FString *)&local_3f8,(wchar_t *)_Src.Data);
    uVar19 = uVar10;
    if (uVar10 < 0x80000000) {
      uVar19 = 0xffffffff;
    }
    uVar8 = uVar21;
    if (0 < (int)uVar19) {
      uVar8 = uVar19;
    }
    ::FString::ConstructFromPtrSize
              (&local_218,(wchar_t *)(_Src.Data + (longlong)(int)uVar8 * 2),uVar10 - uVar8);
    pwVar12 = (wchar_t *)_Src.Data;
  }
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"NegativeRightChop",&local_218,pwVar12);
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_408,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::RemoveAt((FString *)&local_408,0,-1,Default);
  if (uVar13 == 0) {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineNegativeRightChop",(FString *)&local_408,L"");
    FVar16.Data = (FScriptContainerElement *)L"";
    uVar19 = uVar20;
    uVar8 = uVar21;
  }
  else {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineNegativeRightChop",(FString *)&local_408,(wchar_t *)_Src.Data);
    uVar5 = uVar10;
    if (4 < (int)uVar10) {
      uVar5 = 4;
    }
    FVar16.Data = _Src.Data;
    uVar19 = uVar10;
    uVar8 = uVar20;
    if (0 < (int)uVar5) {
      uVar8 = uVar5;
    }
  }
  ::FString::ConstructFromPtrSize
            (&local_d8,(wchar_t *)(FVar16.Data + (longlong)(int)uVar8 * 2),uVar19 - uVar8);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"Mid",&local_d8,L"456789");
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_2c8,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_2c8,4,0x7fffffff,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMid",(FString *)&local_2c8,L"456789");
  uVar19 = uVar10;
  if (uVar13 == 0) {
    uVar19 = uVar4;
  }
  uVar8 = uVar19;
  if (4 < (int)uVar19) {
    uVar8 = 4;
  }
  uVar5 = uVar4;
  if (0 < (int)uVar8) {
    uVar5 = uVar8;
  }
  lVar7 = (longlong)(int)uVar19;
  if (8 < (int)uVar19) {
    lVar7 = 8;
  }
  uVar19 = uVar5;
  if ((int)uVar5 < lVar7) {
    uVar19 = (uint)lVar7;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize
            (&local_e8,(wchar_t *)(FVar16.Data + (longlong)(int)uVar5 * 2),uVar19 - uVar5);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidCount",&local_e8,L"4567");
  local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_2d8,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_2d8,4,4,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMidCount",(FString *)&local_2d8,L"4567");
  uVar19 = uVar4;
  if (uVar13 != 0) {
    uVar19 = uVar10;
  }
  uVar8 = uVar19;
  if (0 < (int)uVar19) {
    uVar8 = uVar21;
  }
  uVar5 = uVar4;
  if (0 < (int)uVar8) {
    uVar5 = uVar8;
  }
  lVar7 = (longlong)(int)uVar19;
  if (10 < (int)uVar19) {
    lVar7 = 10;
  }
  lVar9 = (longlong)(int)uVar5;
  uVar19 = uVar5;
  if (lVar9 < lVar7) {
    uVar19 = (uint)lVar7;
  }
  if (uVar13 == 0) {
    ::FString::ConstructFromPtrSize(&local_228,L"" + lVar9,uVar19 - uVar5);
    pwVar12 = L"";
  }
  else {
    ::FString::ConstructFromPtrSize(&local_228,(wchar_t *)(_Src.Data + lVar9 * 2),uVar19 - uVar5);
    pwVar12 = (wchar_t *)_Src.Data;
  }
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidCountFullLength",&local_228,pwVar12);
  local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_418,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_418,0,10,Default);
  if (uVar13 == 0) {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineMidCountFullLength",(FString *)&local_418,L"");
  }
  else {
    `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"InlineMidCountFullLength",(FString *)&local_418,(wchar_t *)_Src.Data);
    uVar21 = uVar10;
  }
  uVar19 = uVar21;
  if (8 < (int)uVar21) {
    uVar19 = 8;
  }
  uVar8 = uVar4;
  if (0 < (int)uVar19) {
    uVar8 = uVar19;
  }
  lVar7 = (longlong)(int)uVar21;
  if (0xc < (int)uVar21) {
    lVar7 = 0xc;
  }
  uVar21 = uVar8;
  if ((int)uVar8 < lVar7) {
    uVar21 = (uint)lVar7;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize
            (&local_f8,(wchar_t *)(FVar16.Data + (longlong)(int)uVar8 * 2),uVar21 - uVar8);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidCountOffEnd",&local_f8,L"89");
  local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_2e8,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_2e8,8,4,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMidCountOffEnd",(FString *)&local_2e8,L"89");
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    uVar20 = uVar4;
    uVar21 = uVar4;
  }
  else {
    uVar19 = uVar10;
    if (0x14 < (int)uVar10) {
      uVar19 = 0x14;
    }
    FVar16.Data = _Src.Data;
    uVar21 = uVar10;
    if (0 < (int)uVar19) {
      uVar20 = uVar19;
    }
  }
  ::FString::ConstructFromPtrSize
            (&local_108,(wchar_t *)(FVar16.Data + (longlong)(int)uVar20 * 2),uVar21 - uVar20);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidStartAfterEnd",&local_108,L"");
  local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_2f8,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_2f8,0x14,0x7fffffff,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMidStartAfterEnd",(FString *)&local_2f8,L"");
  uVar21 = uVar10;
  if (uVar13 == 0) {
    uVar21 = uVar4;
  }
  uVar20 = uVar21;
  if (5 < (int)uVar21) {
    uVar20 = 5;
  }
  uVar19 = uVar4;
  if (0 < (int)uVar20) {
    uVar19 = uVar20;
  }
  lVar7 = (longlong)(int)uVar21;
  if (5 < (int)uVar21) {
    lVar7 = 5;
  }
  uVar21 = uVar19;
  if ((int)uVar19 < lVar7) {
    uVar21 = (uint)lVar7;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize
            (&local_118,(wchar_t *)(FVar16.Data + (longlong)(int)uVar19 * 2),uVar21 - uVar19);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidZeroCount",&local_118,L"");
  local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_308,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_308,5,0,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMidZeroCount",(FString *)&local_308,L"");
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Data.ArrayNum = 0;
  local_248.Data.ArrayMax = 0;
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidNegativeCount",&local_248,L"");
  local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_318,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_318,5,-1,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMidNegativeCount",(FString *)&local_318,L"");
  if (uVar13 == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    uVar21 = uVar4;
    uVar20 = uVar4;
  }
  else {
    uVar20 = uVar10;
    if (-5 < (int)uVar10) {
      uVar20 = 0xfffffffb;
    }
    uVar21 = 0;
    if (0 < (int)uVar20) {
      uVar21 = uVar20;
    }
    lVar7 = (longlong)(int)uVar10;
    if (-4 < (int)uVar10) {
      lVar7 = -4;
    }
    lVar14 = (longlong)(int)uVar21;
    FVar16.Data = _Src.Data;
    uVar20 = uVar21;
    if (lVar14 < lVar7) {
      uVar20 = (uint)lVar7;
    }
  }
  ::FString::ConstructFromPtrSize(&local_128,(wchar_t *)(FVar16.Data + lVar14 * 2),uVar20 - uVar21);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidNegativeStartNegativeEnd",&local_128,L"");
  local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_328,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_328,-5,1,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMidNegativeStartNegativeEnd",(FString *)&local_328,L"");
  uVar21 = uVar15;
  if (uVar13 != 0) {
    uVar21 = uVar10;
  }
  uVar20 = uVar21;
  if (-1 < (int)uVar21) {
    uVar20 = 0xffffffff;
  }
  if (0 < (int)uVar20) {
    uVar4 = uVar20;
  }
  lVar14 = (longlong)(int)uVar21;
  if (3 < (int)uVar21) {
    lVar14 = 3;
  }
  uVar21 = uVar4;
  if ((int)uVar4 < lVar14) {
    uVar21 = (uint)lVar14;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  ::FString::ConstructFromPtrSize
            (&local_138,(wchar_t *)(FVar16.Data + (longlong)(int)uVar4 * 2),uVar21 - uVar4);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidNegativeStartPositiveEnd",&local_138,L"012");
  local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_338,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_338,-1,4,Default);
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMidNegativeStartPositiveEnd",(FString *)&local_338,L"012");
  uVar21 = uVar15;
  if (uVar13 != 0) {
    uVar21 = uVar10;
  }
  uVar20 = uVar21;
  if (-1 < (int)uVar21) {
    uVar20 = 0xffffffff;
  }
  if (0 < (int)uVar20) {
    uVar15 = uVar20;
  }
  lVar14 = (longlong)(int)uVar21;
  lVar7 = (longlong)(int)uVar15;
  if (0xe < (int)uVar21) {
    lVar14 = 0xe;
  }
  uVar21 = uVar15;
  if (lVar7 < lVar14) {
    uVar21 = (uint)lVar14;
  }
  if (uVar13 == 0) {
    ::FString::ConstructFromPtrSize(&local_238,L"" + lVar7,uVar21 - uVar15);
    pwVar12 = L"";
  }
  else {
    ::FString::ConstructFromPtrSize(&local_238,(wchar_t *)(_Src.Data + lVar7 * 2),uVar21 - uVar15);
    pwVar12 = (wchar_t *)_Src.Data;
  }
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"MidNegativeStartBeyondEnd",&local_238,pwVar12);
  local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
            (&local_348,(wchar_t *)_Src.Data,uVar13,0);
  ::FString::MidInline((FString *)&local_348,-1,0xf,Default);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (uVar13 != 0) {
    FVar16.Data = _Src.Data;
  }
  `FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,L"InlineMidNegativeStartBeyondEnd",(FString *)&local_348,
             (wchar_t *)FVar16.Data);
  if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.AllocatorInstance.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.AllocatorInstance.Data);
  }
  if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AllocatorInstance.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  if (local_4f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data);
  }
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  if (local_4e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data);
  }
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  if (local_4d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1414dba20

FString * __thiscall
FStringSubstringTest::GetBeautifiedTestName
          (FStringSubstringTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1d,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1d,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x1d,
             "System.Core.String.Substring",0x1d);
  return __return_storage_ptr__;
}

// operator() @ 141594700

void __thiscall
`FStringSubstringTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,FString *param_2,wchar_t *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  size_t sVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ForAnyElementType _Str2;
  bool bVar8;
  FString local_28;
  
  pFVar6 = (FScriptContainerElement *)0x0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  _Str2.Data = pFVar6;
  iVar4 = 0;
  if ((param_3 != (wchar_t *)0x0) &&
     (_Str2.Data = (FScriptContainerElement *)0x0, *param_3 != L'\0')) {
    sVar5 = wcslen(param_3);
    uVar7 = (int)sVar5 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_28,0,&local_28.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_28,&local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    _Str2.Data = local_28.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_28.Data.AllocatorInstance.Data,param_3,(longlong)(int)uVar7 * 2);
    iVar4 = local_28.Data.ArrayNum;
  }
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) goto LAB_1415947dc;
    iVar4 = wcscmp((wchar_t *)(param_2->Data).AllocatorInstance.Data,(wchar_t *)_Str2.Data);
    bVar8 = iVar4 == 0;
  }
  else {
    bVar8 = iVar4 + iVar1 == 1;
  }
  pFVar6 = (FScriptContainerElement *)(ulonglong)!bVar8;
LAB_1415947dc:
  if (_Str2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Str2.Data);
  }
  if ((char)pFVar6 != '\0') {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_28,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar3)(plVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

