// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5ce80

EAutomationTestFlags __thiscall FGuidTest::GetTestFlags(FGuidTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5ce90

bool __thiscall FGuidTest::IsStressTest(FGuidTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5cea0

uint __thiscall FGuidTest::GetRequiredDeviceNum(FGuidTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5ceb0

FString * __thiscall
FGuidTest::GetTestSourceFileName(FGuidTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\GuidTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5cee0

int __thiscall FGuidTest::GetTestSourceFileLine(FGuidTest *this)

{
  return 0xe;
}

// GetTests @ 141c5cef0

/* WARNING: Removing unreachable block (ram,0x000141c5d06e) */

void __thiscall
FGuidTest::GetTests(FGuidTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5d090

bool __thiscall FGuidTest::RunTest(FGuidTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5d0c0

FString * __thiscall
FGuidTest::GetBeautifiedTestName(FGuidTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FGuidTest @ 141c8b9a0

FGuidTest * __thiscall FGuidTest::FGuidTest(FGuidTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FGuidTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::Guid");
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

// TestBody @ 141c9f4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGuidTest::TestBody(FGuidTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 auStack_168 [32];
  FString local_148;
  FGuid local_138;
  FString local_128;
  FGuid local_118;
  FGuid local_108;
  FString local_f8;
  FGuid local_e8;
  FGuid local_d8;
  FMD5Hash local_c8;
  FMD5 local_a8;
  uchar local_48 [8];
  char acStack_40 [8];
  char local_38 [8];
  char local_30 [4];
  char local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138.A = 0x12345678;
  local_138.B = 0x87654321;
  local_138.C = 0x12345678;
  local_138.D = 0x87654321;
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,Digits);
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_f8,Digits);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar5.Data = local_128.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar6.Data = local_f8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"String conversion (Default) must return EGuidFormats::Digits string",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar5.Data);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,L"12345678876543211234567887654321");
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,Digits);
  if (local_128.Data.ArrayNum == local_f8.Data.ArrayNum) {
    if (1 < local_128.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_128.Data.AllocatorInstance.Data,
                         (wchar_t *)local_f8.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_141c9f629;
    }
  }
  else {
    bVar7 = local_128.Data.ArrayNum + local_f8.Data.ArrayNum == 1;
LAB_141c9f629:
    if (!bVar7) {
      pcVar2 = *(code **)(this->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,L"12345678-8765-4321-1234-567887654321");
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,DigitsWithHyphens);
  if (local_128.Data.ArrayNum == local_f8.Data.ArrayNum) {
    if (1 < local_128.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_128.Data.AllocatorInstance.Data,
                         (wchar_t *)local_f8.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_141c9f6e3;
    }
  }
  else {
    bVar7 = local_128.Data.ArrayNum + local_f8.Data.ArrayNum == 1;
LAB_141c9f6e3:
    if (!bVar7) {
      pcVar2 = *(code **)(this->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,L"{12345678-8765-4321-1234-567887654321}");
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,DigitsWithHyphensInBraces);
  if (local_128.Data.ArrayNum == local_f8.Data.ArrayNum) {
    if (1 < local_128.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_128.Data.AllocatorInstance.Data,
                         (wchar_t *)local_f8.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_141c9f79d;
    }
  }
  else {
    bVar7 = local_128.Data.ArrayNum + local_f8.Data.ArrayNum == 1;
LAB_141c9f79d:
    if (!bVar7) {
      pcVar2 = *(code **)(this->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,L"(12345678-8765-4321-1234-567887654321)");
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,DigitsWithHyphensInParentheses);
  if (local_128.Data.ArrayNum == local_f8.Data.ArrayNum) {
    if (1 < local_128.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_128.Data.AllocatorInstance.Data,
                         (wchar_t *)local_f8.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_141c9f857;
    }
  }
  else {
    bVar7 = local_128.Data.ArrayNum + local_f8.Data.ArrayNum == 1;
LAB_141c9f857:
    if (!bVar7) {
      pcVar2 = *(code **)(this->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,
                     L"{0x12345678,0x8765,0x4321,{0x12,0x34,0x56,0x78,0x87,0x65,0x43,0x21}}");
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,HexValuesInBraces);
  if (local_128.Data.ArrayNum == local_f8.Data.ArrayNum) {
    if (1 < local_128.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_128.Data.AllocatorInstance.Data,
                         (wchar_t *)local_f8.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_141c9f911;
    }
  }
  else {
    bVar7 = local_128.Data.ArrayNum + local_f8.Data.ArrayNum == 1;
LAB_141c9f911:
    if (!bVar7) {
      pcVar2 = *(code **)(this->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,L"12345678-87654321-12345678-87654321");
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,UniqueObjectGuid);
  if (local_128.Data.ArrayNum == local_f8.Data.ArrayNum) {
    if (1 < local_128.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_128.Data.AllocatorInstance.Data,
                         (wchar_t *)local_f8.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_141c9f9cb;
    }
  }
  else {
    bVar7 = local_128.Data.ArrayNum + local_f8.Data.ArrayNum == 1;
LAB_141c9f9cb:
    if (!bVar7) {
      pcVar2 = *(code **)(this->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,L"EjRWeIdlQyESNFZ4h2VDIQ");
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,Short);
  if (local_128.Data.ArrayNum == local_f8.Data.ArrayNum) {
    if (1 < local_128.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_128.Data.AllocatorInstance.Data,
                         (wchar_t *)local_f8.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_141c9fa85;
    }
  }
  else {
    bVar7 = local_128.Data.ArrayNum + local_f8.Data.ArrayNum == 1;
LAB_141c9fa85:
    if (!bVar7) {
      pcVar2 = *(code **)(this->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f8,L"12SRDE1NOQERISMPEF0H6KUU9");
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FGuid::AppendString(&local_138,&local_128,Base36Encoded);
  if (local_128.Data.ArrayNum == local_f8.Data.ArrayNum) {
    if (local_128.Data.ArrayNum < 2) goto LAB_141c9fb81;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_128.Data.AllocatorInstance.Data,
                       (wchar_t *)local_f8.Data.AllocatorInstance.Data);
    bVar7 = iVar3 == 0;
  }
  else {
    bVar7 = local_128.Data.ArrayNum + local_f8.Data.ArrayNum == 1;
  }
  if (!bVar7) {
    pcVar2 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
LAB_141c9fb81:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  local_118.A = 0;
  local_118.B = 0;
  local_118.C = 0;
  local_118.D = 0;
  bVar7 = FGuid::ParseExact(L"12345678876543211234567887654321",Digits,&local_118);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"Parsing valid strings must succeed (EGuidFormats::Digits)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_118.D != local_138.D || local_118.C != local_138.C) || local_118.B != local_138.B) ||
      local_118.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::ParseExact(L"12345678-8765-4321-1234-567887654321",DigitsWithHyphens,&local_118);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (EGuidFormats::DigitsWithHyphens)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_118.D != local_138.D || local_118.C != local_138.C) || local_118.B != local_138.B) ||
      local_118.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::ParseExact(L"{12345678-8765-4321-1234-567887654321}",DigitsWithHyphensInBraces,
                            &local_118);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (EGuidFormats::DigitsWithHyphensInBraces)"
                      );
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_118.D != local_138.D || local_118.C != local_138.C) || local_118.B != local_138.B) ||
      local_118.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::ParseExact(L"(12345678-8765-4321-1234-567887654321)",DigitsWithHyphensInParentheses
                            ,&local_118);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (EGuidFormats::DigitsWithHyphensInParentheses)"
                      );
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_118.D != local_138.D || local_118.C != local_138.C) || local_118.B != local_138.B) ||
      local_118.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::ParseExact(L"{0x12345678,0x8765,0x4321,{0x12,0x34,0x56,0x78,0x87,0x65,0x43,0x21}}",
                            HexValuesInBraces,&local_118);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (EGuidFormats::HexValuesInBraces)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_118.D != local_138.D || local_118.C != local_138.C) || local_118.B != local_138.B) ||
      local_118.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::ParseExact(L"12345678-87654321-12345678-87654321",UniqueObjectGuid,&local_118);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (EGuidFormats::UniqueObjectGuid)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_118.D != local_138.D || local_118.C != local_138.C) || local_118.B != local_138.B) ||
      local_118.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::ParseExact(L"EjRWeIdlQyESNFZ4h2VDIQ",Short,&local_118);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"Parsing valid strings must succeed (EGuidFormats::Short)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_118.D != local_138.D || local_118.C != local_138.C) || local_118.B != local_138.B) ||
      local_118.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::ParseExact(L"12SRDE1NOQERISMPEF0H6KUU9",Base36Encoded,&local_118);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (EGuidFormats::Base36Encoded)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_118.D != local_138.D || local_118.C != local_138.C) || local_118.B != local_138.B) ||
      local_118.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  local_108.A = 0;
  local_108.B = 0;
  local_108.C = 0;
  local_108.D = 0;
  bVar7 = FGuid::Parse(L"12345678876543211234567887654321",&local_108);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (12345678876543211234567887654321)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_108.D != local_138.D || local_108.C != local_138.C) || local_108.B != local_138.B) ||
      local_108.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::Parse(L"12345678-8765-4321-1234-567887654321",&local_108);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (12345678-8765-4321-1234-567887654321)")
    ;
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_108.D != local_138.D || local_108.C != local_138.C) || local_108.B != local_138.B) ||
      local_108.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::Parse(L"{12345678-8765-4321-1234-567887654321}",&local_108);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed ({12345678-8765-4321-1234-567887654321})"
                      );
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_108.D != local_138.D || local_108.C != local_138.C) || local_108.B != local_138.B) ||
      local_108.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::Parse(L"(12345678-8765-4321-1234-567887654321)",&local_108);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed ((12345678-8765-4321-1234-567887654321))"
                      );
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_108.D != local_138.D || local_108.C != local_138.C) || local_108.B != local_138.B) ||
      local_108.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::Parse(L"{0x12345678,0x8765,0x4321,{0x12,0x34,0x56,0x78,0x87,0x65,0x43,0x21}}",
                       &local_108);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed ({0x12345678,0x8765,0x4321,{0x12,0x34,0x56,0x78,0x87,0x65,0x43,0x21}})"
                      );
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_108.D != local_138.D || local_108.C != local_138.C) || local_108.B != local_138.B) ||
      local_108.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::Parse(L"12345678-87654321-12345678-87654321",&local_108);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Parsing valid strings must succeed (12345678-87654321-12345678-87654321)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_108.D != local_138.D || local_108.C != local_138.C) || local_108.B != local_138.B) ||
      local_108.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::Parse(L"EjRWeIdlQyESNFZ4h2VDIQ",&local_108);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"Parsing valid strings must succeed (EjRWeIdlQyESNFZ4h2VDIQ)");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_108.D != local_138.D || local_108.C != local_138.C) || local_108.B != local_138.B) ||
      local_108.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FGuid::Parse(L"12SRDE1NOQERISMPEF0H6KUU9",&local_108);
  if (!bVar7) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"Parsing valid strings must succeed (12SRDE1NOQERISMPEF0H6KUU9)")
    ;
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  if (((local_108.D != local_138.D || local_108.C != local_138.C) || local_108.B != local_138.B) ||
      local_108.A != local_138.A) {
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  FGuid::NewGuid(&local_e8);
  if (((local_e8.D == 0 && local_e8.C == 0) && local_e8.B == 0) && local_e8.A == 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"New GUIDs must be valid");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  local_e8.C = 0;
  local_e8.D = 0;
  local_e8.A = 0;
  local_e8.B = 0;
  FMD5::FMD5(&local_a8);
  local_30[0] = s_Construct_Guid_from_MD5_hash[0x18];
  local_30[1] = s_Construct_Guid_from_MD5_hash[0x19];
  local_30[2] = s_Construct_Guid_from_MD5_hash[0x1a];
  local_30[3] = s_Construct_Guid_from_MD5_hash[0x1b];
  local_2c = s_Construct_Guid_from_MD5_hash[0x1c];
  local_48[0] = s_Construct_Guid_from_MD5_hash[0];
  local_48[1] = s_Construct_Guid_from_MD5_hash[1];
  local_48[2] = s_Construct_Guid_from_MD5_hash[2];
  local_48[3] = s_Construct_Guid_from_MD5_hash[3];
  local_48[4] = s_Construct_Guid_from_MD5_hash[4];
  local_48[5] = s_Construct_Guid_from_MD5_hash[5];
  local_48[6] = s_Construct_Guid_from_MD5_hash[6];
  local_48[7] = s_Construct_Guid_from_MD5_hash[7];
  acStack_40[0] = s_Construct_Guid_from_MD5_hash[8];
  acStack_40[1] = s_Construct_Guid_from_MD5_hash[9];
  acStack_40[2] = s_Construct_Guid_from_MD5_hash[10];
  acStack_40[3] = s_Construct_Guid_from_MD5_hash[0xb];
  acStack_40[4] = s_Construct_Guid_from_MD5_hash[0xc];
  acStack_40[5] = s_Construct_Guid_from_MD5_hash[0xd];
  acStack_40[6] = s_Construct_Guid_from_MD5_hash[0xe];
  acStack_40[7] = s_Construct_Guid_from_MD5_hash[0xf];
  local_38[0] = s_Construct_Guid_from_MD5_hash[0x10];
  local_38[1] = s_Construct_Guid_from_MD5_hash[0x11];
  local_38[2] = s_Construct_Guid_from_MD5_hash[0x12];
  local_38[3] = s_Construct_Guid_from_MD5_hash[0x13];
  local_38[4] = s_Construct_Guid_from_MD5_hash[0x14];
  local_38[5] = s_Construct_Guid_from_MD5_hash[0x15];
  local_38[6] = s_Construct_Guid_from_MD5_hash[0x16];
  local_38[7] = s_Construct_Guid_from_MD5_hash[0x17];
  FMD5::Update(&local_a8,local_48,0x1c);
  local_c8.bIsValid = false;
  FMD5::Final(&local_a8,local_c8.Bytes);
  local_c8.bIsValid = true;
  FMD5Hash::LexToString(&local_c8,&local_128);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar5.Data = local_128.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp
                    ((wchar_t *)FVar5.Data,L"e500d989a5db77bc696e79ee785f4a69");
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"Expected hash must match");
    (*pcVar2)(pFVar1,&local_148);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_d8._0_8_ = local_c8.Bytes._0_8_;
  local_d8._8_8_ = local_c8.Bytes._8_8_;
  FGuid::AppendString(&local_d8,&local_128,Digits);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar5.Data = local_128.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp
                    ((wchar_t *)FVar5.Data,L"89d900e5bc77dba5ee796e69694a5f78");
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (iVar3 != 0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_148,L"Constructing from MD5 hash must be valid");
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  FMD5::~FMD5(&local_a8);
  return;
}

