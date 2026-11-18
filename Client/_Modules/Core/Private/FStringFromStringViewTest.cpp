// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414dbb00

EAutomationTestFlags __thiscall
FStringFromStringViewTest::GetTestFlags(FStringFromStringViewTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414dbb10

bool __thiscall FStringFromStringViewTest::IsStressTest(FStringFromStringViewTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414dbb20

uint __thiscall FStringFromStringViewTest::GetRequiredDeviceNum(FStringFromStringViewTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414dbb30

FString * __thiscall
FStringFromStringViewTest::GetTestSourceFileName
          (FStringFromStringViewTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414dbbd0

int __thiscall FStringFromStringViewTest::GetTestSourceFileLine(FStringFromStringViewTest *this)

{
  return 0x160;
}

// GetTests @ 1414dbbe0

/* WARNING: Removing unreachable block (ram,0x0001414dbd29) */
/* WARNING: Removing unreachable block (ram,0x0001414dbdf4) */

void __thiscall
FStringFromStringViewTest::GetTests
          (FStringFromStringViewTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            ((wchar_t *)local_28.Data,0x22,"System.Core.String.FromStringView",0x22);
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

// RunTest @ 1414dbe20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FStringFromStringViewTest::RunTest(FStringFromStringViewTest *this,FString *param_1)

{
  ForAnyElementType FVar1;
  FString *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  FString local_d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar16 = (FScriptContainerElement *)0x0;
  iVar15 = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax);
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"Literal",0x10);
  pFVar2 = ::FString::ConstructFromPtrSize(&local_b8,L"Literal",7);
  pFVar5 = pFVar16;
  iVar3 = iVar15;
  if (&local_48 != pFVar2) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar14.Data = FVar1.Data;
  }
  pFVar9 = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    pFVar9 = pFVar5;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String(StringView)",(wchar_t *)pFVar9,
             (wchar_t *)FVar14.Data);
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax);
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"Literal",0x10);
  pFVar2 = ::FString::ConstructFromPtrSize(&local_b8,"Literal",7);
  pFVar5 = pFVar16;
  if (&local_38 != pFVar2) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar15 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar14.Data = FVar1.Data;
  }
  pFVar9 = (FScriptContainerElement *)L"";
  if (iVar15 != 0) {
    pFVar9 = pFVar5;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String(AnsiStringView)",(wchar_t *)pFVar9,
             (wchar_t *)FVar14.Data);
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax);
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"Literal",0x10);
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  FGenericPlatformString::Memcpy(local_c8.AllocatorInstance.Data,&u_Temp,10);
  ::FString::AssignRange((FString *)&local_c8,L"Literal",7);
  FVar14.Data = local_c8.AllocatorInstance.Data;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar11.Data = FVar1.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c8.ArrayNum != 0) {
    FVar12.Data = local_c8.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String = StringView",(wchar_t *)FVar12.Data,
             (wchar_t *)FVar11.Data);
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize(&local_b8,(wchar_t *)0x0,0);
  iVar17 = 0;
  iVar3 = iVar17;
  iVar15 = iVar17;
  if (&local_a8 != pFVar2) {
    pFVar16 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar2->Data).ArrayNum;
    iVar15 = (pFVar2->Data).ArrayMax;
    local_a8.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_a8.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = pFVar16;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"String(EmptyStringView)",iVar3 < 2);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"String(EmptyStringView) (No Allocation)",
             ((longlong)iVar15 & 0x7fffffffffffffffU) == 0);
  if (pFVar16 != (FScriptContainerElement *)&u_Temp) {
    local_a8.Data._8_8_ = local_a8.Data._8_8_ & 0xffffffff00000000;
    if (iVar15 != 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,5,(ForAnyElementType *)&local_a8,0,&local_a8.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,(ForAnyElementType *)&local_a8,&local_a8.Data.ArrayNum,&local_a8.Data.ArrayMax)
    ;
    *(undefined8 *)local_a8.Data.AllocatorInstance.Data = _u_Temp;
    *(undefined2 *)(local_a8.Data.AllocatorInstance.Data + 8) = DAT_15062a7a8;
  }
  ::FString::AssignRange(&local_a8,(wchar_t *)0x0,0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"String = EmptyStringView",local_a8.Data.ArrayNum < 2);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"String = EmptyStringView (No Allocation)",
             ((longlong)local_a8.Data.ArrayMax & 0x7fffffffffffffffU) == 0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  FGenericPlatformString::Memcpy(local_c8.AllocatorInstance.Data,L"AssignEntireString",0x26);
  iVar15 = 0;
  iVar3 = local_c8.ArrayNum + -1;
  if (local_c8.ArrayNum == 0) {
    iVar3 = iVar15;
  }
  ::FString::AssignRange((FString *)&local_c8,(wchar_t *)local_c8.AllocatorInstance.Data,iVar3);
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax
            );
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"AssignEntireString",0x26);
  FVar14.Data = local_c8.AllocatorInstance.Data;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar11.Data = FVar1.Data;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c8.ArrayNum != 0) {
    FVar12.Data = local_c8.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String = StringView(String)",(wchar_t *)FVar12.Data,
             (wchar_t *)FVar11.Data);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x14,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x14,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  FGenericPlatformString::Memcpy(local_c8.AllocatorInstance.Data,L"AssignStartOfString",0x28);
  iVar3 = local_c8.ArrayNum + -1;
  if (local_c8.ArrayNum == 0) {
    iVar3 = iVar15;
  }
  if (0xb < iVar3) {
    iVar3 = 0xb;
  }
  iVar7 = iVar15;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  ::FString::AssignRange((FString *)&local_c8,(wchar_t *)local_c8.AllocatorInstance.Data,iVar7);
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xc,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xc,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax)
  ;
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"AssignStart",0x18);
  FVar11.Data = local_c8.AllocatorInstance.Data;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar12.Data = FVar1.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_c8.ArrayNum != 0) {
    FVar6.Data = local_c8.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String = StringView(String).Left",(wchar_t *)FVar6.Data,
             (wchar_t *)FVar12.Data);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x12,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x12,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  FVar1.Data = local_c8.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_c8.AllocatorInstance.Data,L"AssignEndOfString",0x24);
  iVar3 = local_c8.ArrayNum + -1;
  if (local_c8.ArrayNum == 0) {
    iVar3 = iVar15;
  }
  lVar4 = (longlong)iVar3;
  if (0xb < iVar3) {
    iVar3 = 0xb;
  }
  iVar7 = iVar17;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  ::FString::AssignRange((FString *)&local_c8,(wchar_t *)(FVar1.Data + (lVar4 - iVar7) * 2),iVar7);
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xc,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xc,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax)
  ;
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"EndOfString",0x18);
  FVar12.Data = local_c8.AllocatorInstance.Data;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar6.Data = FVar1.Data;
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_c8.ArrayNum != 0) {
    FVar13.Data = local_c8.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String = StringView(String).Right",(wchar_t *)FVar13.Data
             ,(wchar_t *)FVar6.Data);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x15,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x15,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  FVar1.Data = local_c8.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_c8.AllocatorInstance.Data,L"AssignMiddleOfString",0x2a);
  iVar3 = local_c8.ArrayNum + -1;
  if (local_c8.ArrayNum == 0) {
    iVar3 = iVar15;
  }
  iVar15 = 6;
  if (iVar3 < 6) {
    iVar15 = iVar3;
  }
  iVar3 = iVar3 - iVar15;
  if (6 < iVar3) {
    iVar3 = 6;
  }
  if (0 < iVar3) {
    iVar17 = iVar3;
  }
  ::FString::AssignRange((FString *)&local_c8,(wchar_t *)(FVar1.Data + (longlong)iVar15 * 2),iVar17)
  ;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax);
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"Middle",0xe);
  FVar6.Data = local_c8.AllocatorInstance.Data;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar13.Data = FVar1.Data;
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_c8.ArrayNum != 0) {
    FVar10.Data = local_c8.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String = StringView(String).Mid",(wchar_t *)FVar10.Data,
             (wchar_t *)FVar13.Data);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  local_b8.Data.ArrayNum = 3;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  FGenericPlatformString::Memcpy(local_c8.AllocatorInstance.Data,L"Lhs",8);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_78,&local_c8,4 - (uint)(local_c8.ArrayNum != 0));
  ::FString::AppendChars((FString *)&local_78,L"RhsNotSZ",3);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax);
  FVar1.Data = local_d8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"LhsRhs",0xe);
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar14.Data = FVar1.Data;
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_78.ArrayNum != 0) {
    FVar11.Data = local_78.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Move String + StringView",(wchar_t *)FVar11.Data,
             (wchar_t *)FVar14.Data);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  FVar1.Data = local_c8.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_c8.AllocatorInstance.Data,L"Lhs",8);
  iVar3 = local_c8.ArrayNum;
  lVar4 = (longlong)local_c8.ArrayNum;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = local_c8.ArrayNum;
  uVar8 = (4 - (uint)(local_c8.ArrayNum != 0)) + local_c8.ArrayNum;
  if (local_c8.ArrayNum <= (int)uVar8) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,0,(ForAnyElementType *)&local_88,local_c8.ArrayNum,&local_88.Data.ArrayMax)
    ;
    if (iVar3 != 0) {
      memcpy(local_88.Data.AllocatorInstance.Data,FVar1.Data,lVar4 * 2);
    }
    ::FString::AppendChars(&local_88,L"RhsNotSZ",3);
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax)
    ;
    FVar1.Data = local_d8.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"LhsRhs",0xe);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar14.Data = FVar1.Data;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar11.Data = local_88.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"Copy String + StringView",(wchar_t *)FVar11.Data,
               (wchar_t *)FVar14.Data);
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,4,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,4,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax)
    ;
    FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"Lhs",8);
    ::FString::ConcatFC(&local_58,&local_d8,L"Rhs");
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax)
    ;
    FVar1.Data = local_d8.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"LhsRhs",0xe);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar14.Data = FVar1.Data;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"Move String + TCHAR*",(wchar_t *)FVar11.Data,
               (wchar_t *)FVar14.Data);
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    ::FString::ConcatFC(&local_68,(FString *)&local_c8,L"Rhs");
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)&local_d8,0,&local_d8.Data.ArrayMax);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,7,(ForAnyElementType *)&local_d8,&local_d8.Data.ArrayNum,&local_d8.Data.ArrayMax)
    ;
    FVar1.Data = local_d8.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(local_d8.Data.AllocatorInstance.Data,L"LhsRhs",0xe);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar14.Data = FVar1.Data;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar11.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"Copy String + TCHAR*",(wchar_t *)FVar11.Data,
               (wchar_t *)FVar14.Data);
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    pFVar2 = ::FString::FString(&local_b8,L"Rhs");
    ::FString::ConcatRF(&local_98,L"LhsNotSZ",3,pFVar2);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_d8,L"LhsRhs");
    FVar14.Data = local_98.Data.AllocatorInstance.Data;
    FVar1.Data = local_d8.Data.AllocatorInstance.Data;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar11.Data = local_d8.Data.AllocatorInstance.Data;
    }
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar12.Data = local_98.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"StringView + Move String",(wchar_t *)FVar12.Data,
               (wchar_t *)FVar11.Data);
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    ::FString::FString(&local_d8,L"Rhs");
    ::FString::ConcatRF(&local_b8,L"LhsNotSZ",3,&local_d8);
    ::FString::FString(&local_98,L"LhsRhs");
    FVar11.Data = local_98.Data.AllocatorInstance.Data;
    FVar1.Data = local_b8.Data.AllocatorInstance.Data;
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar12.Data = local_98.Data.AllocatorInstance.Data;
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"StringView + Copy String",(wchar_t *)FVar6.Data,
               (wchar_t *)FVar12.Data);
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    pFVar2 = ::FString::FString(&local_b8,L"Rhs");
    ::FString::ConcatCF(&local_98,L"Lhs",pFVar2);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_b8,L"LhsRhs");
    FVar12.Data = local_98.Data.AllocatorInstance.Data;
    FVar11.Data = local_b8.Data.AllocatorInstance.Data;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    }
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar13.Data = local_98.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"TCHAR* + Move String",(wchar_t *)FVar13.Data,
               (wchar_t *)FVar6.Data);
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    ::FString::ConcatCF(&local_98,L"Lhs",&local_d8);
    ::FString::FString(&local_b8,L"LhsRhs");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar11.Data = local_b8.Data.AllocatorInstance.Data;
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar6.Data = local_98.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"TCHAR* + Copy String",(wchar_t *)FVar6.Data,
               (wchar_t *)FVar11.Data);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (FVar14.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar14.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}

// GetBeautifiedTestName @ 1414dcf00

FString * __thiscall
FStringFromStringViewTest::GetBeautifiedTestName
          (FStringFromStringViewTest *this,FString *__return_storage_ptr__)

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
             "System.Core.String.FromStringView",0x22);
  return __return_storage_ptr__;
}

