// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1421f37a0

EAutomationTestFlags __thiscall
FSoftObjectPathTrySetPathTests::GetTestFlags(FSoftObjectPathTrySetPathTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1421f37b0

bool __thiscall FSoftObjectPathTrySetPathTests::IsStressTest(FSoftObjectPathTrySetPathTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1421f37c0

uint __thiscall
FSoftObjectPathTrySetPathTests::GetRequiredDeviceNum(FSoftObjectPathTrySetPathTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 1421f37d0

FString * __thiscall
FSoftObjectPathTrySetPathTests::GetTestSourceFileName
          (FSoftObjectPathTrySetPathTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SoftObjectPath.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1421f3800

int __thiscall
FSoftObjectPathTrySetPathTests::GetTestSourceFileLine(FSoftObjectPathTrySetPathTests *this)

{
  return 0x4ba;
}

// GetTests @ 1421f3810

/* WARNING: Removing unreachable block (ram,0x0001421f398e) */

void __thiscall
FSoftObjectPathTrySetPathTests::GetTests
          (FSoftObjectPathTrySetPathTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

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

// RunTest @ 1421f39b0

bool __thiscall
FSoftObjectPathTrySetPathTests::RunTest(FSoftObjectPathTrySetPathTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1421f39e0

FString * __thiscall
FSoftObjectPathTrySetPathTests::GetBeautifiedTestName
          (FSoftObjectPathTrySetPathTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSoftObjectPathTrySetPathTests @ 1421ffbf0

FSoftObjectPathTrySetPathTests * __thiscall
FSoftObjectPathTrySetPathTests::FSoftObjectPathTrySetPathTests
          (FSoftObjectPathTrySetPathTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSoftObjectPathTrySetPathTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::CoreUObject::SoftObjectPath::TrySetPath");
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

// TestBody @ 14222e730

void __thiscall
FSoftObjectPathTrySetPathTests::TestBody(FSoftObjectPathTrySetPathTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  FString *pFVar7;
  TStringView<wchar_t> *pTVar8;
  char *pcVar9;
  ForAnyElementType FVar10;
  byte bVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  FName local_res18;
  TStringView<wchar_t> local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FSoftObjectPath local_b8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar13 = (FScriptContainerElement *)0x0;
  iVar14 = 0;
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150881cc0;
  local_108.Data.ArrayNum = 0x10;
  local_118._8_8_ = CONCAT44(local_108.Data.ArrayMax,0x10);
  local_118.DataPtr = L"/Game/Maps/Arena";
  local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.PackageName.Number = 0;
  local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.AssetName.Number = 0;
  local_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SubPathString.Data.ArrayNum = 0;
  local_b8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_b8,&local_118);
  if (local_b8.AssetPath.PackageName == (FName)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_108,"Package name: Is valid");
    (*pcVar2)(pFVar1,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    local_e8.DataPtr = L"/Game/Maps/Arena";
    local_e8.Size = 0x10;
    pFVar1 = pFVar6->CurrentTest;
    pFVar7 = FSoftObjectPath::ToString(&local_b8,(FString *)&local_c8);
    local_118.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    iVar17 = (pFVar7->Data).ArrayNum;
    iVar18 = 0;
    iVar3 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar3 = iVar18;
    }
    local_118.Size = iVar3;
    ::FString::FString(&local_108,"Package name: Round trips equal");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar10.Data = local_108.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_118,&local_e8);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.DataPtr);
    }
    pFVar6 = FAutomationTestFramework::Get();
    local_118.DataPtr = L"/Game/Maps/Arena";
    local_118.Size = 0x10;
    pFVar1 = pFVar6->CurrentTest;
    local_res18 = local_b8.AssetPath.PackageName;
    pFVar12 = pFVar13;
    iVar17 = iVar14;
    if (local_b8.AssetPath.PackageName != (FName)0x0) {
      pFVar7 = ::FName::ToString(&local_res18,(FString *)&local_c8);
      pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar17 = (pFVar7->Data).ArrayNum;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.DataPtr);
      }
    }
    iVar3 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar3 = iVar18;
    }
    local_e8.Size = iVar3;
    local_e8.DataPtr = (wchar_t *)pFVar12;
    ::FString::FString(&local_108,"Package name: Package name part");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar10.Data = local_108.Data.AllocatorInstance.Data;
    }
    local_c8.DataPtr = local_118.DataPtr;
    local_c8.Size = local_118.Size;
    local_c8._12_4_ = local_118._12_4_;
    local_118.DataPtr = local_e8.DataPtr;
    local_118.Size = local_e8.Size;
    local_118._12_4_ = local_e8._12_4_;
    FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_118,&local_c8);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    local_res18 = local_b8.AssetPath.AssetName;
    if (local_b8.AssetPath.AssetName == (FName)0x0) {
      local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
      pTVar8 = &local_118;
      bVar15 = 4;
      pFVar12 = pFVar13;
    }
    else {
      pTVar8 = (TStringView<wchar_t> *)::FName::ToString(&local_res18,(FString *)&local_c8);
      bVar15 = 8;
      pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->
                AllocatorInstance).Data;
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    iVar17 = pTVar8->Size;
    *(undefined8 *)&pTVar8->Size = 0;
    if (((bVar15 & 8) != 0) && (bVar15 = bVar15 & 0xf7, local_c8.DataPtr != (wchar_t *)0x0)) {
      FMemory::Free(local_c8.DataPtr);
    }
    if (((bVar15 & 4) != 0) &&
       (bVar15 = bVar15 & 0xfb,
       (FScriptContainerElement *)local_118.DataPtr != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_118.DataPtr);
    }
    ::FString::FString(&local_108,"Package name: Asset name part");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar10.Data = local_108.Data.AllocatorInstance.Data;
    }
    pFVar19 = (FScriptContainerElement *)L"";
    if (iVar17 != 0) {
      pFVar19 = pFVar12;
    }
    FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,(wchar_t *)pFVar19,L"");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    iVar17 = local_b8.SubPathString.Data.ArrayNum + -1;
    if (local_b8.SubPathString.Data.ArrayNum == 0) {
      iVar17 = iVar18;
    }
    pFVar7 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_c8,
                        (uchar *)local_b8.SubPathString.Data.AllocatorInstance.Data,iVar17);
    pFVar12 = pFVar13;
    iVar17 = iVar18;
    if (&local_98 != pFVar7) {
      pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar17 = (pFVar7->Data).ArrayNum;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_c8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_c8.DataPtr);
    }
    ::FString::FString(&local_108,"Package name: Subobject path part");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar10.Data = local_108.Data.AllocatorInstance.Data;
    }
    pFVar19 = (FScriptContainerElement *)L"";
    if (iVar17 != 0) {
      pFVar19 = pFVar12;
    }
    FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,(wchar_t *)pFVar19,L"");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    local_118.Size = 0x16;
    local_118.DataPtr = L"/Game/Maps/Arena.Arena";
    local_c8.DataPtr = L"/Game/Maps/Arena.Arena";
    local_c8.Size = 0x16;
    local_c8._12_4_ = local_118._12_4_;
    FSoftObjectPath::SetPath(&local_b8,&local_c8);
    if (local_b8.AssetPath.PackageName == (FName)0x0) {
      pFVar6 = FAutomationTestFramework::Get();
      pcVar9 = "Top level object path: Is valid";
    }
    else {
      pFVar6 = FAutomationTestFramework::Get();
      local_118.DataPtr = L"/Game/Maps/Arena.Arena";
      local_118.Size = 0x16;
      pFVar1 = pFVar6->CurrentTest;
      pFVar7 = FSoftObjectPath::ToString(&local_b8,(FString *)&local_d8);
      local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      iVar17 = (pFVar7->Data).ArrayNum;
      iVar3 = 0;
      iVar4 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar4 = iVar3;
      }
      local_e8.Size = iVar4;
      ::FString::FString(&local_108,"Top level object path: round trips equal");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar10.Data = local_108.Data.AllocatorInstance.Data;
      }
      local_c8.DataPtr = local_118.DataPtr;
      local_c8.Size = local_118.Size;
      local_c8._12_4_ = local_118._12_4_;
      local_118.DataPtr = local_e8.DataPtr;
      local_118.Size = local_e8.Size;
      local_118._12_4_ = local_e8._12_4_;
      FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_118,&local_c8);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.DataPtr);
      }
      local_118.Size = 0x12;
      local_118.DataPtr = L"/Game/キャラクター/山本.山本";
      local_d8.DataPtr = L"/Game/キャラクター/山本.山本";
      local_d8.Size = 0x12;
      local_d8._12_4_ = local_118._12_4_;
      FSoftObjectPath::SetPath(&local_b8,&local_d8);
      if (local_b8.AssetPath.PackageName == (FName)0x0) {
        pFVar6 = FAutomationTestFramework::Get();
        pcVar9 = "Path with wide chars: Is valid";
      }
      else {
        pFVar6 = FAutomationTestFramework::Get();
        local_118.DataPtr = L"/Game/キャラクター/山本.山本";
        local_118.Size = 0x12;
        pFVar1 = pFVar6->CurrentTest;
        pFVar7 = FSoftObjectPath::ToString(&local_b8,(FString *)&local_f8);
        local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        iVar17 = (pFVar7->Data).ArrayNum;
        iVar4 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar4 = iVar3;
        }
        local_e8.Size = iVar4;
        ::FString::FString(&local_108,"Path with wide chars: Round trips equal");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar10.Data = local_108.Data.AllocatorInstance.Data;
        }
        local_d8.DataPtr = local_118.DataPtr;
        local_d8.Size = local_118.Size;
        local_d8._12_4_ = local_118._12_4_;
        local_c8.DataPtr = local_e8.DataPtr;
        local_c8.Size = local_e8.Size;
        local_c8._12_4_ = local_e8._12_4_;
        FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_c8,&local_d8);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_f8.DataPtr);
        }
        pFVar6 = FAutomationTestFramework::Get();
        local_e8.Size = 0xf;
        pFVar1 = pFVar6->CurrentTest;
        local_e8.DataPtr = L"/Game/キャラクター/山本";
        local_res18 = local_b8.AssetPath.PackageName;
        if (local_b8.AssetPath.PackageName == (FName)0x0) {
          local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
          pTVar8 = &local_118;
          bVar11 = 0x10;
          pFVar12 = pFVar13;
        }
        else {
          pTVar8 = (TStringView<wchar_t> *)::FName::ToString(&local_res18,(FString *)&local_f8);
          bVar11 = 0x20;
          pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->
                    AllocatorInstance).Data;
        }
        bVar16 = bVar11 | bVar15;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->AllocatorInstance).Data
             = (FScriptContainerElement *)0x0;
        iVar17 = pTVar8->Size;
        *(undefined8 *)&pTVar8->Size = 0;
        if (((bVar11 & 0x20) != 0) &&
           (bVar16 = bVar11 & 0xdf | bVar15, local_f8.DataPtr != (wchar_t *)0x0)) {
          FMemory::Free(local_f8.DataPtr);
        }
        if (((bVar16 & 0x10) != 0) && (bVar16 = bVar16 & 0xef, local_118.DataPtr != (wchar_t *)0x0))
        {
          FMemory::Free(local_118.DataPtr);
        }
        iVar4 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar4 = iVar3;
        }
        local_118.Size = iVar4;
        local_118.DataPtr = (wchar_t *)pFVar12;
        ::FString::FString(&local_108,"Path with wide chars: Package name part");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar10.Data = local_108.Data.AllocatorInstance.Data;
        }
        local_f8.DataPtr = local_e8.DataPtr;
        local_f8.Size = local_e8.Size;
        local_f8._12_4_ = local_e8._12_4_;
        local_d8.DataPtr = local_118.DataPtr;
        local_d8.Size = local_118.Size;
        local_d8._12_4_ = local_118._12_4_;
        FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        pFVar6 = FAutomationTestFramework::Get();
        local_e8.Size = 2;
        pFVar1 = pFVar6->CurrentTest;
        local_e8.DataPtr = L"山本";
        local_res18 = local_b8.AssetPath.AssetName;
        if (local_b8.AssetPath.AssetName == (FName)0x0) {
          local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
          pTVar8 = &local_118;
          bVar15 = 0x40;
          pFVar12 = pFVar13;
        }
        else {
          pTVar8 = (TStringView<wchar_t> *)::FName::ToString(&local_res18,(FString *)&local_f8);
          bVar15 = 0x80;
          pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->
                    AllocatorInstance).Data;
        }
        bVar16 = bVar15 | bVar16;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->AllocatorInstance).Data
             = (FScriptContainerElement *)0x0;
        iVar17 = pTVar8->Size;
        *(undefined8 *)&pTVar8->Size = 0;
        if (((char)bVar16 < '\0') && (bVar16 = bVar15 & 0x7f, local_f8.DataPtr != (wchar_t *)0x0)) {
          FMemory::Free(local_f8.DataPtr);
        }
        if (((bVar16 & 0x40) != 0) &&
           ((FScriptContainerElement *)local_118.DataPtr != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_118.DataPtr);
        }
        iVar4 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar4 = iVar3;
        }
        local_118.Size = iVar4;
        local_118.DataPtr = (wchar_t *)pFVar12;
        ::FString::FString(&local_108,"Path with wide chars: Asset name part");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar10.Data = local_108.Data.AllocatorInstance.Data;
        }
        local_f8.DataPtr = local_e8.DataPtr;
        local_f8.Size = local_e8.Size;
        local_f8._12_4_ = local_e8._12_4_;
        local_d8.DataPtr = local_118.DataPtr;
        local_d8.Size = local_118.Size;
        local_d8._12_4_ = local_118._12_4_;
        FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        pFVar6 = FAutomationTestFramework::Get();
        pFVar1 = pFVar6->CurrentTest;
        iVar17 = local_b8.SubPathString.Data.ArrayNum + -1;
        if (local_b8.SubPathString.Data.ArrayNum == 0) {
          iVar17 = iVar3;
        }
        pFVar7 = ::FString::ConstructFromPtrSize
                           ((FString *)&local_f8,
                            (uchar *)local_b8.SubPathString.Data.AllocatorInstance.Data,iVar17);
        pFVar12 = pFVar13;
        iVar17 = iVar3;
        if (&local_88 != pFVar7) {
          pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar17 = (pFVar7->Data).ArrayNum;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.DataPtr);
        }
        ::FString::FString(&local_108,"Path with wide chars: Subobject path part");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar10.Data = local_108.Data.AllocatorInstance.Data;
        }
        pFVar19 = (FScriptContainerElement *)L"";
        if (iVar17 != 0) {
          pFVar19 = pFVar12;
        }
        FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,(wchar_t *)pFVar19,L"");
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        local_118.Size = 0x16;
        local_118.DataPtr = L"/Game/Maps/Arena:Arena";
        local_f8.DataPtr = L"/Game/Maps/Arena:Arena";
        local_f8.Size = 0x16;
        local_f8._12_4_ = local_118._12_4_;
        FSoftObjectPath::SetPath(&local_b8,&local_f8);
        if (local_b8.AssetPath.PackageName == (FName)0x0) {
          pFVar6 = FAutomationTestFramework::Get();
          pcVar9 = "Top level object path with incorrect separator: is valid";
        }
        else {
          pFVar6 = FAutomationTestFramework::Get();
          local_118.Size = 0x16;
          pFVar1 = pFVar6->CurrentTest;
          local_118.DataPtr = L"/Game/Maps/Arena.Arena";
          pFVar7 = FSoftObjectPath::ToString(&local_b8,(FString *)&local_c8);
          local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          iVar17 = (pFVar7->Data).ArrayNum;
          iVar4 = iVar17 + -1;
          if (iVar17 == 0) {
            iVar4 = iVar3;
          }
          local_e8.Size = iVar4;
          ::FString::FString(&local_108,
                             "Top level object path with incorrect separator: Round trips with normalized separator"
                            );
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_108.Data.ArrayNum != 0) {
            FVar10.Data = local_108.Data.AllocatorInstance.Data;
          }
          local_f8.DataPtr = local_118.DataPtr;
          local_f8.Size = local_118.Size;
          local_f8._12_4_ = local_118._12_4_;
          local_d8.DataPtr = local_e8.DataPtr;
          local_d8.Size = local_e8.Size;
          local_d8._12_4_ = local_e8._12_4_;
          FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.DataPtr);
          }
          pFVar6 = FAutomationTestFramework::Get();
          local_e8.DataPtr = L"/Game/Maps/Arena";
          local_e8.Size = 0x10;
          pFVar1 = pFVar6->CurrentTest;
          local_res18 = local_b8.AssetPath.PackageName;
          bVar20 = local_b8.AssetPath.PackageName != (FName)0x0;
          if (bVar20) {
            pTVar8 = (TStringView<wchar_t> *)::FName::ToString(&local_res18,(FString *)&local_f8);
            pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->
                      AllocatorInstance).Data;
          }
          else {
            local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
            pTVar8 = &local_118;
            pFVar12 = pFVar13;
          }
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->AllocatorInstance).
          Data = (FScriptContainerElement *)0x0;
          iVar17 = pTVar8->Size;
          *(undefined8 *)&pTVar8->Size = 0;
          if ((bVar20) && (local_f8.DataPtr != (wchar_t *)0x0)) {
            FMemory::Free(local_f8.DataPtr);
          }
          if ((!bVar20) && (local_118.DataPtr != (wchar_t *)0x0)) {
            FMemory::Free(local_118.DataPtr);
          }
          iVar4 = iVar17 + -1;
          if (iVar17 == 0) {
            iVar4 = iVar3;
          }
          local_118.Size = iVar4;
          local_118.DataPtr = (wchar_t *)pFVar12;
          ::FString::FString(&local_108,
                             "Top level object path with incorrect separator: Package name part");
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_108.Data.ArrayNum != 0) {
            FVar10.Data = local_108.Data.AllocatorInstance.Data;
          }
          local_f8.DataPtr = local_e8.DataPtr;
          local_f8.Size = local_e8.Size;
          local_f8._12_4_ = local_e8._12_4_;
          local_d8.DataPtr = local_118.DataPtr;
          local_d8.Size = local_118.Size;
          local_d8._12_4_ = local_118._12_4_;
          FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar12);
          }
          pFVar6 = FAutomationTestFramework::Get();
          local_e8.Size = 5;
          pFVar1 = pFVar6->CurrentTest;
          local_e8.DataPtr = L"Arena";
          local_res18 = local_b8.AssetPath.AssetName;
          bVar20 = local_b8.AssetPath.AssetName != (FName)0x0;
          if (bVar20) {
            pTVar8 = (TStringView<wchar_t> *)::FName::ToString(&local_res18,(FString *)&local_f8);
            pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->
                      AllocatorInstance).Data;
          }
          else {
            local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
            pTVar8 = &local_118;
            pFVar12 = pFVar13;
          }
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->AllocatorInstance).
          Data = (FScriptContainerElement *)0x0;
          iVar17 = pTVar8->Size;
          *(undefined8 *)&pTVar8->Size = 0;
          if ((bVar20) && (local_f8.DataPtr != (wchar_t *)0x0)) {
            FMemory::Free(local_f8.DataPtr);
          }
          if ((!bVar20) &&
             ((FScriptContainerElement *)local_118.DataPtr != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_118.DataPtr);
          }
          iVar4 = iVar17 + -1;
          if (iVar17 == 0) {
            iVar4 = iVar3;
          }
          local_118.Size = iVar4;
          local_118.DataPtr = (wchar_t *)pFVar12;
          ::FString::FString(&local_108,
                             "Top level object path with incorrect separator: Asset name part");
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_108.Data.ArrayNum != 0) {
            FVar10.Data = local_108.Data.AllocatorInstance.Data;
          }
          local_f8.DataPtr = local_e8.DataPtr;
          local_f8.Size = local_e8.Size;
          local_f8._12_4_ = local_e8._12_4_;
          local_d8.DataPtr = local_118.DataPtr;
          local_d8.Size = local_118.Size;
          local_d8._12_4_ = local_118._12_4_;
          FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar12);
          }
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          iVar4 = 0;
          iVar17 = local_b8.SubPathString.Data.ArrayNum + -1;
          if (local_b8.SubPathString.Data.ArrayNum == 0) {
            iVar17 = iVar4;
          }
          pFVar7 = ::FString::ConstructFromPtrSize
                             ((FString *)&local_f8,
                              (uchar *)local_b8.SubPathString.Data.AllocatorInstance.Data,iVar17);
          pFVar12 = pFVar13;
          iVar17 = iVar3;
          if (&local_78 != pFVar7) {
            pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
            (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar17 = (pFVar7->Data).ArrayNum;
            (pFVar7->Data).ArrayNum = 0;
            (pFVar7->Data).ArrayMax = 0;
          }
          if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.DataPtr);
          }
          ::FString::FString(&local_108,
                             "Top level object path with incorrect separator: Subobject path part");
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_108.Data.ArrayNum != 0) {
            FVar10.Data = local_108.Data.AllocatorInstance.Data;
          }
          pFVar19 = (FScriptContainerElement *)L"";
          if (iVar17 != 0) {
            pFVar19 = pFVar12;
          }
          FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,(wchar_t *)pFVar19,L"");
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar12);
          }
          local_118.Size = 0x11;
          local_118.DataPtr = L"/Game/Maps/Arena.";
          local_f8.DataPtr = L"/Game/Maps/Arena.";
          local_f8.Size = 0x11;
          local_f8._12_4_ = local_118._12_4_;
          FSoftObjectPath::SetPath(&local_b8,&local_f8);
          if (local_b8.AssetPath.PackageName != (FName)0x0) {
            pFVar6 = FAutomationTestFramework::Get();
            pFVar1 = pFVar6->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString((FString *)&local_118,"Package name trailing dot: is not valid");
            (*pcVar2)(pFVar1,&local_118,0);
            if (local_118.DataPtr != (wchar_t *)0x0) {
              FMemory::Free(local_118.DataPtr);
            }
          }
          local_118.Size = 0x11;
          local_118.DataPtr = L"/Game/Maps/Arena:";
          local_f8.DataPtr = L"/Game/Maps/Arena:";
          local_f8.Size = 0x11;
          local_f8._12_4_ = local_118._12_4_;
          FSoftObjectPath::SetPath(&local_b8,&local_f8);
          if (local_b8.AssetPath.PackageName != (FName)0x0) {
            pFVar6 = FAutomationTestFramework::Get();
            pFVar1 = pFVar6->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString((FString *)&local_118,"Package name trailing separator: is not valid"
                              );
            (*pcVar2)(pFVar1,&local_118,0);
            if (local_118.DataPtr != (wchar_t *)0x0) {
              FMemory::Free(local_118.DataPtr);
            }
          }
          local_118.Size = 0x17;
          local_118.DataPtr = L"/Game/Maps/Arena.Arena.";
          local_f8.DataPtr = L"/Game/Maps/Arena.Arena.";
          local_f8.Size = 0x17;
          local_f8._12_4_ = local_118._12_4_;
          FSoftObjectPath::SetPath(&local_b8,&local_f8);
          if (local_b8.AssetPath.PackageName != (FName)0x0) {
            pFVar6 = FAutomationTestFramework::Get();
            pFVar1 = pFVar6->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString((FString *)&local_118,"Object path trailing dot: is not valid");
            (*pcVar2)(pFVar1,&local_118,0);
            if (local_118.DataPtr != (wchar_t *)0x0) {
              FMemory::Free(local_118.DataPtr);
            }
          }
          local_118.Size = 0x17;
          local_118.DataPtr = L"/Game/Maps/Arena.Arena:";
          local_f8.DataPtr = L"/Game/Maps/Arena.Arena:";
          local_f8.Size = 0x17;
          local_f8._12_4_ = local_118._12_4_;
          FSoftObjectPath::SetPath(&local_b8,&local_f8);
          if (local_b8.AssetPath.PackageName != (FName)0x0) {
            pFVar6 = FAutomationTestFramework::Get();
            pFVar1 = pFVar6->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString((FString *)&local_118,"Object path trailing separator: is not valid")
            ;
            (*pcVar2)(pFVar1,&local_118,0);
            if (local_118.DataPtr != (wchar_t *)0x0) {
              FMemory::Free(local_118.DataPtr);
            }
          }
          local_118.Size = 0xf;
          local_118.DataPtr = L"Game/Maps/Arena";
          local_f8.DataPtr = L"Game/Maps/Arena";
          local_f8.Size = 0xf;
          local_f8._12_4_ = local_118._12_4_;
          FSoftObjectPath::SetPath(&local_b8,&local_f8);
          if (local_b8.AssetPath.PackageName != (FName)0x0) {
            pFVar6 = FAutomationTestFramework::Get();
            pFVar1 = pFVar6->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString((FString *)&local_118,
                               "Package name without leading slash: is not valid");
            (*pcVar2)(pFVar1,&local_118,0);
            if (local_118.DataPtr != (wchar_t *)0x0) {
              FMemory::Free(local_118.DataPtr);
            }
          }
          local_118.Size = 0x15;
          local_118.DataPtr = L"Game/Maps/Arena.Arena";
          local_f8.DataPtr = L"Game/Maps/Arena.Arena";
          local_f8.Size = 0x15;
          local_f8._12_4_ = local_118._12_4_;
          FSoftObjectPath::SetPath(&local_b8,&local_f8);
          if (local_b8.AssetPath.PackageName != (FName)0x0) {
            pFVar6 = FAutomationTestFramework::Get();
            pFVar1 = pFVar6->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString((FString *)&local_118,
                               "Object name without leading slash: is not valid");
            (*pcVar2)(pFVar1,&local_118,0);
            if (local_118.DataPtr != (wchar_t *)0x0) {
              FMemory::Free(local_118.DataPtr);
            }
          }
          local_118.Size = 0x23;
          local_118.DataPtr = L"/Game/Characters/Steve.Steve_C:Root";
          local_f8.DataPtr = L"/Game/Characters/Steve.Steve_C:Root";
          local_f8.Size = 0x23;
          local_f8._12_4_ = local_118._12_4_;
          FSoftObjectPath::SetPath(&local_b8,&local_f8);
          if (local_b8.AssetPath.PackageName == (FName)0x0) {
            pFVar6 = FAutomationTestFramework::Get();
            pcVar9 = "Subobject path with separator: is valid";
          }
          else {
            pFVar6 = FAutomationTestFramework::Get();
            local_118.DataPtr = L"/Game/Characters/Steve.Steve_C:Root";
            local_118.Size = 0x23;
            pFVar1 = pFVar6->CurrentTest;
            pFVar7 = FSoftObjectPath::ToString(&local_b8,(FString *)&local_c8);
            local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
            iVar17 = (pFVar7->Data).ArrayNum;
            iVar5 = iVar17 + -1;
            if (iVar17 == 0) {
              iVar5 = iVar4;
            }
            local_e8.Size = iVar5;
            ::FString::FString(&local_108,"Subobject path with separator: round trip");
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_108.Data.ArrayNum != 0) {
              FVar10.Data = local_108.Data.AllocatorInstance.Data;
            }
            local_f8.DataPtr = local_118.DataPtr;
            local_f8.Size = local_118.Size;
            local_f8._12_4_ = local_118._12_4_;
            local_d8.DataPtr = local_e8.DataPtr;
            local_d8.Size = local_e8.Size;
            local_d8._12_4_ = local_e8._12_4_;
            FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.DataPtr);
            }
            pFVar6 = FAutomationTestFramework::Get();
            local_118.Size = 0x16;
            pFVar1 = pFVar6->CurrentTest;
            local_118.DataPtr = L"/Game/Characters/Steve";
            pFVar7 = FSoftObjectPath::GetLongPackageName(&local_b8,(FString *)&local_c8);
            local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
            iVar17 = (pFVar7->Data).ArrayNum;
            iVar5 = iVar17 + -1;
            if (iVar17 == 0) {
              iVar5 = iVar4;
            }
            local_e8.Size = iVar5;
            ::FString::FString(&local_108,"Subobject path with separator: package name");
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_108.Data.ArrayNum != 0) {
              FVar10.Data = local_108.Data.AllocatorInstance.Data;
            }
            local_f8.DataPtr = local_118.DataPtr;
            local_f8.Size = local_118.Size;
            local_f8._12_4_ = local_118._12_4_;
            local_d8.DataPtr = local_e8.DataPtr;
            local_d8.Size = local_e8.Size;
            local_d8._12_4_ = local_e8._12_4_;
            FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.DataPtr);
            }
            pFVar6 = FAutomationTestFramework::Get();
            local_118.Size = 7;
            pFVar1 = pFVar6->CurrentTest;
            local_118.DataPtr = L"Steve_C";
            pFVar7 = FSoftObjectPath::GetAssetName(&local_b8,(FString *)&local_c8);
            local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
            iVar17 = (pFVar7->Data).ArrayNum;
            iVar5 = iVar17 + -1;
            if (iVar17 == 0) {
              iVar5 = iVar4;
            }
            local_e8.Size = iVar5;
            ::FString::FString(&local_108,"Subobject path with separator: asset name");
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_108.Data.ArrayNum != 0) {
              FVar10.Data = local_108.Data.AllocatorInstance.Data;
            }
            local_f8.DataPtr = local_118.DataPtr;
            local_f8.Size = local_118.Size;
            local_f8._12_4_ = local_118._12_4_;
            local_d8.DataPtr = local_e8.DataPtr;
            local_d8.Size = local_e8.Size;
            local_d8._12_4_ = local_e8._12_4_;
            FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.DataPtr);
            }
            pFVar6 = FAutomationTestFramework::Get();
            local_118.DataPtr = L"Root";
            local_118.Size = 4;
            pFVar1 = pFVar6->CurrentTest;
            iVar17 = local_b8.SubPathString.Data.ArrayNum + -1;
            if (local_b8.SubPathString.Data.ArrayNum == 0) {
              iVar17 = iVar4;
            }
            pFVar7 = ::FString::ConstructFromPtrSize
                               ((FString *)&local_f8,
                                (uchar *)local_b8.SubPathString.Data.AllocatorInstance.Data,iVar17);
            pFVar12 = pFVar13;
            iVar17 = iVar4;
            if (&local_68 != pFVar7) {
              pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
              (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar17 = (pFVar7->Data).ArrayNum;
              (pFVar7->Data).ArrayNum = 0;
              (pFVar7->Data).ArrayMax = 0;
            }
            if (local_f8.DataPtr != (wchar_t *)0x0) {
              FMemory::Free(local_f8.DataPtr);
            }
            iVar5 = iVar18;
            if (iVar17 != 0) {
              iVar5 = iVar17 + -1;
            }
            local_e8.Size = iVar5;
            local_e8.DataPtr = (wchar_t *)pFVar12;
            ::FString::FString(&local_108,"Subobject path with separator: subobject path");
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_108.Data.ArrayNum != 0) {
              FVar10.Data = local_108.Data.AllocatorInstance.Data;
            }
            local_f8.DataPtr = local_118.DataPtr;
            local_f8.Size = local_118.Size;
            local_f8._12_4_ = local_118._12_4_;
            local_d8.DataPtr = local_e8.DataPtr;
            local_d8.Size = local_e8.Size;
            local_d8._12_4_ = local_e8._12_4_;
            FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if (pFVar12 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar12);
            }
            local_118.Size = 0x24;
            local_118.DataPtr = L"/Game/Characters/Steve.Steve_C:Root.";
            local_f8.DataPtr = L"/Game/Characters/Steve.Steve_C:Root.";
            local_f8.Size = 0x24;
            local_f8._12_4_ = local_118._12_4_;
            FSoftObjectPath::SetPath(&local_b8,&local_f8);
            if (local_b8.AssetPath.PackageName != (FName)0x0) {
              pFVar6 = FAutomationTestFramework::Get();
              pFVar1 = pFVar6->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString((FString *)&local_118,
                                 "Subobject path with trailing dot: is not valid");
              (*pcVar2)(pFVar1,&local_118,0);
              if (local_118.DataPtr != (wchar_t *)0x0) {
                FMemory::Free(local_118.DataPtr);
              }
            }
            local_118.Size = 0x24;
            local_118.DataPtr = L"/Game/Characters/Steve.Steve_C:Root:";
            local_f8.DataPtr = L"/Game/Characters/Steve.Steve_C:Root:";
            local_f8.Size = 0x24;
            local_f8._12_4_ = local_118._12_4_;
            FSoftObjectPath::SetPath(&local_b8,&local_f8);
            if (local_b8.AssetPath.PackageName != (FName)0x0) {
              pFVar6 = FAutomationTestFramework::Get();
              pFVar1 = pFVar6->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString((FString *)&local_118,
                                 "Subobject path with trailing separator: is not valid");
              (*pcVar2)(pFVar1,&local_118,0);
              if (local_118.DataPtr != (wchar_t *)0x0) {
                FMemory::Free(local_118.DataPtr);
              }
            }
            local_118.Size = 0x1c;
            local_118.DataPtr = L"/Game/Characters/Steve.:Root";
            local_f8.DataPtr = L"/Game/Characters/Steve.:Root";
            local_f8.Size = 0x1c;
            local_f8._12_4_ = local_118._12_4_;
            FSoftObjectPath::SetPath(&local_b8,&local_f8);
            if (local_b8.AssetPath.PackageName != (FName)0x0) {
              pFVar6 = FAutomationTestFramework::Get();
              pFVar1 = pFVar6->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString((FString *)&local_118,
                                 "Subobject path without asset name: is not valid");
              (*pcVar2)(pFVar1,&local_118,0);
              if (local_118.DataPtr != (wchar_t *)0x0) {
                FMemory::Free(local_118.DataPtr);
              }
            }
            local_118.DataPtr = L"/Game/Characters/Steve.Steve_C:Root";
            local_118.Size = 0x23;
            local_f8.DataPtr = L"/Game/Characters/Steve.Steve_C:Root";
            local_f8.Size = 0x23;
            local_f8._12_4_ = local_118._12_4_;
            FSoftObjectPath::SetPath(&local_b8,&local_f8);
            if (local_b8.AssetPath.PackageName == (FName)0x0) {
              pFVar6 = FAutomationTestFramework::Get();
              pcVar9 = "Subobject path with dot: is valid";
            }
            else {
              pFVar6 = FAutomationTestFramework::Get();
              local_118.DataPtr = L"/Game/Characters/Steve.Steve_C:Root";
              local_118.Size = 0x23;
              pFVar1 = pFVar6->CurrentTest;
              pFVar7 = FSoftObjectPath::ToString(&local_b8,(FString *)&local_c8);
              local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
              iVar17 = (pFVar7->Data).ArrayNum;
              iVar5 = iVar17 + -1;
              if (iVar17 == 0) {
                iVar5 = iVar4;
              }
              local_e8.Size = iVar5;
              ::FString::FString(&local_108,
                                 "Subobject path with dot: round trips with normalized separator");
              FVar10.Data = (FScriptContainerElement *)L"";
              if (local_108.Data.ArrayNum != 0) {
                FVar10.Data = local_108.Data.AllocatorInstance.Data;
              }
              local_f8.DataPtr = local_118.DataPtr;
              local_f8.Size = local_118.Size;
              local_f8._12_4_ = local_118._12_4_;
              local_d8.DataPtr = local_e8.DataPtr;
              local_d8.Size = local_e8.Size;
              local_d8._12_4_ = local_e8._12_4_;
              FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.DataPtr);
              }
              pFVar6 = FAutomationTestFramework::Get();
              local_118.Size = 0x16;
              pFVar1 = pFVar6->CurrentTest;
              local_118.DataPtr = L"/Game/Characters/Steve";
              pFVar7 = FSoftObjectPath::GetLongPackageName(&local_b8,(FString *)&local_c8);
              local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
              iVar17 = (pFVar7->Data).ArrayNum;
              iVar5 = iVar17 + -1;
              if (iVar17 == 0) {
                iVar5 = iVar4;
              }
              local_e8.Size = iVar5;
              ::FString::FString(&local_108,"Subobject path with dot: package name");
              FVar10.Data = (FScriptContainerElement *)L"";
              if (local_108.Data.ArrayNum != 0) {
                FVar10.Data = local_108.Data.AllocatorInstance.Data;
              }
              local_f8.DataPtr = local_118.DataPtr;
              local_f8.Size = local_118.Size;
              local_f8._12_4_ = local_118._12_4_;
              local_d8.DataPtr = local_e8.DataPtr;
              local_d8.Size = local_e8.Size;
              local_d8._12_4_ = local_e8._12_4_;
              FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.DataPtr);
              }
              pFVar6 = FAutomationTestFramework::Get();
              local_118.Size = 7;
              pFVar1 = pFVar6->CurrentTest;
              local_118.DataPtr = L"Steve_C";
              pFVar7 = FSoftObjectPath::GetAssetName(&local_b8,(FString *)&local_c8);
              local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
              iVar17 = (pFVar7->Data).ArrayNum;
              iVar5 = iVar17 + -1;
              if (iVar17 == 0) {
                iVar5 = iVar4;
              }
              local_e8.Size = iVar5;
              ::FString::FString(&local_108,"Subobject path with dot: asset name");
              FVar10.Data = (FScriptContainerElement *)L"";
              if (local_108.Data.ArrayNum != 0) {
                FVar10.Data = local_108.Data.AllocatorInstance.Data;
              }
              local_f8.DataPtr = local_118.DataPtr;
              local_f8.Size = local_118.Size;
              local_f8._12_4_ = local_118._12_4_;
              local_d8.DataPtr = local_e8.DataPtr;
              local_d8.Size = local_e8.Size;
              local_d8._12_4_ = local_e8._12_4_;
              FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.DataPtr);
              }
              pFVar6 = FAutomationTestFramework::Get();
              local_118.DataPtr = L"Root";
              local_118.Size = 4;
              pFVar1 = pFVar6->CurrentTest;
              iVar17 = local_b8.SubPathString.Data.ArrayNum + -1;
              if (local_b8.SubPathString.Data.ArrayNum == 0) {
                iVar17 = iVar4;
              }
              pFVar7 = ::FString::ConstructFromPtrSize
                                 ((FString *)&local_f8,
                                  (uchar *)local_b8.SubPathString.Data.AllocatorInstance.Data,iVar17
                                 );
              pFVar12 = pFVar13;
              iVar17 = iVar3;
              if (&local_58 != pFVar7) {
                pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
                (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar17 = (pFVar7->Data).ArrayNum;
                (pFVar7->Data).ArrayNum = 0;
                (pFVar7->Data).ArrayMax = 0;
              }
              if (local_f8.DataPtr != (wchar_t *)0x0) {
                FMemory::Free(local_f8.DataPtr);
              }
              iVar5 = iVar18;
              if (iVar17 != 0) {
                iVar5 = iVar17 + -1;
              }
              local_e8.Size = iVar5;
              local_e8.DataPtr = (wchar_t *)pFVar12;
              ::FString::FString(&local_108,"Subobject path with dot: subobject path");
              FVar10.Data = (FScriptContainerElement *)L"";
              if (local_108.Data.ArrayNum != 0) {
                FVar10.Data = local_108.Data.AllocatorInstance.Data;
              }
              local_f8.DataPtr = local_118.DataPtr;
              local_f8.Size = local_118.Size;
              local_f8._12_4_ = local_118._12_4_;
              local_d8.DataPtr = local_e8.DataPtr;
              local_d8.Size = local_e8.Size;
              local_d8._12_4_ = local_e8._12_4_;
              FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (pFVar12 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar12);
              }
              local_118.Size = 0x43;
              local_118.DataPtr =
                   L"/Game/Characters/Steve.Steve_C:Root.Inner.AnotherInner.FurtherInner";
              local_f8.DataPtr =
                   L"/Game/Characters/Steve.Steve_C:Root.Inner.AnotherInner.FurtherInner";
              local_f8.Size = 0x43;
              local_f8._12_4_ = local_118._12_4_;
              FSoftObjectPath::SetPath(&local_b8,&local_f8);
              if (local_b8.AssetPath.PackageName == (FName)0x0) {
                pFVar6 = FAutomationTestFramework::Get();
                pcVar9 = "Long path: is valid";
              }
              else {
                pFVar6 = FAutomationTestFramework::Get();
                local_118.DataPtr =
                     L"/Game/Characters/Steve.Steve_C:Root.Inner.AnotherInner.FurtherInner";
                local_118.Size = 0x43;
                pFVar1 = pFVar6->CurrentTest;
                pFVar7 = FSoftObjectPath::ToString(&local_b8,(FString *)&local_c8);
                local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
                iVar17 = (pFVar7->Data).ArrayNum;
                iVar5 = iVar17 + -1;
                if (iVar17 == 0) {
                  iVar5 = iVar3;
                }
                local_e8.Size = iVar5;
                ::FString::FString(&local_108,"Long path: round trip");
                FVar10.Data = (FScriptContainerElement *)L"";
                if (local_108.Data.ArrayNum != 0) {
                  FVar10.Data = local_108.Data.AllocatorInstance.Data;
                }
                local_f8.DataPtr = local_118.DataPtr;
                local_f8.Size = local_118.Size;
                local_f8._12_4_ = local_118._12_4_;
                local_d8.DataPtr = local_e8.DataPtr;
                local_d8.Size = local_e8.Size;
                local_d8._12_4_ = local_e8._12_4_;
                FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.DataPtr);
                }
                pFVar6 = FAutomationTestFramework::Get();
                local_118.Size = 0x16;
                pFVar1 = pFVar6->CurrentTest;
                local_118.DataPtr = L"/Game/Characters/Steve";
                pFVar7 = FSoftObjectPath::GetLongPackageName(&local_b8,(FString *)&local_c8);
                local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
                iVar17 = (pFVar7->Data).ArrayNum;
                iVar5 = iVar17 + -1;
                if (iVar17 == 0) {
                  iVar5 = iVar4;
                }
                local_e8.Size = iVar5;
                ::FString::FString(&local_108,"Long path: Package name part");
                FVar10.Data = (FScriptContainerElement *)L"";
                if (local_108.Data.ArrayNum != 0) {
                  FVar10.Data = local_108.Data.AllocatorInstance.Data;
                }
                local_f8.DataPtr = local_118.DataPtr;
                local_f8.Size = local_118.Size;
                local_f8._12_4_ = local_118._12_4_;
                local_d8.DataPtr = local_e8.DataPtr;
                local_d8.Size = local_e8.Size;
                local_d8._12_4_ = local_e8._12_4_;
                FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.DataPtr);
                }
                pFVar6 = FAutomationTestFramework::Get();
                local_118.Size = 7;
                pFVar1 = pFVar6->CurrentTest;
                local_118.DataPtr = L"Steve_C";
                pFVar7 = FSoftObjectPath::GetAssetName(&local_b8,(FString *)&local_c8);
                local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
                iVar17 = (pFVar7->Data).ArrayNum;
                iVar5 = iVar17 + -1;
                if (iVar17 == 0) {
                  iVar5 = iVar4;
                }
                local_e8.Size = iVar5;
                ::FString::FString(&local_108,"Long path: Asset name part");
                FVar10.Data = (FScriptContainerElement *)L"";
                if (local_108.Data.ArrayNum != 0) {
                  FVar10.Data = local_108.Data.AllocatorInstance.Data;
                }
                local_f8.DataPtr = local_118.DataPtr;
                local_f8.Size = local_118.Size;
                local_f8._12_4_ = local_118._12_4_;
                local_d8.DataPtr = local_e8.DataPtr;
                local_d8.Size = local_e8.Size;
                local_d8._12_4_ = local_e8._12_4_;
                FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.DataPtr);
                }
                pFVar6 = FAutomationTestFramework::Get();
                local_118.DataPtr = L"Root.Inner.AnotherInner.FurtherInner";
                local_118.Size = 0x24;
                pFVar1 = pFVar6->CurrentTest;
                iVar17 = local_b8.SubPathString.Data.ArrayNum + -1;
                if (local_b8.SubPathString.Data.ArrayNum == 0) {
                  iVar17 = iVar4;
                }
                pFVar7 = ::FString::ConstructFromPtrSize
                                   ((FString *)&local_f8,
                                    (uchar *)local_b8.SubPathString.Data.AllocatorInstance.Data,
                                    iVar17);
                pFVar12 = pFVar13;
                iVar17 = iVar4;
                if (&local_48 != pFVar7) {
                  pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
                  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar17 = (pFVar7->Data).ArrayNum;
                  (pFVar7->Data).ArrayNum = 0;
                  (pFVar7->Data).ArrayMax = 0;
                }
                if (local_f8.DataPtr != (wchar_t *)0x0) {
                  FMemory::Free(local_f8.DataPtr);
                }
                if (iVar17 != 0) {
                  iVar18 = iVar17 + -1;
                }
                local_e8.Size = iVar18;
                local_e8.DataPtr = (wchar_t *)pFVar12;
                ::FString::FString(&local_108,"Long path: Subobject path part");
                FVar10.Data = (FScriptContainerElement *)L"";
                if (local_108.Data.ArrayNum != 0) {
                  FVar10.Data = local_108.Data.AllocatorInstance.Data;
                }
                local_f8.DataPtr = local_118.DataPtr;
                local_f8.Size = local_118.Size;
                local_f8._12_4_ = local_118._12_4_;
                local_d8.DataPtr = local_e8.DataPtr;
                local_d8.Size = local_e8.Size;
                local_d8._12_4_ = local_e8._12_4_;
                FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                if (pFVar12 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar12);
                }
                local_118.Size = 0x43;
                local_118.DataPtr =
                     L"/Game/Characters/Steve.Steve_C.Root.Inner.AnotherInner:FurtherInner";
                local_f8.DataPtr =
                     L"/Game/Characters/Steve.Steve_C.Root.Inner.AnotherInner:FurtherInner";
                local_f8.Size = 0x43;
                local_f8._12_4_ = local_118._12_4_;
                FSoftObjectPath::SetPath(&local_b8,&local_f8);
                if (local_b8.AssetPath.PackageName == (FName)0x0) {
                  pFVar6 = FAutomationTestFramework::Get();
                  pcVar9 = "Long path with separator in wrong place: is valid";
                }
                else {
                  pFVar6 = FAutomationTestFramework::Get();
                  local_118.DataPtr =
                       L"/Game/Characters/Steve.Steve_C:Root.Inner.AnotherInner.FurtherInner";
                  local_118.Size = 0x43;
                  pFVar1 = pFVar6->CurrentTest;
                  pFVar7 = FSoftObjectPath::ToString(&local_b8,(FString *)&local_c8);
                  local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
                  iVar17 = (pFVar7->Data).ArrayNum;
                  iVar18 = iVar17 + -1;
                  if (iVar17 == 0) {
                    iVar18 = iVar4;
                  }
                  local_e8.Size = iVar18;
                  ::FString::FString(&local_108,
                                     "Long path with separator in wrong place: round trip with normalized separator"
                                    );
                  FVar10.Data = (FScriptContainerElement *)L"";
                  if (local_108.Data.ArrayNum != 0) {
                    FVar10.Data = local_108.Data.AllocatorInstance.Data;
                  }
                  local_f8.DataPtr = local_118.DataPtr;
                  local_f8.Size = local_118.Size;
                  local_f8._12_4_ = local_118._12_4_;
                  local_d8.DataPtr = local_e8.DataPtr;
                  local_d8.Size = local_e8.Size;
                  local_d8._12_4_ = local_e8._12_4_;
                  FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
                  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.Data.AllocatorInstance.Data);
                  }
                  if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_c8.DataPtr);
                  }
                  pFVar6 = FAutomationTestFramework::Get();
                  local_118.Size = 0x16;
                  pFVar1 = pFVar6->CurrentTest;
                  local_118.DataPtr = L"/Game/Characters/Steve";
                  pFVar7 = FSoftObjectPath::GetLongPackageName(&local_b8,(FString *)&local_c8);
                  local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
                  iVar17 = (pFVar7->Data).ArrayNum;
                  iVar18 = iVar17 + -1;
                  if (iVar17 == 0) {
                    iVar18 = iVar4;
                  }
                  local_e8.Size = iVar18;
                  ::FString::FString(&local_108,
                                     "Long path with separator in wrong place: package name");
                  FVar10.Data = (FScriptContainerElement *)L"";
                  if (local_108.Data.ArrayNum != 0) {
                    FVar10.Data = local_108.Data.AllocatorInstance.Data;
                  }
                  local_f8.DataPtr = local_118.DataPtr;
                  local_f8.Size = local_118.Size;
                  local_f8._12_4_ = local_118._12_4_;
                  local_d8.DataPtr = local_e8.DataPtr;
                  local_d8.Size = local_e8.Size;
                  local_d8._12_4_ = local_e8._12_4_;
                  FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
                  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.Data.AllocatorInstance.Data);
                  }
                  if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_c8.DataPtr);
                  }
                  pFVar6 = FAutomationTestFramework::Get();
                  local_118.Size = 7;
                  pFVar1 = pFVar6->CurrentTest;
                  local_118.DataPtr = L"Steve_C";
                  pFVar7 = FSoftObjectPath::GetAssetName(&local_b8,(FString *)&local_c8);
                  local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
                  iVar17 = (pFVar7->Data).ArrayNum;
                  iVar18 = iVar17 + -1;
                  if (iVar17 == 0) {
                    iVar18 = 0;
                  }
                  local_e8.Size = iVar18;
                  ::FString::FString(&local_108,
                                     "Long path with separator in wrong place: asset name");
                  FVar10.Data = (FScriptContainerElement *)L"";
                  if (local_108.Data.ArrayNum != 0) {
                    FVar10.Data = local_108.Data.AllocatorInstance.Data;
                  }
                  local_f8.DataPtr = local_118.DataPtr;
                  local_f8.Size = local_118.Size;
                  local_f8._12_4_ = local_118._12_4_;
                  local_d8.DataPtr = local_e8.DataPtr;
                  local_d8.Size = local_e8.Size;
                  local_d8._12_4_ = local_e8._12_4_;
                  FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
                  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.Data.AllocatorInstance.Data);
                  }
                  if ((FScriptContainerElement *)local_c8.DataPtr != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_c8.DataPtr);
                  }
                  pFVar6 = FAutomationTestFramework::Get();
                  local_118.DataPtr = L"Root.Inner.AnotherInner.FurtherInner";
                  local_118.Size = 0x24;
                  pFVar1 = pFVar6->CurrentTest;
                  iVar17 = local_b8.SubPathString.Data.ArrayNum + -1;
                  if (local_b8.SubPathString.Data.ArrayNum == 0) {
                    iVar17 = 0;
                  }
                  pFVar7 = ::FString::ConstructFromPtrSize
                                     ((FString *)&local_f8,
                                      (uchar *)local_b8.SubPathString.Data.AllocatorInstance.Data,
                                      iVar17);
                  if (&local_38 != pFVar7) {
                    pFVar13 = (pFVar7->Data).AllocatorInstance.Data;
                    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    iVar3 = (pFVar7->Data).ArrayNum;
                    (pFVar7->Data).ArrayNum = 0;
                    (pFVar7->Data).ArrayMax = 0;
                  }
                  if (local_f8.DataPtr != (wchar_t *)0x0) {
                    FMemory::Free(local_f8.DataPtr);
                  }
                  if (iVar3 != 0) {
                    iVar14 = iVar3 + -1;
                  }
                  local_e8.Size = iVar14;
                  local_e8.DataPtr = (wchar_t *)pFVar13;
                  ::FString::FString(&local_108,
                                     "Long path with separator in wrong place: subobject path");
                  FVar10.Data = (FScriptContainerElement *)L"";
                  if (local_108.Data.ArrayNum != 0) {
                    FVar10.Data = local_108.Data.AllocatorInstance.Data;
                  }
                  local_f8.DataPtr = local_118.DataPtr;
                  local_f8.Size = local_118.Size;
                  local_f8._12_4_ = local_118._12_4_;
                  local_d8.DataPtr = local_e8.DataPtr;
                  local_d8.Size = local_e8.Size;
                  local_d8._12_4_ = local_e8._12_4_;
                  FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar10.Data,&local_d8,&local_f8);
                  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.Data.AllocatorInstance.Data);
                  }
                  if (pFVar13 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar13);
                  }
                  local_118.Size = 0x44;
                  local_118.DataPtr =
                       L"/Game/Characters/Steve.Steve_C:Root.Inner.AnotherInner..FurtherInner";
                  local_f8.DataPtr =
                       L"/Game/Characters/Steve.Steve_C:Root.Inner.AnotherInner..FurtherInner";
                  local_f8.Size = 0x44;
                  local_f8._12_4_ = local_118._12_4_;
                  FSoftObjectPath::SetPath(&local_b8,&local_f8);
                  if (local_b8.AssetPath.PackageName == (FName)0x0) goto LAB_1422303b3;
                  pFVar6 = FAutomationTestFramework::Get();
                  pcVar9 = "Long path with consecutive delimiters: is not valid";
                }
              }
            }
          }
        }
      }
    }
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_118,pcVar9);
    (*pcVar2)(pFVar1,&local_118,0);
    if (local_118.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_118.DataPtr);
    }
  }
LAB_1422303b3:
  if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

