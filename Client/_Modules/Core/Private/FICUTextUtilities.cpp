// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc2150

EAutomationTestFlags __thiscall FICUTextUtilities::GetTestFlags(FICUTextUtilities *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc2160

bool __thiscall FICUTextUtilities::IsStressTest(FICUTextUtilities *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc2170

uint __thiscall FICUTextUtilities::GetRequiredDeviceNum(FICUTextUtilities *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc2180

FString * __thiscall
FICUTextUtilities::GetTestSourceFileName(FICUTextUtilities *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\TextTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc21b0

int __thiscall FICUTextUtilities::GetTestSourceFileLine(FICUTextUtilities *this)

{
  return 0x61e;
}

// GetTests @ 141bc21c0

/* WARNING: Removing unreachable block (ram,0x000141bc233e) */

void __thiscall
FICUTextUtilities::GetTests
          (FICUTextUtilities *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc2360

bool __thiscall FICUTextUtilities::RunTest(FICUTextUtilities *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc2390

FString * __thiscall
FICUTextUtilities::GetBeautifiedTestName(FICUTextUtilities *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FICUTextUtilities @ 141be3670

FICUTextUtilities * __thiscall
FICUTextUtilities::FICUTextUtilities(FICUTextUtilities *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FICUTextUtilities__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::ICUTextUtilities");
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
  ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
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

// TestBody @ 141c17310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FICUTextUtilities::TestBody(FICUTextUtilities *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar32 wVar6;
  FInternationalization *this_00;
  FString *pFVar7;
  FString *pFVar8;
  FAutomationTestFramework *pFVar9;
  undefined1 auStack_98 [32];
  FString local_78;
  FCultureStateSnapshot local_68;
  FString local_38;
  FString local_28;
  wchar_t local_18 [4];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  this_00 = FInternationalization::Get();
  local_68.Language.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Language.Data.ArrayNum = 0;
  local_68.Language.Data.ArrayMax = 0;
  local_68.Locale.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Locale.Data.ArrayNum = 0;
  local_68.Locale.Data.ArrayMax = 0;
  local_68.AssetGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AssetGroups.ArrayNum = 0;
  local_68.AssetGroups.ArrayMax = 0;
  FInternationalization::BackupCultureState(this_00,&local_68);
  ::FString::FString(&local_78,"fr");
  bVar4 = FInternationalization::SetCurrentCulture(this_00,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = ::FString::FString(&local_28,L"ôte");
    pFVar8 = ::FString::FString(&local_38,L"ÔTE");
    pFVar8 = FTextTransformer::ToLower(&local_78,pFVar8);
    iVar5 = (pFVar7->Data).ArrayNum;
    iVar1 = (pFVar8->Data).ArrayNum;
    if (iVar1 == iVar5) {
      if (iVar1 < 2) {
        bVar4 = false;
      }
      else {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
        bVar4 = iVar5 != 0;
      }
    }
    else {
      bVar4 = iVar5 + iVar1 != 1;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_78,L"FTextTransformer::ToLower doesn\'t work correctly");
      (*pcVar3)(pFVar2,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FTextChar::IsWhitespace(L'Ȓ');
    if (bVar4) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_78,L"FTextChar::IsWhitespace can\'t detect whitespace");
      (*pcVar3)(pFVar2,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FTextChar::IsAlpha(L'Ȓ');
    if (!bVar4) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_78,L"FTextChar::IsAlpha can\'t detect fr letter");
      (*pcVar3)(pFVar2,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = FTextChar::IsAlpha(L'7');
    if ((bVar4) || (bVar4 = FTextChar::IsAlpha(L'A'), !bVar4)) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_78,L"FTextChar::IsAlpha can\'t detect not letter");
      (*pcVar3)(pFVar2,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    local_18[0] = L'\xd83d';
    local_18[1] = L'\xde00';
    local_18[2] = 0;
    wVar6 = FTextChar::GetCodepoint(local_18,(int *)0x0);
    bVar4 = FTextChar::IsAlpha(wVar6);
    if (bVar4) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_78,L"FTextChar::IsAlpha can\'t detect surrogate pair");
      (*pcVar3)(pFVar2,&local_78,0);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  FInternationalization::RestoreCultureState(this_00,&local_68);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_68.AssetGroups.AllocatorInstance.Data,
             local_68.AssetGroups.ArrayNum);
  if ((TTuple<FName,FString> *)local_68.AssetGroups.AllocatorInstance.Data !=
      (TTuple<FName,FString> *)0x0) {
    FMemory::Free(local_68.AssetGroups.AllocatorInstance.Data);
  }
  if (local_68.Locale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Locale.Data.AllocatorInstance.Data);
  }
  if (local_68.Language.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Language.Data.AllocatorInstance.Data);
  }
  return;
}

