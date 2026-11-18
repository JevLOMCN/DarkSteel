// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414d6bc0

EAutomationTestFlags __thiscall
FStringParseIntoArrayTest::GetTestFlags(FStringParseIntoArrayTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414d6bd0

bool __thiscall FStringParseIntoArrayTest::IsStressTest(FStringParseIntoArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414d6be0

uint __thiscall FStringParseIntoArrayTest::GetRequiredDeviceNum(FStringParseIntoArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414d6bf0

FString * __thiscall
FStringParseIntoArrayTest::GetTestSourceFileName
          (FStringParseIntoArrayTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414d6c90

int __thiscall FStringParseIntoArrayTest::GetTestSourceFileLine(FStringParseIntoArrayTest *this)

{
  return 0xf3;
}

// GetTests @ 1414d6ca0

/* WARNING: Removing unreachable block (ram,0x0001414d6de9) */
/* WARNING: Removing unreachable block (ram,0x0001414d6eb4) */

void __thiscall
FStringParseIntoArrayTest::GetTests
          (FStringParseIntoArrayTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x22,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x22,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x22,"System.Core.String.ParseIntoArray",0x22);
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

// RunTest @ 1414d6ee0

bool __thiscall FStringParseIntoArrayTest::RunTest(FStringParseIntoArrayTest *this,FString *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  wchar_t *local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  FString local_68;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  FString local_48;
  
  lVar9 = 2;
  iVar13 = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x16,(ForAnyElementType *)&local_a8,0,&local_a8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x16,(ForAnyElementType *)&local_a8,&local_a8.Data.ArrayNum,&local_a8.Data.ArrayMax
            );
  FVar14.Data = local_a8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_a8.Data.AllocatorInstance.Data,L"This|is|a|long|string",0x2c)
  ;
  uVar3 = local_a8.Data._8_8_;
  local_a8.Data._8_8_ = local_a8.Data._8_8_ & 0xffffffff00000000;
  iVar10 = iVar13;
  if ((longlong)uVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)&local_a8,0,&local_a8.Data.ArrayMax);
    FVar14.Data = local_a8.Data.AllocatorInstance.Data;
    iVar10 = local_a8.Data.ArrayNum;
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18 = L"|";
  local_b8.ArrayMax = 0;
  DestructItems<FString,int>((FString *)0x0,0);
  local_b8.ArrayNum = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FVar4.Data = local_98.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"|",4);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  }
  local_res20 = &local_b8;
  local_58 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<`FString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  uStack_50._4_4_ = (int)((ulonglong)&local_res20 >> 0x20);
  local_88.ArrayMax = uStack_50._4_4_;
  local_88.ArrayNum = 1;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x150628d84;
  uStack_70._0_4_ = local_98.ArrayNum + -1;
  if (local_98.ArrayNum == 0) {
    uStack_70._0_4_ = iVar13;
  }
  local_78 = (undefined1  [8])FVar4.Data;
  uStack_50 = (FString *)&local_res20;
  UE::String::ParseTokens
            ((TStringView<wchar_t> *)local_78,(TStringView<wchar_t> *)&local_88,
             (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_58,SkipEmpty|IgnoreCase);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if ((local_b8.ArrayNum == 0) &&
     (bVar5 = CompareItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,(FString *)0x0,0)
     , bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a single delimiter character with a single delimiter, culling empties",bVar5);
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FVar4.Data = local_98.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"|",4);
  ::FString::ParseIntoArray((FString *)&local_98,&local_b8,&local_res18,1,true);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if ((local_b8.ArrayNum == 0) &&
     (bVar5 = CompareItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,(FString *)0x0,0)
     , bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a single delimiter character with an array of 1 delimiter, culling empties",
             bVar5);
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
      goto LAB_1414d7274;
    }
LAB_1414d727a:
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
LAB_1414d7274:
    if (-1 < local_b8.ArrayMax) goto LAB_1414d727a;
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  local_res20 = &local_b8;
  uStack_70 = &local_res20;
  uVar2 = (ulonglong)uStack_50 >> 0x20;
  uStack_50 = (FString *)((ulonglong)uStack_50 & 0xffffffff00000000);
  local_88.ArrayMax = (int)uVar2;
  local_88.ArrayNum = 1;
  local_78 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<`FString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58 = (undefined1  [8])0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x150628d84;
  UE::String::ParseTokens
            ((TStringView<wchar_t> *)local_58,(TStringView<wchar_t> *)&local_88,
             (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_78,SkipEmpty|IgnoreCase);
  if ((local_b8.ArrayNum == 0) &&
     (bVar5 = CompareItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,(FString *)0x0,0)
     , bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse an unallocated string with a single delimiter, culling empties",bVar5);
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  ::FString::ParseIntoArray((FString *)&local_88,&local_b8,&local_res18,1,true);
  if ((local_b8.ArrayNum == 0) &&
     (bVar5 = CompareItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,(FString *)0x0,0)
     , bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse an unallocated string with an array of 1 delimiter, culling empties",bVar5);
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
      goto LAB_1414d744d;
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
LAB_1414d744d:
    if (local_b8.ArrayMax < 0) {
      DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      local_b8.ArrayNum = 0;
      if (local_b8.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
      }
      goto LAB_1414d7499;
    }
  }
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  local_b8.ArrayNum = 0;
LAB_1414d7499:
  local_res20 = &local_b8;
  uStack_70 = &local_res20;
  local_88.ArrayMax = uStack_50._4_4_;
  local_88.ArrayNum = 1;
  iVar6 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar6 = iVar13;
  }
  local_78 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<`FString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  uStack_50 = (FString *)CONCAT44(uStack_50._4_4_,iVar6);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x150628d84;
  local_58 = (undefined1  [8])FVar14.Data;
  UE::String::ParseTokens
            ((TStringView<wchar_t> *)local_58,(TStringView<wchar_t> *)&local_88,
             (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_78,SkipEmpty|IgnoreCase);
  if ((local_b8.ArrayNum == 0) &&
     (bVar5 = CompareItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,(FString *)0x0,0)
     , bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse an allocated empty string with a single delimiter, culling empties",bVar5);
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  ::FString::ParseIntoArray(&local_a8,&local_b8,&local_res18,1,true);
  if ((local_b8.ArrayNum == 0) &&
     (bVar5 = CompareItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,(FString *)0x0,0)
     , bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse an allocated empty string with an array of 1 delimiter, culling empties",bVar5)
  ;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FVar4.Data = local_98.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"a|",6);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_res20 = &local_b8;
  uStack_70 = &local_res20;
  local_78 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<`FString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_88.ArrayMax = uStack_50._4_4_;
  local_88.ArrayNum = 1;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x150628d84;
  iVar10 = local_98.ArrayNum + -1;
  if (local_98.ArrayNum == 0) {
    iVar10 = 0;
  }
  uStack_50 = (FString *)CONCAT44(uStack_50._4_4_,iVar10);
  local_58 = (undefined1  [8])FVar4.Data;
  UE::String::ParseTokens
            ((TStringView<wchar_t> *)local_58,(TStringView<wchar_t> *)&local_88,
             (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_78,SkipEmpty|IgnoreCase);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"a",4);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  FVar4.Data = local_88.AllocatorInstance.Data;
  ConstructItems<FString,FString,int>(local_88.AllocatorInstance.Data,(FString *)&local_98,1);
  iVar10 = local_88.ArrayNum;
  if ((local_b8.ArrayNum == local_88.ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,(FString *)FVar4.Data,
                         local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a trailing delimiter with a single delimiter, culling empties",
             bVar5);
  DestructItems<FString,int>((FString *)FVar4.Data,iVar10);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FVar4.Data = local_98.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"a|",6);
  ::FString::ParseIntoArray((FString *)&local_98,&local_b8,&local_res18,1,true);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"a",4);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  FVar4.Data = local_88.AllocatorInstance.Data;
  ConstructItems<FString,FString,int>(local_88.AllocatorInstance.Data,(FString *)&local_98,1);
  iVar10 = local_88.ArrayNum;
  if ((local_b8.ArrayNum == local_88.ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,(FString *)FVar4.Data,
                         local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a trailing delimiter with an array of 1 delimiter, culling empties"
             ,bVar5);
  DestructItems<FString,int>((FString *)FVar4.Data,iVar10);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FVar4.Data = local_98.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"|b",6);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_res20 = &local_b8;
  uStack_70 = &local_res20;
  local_88.ArrayMax = uStack_50._4_4_;
  local_88.ArrayNum = 1;
  local_78 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<`FString::ParseIntoArray'::__l12::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  iVar10 = local_98.ArrayNum + -1;
  if (local_98.ArrayNum == 0) {
    iVar10 = 0;
  }
  uStack_50 = (FString *)CONCAT44(uStack_50._4_4_,iVar10);
  local_58 = (undefined1  [8])FVar4.Data;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x150628d84;
  UE::String::ParseTokens
            ((TStringView<wchar_t> *)local_58,(TStringView<wchar_t> *)&local_88,
             (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_78,SkipEmpty|IgnoreCase);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"b",4);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  FVar4.Data = local_88.AllocatorInstance.Data;
  ConstructItems<FString,FString,int>(local_88.AllocatorInstance.Data,(FString *)&local_98,1);
  iVar10 = local_88.ArrayNum;
  if ((local_b8.ArrayNum == local_88.ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,(FString *)FVar4.Data,
                         local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a leading delimiter with a single delimiter, culling empties",
             bVar5);
  DestructItems<FString,int>((FString *)FVar4.Data,iVar10);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FVar4.Data = local_98.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"|b",6);
  ::FString::ParseIntoArray((FString *)&local_98,&local_b8,&local_res18,1,true);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"b",4);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  FVar4.Data = local_88.AllocatorInstance.Data;
  ConstructItems<FString,FString,int>(local_88.AllocatorInstance.Data,(FString *)&local_98,1);
  iVar10 = local_88.ArrayNum;
  if ((local_b8.ArrayNum == local_88.ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,(FString *)FVar4.Data,
                         local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a leading delimiter with an array of 1 delimiter, culling empties"
             ,bVar5);
  DestructItems<FString,int>((FString *)FVar4.Data,iVar10);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FVar4.Data = local_98.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"a|b",8);
  ::FString::ParseIntoArray((FString *)&local_98,&local_b8,L"|",true);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  local_58 = (undefined1  [8])0x0;
  uStack_50 = (FString *)0x0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_58,0,(int *)((longlong)&uStack_50 + 4));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_58,(int *)&uStack_50,(int *)((longlong)&uStack_50 + 4)
            );
  FGenericPlatformString::Memcpy((void *)local_58,L"a",4);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,&local_48.Data.ArrayMax);
  FGenericPlatformString::Memcpy(local_48.Data.AllocatorInstance.Data,L"b",4);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  FVar4.Data = local_88.AllocatorInstance.Data;
  ConstructItems<FString,FString,int>(local_88.AllocatorInstance.Data,(FString *)local_58,2);
  iVar10 = local_88.ArrayNum;
  if ((local_b8.ArrayNum == local_88.ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,(FString *)FVar4.Data,
                         local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a middle delimiter with a single delimiter, culling empties",
             bVar5);
  DestructItems<FString,int>((FString *)FVar4.Data,iVar10);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  puVar11 = &stack0xffffffffffffffc8;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
  FVar4.Data = local_98.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_98.AllocatorInstance.Data,L"a|b",8);
  ::FString::ParseIntoArray((FString *)&local_98,&local_b8,&local_res18,1,true);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  ::FString::FString((FString *)local_58,L"a");
  ::FString::FString(&local_48,L"b");
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  FVar4.Data = local_88.AllocatorInstance.Data;
  ConstructItems<FString,FString,int>(local_88.AllocatorInstance.Data,(FString *)local_58,2);
  iVar10 = local_88.ArrayNum;
  if ((local_b8.ArrayNum == local_88.ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,(FString *)FVar4.Data,
                         local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a middle delimiter with an array of 1 delimiter, culling empties"
             ,bVar5);
  DestructItems<FString,int>((FString *)FVar4.Data,iVar10);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  puVar11 = &stack0xffffffffffffffc8;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  pFVar7 = ::FString::FString((FString *)local_58,L"|");
  ::FString::ParseIntoArray(pFVar7,&local_b8,L"|",false);
  if (local_58 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_58);
  }
  local_58 = (undefined1  [8])0x0;
  uStack_50 = (FString *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  FVar4.Data = local_88.AllocatorInstance.Data;
  ConstructItems<FString,FString,int>(local_88.AllocatorInstance.Data,(FString *)local_58,2);
  iVar10 = local_88.ArrayNum;
  if ((local_b8.ArrayNum == local_88.ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,(FString *)FVar4.Data,
                         local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a single delimiter character with a single delimiter, keeping empties",bVar5);
  DestructItems<FString,int>((FString *)FVar4.Data,iVar10);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  puVar11 = &stack0xffffffffffffffc8;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  pFVar7 = ::FString::FString((FString *)local_58,L"|");
  ::FString::ParseIntoArray(pFVar7,&local_b8,&local_res18,1,false);
  if (local_58 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_58);
  }
  local_58 = (undefined1  [8])local_78;
  local_78 = (undefined1  [8])0x0;
  uStack_50 = (FString *)local_58;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_88,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a single delimiter character with an array of 1 delimiter, keeping empties",
             bVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  puVar11 = local_58;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  ::FString::ParseIntoArray((FString *)&local_88,&local_b8,L"|",false);
  local_58 = (undefined1  [8])&local_88;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_50 = (FString *)local_78;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_98,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse an unallocated string with a single delimiter, keeping empties",bVar5);
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  ::FString::ParseIntoArray((FString *)&local_88,&local_b8,&local_res18,1,false);
  local_58 = (undefined1  [8])&local_88;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_50 = (FString *)local_78;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_98,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse an unallocated string with an array of 1 delimiter, keeping empties",bVar5);
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  ::FString::ParseIntoArray(&local_a8,&local_b8,L"|",false);
  local_58 = (undefined1  [8])&local_88;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_50 = (FString *)local_78;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_98,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse an allocated empty string with a single delimiter, keeping empties",bVar5);
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  ::FString::ParseIntoArray(&local_a8,&local_b8,&local_res18,1,false);
  local_58 = (undefined1  [8])&local_88;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_50 = (FString *)local_78;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_98,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse an allocated empty string with an array of 1 delimiter, keeping empties",bVar5)
  ;
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  pFVar7 = ::FString::FString((FString *)local_58,L"a|");
  ::FString::ParseIntoArray(pFVar7,&local_b8,L"|",false);
  if (local_58 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_58);
  }
  ::FString::FString((FString *)local_78,L"a");
  local_58 = (undefined1  [8])local_78;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_50 = (FString *)local_58;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_88,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a trailing delimiter with a single delimiter, keeping empties",
             bVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  puVar11 = local_58;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  pFVar7 = ::FString::FString((FString *)local_58,L"a|");
  ::FString::ParseIntoArray(pFVar7,&local_b8,&local_res18,1,false);
  if (local_58 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_58);
  }
  ::FString::FString((FString *)local_78,L"a");
  local_58 = (undefined1  [8])local_78;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_50 = (FString *)local_58;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_88,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a trailing delimiter with an array of 1 delimiter, keeping empties"
             ,bVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  puVar11 = local_58;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  pFVar7 = ::FString::FString((FString *)local_58,L"|b");
  ::FString::ParseIntoArray(pFVar7,&local_b8,L"|",false);
  if (local_58 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_58);
  }
  local_78 = (undefined1  [8])0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  ::FString::FString(&local_68,L"b");
  local_58 = (undefined1  [8])local_78;
  uStack_50 = (FString *)local_58;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_88,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a leading delimiter with a single delimiter, keeping empties",
             bVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  puVar11 = local_58;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  pFVar7 = ::FString::FString((FString *)local_58,L"|b");
  ::FString::ParseIntoArray(pFVar7,&local_b8,&local_res18,1,false);
  if (local_58 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_58);
  }
  local_78 = (undefined1  [8])0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  ::FString::FString(&local_68,L"b");
  local_58 = (undefined1  [8])local_78;
  uStack_50 = (FString *)local_58;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_88,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a leading delimiter with an array of 1 delimiter, keeping empties"
             ,bVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  puVar11 = local_58;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  pFVar7 = ::FString::FString((FString *)local_58,L"a|b");
  ::FString::ParseIntoArray(pFVar7,&local_b8,L"|",false);
  if (local_58 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_58);
  }
  ::FString::FString((FString *)local_78,L"a");
  ::FString::FString(&local_68,L"b");
  local_58 = (undefined1  [8])local_78;
  uStack_50 = (FString *)local_58;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_88,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a middle delimiter with a single delimiter, keeping empties",
             bVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  puVar11 = local_58;
  lVar12 = 2;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar12 = lVar12 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar12 != 0);
  if (local_b8.ArrayMax < 0) {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
    if (local_b8.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    local_b8.ArrayNum = 0;
  }
  pFVar7 = ::FString::FString((FString *)local_58,L"a|b");
  ::FString::ParseIntoArray(pFVar7,&local_b8,&local_res18,1,false);
  if (local_58 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_58);
  }
  ::FString::FString((FString *)local_78,L"a");
  ::FString::FString(&local_68,L"b");
  local_58 = (undefined1  [8])local_78;
  uStack_50 = (FString *)local_58;
  pTVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::TArray<FString,TSizedDefaultAllocator<32>_>
                     (&local_88,(initializer_list<FString> *)local_58);
  if ((local_b8.ArrayNum == pTVar8->ArrayNum) &&
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_b8.AllocatorInstance.Data,
                         (FString *)(pTVar8->AllocatorInstance).Data,local_b8.ArrayNum), bVar5)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"parse a string with a middle delimiter with an array of 1 delimiter, keeping empties"
             ,bVar5);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  puVar11 = local_58;
  do {
    puVar1 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    lVar9 = lVar9 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar9 != 0);
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1414d8fe0

FString * __thiscall
FStringParseIntoArrayTest::GetBeautifiedTestName
          (FStringParseIntoArrayTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x22,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x22,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x22,
             "System.Core.String.ParseIntoArray",0x22);
  return __return_storage_ptr__;
}

