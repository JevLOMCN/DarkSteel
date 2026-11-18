// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc8940

EAutomationTestFlags __thiscall
FPathViewsChangeExtensionTest::GetTestFlags(FPathViewsChangeExtensionTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc8950

bool __thiscall FPathViewsChangeExtensionTest::IsStressTest(FPathViewsChangeExtensionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc8960

uint __thiscall
FPathViewsChangeExtensionTest::GetRequiredDeviceNum(FPathViewsChangeExtensionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc8970

FString * __thiscall
FPathViewsChangeExtensionTest::GetTestSourceFileName
          (FPathViewsChangeExtensionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc89a0

int __thiscall
FPathViewsChangeExtensionTest::GetTestSourceFileLine(FPathViewsChangeExtensionTest *this)

{
  return 0x2ce;
}

// GetTests @ 141cc89b0

/* WARNING: Removing unreachable block (ram,0x000141cc8b2e) */

void __thiscall
FPathViewsChangeExtensionTest::GetTests
          (FPathViewsChangeExtensionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc8b50

bool __thiscall
FPathViewsChangeExtensionTest::RunTest(FPathViewsChangeExtensionTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc8b80

FString * __thiscall
FPathViewsChangeExtensionTest::GetBeautifiedTestName
          (FPathViewsChangeExtensionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathViewsChangeExtensionTest @ 141ce8c80

FPathViewsChangeExtensionTest * __thiscall
FPathViewsChangeExtensionTest::FPathViewsChangeExtensionTest
          (FPathViewsChangeExtensionTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathViewsChangeExtensionTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::ChangeExtension");
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

// TestBody @ 141d37620

void __thiscall
FPathViewsChangeExtensionTest::TestBody(FPathViewsChangeExtensionTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ForAnyElementType FVar5;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  local_48.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  FPathViews::ChangeExtension(&local_58,&local_38,&local_48);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = L"";
  local_38.Size = 0;
  local_48.DataPtr = L"";
  local_48.Size = 0;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.Size = 4;
  local_38.DataPtr = L".txt";
  local_48.DataPtr = L"";
  local_48.Size = 0;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.Size = 3;
  local_38.DataPtr = L"log";
  local_48.DataPtr = L"file";
  local_48.Size = 4;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"file");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = L"log";
  local_48.DataPtr = L"file.txt";
  local_38.Size = 3;
  local_48.Size = 8;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"file.log");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.Size = 3;
  local_38.DataPtr = L"gz2";
  local_48.Size = 0xb;
  local_48.DataPtr = L"file.tar.gz";
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"file.tar.gz2");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = L"";
  local_38.Size = 0;
  local_48.DataPtr = L"file.txt";
  local_48.Size = 8;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"file");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = L"log";
  local_48.DataPtr = L"C:/Folder/file";
  local_38.Size = 3;
  local_48.Size = 0xe;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"C:/Folder/file");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = L"log";
  local_48.DataPtr = L"C:/Folder/file.txt";
  local_38.Size = 3;
  local_48.Size = 0x12;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"C:/Folder/file.log");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.Size = 3;
  local_38.DataPtr = L"gz2";
  local_48.DataPtr = L"C:/Folder/file.tar.gz";
  local_48.Size = 0x15;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"C:/Folder/file.tar.gz2");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = L"log";
  local_48.DataPtr = L"C:/Folder/First.Last/file";
  local_38.Size = 3;
  local_48.Size = 0x19;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"C:/Folder/First.Last/file");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = L"log";
  local_48.DataPtr = L"C:/Folder/First.Last/file.txt";
  local_38.Size = 3;
  local_48.Size = 0x1d;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"C:/Folder/First.Last/file.log");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.DataPtr = L"gz2";
  local_48.DataPtr = L"C:/Folder/First.Last/file.tar.gz";
  local_38.Size = 3;
  local_48.Size = 0x20;
  FPathViews::ChangeExtension(&local_58,&local_48,&local_38);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp
                    ((wchar_t *)FVar5.Data,L"C:/Folder/First.Last/file.tar.gz2");
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_38,
               L"Path \'%s\' failed to change the extension (got \'%s\', expected \'%s\').");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

