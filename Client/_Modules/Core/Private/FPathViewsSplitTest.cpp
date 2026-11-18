// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141cc48e0

EAutomationTestFlags __thiscall FPathViewsSplitTest::GetTestFlags(FPathViewsSplitTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc48f0

bool __thiscall FPathViewsSplitTest::IsStressTest(FPathViewsSplitTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc4900

uint __thiscall FPathViewsSplitTest::GetRequiredDeviceNum(FPathViewsSplitTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc4910

FString * __thiscall
FPathViewsSplitTest::GetTestSourceFileName
          (FPathViewsSplitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc4940

int __thiscall FPathViewsSplitTest::GetTestSourceFileLine(FPathViewsSplitTest *this)

{
  return 0x1e3;
}

// GetTests @ 141cc4950

/* WARNING: Removing unreachable block (ram,0x000141cc4ace) */

void __thiscall
FPathViewsSplitTest::GetTests
          (FPathViewsSplitTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc4af0

bool __thiscall FPathViewsSplitTest::RunTest(FPathViewsSplitTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc4b20

FString * __thiscall
FPathViewsSplitTest::GetBeautifiedTestName
          (FPathViewsSplitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathViewsSplitTest @ 141cea980

FPathViewsSplitTest * __thiscall
FPathViewsSplitTest::FPathViewsSplitTest(FPathViewsSplitTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathViewsSplitTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::Split");
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

// operator() @ 141cf4400

void __thiscall
`FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  size_t sVar5;
  FAutomationTestFramework *pFVar6;
  ulong64 uVar7;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_38.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_38.Size = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    local_28.Size = (int)sVar5;
  }
  FPathViews::Split(&local_28,&local_38,&local_48,&local_58);
  if (local_38.Size == 0) {
    wVar1 = *param_2;
  }
  else {
    uVar7 = (ulong64)local_38.Size;
    iVar4 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,param_2,uVar7);
    if (iVar4 != 0) goto LAB_141cf451e;
    wVar1 = param_2[uVar7];
  }
  if (wVar1 == L'\0') {
    if (local_48.Size == 0) {
      wVar1 = *param_3;
    }
    else {
      uVar7 = (ulong64)local_48.Size;
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_48.DataPtr,param_3,uVar7);
      if (iVar4 != 0) goto LAB_141cf451e;
      wVar1 = param_3[uVar7];
    }
    if (wVar1 == L'\0') {
      if (local_58.Size == 0) {
        wVar1 = *param_4;
      }
      else {
        uVar7 = (ulong64)local_58.Size;
        iVar4 = FGenericPlatformStricmp::Strnicmp(local_58.DataPtr,param_4,uVar7);
        if (iVar4 != 0) goto LAB_141cf451e;
        wVar1 = param_4[uVar7];
      }
      if (wVar1 == L'\0') {
        return;
      }
    }
  }
LAB_141cf451e:
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::PrintfImpl
            ((FString *)&local_28,
             L"Failed to split path \'%s\' (got (\'%.*s\', \'%.*s\', \'%.*s\'), expected (\'%s\', \'%s\', \'%s\'))."
            );
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// TestBody @ 141d39c20

void __thiscall FPathViewsSplitTest::TestBody(FPathViewsSplitTest *this,FString *param_1)

{
  undefined1 local_res18 [8];
  
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()(local_res18,L"",L"",L"",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()(local_res18,L".txt",L"",L"",L"txt");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L".tar.gz",L"",L".tar",L"gz");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L".tar.gz/",L".tar.gz",L"",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L".tar.gz\\",L".tar.gz",L"",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()(local_res18,L"..",L"",L"..",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()(local_res18,L"File",L"",L"File",L"")
  ;
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"File.txt",L"",L"File",L"txt");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"File.tar.gz",L"",L"File.tar",L"gz");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"File.tar.gz/",L"File.tar.gz",L"",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"File.tar.gz\\",L"File.tar.gz",L"",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/Folder/",L"C:/Folder",L"",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/Folder/File",L"C:/Folder",L"File",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/Folder/File.txt",L"C:/Folder",L"File",L"txt");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/Folder/File.tar.gz",L"C:/Folder",L"File.tar",L"gz");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/Folder/First.Last/File",L"C:/Folder/First.Last",L"File",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/Folder/First.Last/File.txt",L"C:/Folder/First.Last",L"File",L"txt");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/Folder/First.Last/File.tar.gz",L"C:/Folder/First.Last",L"File.tar",
             L"gz");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\Folder\\",L"C:\\Folder",L"",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\Folder\\File",L"C:\\Folder",L"File",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\Folder\\First.Last\\",L"C:\\Folder\\First.Last",L"",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\Folder\\First.Last\\File",L"C:\\Folder\\First.Last",L"File",L"");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\Folder\\First.Last\\File.txt",L"C:\\Folder\\First.Last",L"File",
             L"txt");
  `FPathViewsSplitTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\Folder\\First.Last\\File.tar.gz",L"C:\\Folder\\First.Last",
             L"File.tar",L"gz");
  return;
}

