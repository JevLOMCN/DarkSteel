// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5f7e0

EAutomationTestFlags __thiscall TAsciiSetTest::GetTestFlags(TAsciiSetTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5f7f0

bool __thiscall TAsciiSetTest::IsStressTest(TAsciiSetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5f800

uint __thiscall TAsciiSetTest::GetRequiredDeviceNum(TAsciiSetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5f810

FString * __thiscall
TAsciiSetTest::GetTestSourceFileName(TAsciiSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AsciiSetTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5f840

int __thiscall TAsciiSetTest::GetTestSourceFileLine(TAsciiSetTest *this)

{
  return 0xb;
}

// GetTests @ 141c5f850

/* WARNING: Removing unreachable block (ram,0x000141c5f9ce) */

void __thiscall
TAsciiSetTest::GetTests
          (TAsciiSetTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5f9f0

bool __thiscall TAsciiSetTest::RunTest(TAsciiSetTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5fa20

FString * __thiscall
TAsciiSetTest::GetBeautifiedTestName(TAsciiSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// TAsciiSetTest @ 141c8e910

TAsciiSetTest * __thiscall TAsciiSetTest::TAsciiSetTest(TAsciiSetTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7TAsciiSetTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::AsciiSet");
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

// TestBody @ 141cb4500

void __thiscall TAsciiSetTest::TestBody(TAsciiSetTest *this,FString *param_1)

{
  wchar_t *pwVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  FAutomationTestFramework *pFVar5;
  size_t sVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  <lambda_2> local_res18 [8];
  TStringView<char8_t> local_68;
  TStringView<char8_t> local_58;
  TStringView<char> local_48 [2];
  
  uVar16 = 0;
  local_48[0].Size = 0;
  local_48[0]._12_4_ = 0;
  local_48[0].DataPtr = (char *)0x100003e00;
  uVar10 = 1;
  uVar8 = uVar16;
  iVar15 = 2;
  do {
    uVar9 = uVar16;
    if ((iVar15 - 1U & 0xffffffc0) == 0x40) {
      uVar9 = uVar10 << 1;
    }
    uVar18 = (int)uVar8 + (uint)((uVar9 & 0x200000002) != 0);
    uVar8 = (ulonglong)uVar18;
    uVar10 = uVar10 << 4 | uVar10 >> 0x3c;
    uVar19 = iVar15 + 2;
    iVar15 = iVar15 + 4;
  } while (uVar19 < 0x200);
  pFVar5 = FAutomationTestFramework::Get();
  if (uVar18 != 2) {
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_68,0);
    if (local_68.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  bVar17 = 0;
  uVar8 = uVar16;
  do {
    uVar9 = 1L << (bVar17 & 0x3f);
    uVar10 = uVar16;
    if (bVar17 < 0x40) {
      uVar10 = uVar9;
    }
    uVar19 = (int)uVar8 + (uint)((uVar10 & 0x100003e00) != 0);
    uVar8 = (ulonglong)uVar19;
    pFVar5 = FAutomationTestFramework::Get();
    if (((uVar10 & 0x100003e00) != 0) !=
        ((uVar9 & ((ulonglong)((bVar17 & 0xc0) != 0x40) - 1 |
                  -(ulonglong)(bVar17 < 0x40) & 0xfffffffeffffc1ff)) == 0)) {
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
      (*pcVar3)(pFVar2,&local_68,0);
      if (local_68.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_68.DataPtr);
      }
    }
    bVar17 = bVar17 + 1;
  } while (bVar17 < 0x80);
  pFVar5 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar5->CurrentTest,L"Num",uVar19,6);
  pFVar5 = FAutomationTestFramework::Get();
  pwVar11 = L"  \t\tHello world!";
  do {
    pwVar1 = pwVar11 + 1;
    pwVar11 = pwVar11 + 1;
  } while (((-(ulonglong)((ushort)*pwVar1 < 0x40) & 0x100003e00) >> ((byte)*pwVar1 & 0x3f) & 1) != 0
          );
  FAutomationTestBase::TestEqual(pFVar5->CurrentTest,L"Skip",pwVar11,L"Hello world!");
  pFVar5 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual(pFVar5->CurrentTest,L"Skip",L"Hello world!",L"Hello world!");
  pFVar5 = FAutomationTestFramework::Get();
  local_58.DataPtr = &s____abc;
  pFVar2 = pFVar5->CurrentTest;
  local_68.DataPtr = (uchar *)s___abc;
  local_68._12_4_ = local_48[0]._12_4_;
  local_68.Size = 5;
  do {
    pbVar13 = local_58.DataPtr + 1;
    local_58.DataPtr = local_58.DataPtr + 1;
  } while (((-(ulonglong)(*pbVar13 < 0x40) & 0x100003e00) >> (*pbVar13 & 0x3f) & 1) != 0);
  sVar6 = strlen((char *)local_58.DataPtr);
  local_58.Size = (int)sVar6;
  FAutomationTestBase::TestEqual(pFVar2,L"Skip to extended ASCII",&local_58,&local_68);
  pFVar5 = FAutomationTestFramework::Get();
  pwVar11 = L" 变 abc";
  do {
    pwVar1 = pwVar11 + 1;
    pwVar11 = pwVar11 + 1;
  } while (((-(ulonglong)((ushort)*pwVar1 < 0x40) & 0x100003e00) >> ((byte)*pwVar1 & 0x3f) & 1) != 0
          );
  FAutomationTestBase::TestEqual(pFVar5->CurrentTest,L"Skip to wide",pwVar11,L"变 abc");
  pFVar5 = FAutomationTestFramework::Get();
  pcVar12 = "NonWhitespace\t \nNonWhitespace";
  pFVar2 = pFVar5->CurrentTest;
  do {
    bVar17 = pcVar12[1];
    pcVar12 = pcVar12 + 1;
  } while (((-(ulonglong)(bVar17 < 0x40) & 0x100003e01) >> (bVar17 & 0x3f) & 1) == 0);
  if (bVar17 != 9) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_58,0);
    if (local_58.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  uVar4 = local_48[0]._8_8_;
  pcVar12 = local_48[0].DataPtr;
  pFVar2 = pFVar5->CurrentTest;
  pcVar7 = FAsciiSet::FindLastOrEnd<char>("NonWhitespace\t \nNonWhitespace",(FAsciiSet *)local_48);
  if (*pcVar7 != '\n') {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,local_48,0);
    if (local_48[0].DataPtr != (char *)0x0) {
      FMemory::Free(local_48[0].DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar2 = pFVar5->CurrentTest;
  local_48[0].DataPtr = pcVar12;
  local_48[0]._8_8_ = uVar4;
  pcVar7 = FAsciiSet::FindLastOrEnd<char>("NonWhitespace\t NonWhitespace\n",(FAsciiSet *)local_48);
  if (*pcVar7 != '\n') {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,local_48,0);
    if (local_48[0].DataPtr != (char *)0x0) {
      FMemory::Free(local_48[0].DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pcVar7 = "NonWhitespaceNonWhitespace";
  pFVar2 = pFVar5->CurrentTest;
  do {
    bVar17 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
  } while (((-(ulonglong)(bVar17 < 0x40) & 0x100003e01) >> (bVar17 & 0x3f) & 1) == 0);
  if (bVar17 != 0) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,local_48,0);
    if (local_48[0].DataPtr != (char *)0x0) {
      FMemory::Free(local_48[0].DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar2 = pFVar5->CurrentTest;
  local_48[0].DataPtr = pcVar12;
  local_48[0]._8_8_ = uVar4;
  pcVar12 = FAsciiSet::FindLastOrEnd<char>("NonWhitespaceNonWhitespace",(FAsciiSet *)local_48);
  if (*pcVar12 != '\0') {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,local_48,0);
    if (local_48[0].DataPtr != (char *)0x0) {
      FMemory::Free(local_48[0].DataPtr);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].Size = 4;
  local_58.DataPtr = &s_ABcdEF;
  local_48[0].DataPtr = "cdEF";
  do {
    uVar8 = uVar16;
    if ((*local_58.DataPtr & 0xc0) == 0x40) {
      uVar8 = 0x7fffffe00000000;
    }
  } while (((uVar8 >> (*local_58.DataPtr & 0x3f) & 1) == 0) &&
          (local_58.DataPtr = local_58.DataPtr + 1, local_58.DataPtr != &DAT_15076636a));
  local_58.Size = 0x5076636a - (int)local_58.DataPtr;
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"TrimPrefixWithout",(TStringView<char> *)&local_58,local_48);
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].Size = 2;
  pbVar13 = &s_ABcdEF;
  local_48[0].DataPtr = "AB";
  do {
    uVar8 = uVar16;
    if ((*pbVar13 & 0xc0) == 0x40) {
      uVar8 = 0x7fffffe00000000;
    }
  } while (((uVar8 >> (*pbVar13 & 0x3f) & 1) == 0) &&
          (pbVar13 = pbVar13 + 1, pbVar13 != &DAT_15076636a));
  local_58.Size = (int)pbVar13 + -0x50766364;
  local_58.DataPtr = "ABcdEF";
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"FindPrefixWithout",(TStringView<char> *)&local_58,local_48);
  pFVar5 = FAutomationTestFramework::Get();
  pbVar13 = &DAT_150766369;
  local_48[0].Size = 4;
  pbVar14 = &DAT_150766369;
  local_48[0].DataPtr = "ABcd";
  do {
    uVar8 = uVar16;
    if ((*pbVar14 & 0xc0) == 0x40) {
      uVar8 = 0x7fffffe00000000;
    }
  } while (((uVar8 >> (*pbVar14 & 0x3f) & 1) == 0) &&
          (pbVar14 = pbVar14 + -1, pbVar14 != &DAT_150766363));
  local_58.DataPtr = "ABcdEF";
  local_58.Size = (int)pbVar14 + -0x50766363;
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"TrimSuffixWithout",(TStringView<char> *)&local_58,local_48);
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].Size = 2;
  local_48[0].DataPtr = "EF";
  do {
    uVar8 = uVar16;
    if ((*pbVar13 & 0xc0) == 0x40) {
      uVar8 = 0x7fffffe00000000;
    }
  } while (((uVar8 >> (*pbVar13 & 0x3f) & 1) == 0) &&
          (pbVar13 = pbVar13 + -1, pbVar13 != &DAT_150766363));
  local_58.DataPtr = pbVar13 + 1;
  local_58.Size = 0x5076636a - (int)local_58.DataPtr;
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"FindSuffixWithout",(TStringView<char> *)&local_58,local_48);
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].Size = 4;
  local_48[0].DataPtr = "same";
  local_58.DataPtr = &s_same;
  do {
    uVar8 = uVar16;
    if ((*local_58.DataPtr & 0xc0) == 0x40) {
      uVar8 = 0x7fffffe00000000;
    }
  } while (((uVar8 >> (*local_58.DataPtr & 0x3f) & 1) == 0) &&
          (local_58.DataPtr = local_58.DataPtr + 1, local_58.DataPtr != &DAT_150766418));
  local_58.Size = 0x50766418 - (int)local_58.DataPtr;
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"TrimPrefixWithout none",(TStringView<char> *)&local_58,local_48);
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].Size = 0;
  local_48[0].DataPtr = "";
  pbVar13 = &s_same;
  do {
    uVar8 = uVar16;
    if ((*pbVar13 & 0xc0) == 0x40) {
      uVar8 = 0x7fffffe00000000;
    }
  } while (((uVar8 >> (*pbVar13 & 0x3f) & 1) == 0) &&
          (pbVar13 = pbVar13 + 1, pbVar13 != &DAT_150766418));
  local_58.Size = (int)pbVar13 + -0x50766414;
  local_58.DataPtr = "same";
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"FindPrefixWithout none",(TStringView<char> *)&local_58,local_48);
  pFVar5 = FAutomationTestFramework::Get();
  pbVar13 = &DAT_150766417;
  local_48[0].DataPtr = "same";
  local_48[0].Size = 4;
  pbVar14 = &DAT_150766417;
  do {
    uVar8 = uVar16;
    if ((*pbVar14 & 0xc0) == 0x40) {
      uVar8 = 0x7fffffe00000000;
    }
  } while (((uVar8 >> (*pbVar14 & 0x3f) & 1) == 0) &&
          (pbVar14 = pbVar14 + -1, pbVar14 != (byte *)((longlong)L"FindSuffixWithout" + 0x23)));
  local_58.DataPtr = "same";
  local_58.Size = (int)pbVar14 + -0x50766413;
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"TrimSuffixWithout none",(TStringView<char> *)&local_58,local_48);
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].DataPtr = "";
  local_48[0].Size = 0;
  do {
    uVar8 = uVar16;
    if ((*pbVar13 & 0xc0) == 0x40) {
      uVar8 = 0x7fffffe00000000;
    }
  } while (((uVar8 >> (*pbVar13 & 0x3f) & 1) == 0) &&
          (pbVar13 = pbVar13 + -1, pbVar13 != (byte *)((longlong)L"FindSuffixWithout" + 0x23)));
  local_58.DataPtr = pbVar13 + 1;
  local_58.Size = 0x50766418 - (int)local_58.DataPtr;
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"FindSuffixWithout none",(TStringView<char> *)&local_58,local_48);
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].DataPtr = "";
  local_48[0].Size = 0;
  local_58.Size = 0;
  local_58.DataPtr = "";
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"TrimPrefixWithout empty",(TStringView<char> *)&local_58,local_48)
  ;
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].DataPtr = "";
  local_48[0].Size = 0;
  local_58.Size = 0;
  local_58.DataPtr = "";
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"FindPrefixWithout empty",(TStringView<char> *)&local_58,local_48)
  ;
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].DataPtr = "";
  local_48[0].Size = 0;
  local_58.DataPtr = "";
  local_58.Size = 0;
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"TrimSuffixWithout empty",(TStringView<char> *)&local_58,local_48)
  ;
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0].DataPtr = "";
  local_58.DataPtr = "";
  local_48[0]._8_8_ = (ulonglong)(uint)local_48[0]._12_4_ << 0x20;
  local_58._8_8_ = (ulonglong)(uint)local_58._12_4_ << 0x20;
  FAutomationTestBase::TestEqual<TStringView<char>_>
            (pFVar5->CurrentTest,L"FindSuffixWithout empty",(TStringView<char> *)&local_58,local_48)
  ;
  `TAsciiSetTest::TestBody'::__l2::<lambda_1>::
  operator()<_TAsciiSetTest::TestBody_::__l2::<lambda_2>_>(local_res18,local_res18[0]);
  `TAsciiSetTest::TestBody'::__l2::<lambda_1>::
  operator()<_TAsciiSetTest::TestBody_::__l2::<lambda_3>_>(local_res18,(<lambda_3>)local_res18[0]);
  `TAsciiSetTest::TestBody'::__l2::<lambda_1>::
  operator()<_TAsciiSetTest::TestBody_::__l2::<lambda_4>_>(local_res18,(<lambda_4>)local_res18[0]);
  return;
}

