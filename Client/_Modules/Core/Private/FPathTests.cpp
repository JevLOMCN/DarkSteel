// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// GetTestFlags @ 141ccc1f0

EAutomationTestFlags __thiscall FPathTests::GetTestFlags(FPathTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ccc200

bool __thiscall FPathTests::IsStressTest(FPathTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ccc210

uint __thiscall FPathTests::GetRequiredDeviceNum(FPathTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ccc220

FString * __thiscall
FPathTests::GetTestSourceFileName(FPathTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ccc250

int __thiscall FPathTests::GetTestSourceFileLine(FPathTests *this)

{
  return 0x27;
}

// GetTests @ 141ccc260

/* WARNING: Removing unreachable block (ram,0x000141ccc3de) */

void __thiscall
FPathTests::GetTests
          (FPathTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ccc400

bool __thiscall FPathTests::RunTest(FPathTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ccc430

FString * __thiscall
FPathTests::GetBeautifiedTestName(FPathTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathTests @ 141ce8540

FPathTests * __thiscall FPathTests::FPathTests(FPathTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Paths");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
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

// operator() @ 141cf5e20

void __thiscall
`FPathTests::TestBody'::__l3::<lambda_1>::operator()(void *this,wchar_t *param_1,wchar_t *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FString *pFVar4;
  FAutomationTestFramework *pFVar5;
  ForAnyElementType FVar6;
  FString local_28;
  FString local_18;
  
  pFVar4 = ::FString::FString(&local_18,param_1);
  FPaths::GetExtension(&local_28,pFVar4,false);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,param_2);
  if (iVar3 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_18,L"Path \'%s\' failed to get the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141cf6680

void __thiscall
`FPathTests::TestBody'::__l3::<lambda_2>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FAutomationTestFramework *pFVar6;
  bool bVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar4 = ::FString::FString(&local_18,param_2);
  pFVar5 = ::FString::FString(&local_28,param_1);
  FPaths::SetExtension(&local_38,pFVar5,pFVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar3 = (param_3->Data).ArrayNum;
  if (local_38.Data.ArrayNum == iVar3) {
    if (local_38.Data.ArrayNum < 2) goto LAB_141cf678e;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_3->Data).AllocatorInstance.Data);
    bVar7 = iVar3 == 0;
  }
  else {
    bVar7 = local_38.Data.ArrayNum + iVar3 == 1;
  }
  if (!bVar7) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_28,L"Path \'%s\' failed to set the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
LAB_141cf678e:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141cf6b20

void __thiscall
`FPathTests::TestBody'::__l3::<lambda_3>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FAutomationTestFramework *pFVar6;
  bool bVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar4 = ::FString::FString(&local_18,param_2);
  pFVar5 = ::FString::FString(&local_28,param_1);
  FPaths::ChangeExtension(&local_38,pFVar5,pFVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar3 = (param_3->Data).ArrayNum;
  if (local_38.Data.ArrayNum == iVar3) {
    if (local_38.Data.ArrayNum < 2) goto LAB_141cf6c2e;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_3->Data).AllocatorInstance.Data);
    bVar7 = iVar3 == 0;
  }
  else {
    bVar7 = local_38.Data.ArrayNum + iVar3 == 1;
  }
  if (!bVar7) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_28,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
LAB_141cf6c2e:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141cf6e20

void __thiscall
`FPathTests::TestBody'::__l2::<lambda_5>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ForAnyElementType FVar5;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::FString(&local_38,param_1);
  FPaths::Split(&local_38,&local_48,&local_58,&local_68);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,param_2);
  if (iVar3 == 0) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,param_3);
    if (iVar3 == 0) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar5.Data = local_68.Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,param_4);
      if (iVar3 == 0) goto LAB_141cf6f84;
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl
            (&local_38,
             L"Failed to split path \'%s\' (got (\'%s\', \'%s\', \'%s\'), expected (\'%s\', \'%s\', \'%s\'))."
            );
  (*pcVar2)(pFVar1,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_141cf6f84:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 141cf6ff0

void __thiscall
`FPathTests::TestBody'::__l2::<lambda_6>::operator()(void *this,wchar_t *param_1,bool param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FAutomationTestFramework *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar4 = ::FString::FString(&local_38,param_1);
  bVar3 = FPaths::ValidatePath(pFVar4,(FText *)0x0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar3 != param_2) {
    pFVar5 = FAutomationTestFramework::Get();
    pwVar7 = L"true";
    pwVar6 = L"true";
    if (!param_2) {
      pwVar6 = L"false";
    }
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,pwVar6);
    if (!bVar3) {
      pwVar7 = L"false";
    }
    ::FString::FString(&local_58,pwVar7);
    ::FString::PrintfImpl(&local_38,L"ValidatePath(\"%s\") == %s, expected %s.");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TestBody @ 141d333b0

void __thiscall FPathTests::TestBody(FPathTests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  FString *pFVar6;
  FString *pFVar7;
  FAutomationTestFramework *pFVar8;
  FTestPair *pFVar9;
  FTestPair *pFVar10;
  undefined1 local_res18 [8];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  TestCollapseRelativeDirectories<FPaths,FString>();
  TestCreateStandardFilename();
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()(local_res18,L"file",L"");
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()(local_res18,L"file.txt",L"txt");
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()(local_res18,L"file.tar.gz",L"gz");
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()(local_res18,L"C:/Folder/file",L"");
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()(local_res18,L"C:/Folder/file.txt",L"txt");
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()(local_res18,L"C:/Folder/file.tar.gz",L"gz");
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()(local_res18,L"C:/Folder/First.Last/file",L"")
  ;
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()
            (local_res18,L"C:/Folder/First.Last/file.txt",L"txt");
  `FPathTests::TestBody'::__l3::<lambda_1>::operator()
            (local_res18,L"C:/Folder/First.Last/file.tar.gz",L"gz");
  ::FString::FString(&local_98,L"file.log");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()(local_res18,L"file",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"file.log");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()(local_res18,L"file.txt",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"file.tar.gz2");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()(local_res18,L"file.tar.gz",L"gz2",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/file.log");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()
            (local_res18,L"C:/Folder/file",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/file.log");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()
            (local_res18,L"C:/Folder/file.txt",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/file.tar.gz2");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()
            (local_res18,L"C:/Folder/file.tar.gz",L"gz2",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/First.Last/file.log");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()
            (local_res18,L"C:/Folder/First.Last/file",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/First.Last/file.log");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()
            (local_res18,L"C:/Folder/First.Last/file.txt",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/First.Last/file.tar.gz2");
  `FPathTests::TestBody'::__l3::<lambda_2>::operator()
            (local_res18,L"C:/Folder/First.Last/file.tar.gz",L"gz2",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"file");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()(local_res18,L"file",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"file.log");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()(local_res18,L"file.txt",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"file.tar.gz2");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()(local_res18,L"file.tar.gz",L"gz2",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/file");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()
            (local_res18,L"C:/Folder/file",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/file.log");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()
            (local_res18,L"C:/Folder/file.txt",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/file.tar.gz2");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()
            (local_res18,L"C:/Folder/file.tar.gz",L"gz2",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/First.Last/file");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()
            (local_res18,L"C:/Folder/First.Last/file",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/First.Last/file.log");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()
            (local_res18,L"C:/Folder/First.Last/file.txt",L"log",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"C:/Folder/First.Last/file.tar.gz2");
  `FPathTests::TestBody'::__l3::<lambda_3>::operator()
            (local_res18,L"C:/Folder/First.Last/file.tar.gz",L"gz2",&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/FolderN");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder2");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder1");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder/SubDir");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder/File");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder/");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder/File");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder/");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder/");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder/");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder/Subdir/");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::FString::FString(&local_98,L"C:/Folder/");
  pFVar7 = ::FString::FString(&local_88,L"C:/Folder/Subdir/");
  bVar5 = FPaths::IsUnderDirectory(pFVar7,pFVar6);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_98,L"FPaths::IsUnderDirectory(\'%s\', \'%s\') != %s.");
    (*pcVar2)(pFVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  TestRemoveDuplicateSlashes<FPaths,FString>();
  pFVar9 = PathTest::ExpectedRelativeToAbsolutePaths.DataPtr +
           PathTest::ExpectedRelativeToAbsolutePaths.ArrayNum;
  for (pFVar10 = PathTest::ExpectedRelativeToAbsolutePaths.DataPtr; pFVar10 != pFVar9;
      pFVar10 = pFVar10 + 1) {
    pwVar3 = (pFVar10->Expected).DataPtr;
    uVar4._0_4_ = (pFVar10->Expected).Size;
    uVar4._4_4_ = *(undefined4 *)&(pFVar10->Expected).field_0xc;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    pFVar6 = ::FString::ConstructFromPtrSize
                       (&local_78,(pFVar10->Input).DataPtr,(pFVar10->Input).Size);
    if (&local_a8 != pFVar6) {
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_a8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    pFVar6 = ::FString::ConstructFromPtrSize(&local_68,L"/root",5);
    if (&local_b8 != pFVar6) {
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      local_b8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_b8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FPaths::ConvertRelativePathToFull(&local_98,&local_b8,&local_a8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar8 = FAutomationTestFramework::Get();
    local_88.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_88.Data.ArrayNum = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      local_88.Data.ArrayNum = 0;
    }
    local_48[0]._12_4_ = local_88.Data.ArrayMax;
    local_48[0].Size = local_88.Data.ArrayNum;
    local_48[0].DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
    local_58.DataPtr = pwVar3;
    local_58._8_8_ = uVar4;
    FAutomationTestBase::TestEqual
              (pFVar8->CurrentTest,L"ConvertRelativePathToFull",local_48,&local_58);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()(local_res18,L"",L"",L"",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()(local_res18,L".txt",L"",L"",L"txt");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()(local_res18,L".tar.gz",L"",L".tar",L"gz");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()(local_res18,L".tar.gz/",L".tar.gz",L"",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()(local_res18,L".tar.gz\\",L".tar.gz",L"",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()(local_res18,L"..",L"",L"..",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()(local_res18,L"File",L"",L"File",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()(local_res18,L"File.txt",L"",L"File",L"txt");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"File.tar.gz",L"",L"File.tar",L"gz");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"File.tar.gz/",L"File.tar.gz",L"",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"File.tar.gz\\",L"File.tar.gz",L"",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:/Folder/",L"C:/Folder",L"",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:/Folder/File",L"C:/Folder",L"File",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:/Folder/File.txt",L"C:/Folder",L"File",L"txt");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:/Folder/File.tar.gz",L"C:/Folder",L"File.tar",L"gz");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:/Folder/First.Last/File",L"C:/Folder/First.Last",L"File",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:/Folder/First.Last/File.txt",L"C:/Folder/First.Last",L"File",L"txt");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:/Folder/First.Last/File.tar.gz",L"C:/Folder/First.Last",L"File.tar",
             L"gz");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:\\Folder\\",L"C:\\Folder",L"",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:\\Folder\\File",L"C:\\Folder",L"File",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:\\Folder\\First.Last\\",L"C:\\Folder\\First.Last",L"",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:\\Folder\\First.Last\\File",L"C:\\Folder\\First.Last",L"File",L"");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:\\Folder\\First.Last\\File.txt",L"C:\\Folder\\First.Last",L"File",
             L"txt");
  `FPathTests::TestBody'::__l2::<lambda_5>::operator()
            (local_res18,L"C:\\Folder\\First.Last\\File.tar.gz",L"C:\\Folder\\First.Last",
             L"File.tar",L"gz");
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"C:/Path/Dir",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"C:\\Path\\Dir",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"//Path/Dir",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"\\\\Path\\Dir",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"/Path/Dir",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"\\Path\\Dir",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"Path/Dir",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"Path\\Dir",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"Path",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"/Path/",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"\\Path\\",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()
            (local_res18,L"\\\\?\\K:\\myfolder\\myfile.fbx",true);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"C:\\Path\\Dir?",false);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"C:\\Path\\Dir:",false);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"C:\\Path\\Dir&",false);
  `FPathTests::TestBody'::__l2::<lambda_6>::operator()(local_res18,L"C:\\Path\\Dir^",false);
  return;
}

