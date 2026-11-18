// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141bcdae0

EAutomationTestFlags __thiscall
FTextStringificationTest::GetTestFlags(FTextStringificationTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bcdaf0

bool __thiscall FTextStringificationTest::IsStressTest(FTextStringificationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bcdb00

uint __thiscall FTextStringificationTest::GetRequiredDeviceNum(FTextStringificationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bcdb10

FString * __thiscall
FTextStringificationTest::GetTestSourceFileName
          (FTextStringificationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\TextTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bcdb40

int __thiscall FTextStringificationTest::GetTestSourceFileLine(FTextStringificationTest *this)

{
  return 0x48e;
}

// GetTests @ 141bcdb50

/* WARNING: Removing unreachable block (ram,0x000141bcdcce) */

void __thiscall
FTextStringificationTest::GetTests
          (FTextStringificationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bcdcf0

bool __thiscall FTextStringificationTest::RunTest(FTextStringificationTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bcdd20

FString * __thiscall
FTextStringificationTest::GetBeautifiedTestName
          (FTextStringificationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTextStringificationTest @ 141bea0a0

FTextStringificationTest * __thiscall
FTextStringificationTest::FTextStringificationTest(FTextStringificationTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTextStringificationTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,
                              "[.][EditorContext][ClientContext][EngineFilter][ServerContext][CommandletContext][SupportsAutoRTFM]"
                             );
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TextStringification");
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
  ::FString::FString(&local_18,
                     "[.][EditorContext][ClientContext][EngineFilter][ServerContext][CommandletContext][SupportsAutoRTFM]"
                    );
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

// operator() @ 141befe50

void __thiscall
`FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1,FString *param_2,FString *param_3,bool param_4)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  wchar_t *pwVar6;
  FString *pFVar7;
  FString *pFVar8;
  bool bVar9;
  FString local_68;
  FText local_58;
  FText local_48;
  FString local_38;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FTextStringHelper::WriteToBuffer(&local_68,param_1,false,false);
  iVar4 = (param_2->Data).ArrayNum;
  if (local_68.Data.ArrayNum == iVar4) {
    if (1 < local_68.Data.ArrayNum) {
      iVar4 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                     (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
      goto LAB_141befed0;
    }
  }
  else {
    bVar9 = local_68.Data.ArrayNum + iVar4 == 1;
LAB_141befed0:
    if (!bVar9) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      FText::ToString(param_1);
      ::FString::PrintfImpl
                ((FString *)&local_58,
                 L"Text export failure (from text): Text \'%s\' was expected to export as \'%s\', but produced \'%s\'."
                );
      (*pcVar3)(pFVar2,&local_58);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_58.TextData.Reference);
      }
    }
  }
  FText::FText(&local_48);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pwVar6 = FTextStringHelper::ReadFromBuffer(pwVar6,&local_48,(wchar_t *)0x0,(wchar_t *)0x0,false);
  if (pwVar6 == (wchar_t *)0x0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_58,
               L"Text import failure (from string): String \'%s\' failed to import.");
    (*pcVar3)(pFVar2,&local_58);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
  }
  pFVar7 = FText::ToString(param_1);
  pFVar8 = FText::ToString(&local_48);
  iVar4 = (pFVar7->Data).ArrayNum;
  iVar1 = (pFVar8->Data).ArrayNum;
  if (iVar4 == iVar1) {
    if (1 < iVar4) {
      iVar4 = wcscmp((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
      goto LAB_141bf000c;
    }
  }
  else {
    bVar9 = iVar1 + iVar4 == 1;
LAB_141bf000c:
    if (!bVar9) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      FText::ToString(&local_48);
      FText::ToString(param_1);
      ::FString::PrintfImpl
                ((FString *)&local_58,
                 L"Text import failure (from string): String \'%s\' was expected to import as \'%s\', but produced \'%s\'."
                );
      (*pcVar3)(pFVar2,&local_58);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_58.TextData.Reference);
      }
    }
  }
  if (!param_4) goto LAB_141bf01ed;
  FText::FText(&local_58);
  if ((param_3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  pwVar6 = FTextStringHelper::ReadFromBuffer(pwVar6,&local_58,(wchar_t *)0x0,(wchar_t *)0x0,false);
  if (pwVar6 == (wchar_t *)0x0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_38,L"Text import failure (from C++): String \'%s\' failed to import.");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FText::ToString(param_1);
  pFVar8 = FText::ToString(&local_58);
  iVar4 = (pFVar7->Data).ArrayNum;
  iVar1 = (pFVar8->Data).ArrayNum;
  if (iVar4 == iVar1) {
    if (1 < iVar4) {
      iVar4 = wcscmp((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
      goto LAB_141bf015b;
    }
  }
  else {
    bVar9 = iVar1 + iVar4 == 1;
LAB_141bf015b:
    if (!bVar9) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      FText::ToString(&local_58);
      FText::ToString(param_1);
      ::FString::PrintfImpl
                (&local_38,
                 L"Text import failure (from C++): String \'%s\' was expected to import as \'%s\', but produced \'%s\'."
                );
      (*pcVar3)(pFVar2,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
LAB_141bf01ed:
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// TestBody @ 141c40e10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FTextStringificationTest::TestBody(FTextStringificationTest *this,FString *param_1)

{
  FStringTable *pFVar1;
  code *pcVar2;
  float fVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FInternationalization *this_00;
  FStringTableRegistry *pFVar7;
  FName *pFVar8;
  TSharedPtr<FStringTable_const_,1> *pTVar9;
  FText *pFVar10;
  FNumberFormattingOptions *pFVar11;
  FInternationalization *pFVar12;
  TSharedPtr<FCulture,1> *pTVar13;
  FDateTime *pFVar14;
  FString *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  TTuple<FString,FFormatArgumentValue> *pTVar18;
  longlong lVar19;
  undefined1 local_res18 [8];
  FTextKey local_res20 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a58;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_a48
  ;
  FTextKey local_a38;
  FTextKey local_a34;
  FCultureStateSnapshot local_a30;
  FDateTime local_a00;
  FDateTime local_9f8;
  FDateTime local_9f0;
  FDateTime local_9e8;
  FDateTime local_9e0;
  FDateTime local_9d8;
  FDateTime local_9d0;
  FDateTime local_9c8;
  TSharedPtr<FCulture,1> local_9c0;
  TSharedPtr<FCulture,1> local_9b0;
  TSharedPtr<FCulture,1> local_9a0;
  TSharedPtr<FCulture,1> local_990;
  TSharedPtr<FCulture,1> local_980;
  TSharedPtr<FCulture,1> local_970;
  FString local_960;
  FString local_950;
  FString local_940;
  FString local_930;
  FString local_920;
  FText local_910;
  FString local_900;
  FString local_8f0;
  FText local_8e0;
  FString local_8d0;
  FString local_8c0;
  TSharedPtr<FCulture,1> local_8b0;
  FString local_8a0;
  FString local_890;
  FString local_880;
  FString local_870;
  FString local_860;
  FString local_850;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  TSharedPtr<FCulture,1> local_7c0;
  FString local_7b0;
  FString local_7a0;
  TSharedPtr<FCulture,1> local_790;
  FString local_780;
  FString local_770;
  TSharedPtr<FCulture,1> local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  FString local_710;
  TSharedPtr<FCulture,1> local_700;
  FString local_6f0;
  FString local_6e0;
  TSharedPtr<FCulture,1> local_6d0;
  FString local_6c0;
  FString local_6b0;
  TSharedPtr<FCulture,1> local_6a0;
  FString local_690;
  FString local_680;
  TSharedPtr<FCulture,1> local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  TSharedPtr<FCulture,1> local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  TSharedPtr<FCulture,1> local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  TSharedPtr<FCulture,1> local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  TSharedPtr<FCulture,1> local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  TSharedPtr<FCulture,1> local_3e0;
  FString local_3d0;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  FName local_3a8;
  FDateTime local_3a0;
  FDateTime local_398;
  FDateTime local_390;
  FDateTime local_388;
  FDateTime local_380;
  FDateTime local_378;
  FDateTime local_370;
  TSharedPtr<FStringTable_const_,1> local_368;
  FText local_358;
  FText local_348;
  FText local_338;
  FText local_328;
  FText local_318;
  FText local_308;
  FDateTime local_2f8;
  FText local_2f0;
  FText local_2e0;
  TSharedPtr<FCulture,1> local_2d0;
  FText local_2c0;
  FText local_2b0;
  FText local_2a0;
  FText local_290;
  FText local_280;
  TSharedPtr<FCulture,1> local_270;
  FText local_260;
  FText local_250;
  FText local_240;
  TSharedPtr<FCulture,1> local_230;
  TSharedPtr<FCulture,1> local_220;
  FText local_210;
  FText local_200;
  FString local_1f0;
  TSharedPtr<FCulture,1> local_1e0;
  FText local_1d0;
  FText local_1c0;
  FText local_1b0;
  TSharedPtr<FCulture,1> local_1a0;
  FText local_190;
  FText local_180;
  FString local_170;
  TSharedPtr<FCulture,1> local_160;
  FText local_150;
  FText local_140;
  FString local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FString local_a0;
  FTextFormat local_90;
  FTextFormat local_80;
  FNumberFormattingOptions local_70;
  FNumberFormattingOptions local_58 [2];
  
  this_00 = FInternationalization::Get();
  local_a30.Language.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a30.Language.Data.ArrayNum = 0;
  local_a30.Language.Data.ArrayMax = 0;
  local_a30.Locale.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a30.Locale.Data.ArrayNum = 0;
  local_a30.Locale.Data.ArrayMax = 0;
  local_a30.AssetGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a30.AssetGroups.ArrayNum = 0;
  local_a30.AssetGroups.ArrayMax = 0;
  FInternationalization::BackupCultureState(this_00,&local_a30);
  ::FString::FString(&local_8a0,L"en-US");
  FInternationalization::SetCurrentCulture(this_00,&local_8a0);
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  pFVar7 = FStringTableRegistry::Get();
  pFVar8 = ::FName::FName(&local_3c0,"Core.Tests.TextFormatTest");
  pTVar9 = FStringTableRegistry::FindStringTable(pFVar7,&local_368,*pFVar8);
  pFVar1 = pTVar9->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.SharedReferenceCount.ReferenceController);
  if (pFVar1 == (FStringTable *)0x0) {
    pFVar7 = FStringTableRegistry::Get();
    FTextKey::FTextKey(local_res20,L"Core.Tests.TextFormatTest");
    pFVar8 = ::FName::FName(&local_3b8,L"Core.Tests.TextFormatTest");
    FStringTableRegistry::Internal_NewLocTable(pFVar7,*pFVar8,local_res20);
    pFVar7 = FStringTableRegistry::Get();
    ::FString::FString(&local_890,L"Lorem");
    FTextKey::FTextKey(&local_a38,L"TextStringificationTest_Lorem");
    pFVar8 = ::FName::FName(&local_3b0,L"Core.Tests.TextFormatTest");
    FStringTableRegistry::Internal_SetLocTableEntry(pFVar7,*pFVar8,&local_a38,&local_890);
    if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_890.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_870,
                     L"NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Lorem\", \"Lorem\")"
                    );
  ::FString::FString(&local_880,
                     L"NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Lorem\", \"Lorem\")"
                    );
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_358,L"Core.Tests.TextFormatTest",L"TextStringificationTest_Lorem",
                       L"Lorem");
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_880,&local_870,true);
  if (local_358.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
  }
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_850,L"LOCTEXT(\"TextStringificationTest_Lorem\", \"Lorem\")");
  ::FString::FString(&local_860,
                     L"NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Lorem\", \"Lorem\")"
                    );
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_348,L"Core.Tests.TextFormatTest",L"TextStringificationTest_Lorem",
                       L"Lorem");
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_860,&local_850,true);
  if (local_348.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
  }
  if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_860.Data.AllocatorInstance.Data);
  }
  if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_850.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_830,
                     L"LOCTABLE(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Lorem\")");
  ::FString::FString(&local_840,
                     L"LOCTABLE(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Lorem\")");
  pFVar7 = FStringTableRegistry::Get();
  FTextKey::FTextKey(&local_a34,L"TextStringificationTest_Lorem");
  pFVar8 = ::FName::FName(&local_3a8,L"Core.Tests.TextFormatTest");
  pFVar10 = FStringTableRegistry::Internal_FindLocTableEntry
                      (pFVar7,&local_338,*pFVar8,&local_a34,FindOrLoad);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_840,&local_830,true);
  if (local_338.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
  }
  if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_840.Data.AllocatorInstance.Data);
  }
  if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_830.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_810,L"INVTEXT(\"DummyText\")");
  ::FString::FString(&local_820,L"INVTEXT(\"DummyText\")");
  pFVar10 = FText::AsCultureInvariant(&local_328,L"DummyText");
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_820,&local_810,true);
  if (local_328.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
  }
  if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.Data.AllocatorInstance.Data);
  }
  if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_810.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_7f0,L"FText::FromString(TEXT(\"DummyString\"))");
  ::FString::FString(&local_800,L"INVTEXT(\"DummyString\")");
  pFVar10 = FText::FromString(&local_318,L"DummyString");
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_800,&local_7f0,false);
  if (local_318.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
  }
  if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_800.Data.AllocatorInstance.Data);
  }
  if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_7d0,L"LOCGEN_NUMBER(10, \"\")");
  ::FString::FString(&local_7e0,L"LOCGEN_NUMBER(10, \"\")");
  local_8b0.Object = (FCulture *)0x0;
  local_8b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar10 = FText::AsNumber(&local_308,10,(FNumberFormattingOptions *)0x0,&local_8b0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_7e0,&local_7d0,true);
  if (local_308.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8b0.SharedReferenceCount.ReferenceController);
  if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
  }
  if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_7a0,L"LOCGEN_NUMBER_GROUPED(12.5f, \"\")");
  ::FString::FString(&local_7b0,L"LOCGEN_NUMBER_GROUPED(12.500000f, \"\")");
  local_7c0.Object = (FCulture *)0x0;
  local_7c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar11 = FNumberFormattingOptions::DefaultWithGrouping();
  fVar3 = __real_41480000;
  pFVar10 = FText::AsNumber(&local_1b0,__real_41480000,pFVar11,&local_7c0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_7b0,&local_7a0,true);
  if (local_1b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7c0.SharedReferenceCount.ReferenceController);
  if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
  }
  if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_770,L"LOCGEN_NUMBER_UNGROUPED(12.5f, \"\")");
  ::FString::FString(&local_780,L"LOCGEN_NUMBER_UNGROUPED(12.500000f, \"\")");
  local_790.Object = (FCulture *)0x0;
  local_790.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar11 = FNumberFormattingOptions::DefaultNoGrouping();
  pFVar10 = FText::AsNumber(&local_2f0,fVar3,pFVar11,&local_790);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_780,&local_770,true);
  if (local_2f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_790.SharedReferenceCount.ReferenceController);
  if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_780.Data.AllocatorInstance.Data);
  }
  if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_770.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_740,
                     L"LOCGEN_NUMBER_CUSTOM(+10, SetAlwaysSign(true).SetRoundingMode(ERoundingMode::ToZero).SetMinimumFractionalDigits(2), \"\")"
                    );
  ::FString::FString(&local_750,
                     L"LOCGEN_NUMBER_CUSTOM(10, SetAlwaysSign(true).SetRoundingMode(ERoundingMode::ToZero).SetMinimumFractionalDigits(2), \"\")"
                    );
  local_760.Object = (FCulture *)0x0;
  local_760.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar11 = FNumberFormattingOptions::FNumberFormattingOptions(&local_70);
  pFVar11->AlwaysSign = true;
  pFVar11->RoundingMode = ToZero;
  pFVar11->MinimumFractionalDigits = 2;
  pFVar10 = FText::AsNumber(&local_2e0,10,pFVar11,&local_760);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_750,&local_740,true);
  if (local_2e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_760.SharedReferenceCount.ReferenceController);
  if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_750.Data.AllocatorInstance.Data);
  }
  if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_740.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_710,L"LOCGEN_NUMBER(-10, \"en\")");
  ::FString::FString(&local_720,L"LOCGEN_NUMBER(-10, \"en\")");
  pFVar12 = FInternationalization::Get();
  ::FString::FString(&local_730,L"en");
  pTVar13 = FInternationalization::GetCulture(pFVar12,&local_2d0,&local_730);
  local_9a0.Object = pTVar13->Object;
  local_9a0.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FCulture *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.SharedReferenceCount.ReferenceController);
  if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_730.Data.AllocatorInstance.Data);
  }
  pFVar10 = FText::AsNumber(&local_2c0,-10,(FNumberFormattingOptions *)0x0,&local_9a0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_720,&local_710,true);
  if (local_2c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2c0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a0.SharedReferenceCount.ReferenceController);
  if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_720.Data.AllocatorInstance.Data);
  }
  if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_710.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_6e0,L"LOCGEN_PERCENT(0.1f, \"\")");
  ::FString::FString(&local_6f0,L"LOCGEN_PERCENT(0.100000f, \"\")");
  local_700.Object = (FCulture *)0x0;
  local_700.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  fVar3 = __real_3dcccccd;
  pFVar10 = FText::AsPercent(&local_2b0,__real_3dcccccd,(FNumberFormattingOptions *)0x0,&local_700);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_6f0,&local_6e0,true);
  if (local_2b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_700.SharedReferenceCount.ReferenceController);
  if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
  }
  if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_6b0,L"LOCGEN_PERCENT_GROUPED(0.1f, \"\")");
  ::FString::FString(&local_6c0,L"LOCGEN_PERCENT_GROUPED(0.100000f, \"\")");
  local_6d0.Object = (FCulture *)0x0;
  local_6d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar11 = FNumberFormattingOptions::DefaultWithGrouping();
  pFVar10 = FText::AsPercent(&local_2a0,fVar3,pFVar11,&local_6d0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_6c0,&local_6b0,true);
  if (local_2a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6d0.SharedReferenceCount.ReferenceController);
  if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
  }
  if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_680,L"LOCGEN_PERCENT_UNGROUPED(0.1f, \"\")");
  ::FString::FString(&local_690,L"LOCGEN_PERCENT_UNGROUPED(0.100000f, \"\")");
  local_6a0.Object = (FCulture *)0x0;
  local_6a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar11 = FNumberFormattingOptions::DefaultNoGrouping();
  pFVar10 = FText::AsPercent(&local_290,fVar3,pFVar11,&local_6a0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_690,&local_680,true);
  if (local_290.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6a0.SharedReferenceCount.ReferenceController);
  if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.Data.AllocatorInstance.Data);
  }
  if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_680.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_650,
                     L"LOCGEN_PERCENT_CUSTOM(0.1f, SetAlwaysSign(true).SetRoundingMode(ERoundingMode::ToZero).SetMinimumFractionalDigits(2), \"\")"
                    );
  ::FString::FString(&local_660,
                     L"LOCGEN_PERCENT_CUSTOM(0.100000f, SetAlwaysSign(true).SetRoundingMode(ERoundingMode::ToZero).SetMinimumFractionalDigits(2), \"\")"
                    );
  local_670.Object = (FCulture *)0x0;
  local_670.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar11 = FNumberFormattingOptions::FNumberFormattingOptions(local_58);
  pFVar11->AlwaysSign = true;
  pFVar11->RoundingMode = ToZero;
  pFVar11->MinimumFractionalDigits = 2;
  pFVar10 = FText::AsPercent(&local_280,fVar3,pFVar11,&local_670);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_660,&local_650,true);
  if (local_280.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_670.SharedReferenceCount.ReferenceController);
  if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_660.Data.AllocatorInstance.Data);
  }
  if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_650.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_620,L"LOCGEN_PERCENT(0.1, \"en\")");
  ::FString::FString(&local_630,L"LOCGEN_PERCENT(0.100000, \"en\")");
  pFVar12 = FInternationalization::Get();
  ::FString::FString(&local_640,L"en");
  pTVar13 = FInternationalization::GetCulture(pFVar12,&local_270,&local_640);
  local_990.Object = pTVar13->Object;
  local_990.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FCulture *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.SharedReferenceCount.ReferenceController);
  if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.Data.AllocatorInstance.Data);
  }
  pFVar10 = FText::AsPercent(&local_260,__real_3fb999999999999a,(FNumberFormattingOptions *)0x0,
                             &local_990);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_630,&local_620,true);
  if (local_260.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_990.SharedReferenceCount.ReferenceController);
  if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_630.Data.AllocatorInstance.Data);
  }
  if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_5e0,L"LOCGEN_CURRENCY(125, \"USD\", \"\")");
  ::FString::FString(&local_5f0,L"LOCGEN_CURRENCY(125, \"USD\", \"\")");
  local_600.Object = (FCulture *)0x0;
  local_600.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  ::FString::FString(&local_610,L"USD");
  pFVar10 = FText::AsCurrencyBase(&local_250,0x7d,&local_610,&local_600,-1);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_5f0,&local_5e0,true);
  if (local_250.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
  }
  if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_610.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_600.SharedReferenceCount.ReferenceController);
  if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
  }
  if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_5a0,
                     L"FText::AsCurrency(1.25f, TEXT(\"USD\"), nullptr, FInternationalization::Get().GetCulture(TEXT(\"en\")))"
                    );
  ::FString::FString(&local_5b0,L"LOCGEN_CURRENCY(125, \"USD\", \"en\")");
  pFVar12 = FInternationalization::Get();
  ::FString::FString(&local_5c0,L"en");
  pTVar13 = FInternationalization::GetCulture(pFVar12,&local_230,&local_5c0);
  ::FString::FString(&local_5d0,L"USD");
  pFVar10 = FText::AsCurrency(&local_240,__real_3fa00000,&local_5d0,(FNumberFormattingOptions *)0x0,
                              pTVar13);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_5b0,&local_5a0,false);
  if (local_240.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
  }
  if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_230.SharedReferenceCount.ReferenceController);
  if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
  }
  if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
  }
  if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_560,
                     L"LOCGEN_DATE_UTC(1526342400, EDateTimeStyle::Short, \"\", \"en-GB\")");
  ::FString::FString(&local_570,
                     L"LOCGEN_DATE_UTC(1526342400, EDateTimeStyle::Short, \"\", \"en-GB\")");
  pFVar12 = FInternationalization::Get();
  ::FString::FString(&local_590,L"en-GB");
  pTVar13 = FInternationalization::GetCulture(pFVar12,&local_220,&local_590);
  local_980.Object = pTVar13->Object;
  local_980.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FCulture *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220.SharedReferenceCount.ReferenceController);
  if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_580,L"");
  pFVar14 = FDateTime::FDateTime(&local_3a0,0x7b2,1,1,0,0,0,0);
  local_a00.Ticks = pFVar14->Ticks + 0x363a00d5938000;
  pFVar10 = FText::AsDate(&local_210,&local_a00,Short,&local_580,&local_980);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_570,&local_560,true);
  if (local_210.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
  }
  if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_980.SharedReferenceCount.ReferenceController);
  if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data.AllocatorInstance.Data);
  }
  if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_530,L"LOCGEN_DATE_LOCAL(1526342400, EDateTimeStyle::Medium, \"\")");
  ::FString::FString(&local_540,L"LOCGEN_DATE_LOCAL(1526342400, EDateTimeStyle::Medium, \"\")");
  local_550.Object = (FCulture *)0x0;
  local_550.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar15 = FText::GetInvariantTimeZone(&local_1f0);
  pFVar14 = FDateTime::FDateTime(&local_398,0x7b2,1,1,0,0,0,0);
  local_9f8.Ticks = pFVar14->Ticks + 0x363a00d5938000;
  pFVar10 = FText::AsDate(&local_200,&local_9f8,Medium,pFVar15,&local_550);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_540,&local_530,true);
  if (local_200.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_550.SharedReferenceCount.ReferenceController);
  if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data.AllocatorInstance.Data);
  }
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_4f0,
                     L"LOCGEN_TIME_UTC(1526342400, EDateTimeStyle::Long, \"\", \"en-GB\")");
  ::FString::FString(&local_500,
                     L"LOCGEN_TIME_UTC(1526342400, EDateTimeStyle::Long, \"\", \"en-GB\")");
  pFVar12 = FInternationalization::Get();
  ::FString::FString(&local_520,L"en-GB");
  pTVar13 = FInternationalization::GetCulture(pFVar12,&local_1e0,&local_520);
  local_970.Object = pTVar13->Object;
  local_970.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FCulture *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.SharedReferenceCount.ReferenceController);
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_510,L"");
  pFVar14 = FDateTime::FDateTime(&local_390,0x7b2,1,1,0,0,0,0);
  local_9f0.Ticks = pFVar14->Ticks + 0x363a00d5938000;
  pFVar10 = FText::AsTime(&local_1d0,&local_9f0,Long,&local_510,&local_970);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_500,&local_4f0,true);
  if (local_1d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
  }
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_970.SharedReferenceCount.ReferenceController);
  if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data.AllocatorInstance.Data);
  }
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_4c0,L"LOCGEN_TIME_LOCAL(1526342400, EDateTimeStyle::Full, \"\")");
  ::FString::FString(&local_4d0,L"LOCGEN_TIME_LOCAL(1526342400, EDateTimeStyle::Full, \"\")");
  local_4e0.Object = (FCulture *)0x0;
  local_4e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar15 = FText::GetInvariantTimeZone(&local_a0);
  pFVar14 = FDateTime::FDateTime(&local_388,0x7b2,1,1,0,0,0,0);
  local_9e8.Ticks = pFVar14->Ticks + 0x363a00d5938000;
  pFVar10 = FText::AsTime(&local_1c0,&local_9e8,Full,pFVar15,&local_4e0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_4d0,&local_4c0,true);
  if (local_1c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e0.SharedReferenceCount.ReferenceController);
  if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
  }
  if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_480,
                     L"LOCGEN_DATETIME_UTC(1526342400, EDateTimeStyle::Short, EDateTimeStyle::Medium, \"\", \"en-GB\")"
                    );
  ::FString::FString(&local_490,
                     L"LOCGEN_DATETIME_UTC(1526342400, EDateTimeStyle::Short, EDateTimeStyle::Medium, \"\", \"en-GB\")"
                    );
  pFVar12 = FInternationalization::Get();
  ::FString::FString(&local_4b0,L"en-GB");
  pTVar13 = FInternationalization::GetCulture(pFVar12,&local_1a0,&local_4b0);
  local_9c0.Object = pTVar13->Object;
  local_9c0.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FCulture *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_4a0,L"");
  pFVar14 = FDateTime::FDateTime(&local_380,0x7b2,1,1,0,0,0,0);
  local_9e0.Ticks = pFVar14->Ticks + 0x363a00d5938000;
  pFVar10 = FText::AsDateTime(&local_190,&local_9e0,Short,Medium,&local_4a0,&local_9c0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_490,&local_480,true);
  if (local_190.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
  }
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9c0.SharedReferenceCount.ReferenceController);
  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.Data.AllocatorInstance.Data);
  }
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_450,
                     L"LOCGEN_DATETIME_LOCAL(1526342400, EDateTimeStyle::Long, EDateTimeStyle::Full, \"\")"
                    );
  ::FString::FString(&local_460,
                     L"LOCGEN_DATETIME_LOCAL(1526342400, EDateTimeStyle::Long, EDateTimeStyle::Full, \"\")"
                    );
  local_470.Object = (FCulture *)0x0;
  local_470.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar15 = FText::GetInvariantTimeZone(&local_170);
  pFVar14 = FDateTime::FDateTime(&local_378,0x7b2,1,1,0,0,0,0);
  local_9d8.Ticks = pFVar14->Ticks + 0x363a00d5938000;
  pFVar10 = FText::AsDateTime(&local_180,&local_9d8,Long,Full,pFVar15,&local_470);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_460,&local_450,true);
  if (local_180.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470.SharedReferenceCount.ReferenceController);
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_400,
                     L"LOCGEN_DATETIME_CUSTOM_UTC(1526342400, \"%A, %B %e, %Y\", \"\", \"en-GB\")");
  ::FString::FString(&local_410,
                     L"LOCGEN_DATETIME_CUSTOM_UTC(1526342400, \"%A, %B %e, %Y\", \"\", \"en-GB\")");
  pFVar12 = FInternationalization::Get();
  ::FString::FString(&local_440,L"en-GB");
  pTVar13 = FInternationalization::GetCulture(pFVar12,&local_160,&local_440);
  local_9b0.Object = pTVar13->Object;
  local_9b0.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FCulture *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.SharedReferenceCount.ReferenceController);
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_420,L"");
  ::FString::FString(&local_430,L"%A, %B %e, %Y");
  pFVar14 = FDateTime::FDateTime(&local_370,0x7b2,1,1,0,0,0,0);
  local_9d0.Ticks = pFVar14->Ticks + 0x363a00d5938000;
  pFVar10 = FText::AsDateTime(&local_150,&local_9d0,&local_430,&local_420,&local_9b0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_410,&local_400,true);
  if (local_150.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
  }
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b0.SharedReferenceCount.ReferenceController);
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_960,L"LOCGEN_DATETIME_CUSTOM_LOCAL(1526342400, \"%A, %B %e, %Y\", \"\")"
                    );
  ::FString::FString(&local_3d0,L"LOCGEN_DATETIME_CUSTOM_LOCAL(1526342400, \"%A, %B %e, %Y\", \"\")"
                    );
  local_3e0.Object = (FCulture *)0x0;
  local_3e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar15 = FText::GetInvariantTimeZone(&local_130);
  ::FString::FString(&local_3f0,L"%A, %B %e, %Y");
  pFVar14 = FDateTime::FDateTime(&local_2f8,0x7b2,1,1,0,0,0,0);
  local_9c8.Ticks = pFVar14->Ticks + 0x363a00d5938000;
  pFVar10 = FText::AsDateTime(&local_140,&local_9c8,&local_3f0,pFVar15,&local_3e0);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_3d0,&local_960,true);
  if (local_140.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
  }
  if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e0.SharedReferenceCount.ReferenceController);
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_960.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_940,
                     L"LOCGEN_TOUPPER(LOCTEXT(\"TextStringificationTest_Lorem\", \"Lorem\"))");
  ::FString::FString(&local_950,
                     L"LOCGEN_TOUPPER(NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Lorem\", \"Lorem\"))"
                    );
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_110,L"Core.Tests.TextFormatTest",L"TextStringificationTest_Lorem",
                       L"Lorem");
  pFVar10 = FText::ToUpper(pFVar10,&local_120);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_950,&local_940,true);
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_950.Data.AllocatorInstance.Data);
  }
  if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_920,
                     L"LOCGEN_TOLOWER(LOCTEXT(\"TextStringificationTest_Lorem\", \"Lorem\"))");
  ::FString::FString(&local_930,
                     L"LOCGEN_TOLOWER(NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Lorem\", \"Lorem\"))"
                    );
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_f0,L"Core.Tests.TextFormatTest",L"TextStringificationTest_Lorem",
                       L"Lorem");
  pFVar10 = FText::ToLower(pFVar10,&local_100);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,pFVar10,&local_930,&local_920,true);
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
  }
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  if (local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_930.Data.AllocatorInstance.Data);
  }
  if (local_920.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_920.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_8f0,
                     L"LOCGEN_FORMAT_ORDERED(LOCTEXT(\"TextStringificationTest_FmtO\", \"{0} weighs {1}kg\"), LOCTEXT(\"TextStringificationTest_Bear\", \"Bear\"), 227)"
                    );
  ::FString::FString(&local_900,
                     L"LOCGEN_FORMAT_ORDERED(NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_FmtO\", \"{0} weighs {1}kg\"), NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Bear\", \"Bear\"), 227)"
                    );
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_d0,L"Core.Tests.TextFormatTest",L"TextStringificationTest_Bear",
                       L"Bear");
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_e0,L"Core.Tests.TextFormatTest",L"TextStringificationTest_FmtO",
                       L"{0} weighs {1}kg");
  pFVar17 = FTextFormat::FTextFormat(&local_80,pFVar16,Default);
  local_a58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a58.ArrayNum = 0;
  local_a58.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,&local_a58.AllocatorInstance,0,&local_a58.ArrayMax);
  iVar6 = local_a58.ArrayNum;
  if (local_a58.ArrayNum == local_a58.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_a58.AllocatorInstance,&local_a58.ArrayMax);
  }
  FVar4.Data = local_a58.AllocatorInstance.Data;
  local_a58.ArrayNum = iVar6 + 1;
  lVar19 = (longlong)iVar6 * 0x20;
  *(undefined4 *)&local_a58.AllocatorInstance.Data[lVar19].field_0x0 = 4;
  FText::FText((FText *)(local_a58.AllocatorInstance.Data + lVar19 + 0x10),pFVar10);
  if (*(longlong *)&FVar4.Data[lVar19 + 0x10].field_0x0 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = local_a58.ArrayNum;
  if (local_a58.ArrayNum == local_a58.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_a58.AllocatorInstance,&local_a58.ArrayMax);
  }
  local_a58.ArrayNum = iVar6 + 1;
  lVar19 = (longlong)iVar6 * 0x20;
  *(undefined4 *)&local_a58.AllocatorInstance.Data[lVar19].field_0x0 = 0;
  *(undefined8 *)(local_a58.AllocatorInstance.Data + lVar19 + 0x10) = 0;
  *(undefined4 *)(local_a58.AllocatorInstance.Data + lVar19 + 0x18) = 0;
  *(undefined8 *)(local_a58.AllocatorInstance.Data + lVar19 + 8) = 0xe3;
  FText::FormatOrderedImpl(&local_910,pFVar17,&local_a58);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_a58.AllocatorInstance.Data,local_a58.ArrayNum);
  if ((FFormatArgumentValue *)local_a58.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_a58.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar17->TextFormatData).SharedReferenceCount.ReferenceController);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,&local_910,&local_900,&local_8f0,true);
  if (local_910.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_910.TextData.Reference + 0x10))();
  }
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.Data.AllocatorInstance.Data);
  }
  if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_8c0,
                     L"LOCGEN_FORMAT_NAMED(LOCTEXT(\"TextStringificationTest_FmtN\", \"{Animal} weighs {Weight}kg\"), TEXT(\"Animal\"), LOCTEXT(\"TextStringificationTest_Bear\", \"Bear\"), TEXT(\"Weight\"), 227)"
                    );
  ::FString::FString(&local_8d0,
                     L"LOCGEN_FORMAT_NAMED(NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_FmtN\", \"{Animal} weighs {Weight}kg\"), \"Animal\", NSLOCTEXT(\"Core.Tests.TextFormatTest\", \"TextStringificationTest_Bear\", \"Bear\"), \"Weight\", 227)"
                    );
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_b0,L"Core.Tests.TextFormatTest",L"TextStringificationTest_Bear",
                       L"Bear");
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_c0,L"Core.Tests.TextFormatTest",L"TextStringificationTest_FmtN",
                       L"{Animal} weighs {Weight}kg");
  pFVar17 = FTextFormat::FTextFormat(&local_90,pFVar16,Default);
  local_a48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a48.Pairs.ArrayNum = 0;
  local_a48.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_a48,0,&local_a48.Pairs.ArrayMax);
  pTVar18 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
            ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(&local_a48,(wchar_t (*) [7])L"Animal");
  ::FString::FString((FString *)pTVar18,L"Animal");
  *(undefined4 *)&pTVar18->field_0x10 = 4;
  FText::FText((FText *)&pTVar18->field_0x20,pFVar10);
  if (*(longlong *)&pTVar18->field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar18 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
            ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(&local_a48,(wchar_t (*) [7])L"Weight");
  ::FString::FString((FString *)pTVar18,L"Weight");
  *(undefined4 *)&pTVar18->field_0x10 = 0;
  *(undefined8 *)&pTVar18->field_0x20 = 0;
  *(undefined4 *)&pTVar18->field_0x28 = 0;
  *(undefined8 *)&pTVar18->field_0x18 = 0xe3;
  FText::FormatNamedImpl(&local_8e0,pFVar17,&local_a48);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_a48.Pairs.AllocatorInstance.Data,
             local_a48.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_a48.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_a48.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar17->TextFormatData).SharedReferenceCount.ReferenceController);
  `FTextStringificationTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,&local_8e0,&local_8d0,&local_8c0,true);
  if (local_8e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8e0.TextData.Reference + 0x10))();
  }
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
  }
  if (local_b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
  }
  if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
  }
  if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
  }
  FInternationalization::RestoreCultureState(this_00,&local_a30);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_a30.AssetGroups.AllocatorInstance.Data,
             local_a30.AssetGroups.ArrayNum);
  if ((TTuple<FName,FString> *)local_a30.AssetGroups.AllocatorInstance.Data !=
      (TTuple<FName,FString> *)0x0) {
    FMemory::Free(local_a30.AssetGroups.AllocatorInstance.Data);
  }
  if (local_a30.Locale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a30.Locale.Data.AllocatorInstance.Data);
  }
  if (local_a30.Language.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a30.Language.Data.AllocatorInstance.Data);
  }
  return;
}

