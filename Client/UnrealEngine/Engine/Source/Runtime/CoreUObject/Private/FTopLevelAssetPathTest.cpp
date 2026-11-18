// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1421f3a90

EAutomationTestFlags __thiscall FTopLevelAssetPathTest::GetTestFlags(FTopLevelAssetPathTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1421f3aa0

bool __thiscall FTopLevelAssetPathTest::IsStressTest(FTopLevelAssetPathTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1421f3ab0

uint __thiscall FTopLevelAssetPathTest::GetRequiredDeviceNum(FTopLevelAssetPathTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1421f3ac0

FString * __thiscall
FTopLevelAssetPathTest::GetTestSourceFileName
          (FTopLevelAssetPathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\TopLevelAssetPath.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1421f3af0

int __thiscall FTopLevelAssetPathTest::GetTestSourceFileLine(FTopLevelAssetPathTest *this)

{
  return 0x232;
}

// GetTests @ 1421f3b00

/* WARNING: Removing unreachable block (ram,0x0001421f3c7e) */

void __thiscall
FTopLevelAssetPathTest::GetTests
          (FTopLevelAssetPathTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1421f3ca0

bool __thiscall FTopLevelAssetPathTest::RunTest(FTopLevelAssetPathTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1421f3cd0

FString * __thiscall
FTopLevelAssetPathTest::GetBeautifiedTestName
          (FTopLevelAssetPathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTopLevelAssetPathTest @ 142200450

FTopLevelAssetPathTest * __thiscall
FTopLevelAssetPathTest::FTopLevelAssetPathTest(FTopLevelAssetPathTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FTopLevelAssetPathTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TopLevelAssetPath");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 1422303f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001422305a9) */
/* WARNING: Removing unreachable block (ram,0x0001422305e4) */
/* WARNING: Removing unreachable block (ram,0x00014223104a) */
/* WARNING: Removing unreachable block (ram,0x000142231061) */
/* WARNING: Removing unreachable block (ram,0x000142231075) */
/* WARNING: Removing unreachable block (ram,0x00014223108d) */
/* WARNING: Removing unreachable block (ram,0x0001422310a7) */

void __thiscall FTopLevelAssetPathTest::TestBody(FTopLevelAssetPathTest *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  bool bVar6;
  ECbValidateError EVar7;
  FName *pFVar8;
  FString *pFVar9;
  FAutomationTestFramework *pFVar10;
  FString *pFVar11;
  FOutputDeviceRedirector *pFVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  undefined1 auVar19 [8];
  wchar_t *pwVar20;
  uint uVar21;
  uint uVar22;
  FName FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_a08 [32];
  FName local_9d8;
  FName FStack_9d0;
  undefined1 local_9c8 [8];
  int iStack_9c0;
  uint uStack_9bc;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_9b8 [2];
  FTopLevelAssetPath local_9a8;
  FName local_998;
  undefined1 local_990 [8];
  FName FStack_988;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_980 [2];
  FName local_970;
  FTopLevelAssetPath local_968;
  FTopLevelAssetPath local_958;
  FTopLevelAssetPath local_948;
  FTopLevelAssetPath local_938;
  FTopLevelAssetPath local_928;
  FTopLevelAssetPath local_918;
  FTopLevelAssetPath local_908;
  FTopLevelAssetPath local_8f8;
  FTopLevelAssetPath local_8e8;
  FCbWriter local_8d8;
  FTopLevelAssetPath local_8a8;
  FTopLevelAssetPath local_898;
  FName local_888 [2];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [517];
  wchar_t local_44d [517];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a08;
  ::FName::FName(&local_998,"/Path/To/Package");
  ::FName::FName(&local_970,"Asset");
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  ::FName::AppendString(&local_998,&local_878);
  if (local_878.End < local_878.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_878,1);
  }
  *local_878.CurPos = L'.';
  local_878.CurPos = local_878.CurPos + 1;
  ::FName::AppendString(&local_970,&local_878);
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  uVar21 = 0;
  pFVar8 = (FName *)::FString::ConstructFromPtrSize
                              ((FString *)&local_9d8,local_878.Base,
                               (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1));
  FVar23 = FVar14;
  uVar22 = uVar21;
  if (local_888 != pFVar8) {
    FVar23 = *pFVar8;
    pFVar8->ComparisonIndex = 0;
    pFVar8->Number = 0;
    uVar22 = pFVar8[1].ComparisonIndex.Value;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
  }
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  local_8f8.PackageName.ComparisonIndex.Value = 0;
  local_8f8.PackageName.Number = 0;
  local_8f8.AssetName.ComparisonIndex.Value = 0;
  local_8f8.AssetName.Number = 0;
  pFVar9 = FTopLevelAssetPath::ToString(&local_8f8,(FString *)&local_9d8);
  iVar1 = (pFVar9->Data).ArrayNum;
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  if (1 < iVar1) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_9c8,L"Empty path to string is empty string");
    (*pcVar4)(pFVar3,local_9c8,0);
    if (local_9c8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_9c8);
    }
  }
  local_990 = (undefined1  [8])0x0;
  local_8a8.PackageName = local_998;
  local_8a8.AssetName.ComparisonIndex.Value = 0;
  local_8a8.AssetName.Number = 0;
  if (local_998 == (FName)0x0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_9c8,L"TrySetPath(PackageName, NAME_None) succeeds");
    (*pcVar4)(pFVar3,local_9c8,0);
    if (local_9c8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_9c8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pFVar9 = ::FName::ToString(&local_998,(FString *)local_9c8);
  pFVar11 = FTopLevelAssetPath::ToString(&local_8a8,(FString *)&local_9d8);
  pwVar17 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(pFVar3,L"PackagePath to string is PackageName",pwVar18,pwVar20);
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  if (local_9c8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_9c8);
  }
  local_898.PackageName = local_998;
  local_898.AssetName = local_970;
  if (local_998 == (FName)0x0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_9c8,L"TrySetPath(PackageName, AssetName) succeeds");
    (*pcVar4)(pFVar3,local_9c8,0);
    if (local_9c8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_9c8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pFVar9 = FTopLevelAssetPath::ToString(&local_898,(FString *)&local_9d8);
  FVar15 = (FName)L"";
  if (uVar22 != 0) {
    FVar15 = FVar23;
  }
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar3,L"AssetPath to string is PackageName.AssetName",pwVar20,(wchar_t *)FVar15);
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  local_9c8 = (undefined1  [8])0x15060d16c;
  iStack_9c0 = 0;
  FStack_9d0 = (FName)((ulonglong)uStack_9bc << 0x20);
  local_9d8 = (FName)0x15060d16c;
  local_968.PackageName.ComparisonIndex.Value = 0;
  local_968.PackageName.Number = 0;
  local_968.AssetName.ComparisonIndex.Value = 0;
  local_968.AssetName.Number = 0;
  bVar6 = FTopLevelAssetPath::TrySetPath(&local_968,(TStringView<wchar_t> *)&local_9d8);
  if (bVar6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_9c8,L"TrySetPath with empty string fails");
    (*pcVar4)(pFVar3,local_9c8,0);
    if (local_9c8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_9c8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pFVar9 = FTopLevelAssetPath::ToString(&local_968,(FString *)&local_9d8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(pFVar3,L"Empty path to string is empty string",pwVar20,L"");
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  local_958.PackageName.ComparisonIndex.Value = 0;
  local_958.PackageName.Number = 0;
  local_958.AssetName.ComparisonIndex.Value = 0;
  local_958.AssetName.Number = 0;
  pFVar8 = (FName *)::FName::ToString(&local_998,(FString *)&local_9a8);
  local_9d8 = *pFVar8;
  uVar2 = pFVar8[1].ComparisonIndex.Value;
  iStack_9c0 = uVar2 - 1;
  if (uVar2 == 0) {
    iStack_9c0 = uVar21;
  }
  FStack_9d0.Number = uStack_9bc;
  FStack_9d0.ComparisonIndex.Value = iStack_9c0;
  local_9c8 = (undefined1  [8])local_9d8;
  bVar6 = FTopLevelAssetPath::TrySetPath(&local_958,(TStringView<wchar_t> *)&local_9d8);
  if (local_9a8.PackageName != (FName)0x0) {
    FMemory::Free((void *)local_9a8.PackageName);
  }
  if (!bVar6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_9c8,L"TrySetPath(PackageName.ToString()) succeeds");
    (*pcVar4)(pFVar3,local_9c8,0);
    if ((FName)local_9c8 != (FName)0x0) {
      FMemory::Free((void *)local_9c8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pFVar9 = ::FName::ToString(&local_998,(FString *)local_9c8);
  pFVar11 = FTopLevelAssetPath::ToString(&local_958,(FString *)&local_9d8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar3,L"PackagePathFromString to string is PackageName",pwVar18,pwVar20);
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  if ((FName)local_9c8 != (FName)0x0) {
    FMemory::Free((void *)local_9c8);
  }
  local_948.PackageName.ComparisonIndex.Value = 0;
  local_948.PackageName.Number = 0;
  FVar24.Value = uVar22 - 1;
  if (uVar22 == 0) {
    FVar24.Value = uVar21;
  }
  local_948.AssetName.ComparisonIndex.Value = 0;
  local_948.AssetName.Number = 0;
  FStack_9d0.Number = uStack_9bc;
  FStack_9d0.ComparisonIndex.Value = FVar24.Value;
  local_9d8 = FVar23;
  local_9c8 = (undefined1  [8])FVar23;
  iStack_9c0 = FVar24.Value;
  bVar6 = FTopLevelAssetPath::TrySetPath(&local_948,(TStringView<wchar_t> *)&local_9d8);
  if (!bVar6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_9c8,L"TrySetPath(AssetPath) succeeds");
    (*pcVar4)(pFVar3,local_9c8,0);
    if ((FName)local_9c8 != (FName)0x0) {
      FMemory::Free((void *)local_9c8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pFVar9 = FTopLevelAssetPath::ToString(&local_948,(FString *)&local_9d8);
  FVar15 = (FName)L"";
  if (uVar22 != 0) {
    FVar15 = FVar23;
  }
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar3,L"AssetPathFromString to string is PackageName.AssetName",pwVar20,
             (wchar_t *)FVar15);
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  local_8e8.PackageName.ComparisonIndex.Value = 0;
  local_8e8.PackageName.Number = 0;
  local_8e8.AssetName.ComparisonIndex.Value = 0;
  local_8e8.AssetName.Number = 0;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pFVar9 = FTopLevelAssetPath::ToString(&local_8e8,(FString *)&local_9d8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(pFVar3,L"Failed set to string is empty string",pwVar20,L"");
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  local_878.Base = local_858;
  local_938.PackageName.ComparisonIndex.Value = 0;
  local_938.PackageName.Number = 0;
  local_878.CurPos = local_858;
  local_938.AssetName.ComparisonIndex.Value = 0;
  local_938.AssetName.Number = 0;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.End = local_42;
  local_878.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>
                 (local_858,0x20,"/Path/To/Package.Asset:Subobject",0x20);
  local_9c8 = (undefined1  [8])local_878.Base;
  iStack_9c0 = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
  FStack_9d0.Number = uStack_9bc;
  FStack_9d0.ComparisonIndex.Value = iStack_9c0;
  local_9d8 = (FName)local_878.Base;
  bVar6 = FTopLevelAssetPath::TrySetPath(&local_938,(TStringView<wchar_t> *)&local_9d8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  if (bVar6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_9c8,L"TrySetPath with subobject path string fails");
    (*pcVar4)(pFVar3,local_9c8,0);
    if ((FName)local_9c8 != (FName)0x0) {
      FMemory::Free((void *)local_9c8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pFVar9 = FTopLevelAssetPath::ToString(&local_938,(FString *)&local_9d8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(pFVar3,L"Failed set to string is empty string",pwVar20,L"");
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  local_878.Base = local_858;
  local_928.PackageName.ComparisonIndex.Value = 0;
  local_928.PackageName.Number = 0;
  local_878.CurPos = local_858;
  local_928.AssetName.ComparisonIndex.Value = 0;
  local_928.AssetName.Number = 0;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.End = local_42;
  local_878.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>
                 (local_858,0x20,"/Path/To/Package.Asset.Malformed",0x20);
  local_9c8 = (undefined1  [8])local_878.Base;
  iStack_9c0 = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
  FStack_9d0.Number = uStack_9bc;
  FStack_9d0.ComparisonIndex.Value = iStack_9c0;
  local_9d8 = (FName)local_878.Base;
  bVar6 = FTopLevelAssetPath::TrySetPath(&local_928,(TStringView<wchar_t> *)&local_9d8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  if (bVar6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_9c8,L"TrySetPath with malformed path string fails");
    (*pcVar4)(pFVar3,local_9c8,0);
    if ((FName)local_9c8 != (FName)0x0) {
      FMemory::Free((void *)local_9c8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pFVar9 = FTopLevelAssetPath::ToString(&local_928,(FString *)&local_9d8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(pFVar3,L"Failed set to string is empty string",pwVar20,L"");
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  FOutputDevice::FOutputDevice((FOutputDevice *)local_9c8);
  local_9c8 = (undefined1  [8])&___7FOutputDeviceNull__6B_;
  local_9a8.PackageName.ComparisonIndex.Value = 0;
  local_9a8.PackageName.Number = 0;
  local_990 = (undefined1  [8])0x150883830;
  local_9a8.AssetName.ComparisonIndex.Value = 0;
  local_9a8.AssetName.Number = 0;
  bVar6 = FTopLevelAssetPath::ImportTextItem
                    (&local_9a8,(wchar_t **)local_990,0,(UObject *)0x0,(FOutputDevice *)local_9c8,
                     (FArchive *)0x0);
  if (!bVar6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_9d8,L"FromStructuredText ImportTextItem succeeds");
    (*pcVar4)(pFVar3,&local_9d8,0);
    if (local_9d8 != (FName)0x0) {
      FMemory::Free((void *)local_9d8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar10->CurrentTest,L"FromStructuredText ImportTextItem advances buffer",
             (uint)(ushort)*(wchar_t *)local_990,0);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  ::FString::FString((FString *)local_990,L"/Path/To/Package.Asset");
  pFVar9 = FTopLevelAssetPath::ToString(&local_9a8,(FString *)&local_9d8);
  auVar19 = (undefined1  [8])L"";
  if (FStack_988.ComparisonIndex.Value != 0) {
    auVar19 = local_990;
  }
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar3,L"FromStructuredText imports correct path",pwVar20,(wchar_t *)auVar19);
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  if (local_990 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_990);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)local_9c8);
  local_918.PackageName.ComparisonIndex.Value = 0;
  local_918.PackageName.Number = 0;
  local_990 = (undefined1  [8])0x1508839f0;
  local_918.AssetName.ComparisonIndex.Value = 0;
  local_918.AssetName.Number = 0;
  GetGlobalLogSingleton();
  pFVar12 = FOutputDeviceRedirector::Get();
  bVar6 = FTopLevelAssetPath::ImportTextItem
                    (&local_918,(wchar_t **)local_990,0,(UObject *)0x0,(FOutputDevice *)pFVar12,
                     (FArchive *)0x0);
  if (!bVar6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_9d8,L"FromExportTextPath ImportTextItem succeeds");
    (*pcVar4)(pFVar3,&local_9d8,0);
    if (local_9d8 != (FName)0x0) {
      FMemory::Free((void *)local_9d8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar10->CurrentTest,L"FromExportTextPath ImportTextItem advances buffer",
             (uint)(ushort)*(wchar_t *)local_990,0);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  ::FString::FString((FString *)local_9c8,L"/Path/To/Package.Asset");
  pFVar9 = FTopLevelAssetPath::ToString(&local_918,(FString *)&local_9d8);
  pwVar20 = L"";
  if (iStack_9c0 != 0) {
    pwVar20 = (wchar_t *)local_9c8;
  }
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(pFVar3,L"FromExportTextPath imports correct path",pwVar18,pwVar20);
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  if ((FName)local_9c8 != (FName)0x0) {
    FMemory::Free((void *)local_9c8);
  }
  local_908.PackageName.ComparisonIndex.Value = 0;
  local_908.PackageName.Number = 0;
  local_990 = (undefined1  [8])0x150883b80;
  local_908.AssetName.ComparisonIndex.Value = 0;
  local_908.AssetName.Number = 0;
  GetGlobalLogSingleton();
  pFVar12 = FOutputDeviceRedirector::Get();
  bVar6 = FTopLevelAssetPath::ImportTextItem
                    (&local_908,(wchar_t **)local_990,0,(UObject *)0x0,(FOutputDevice *)pFVar12,
                     (FArchive *)0x0);
  if (!bVar6) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_9d8,L"FromShortExportTextPath ImportTextItem succeeds");
    (*pcVar4)(pFVar3,&local_9d8,0);
    if (local_9d8 != (FName)0x0) {
      FMemory::Free((void *)local_9d8);
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar10->CurrentTest,L"FromShortExportTextPath ImportTextItem advances buffer",
             (uint)(ushort)*(wchar_t *)local_990,0);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  ::FString::FString((FString *)local_9c8,L"/Path/To/Package.Asset");
  pFVar9 = FTopLevelAssetPath::ToString(&local_908,(FString *)&local_9d8);
  pwVar20 = L"";
  if (iStack_9c0 != 0) {
    pwVar20 = (wchar_t *)local_9c8;
  }
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar3,L"FromShortExportTextPath  imports correct path",pwVar18,pwVar20);
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  if ((FName)local_9c8 != (FName)0x0) {
    FMemory::Free((void *)local_9c8);
  }
  FCbWriter::FCbWriter(&local_8d8);
  local_990._0_4_ = 0;
  local_990._4_4_ = 0;
  local_878.CurPos = local_858;
  local_878.End = local_44d;
  local_9d8 = (FName)local_858;
  FStack_988.ComparisonIndex.Value = 0;
  FStack_988.Number = 0;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  FStack_9d0.ComparisonIndex.Value = (int)local_878.CurPos - local_9d8.ComparisonIndex.Value;
  local_878.Base = (wchar_t *)local_9d8;
  FCbWriter::SetNameOrAddString(&local_8d8,(TStringView<char8_t> *)&local_9d8);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)&local_878);
  FCbWriter::Save(&local_8d8,(FCbFieldIterator *)local_9c8);
  TVar5.Owner = local_9b8[0].Owner;
  FVar15 = FVar14;
  if (local_9b8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_9b8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_9b8[0].Owner)->_padding_ + 8))(local_9b8[0].Owner);
    }
    FVar15 = (FName)(TVar5.Owner)->Size;
  }
  TVar5.Owner = local_9b8[0].Owner;
  FVar13 = FVar14;
  if (local_9b8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_9b8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_9b8[0].Owner)->_padding_ + 8))(local_9b8[0].Owner);
    }
    FVar13 = (FName)(TVar5.Owner)->Data;
  }
  local_9d8 = FVar13;
  FStack_9d0 = FVar15;
  EVar7 = ValidateCompactBinaryRange((TMemoryView<void_const_> *)&local_9d8,All);
  pFVar10 = FAutomationTestFramework::Get();
  if (EVar7 == None) {
    FStack_9d0.Number = uStack_9bc;
    FStack_9d0.ComparisonIndex.Value = iStack_9c0;
    local_9a8.PackageName.ComparisonIndex.Value = 0;
    local_9a8.PackageName.Number = 0;
    local_9a8.AssetName.ComparisonIndex.Value = 0;
    local_9a8.AssetName.Number = 0;
    local_9d8.ComparisonIndex.Value = local_9c8._0_4_;
    local_9d8.Number = local_9c8._4_4_;
    bVar6 = ::LoadFromCompactBinary((FCbFieldView *)&local_9d8,&local_9a8);
    if (!bVar6) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)&local_9d8,
                         L"EmptyPathFromCompactBinary LoadFromCompactBinary succeeds");
      (*pcVar4)(pFVar3,&local_9d8,0);
      if (local_9d8 != (FName)0x0) {
        FMemory::Free((void *)local_9d8);
      }
    }
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pFVar9 = FTopLevelAssetPath::ToString(&local_9a8,(FString *)&local_9d8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              (pFVar3,L"EmptyPathFromCompactBinary LoadFromCompactBinary correct path",pwVar20,L"");
  }
  else {
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_9d8,L"%s: The two values are not equal.");
    (*pcVar4)(pFVar3,&local_9d8,0);
  }
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_9b8);
  FCbWriter::~FCbWriter(&local_8d8);
  FCbWriter::FCbWriter(&local_8d8);
  local_9d8 = local_8a8.PackageName;
  FStack_9d0 = local_8a8.AssetName;
  ::operator<<(&local_8d8,(FTopLevelAssetPath *)&local_9d8);
  FCbWriter::Save(&local_8d8,(FCbFieldIterator *)local_990);
  TVar5.Owner = local_980[0].Owner;
  TVar16.Owner = local_980[0].Owner;
  FVar15 = FVar14;
  if (local_980[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_980[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_980[0].Owner)->_padding_ + 8))(local_980[0].Owner);
    }
    TVar16.Owner = local_980[0].Owner;
    FVar15 = (FName)(TVar5.Owner)->Size;
  }
  FVar13 = FVar14;
  if (TVar16.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(TVar16.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((TVar16.Owner)->_padding_ + 8))(TVar16.Owner);
    }
    FVar13 = (FName)(TVar16.Owner)->Data;
  }
  local_9d8 = FVar13;
  FStack_9d0 = FVar15;
  EVar7 = ValidateCompactBinaryRange((TMemoryView<void_const_> *)&local_9d8,All);
  pFVar10 = FAutomationTestFramework::Get();
  if (EVar7 == None) {
    local_9a8.PackageName.ComparisonIndex.Value = 0;
    local_9a8.PackageName.Number = 0;
    local_9a8.AssetName.ComparisonIndex.Value = 0;
    local_9a8.AssetName.Number = 0;
    local_9d8.ComparisonIndex.Value = local_990._0_4_;
    local_9d8.Number = local_990._4_4_;
    FStack_9d0 = FStack_988;
    bVar6 = ::LoadFromCompactBinary((FCbFieldView *)&local_9d8,&local_9a8);
    if (!bVar6) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)&local_9d8,
                         L"PackagePathFromCompactBinary LoadFromCompactBinary succeeds");
      (*pcVar4)(pFVar3,&local_9d8,0);
      if (local_9d8 != (FName)0x0) {
        FMemory::Free((void *)local_9d8);
      }
    }
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pFVar9 = ::FName::ToString(&local_998,(FString *)local_9c8);
    pFVar11 = FTopLevelAssetPath::ToString(&local_9a8,(FString *)&local_9d8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              (pFVar3,L"PackagePathFromCompactBinary LoadFromCompactBinary correct path",pwVar18,
               pwVar20);
    FVar15 = (FName)local_9c8;
    if (local_9d8 != (FName)0x0) {
      FMemory::Free((void *)local_9d8);
      FVar15 = (FName)local_9c8;
    }
  }
  else {
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_9d8,L"%s: The two values are not equal.");
    (*pcVar4)(pFVar3,&local_9d8,0);
    FVar15 = local_9d8;
  }
  if (FVar15 != (FName)0x0) {
    FMemory::Free((void *)FVar15);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_980);
  FCbWriter::~FCbWriter(&local_8d8);
  FCbWriter::FCbWriter(&local_8d8);
  FStack_9d0.ComparisonIndex.Value = FVar24.Value;
  local_9a8.PackageName.ComparisonIndex.Value = 0;
  local_9a8.PackageName.Number = 0;
  local_9a8.AssetName.ComparisonIndex.Value = 0;
  local_9a8.AssetName.Number = 0;
  local_9d8 = FVar23;
  FTopLevelAssetPath::TrySetPath(&local_9a8,(TStringView<wchar_t> *)&local_9d8);
  ::operator<<(&local_8d8,&local_9a8);
  FCbWriter::Save(&local_8d8,(FCbFieldIterator *)local_9c8);
  TVar5.Owner = local_9b8[0].Owner;
  TVar16.Owner = local_9b8[0].Owner;
  FVar15 = FVar14;
  if (local_9b8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_9b8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_9b8[0].Owner)->_padding_ + 8))(local_9b8[0].Owner);
    }
    TVar16.Owner = local_9b8[0].Owner;
    FVar15 = (FName)(TVar5.Owner)->Size;
  }
  if (TVar16.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(TVar16.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((TVar16.Owner)->_padding_ + 8))(TVar16.Owner);
    }
    FVar14 = (FName)(TVar16.Owner)->Data;
  }
  local_9d8 = FVar14;
  FStack_9d0 = FVar15;
  EVar7 = ValidateCompactBinaryRange((TMemoryView<void_const_> *)&local_9d8,All);
  pFVar10 = FAutomationTestFramework::Get();
  if (EVar7 == None) {
    FStack_9d0.Number = uStack_9bc;
    FStack_9d0.ComparisonIndex.Value = iStack_9c0;
    local_9a8.PackageName.ComparisonIndex.Value = 0;
    local_9a8.PackageName.Number = 0;
    local_9a8.AssetName.ComparisonIndex.Value = 0;
    local_9a8.AssetName.Number = 0;
    local_9d8.ComparisonIndex.Value = local_9c8._0_4_;
    local_9d8.Number = local_9c8._4_4_;
    bVar6 = ::LoadFromCompactBinary((FCbFieldView *)&local_9d8,&local_9a8);
    if (!bVar6) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString((FString *)&local_9d8,
                         L"AssetPathFromCompactBinary LoadFromCompactBinary succeeds");
      (*pcVar4)(pFVar3,&local_9d8,0);
      if (local_9d8 != (FName)0x0) {
        FMemory::Free((void *)local_9d8);
      }
    }
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pFVar9 = FTopLevelAssetPath::ToString(&local_9a8,(FString *)&local_9d8);
    FVar14 = (FName)L"";
    if (uVar22 != 0) {
      FVar14 = FVar23;
    }
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual
              (pFVar3,L"AssetPathFromCompactBinary LoadFromCompactBinary correct path",pwVar17,
               (wchar_t *)FVar14);
  }
  else {
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_9d8,L"%s: The two values are not equal.");
    (*pcVar4)(pFVar3,&local_9d8,0);
  }
  if (local_9d8 != (FName)0x0) {
    FMemory::Free((void *)local_9d8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_9b8);
  FCbWriter::~FCbWriter(&local_8d8);
  if (FVar23 != (FName)0x0) {
    FMemory::Free((void *)FVar23);
  }
  return;
}

