// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac9090

EAutomationTestFlags __thiscall
FDirectoryTreeContainsChildPathTests::GetTestFlags(FDirectoryTreeContainsChildPathTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac90a0

bool __thiscall
FDirectoryTreeContainsChildPathTests::IsStressTest(FDirectoryTreeContainsChildPathTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac90b0

uint __thiscall
FDirectoryTreeContainsChildPathTests::GetRequiredDeviceNum
          (FDirectoryTreeContainsChildPathTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac90c0

FString * __thiscall
FDirectoryTreeContainsChildPathTests::GetTestSourceFileName
          (FDirectoryTreeContainsChildPathTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DirectoryTreeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac90f0

int __thiscall
FDirectoryTreeContainsChildPathTests::GetTestSourceFileLine
          (FDirectoryTreeContainsChildPathTests *this)

{
  return 9;
}

// GetTests @ 141ac9100

/* WARNING: Removing unreachable block (ram,0x000141ac927e) */

void __thiscall
FDirectoryTreeContainsChildPathTests::GetTests
          (FDirectoryTreeContainsChildPathTests *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac92a0

bool __thiscall
FDirectoryTreeContainsChildPathTests::RunTest
          (FDirectoryTreeContainsChildPathTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac92d0

FString * __thiscall
FDirectoryTreeContainsChildPathTests::GetBeautifiedTestName
          (FDirectoryTreeContainsChildPathTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDirectoryTreeContainsChildPathTests @ 141b21560

FDirectoryTreeContainsChildPathTests * __thiscall
FDirectoryTreeContainsChildPathTests::FDirectoryTreeContainsChildPathTests
          (FDirectoryTreeContainsChildPathTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDirectoryTreeContainsChildPathTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Containers][DirectoryTree]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::DirectoryTree::ContainsChildPaths");
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
  ::FString::FString(&local_18,"[Core][Containers][DirectoryTree]");
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

// TestBody @ 141b86c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDirectoryTreeContainsChildPathTests::TestBody
          (FDirectoryTreeContainsChildPathTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> TVar4;
  TUniquePtr<TDirectoryTree<int>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<int>::FTreeNode_[0]>_>
  TVar5;
  bool bVar6;
  FAutomationTestFramework *pFVar7;
  FTreeNode *this_00;
  FString *pFVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  TStringView<wchar_t> local_a8;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [16];
  TDirectoryTree<int> local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.Size = 10;
  local_58.Root.RelPaths.Ptr = (FString *)0x0;
  local_58.Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  local_a8.DataPtr = L"/Game/Dir1";
  local_58.Root.NumChildNodesAndFlags = 0;
  local_58.Root.CapacityChildNodes = 0;
  local_58.NumPaths = 0;
  local_58.PathSeparator = L'/';
  local_58.bPathSeparatorInitialized = false;
  local_58.bNeedDriveWithoutPathFixup = false;
  TDirectoryTree<int>::FindOrAdd(&local_58,&local_a8,(bool *)0x0);
  local_a8.Size = 10;
  local_a8.DataPtr = L"/Game/Dir2";
  TDirectoryTree<int>::FindOrAdd(&local_58,&local_a8,(bool *)0x0);
  local_a8.Size = 0x15;
  local_a8.DataPtr = L"/Game/Dir2/Grandchild";
  TDirectoryTree<int>::FindOrAdd(&local_58,&local_a8,(bool *)0x0);
  local_a8.Size = 0xe;
  local_a8.DataPtr = L"/Plugin1/Path1";
  TDirectoryTree<int>::FindOrAdd(&local_58,&local_a8,(bool *)0x0);
  local_a8.Size = 0xe;
  local_a8.DataPtr = L"/Plugin1/Path2";
  TDirectoryTree<int>::FindOrAdd(&local_58,&local_a8,(bool *)0x0);
  local_a8.Size = 1;
  local_98.Base = local_78;
  local_98.CurPos = local_78;
  local_a8.DataPtr = L"/";
  local_98.End = (wchar_t *)&local_58;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  TDirectoryTree<int>::NormalizePathForReading(&local_58,&local_a8,&local_98);
  bVar6 = TDirectoryTree<int>::FTreeNode::ContainsChildPaths(&local_58.Root,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (!bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  local_a8.Size = 5;
  local_98.Base = local_78;
  local_98.CurPos = local_78;
  local_a8.DataPtr = L"/Game";
  local_98.End = (wchar_t *)&local_58;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  TDirectoryTree<int>::NormalizePathForReading(&local_58,&local_a8,&local_98);
  bVar6 = TDirectoryTree<int>::FTreeNode::ContainsChildPaths(&local_58.Root,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (!bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  local_98.Base = local_78;
  local_a8.Size = 10;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)&local_58;
  local_a8.DataPtr = L"/Game/Dir2";
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  TDirectoryTree<int>::NormalizePathForReading(&local_58,&local_a8,&local_98);
  bVar6 = TDirectoryTree<int>::FTreeNode::ContainsChildPaths(&local_58.Root,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (!bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  local_a8.Size = 8;
  local_98.Base = local_78;
  local_98.CurPos = local_78;
  local_a8.DataPtr = L"/Plugin1";
  local_98.End = (wchar_t *)&local_58;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  TDirectoryTree<int>::NormalizePathForReading(&local_58,&local_a8,&local_98);
  bVar6 = TDirectoryTree<int>::FTreeNode::ContainsChildPaths(&local_58.Root,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (!bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_a8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  local_98.Base = local_78;
  local_a8.Size = 10;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)&local_58;
  local_a8.DataPtr = L"/Game/Dir1";
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  TDirectoryTree<int>::NormalizePathForReading(&local_58,&local_a8,&local_98);
  bVar6 = TDirectoryTree<int>::FTreeNode::ContainsChildPaths(&local_58.Root,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_a8,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  local_98.Base = local_78;
  local_a8.Size = 0x15;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)&local_58;
  local_a8.DataPtr = L"/Game/Dir2/Grandchild";
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  TDirectoryTree<int>::NormalizePathForReading(&local_58,&local_a8,&local_98);
  bVar6 = TDirectoryTree<int>::FTreeNode::ContainsChildPaths(&local_58.Root,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_a8,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  local_98.Base = local_78;
  local_a8.Size = 0xe;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)&local_58;
  local_a8.DataPtr = L"/Plugin1/Path1";
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  TDirectoryTree<int>::NormalizePathForReading(&local_58,&local_a8,&local_98);
  bVar6 = TDirectoryTree<int>::FTreeNode::ContainsChildPaths(&local_58.Root,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_a8,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  local_98.Base = local_78;
  local_a8.Size = 0xe;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)&local_58;
  local_a8.DataPtr = L"/Plugin1/Path2";
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  TDirectoryTree<int>::NormalizePathForReading(&local_58,&local_a8,&local_98);
  bVar6 = TDirectoryTree<int>::FTreeNode::ContainsChildPaths(&local_58.Root,&local_a8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (bVar6) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_a8,L"Condition expected to return false but returned true")
    ;
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
  }
  TVar5.Ptr = local_58.Root.ChildNodes.Ptr;
  if (local_58.Root.ChildNodes.Ptr != (FTreeNode *)0x0) {
    lVar9 = *(longlong *)&local_58.Root.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
    this_00 = local_58.Root.ChildNodes.Ptr + lVar9;
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      this_00 = this_00 + -1;
      TDirectoryTree<int>::FTreeNode::~FTreeNode(this_00);
    }
    operator_delete__(&TVar5.Ptr[-1].NumChildNodesAndFlags,
                      *(longlong *)&TVar5.Ptr[-1].NumChildNodesAndFlags * 0x20 + 8);
  }
  TVar4.Ptr = local_58.Root.RelPaths.Ptr;
  if (local_58.Root.RelPaths.Ptr != (FString *)0x0) {
    lVar9 = *(longlong *)&local_58.Root.RelPaths.Ptr[-1].Data.ArrayNum;
    pFVar8 = local_58.Root.RelPaths.Ptr + lVar9;
    while (lVar9 != 0) {
      pFVar3 = pFVar8[-1].Data.AllocatorInstance.Data;
      pFVar8 = pFVar8 + -1;
      lVar9 = lVar9 + -1;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    operator_delete__(&TVar4.Ptr[-1].Data.ArrayNum,
                      *(longlong *)&TVar4.Ptr[-1].Data.ArrayNum * 0x10 + 8);
  }
  return;
}

