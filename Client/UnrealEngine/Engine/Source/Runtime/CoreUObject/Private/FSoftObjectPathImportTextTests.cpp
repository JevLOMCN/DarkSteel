// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1421f34a0

EAutomationTestFlags __thiscall
FSoftObjectPathImportTextTests::GetTestFlags(FSoftObjectPathImportTextTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1421f34b0

bool __thiscall FSoftObjectPathImportTextTests::IsStressTest(FSoftObjectPathImportTextTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1421f34c0

uint __thiscall
FSoftObjectPathImportTextTests::GetRequiredDeviceNum(FSoftObjectPathImportTextTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 1421f34d0

FString * __thiscall
FSoftObjectPathImportTextTests::GetTestSourceFileName
          (FSoftObjectPathImportTextTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SoftObjectPath.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1421f3500

int __thiscall
FSoftObjectPathImportTextTests::GetTestSourceFileLine(FSoftObjectPathImportTextTests *this)

{
  return 0x4a1;
}

// GetTests @ 1421f3510

/* WARNING: Removing unreachable block (ram,0x0001421f368e) */

void __thiscall
FSoftObjectPathImportTextTests::GetTests
          (FSoftObjectPathImportTextTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
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

// RunTest @ 1421f36b0

bool __thiscall
FSoftObjectPathImportTextTests::RunTest(FSoftObjectPathImportTextTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1421f36e0

FString * __thiscall
FSoftObjectPathImportTextTests::GetBeautifiedTestName
          (FSoftObjectPathImportTextTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSoftObjectPathImportTextTests @ 1421ffa20

FSoftObjectPathImportTextTests * __thiscall
FSoftObjectPathImportTextTests::FSoftObjectPathImportTextTests
          (FSoftObjectPathImportTextTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSoftObjectPathImportTextTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::CoreUObject::SoftObjectPath::ImportText");
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

// TestBody @ 14222e170

void __thiscall
FSoftObjectPathImportTextTests::TestBody(FSoftObjectPathImportTextTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  TStringView<wchar_t> *pTVar5;
  FString *pFVar6;
  FOutputDeviceRedirector *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  FName local_res18 [2];
  TStringView<wchar_t> local_f8;
  FString local_e8;
  FSoftObjectPath local_d8;
  FName local_b8;
  int local_b0;
  int local_ac;
  FString local_a8;
  FSoftObjectPath local_98;
  FSoftObjectPath local_78;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar8 = (FScriptContainerElement *)0x0;
  local_res18[0] = (FName)((ulonglong)local_res18[0] & 0xffffffff00000000);
  ::FString::PrintfImpl(&local_a8,L"%s.%s");
  ::FString::PrintfImpl(&local_58,L"\"%s\"");
  iVar3 = local_a8.Data.ArrayNum;
  FVar12.Data = local_a8.Data.AllocatorInstance.Data;
  local_b0 = local_a8.Data.ArrayNum;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if (local_a8.Data.ArrayNum == 0) {
    local_ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,local_a8.Data.ArrayNum,
               &local_ac);
    memcpy((void *)local_b8,FVar12.Data,(longlong)iVar3 * 2);
  }
  local_e8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  local_d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_d8.AssetPath.PackageName.Number = 0;
  local_d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_d8.AssetPath.AssetName.Number = 0;
  local_e8.Data.ArrayNum = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    local_e8.Data.ArrayNum = 0;
  }
  local_d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = CONCAT44(local_e8.Data.ArrayMax,local_e8.Data.ArrayNum);
  local_f8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  local_d8.SubPathString.Data.ArrayNum = 0;
  local_d8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_d8,&local_f8);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  ::FString::FString(&local_e8,L"/Game/Environments/Sets/Arid/Materials/M_Arid");
  local_res18[0] = local_d8.AssetPath.PackageName;
  iVar9 = 0;
  pFVar10 = pFVar8;
  iVar3 = iVar9;
  if (local_d8.AssetPath.PackageName != (FName)0x0) {
    pFVar6 = ::FName::ToString(local_res18,(FString *)&local_f8);
    pFVar10 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar12.Data = local_e8.Data.AllocatorInstance.Data;
  }
  pFVar11 = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    pFVar11 = pFVar10;
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"Correct package name",(wchar_t *)pFVar11,(wchar_t *)FVar12.Data);
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  ::FString::FString(&local_e8,L"M_Arid");
  local_res18[0] = local_d8.AssetPath.AssetName;
  bVar13 = local_d8.AssetPath.AssetName != (FName)0x0;
  if (bVar13) {
    pTVar5 = (TStringView<wchar_t> *)::FName::ToString(local_res18,&local_48);
    pFVar10 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->DataPtr)->AllocatorInstance)
              .Data;
  }
  else {
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    pTVar5 = &local_f8;
    pFVar10 = pFVar8;
  }
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->DataPtr)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  iVar3 = pTVar5->Size;
  *(undefined8 *)&pTVar5->Size = 0;
  if ((bVar13) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar13) && ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_f8.DataPtr);
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar12.Data = local_e8.Data.AllocatorInstance.Data;
  }
  pFVar11 = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    pFVar11 = pFVar10;
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"Correct asset name",(wchar_t *)pFVar11,(wchar_t *)FVar12.Data);
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  ::FString::FString(&local_e8,L"");
  iVar3 = local_d8.SubPathString.Data.ArrayNum + -1;
  if (local_d8.SubPathString.Data.ArrayNum == 0) {
    iVar3 = iVar9;
  }
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_48,(uchar *)local_d8.SubPathString.Data.AllocatorInstance.Data,iVar3);
  if (&local_38 != pFVar6) {
    pFVar8 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar9 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar12.Data = local_e8.Data.AllocatorInstance.Data;
  }
  pFVar10 = (FScriptContainerElement *)L"";
  if (iVar9 != 0) {
    pFVar10 = pFVar8;
  }
  FAutomationTestBase::TestEqual(pFVar1,L"Empty subpath",(wchar_t *)pFVar10,(wchar_t *)FVar12.Data);
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_78.AssetPath.PackageName.Number = 0;
  local_res18[0] = (FName)L"";
  if (local_58.Data.ArrayNum != 0) {
    local_res18[0] = (FName)local_58.Data.AllocatorInstance.Data;
  }
  local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetPath.AssetName.Number = 0;
  local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.SubPathString.Data.ArrayNum = 0;
  local_78.SubPathString.Data.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar7 = FOutputDeviceRedirector::Get();
  bVar13 = FSoftObjectPath::ImportTextItem
                     (&local_78,(wchar_t **)local_res18,0,(UObject *)0x0,(FOutputDevice *)pFVar7,
                      (FArchive *)0x0);
  if (!bVar13) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_f8,L"Quoted path imports successfully");
    (*pcVar2)(pFVar1,&local_f8);
    if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  if ((local_78.AssetPath.PackageName == local_d8.AssetPath.PackageName) &&
     (local_78.AssetPath.AssetName == local_d8.AssetPath.AssetName)) {
    if (local_78.SubPathString.Data.ArrayNum == local_d8.SubPathString.Data.ArrayNum) {
      if (1 < local_78.SubPathString.Data.ArrayNum) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((uchar *)local_78.SubPathString.Data.AllocatorInstance.Data,
                           (uchar *)local_d8.SubPathString.Data.AllocatorInstance.Data);
        bVar13 = iVar3 == 0;
        goto LAB_14222e559;
      }
    }
    else {
      bVar13 = local_78.SubPathString.Data.ArrayNum + local_d8.SubPathString.Data.ArrayNum == 1;
LAB_14222e559:
      if (!bVar13) goto LAB_14222e560;
    }
  }
  else {
LAB_14222e560:
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_f8,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_f8);
    if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
  }
  local_98.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_98.AssetPath.PackageName.Number = 0;
  local_res18[0] = (FName)L"";
  if (local_b0 != 0) {
    local_res18[0] = local_b8;
  }
  local_98.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_98.AssetPath.AssetName.Number = 0;
  local_98.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.SubPathString.Data.ArrayNum = 0;
  local_98.SubPathString.Data.ArrayMax = 0;
  GetGlobalLogSingleton();
  pFVar7 = FOutputDeviceRedirector::Get();
  bVar13 = FSoftObjectPath::ImportTextItem
                     (&local_98,(wchar_t **)local_res18,0,(UObject *)0x0,(FOutputDevice *)pFVar7,
                      (FArchive *)0x0);
  if (!bVar13) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_f8,L"Unquoted path imports successfully");
    (*pcVar2)(pFVar1,&local_f8,0);
    if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  if ((local_98.AssetPath.PackageName == local_d8.AssetPath.PackageName) &&
     (local_98.AssetPath.AssetName == local_d8.AssetPath.AssetName)) {
    if (local_98.SubPathString.Data.ArrayNum == local_d8.SubPathString.Data.ArrayNum) {
      if (local_98.SubPathString.Data.ArrayNum < 2) goto LAB_14222e6ae;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((uchar *)local_98.SubPathString.Data.AllocatorInstance.Data,
                         (uchar *)local_d8.SubPathString.Data.AllocatorInstance.Data);
      bVar13 = iVar3 == 0;
    }
    else {
      bVar13 = local_98.SubPathString.Data.ArrayNum + local_d8.SubPathString.Data.ArrayNum == 1;
    }
    if (bVar13) goto LAB_14222e6ae;
  }
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl((FString *)&local_f8,L"%s: The two values are not equal.");
  (*pcVar2)(pFVar1,&local_f8,0);
  if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.DataPtr);
  }
LAB_14222e6ae:
  if (local_98.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_b8 != (FName)0x0) {
    FMemory::Free((void *)local_b8);
  }
  if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

