// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator() @ 141bedf50

void __thiscall
`FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,FText *param_2,FText *param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  FString local_28;
  
  bVar3 = FText::EqualTo(param_2,param_3,Default);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FText::ToString(param_3);
    FText::ToString(param_2);
    ::FString::PrintfImpl(&local_28,L"%s - A=%s B=%s");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DateTimeFormattingRulesTest @ 141bfc8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest
          (FDateTimeFormattingRulesTestClass *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FCulture *pFVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FInternationalization *this_00;
  FDateTime *pFVar7;
  FText *pFVar8;
  FString *pFVar9;
  FText *pFVar10;
  FAutomationTestFramework *pFVar11;
  FDateTimeFormattingRulesTestClass *local_res8;
  FDateTime local_res10;
  FDateTime local_res18;
  FDateTime local_res20;
  FDateTime local_1088;
  FDateTime local_1080;
  FDateTime local_1078;
  FDateTime local_1070;
  FDateTime local_1068;
  FDateTime local_1060;
  FString local_1058;
  FString local_1048;
  FString local_1038;
  FString local_1028;
  FString local_1018;
  FString local_1008;
  FString local_ff8;
  FString local_fe8;
  FString local_fd8;
  FString local_fc8;
  FCultureStateSnapshot local_fb8;
  FString local_f88;
  FString local_f78;
  TSharedPtr<FCulture,1> local_f68;
  TSharedPtr<FCulture,1> local_f58;
  TSharedPtr<FCulture,1> local_f48;
  TSharedPtr<FCulture,1> local_f38;
  TSharedPtr<FCulture,1> local_f28;
  FString local_f18;
  FString local_f08;
  FString local_ef8;
  FString local_ee8;
  TSharedPtr<FCulture,1> local_ed8;
  TSharedPtr<FCulture,1> local_ec8;
  TSharedPtr<FCulture,1> local_eb8;
  TSharedPtr<FCulture,1> local_ea8;
  TSharedPtr<FCulture,1> local_e98;
  TSharedPtr<FCulture,1> local_e88;
  TSharedPtr<FCulture,1> local_e78;
  TSharedPtr<FCulture,1> local_e68;
  TSharedPtr<FCulture,1> local_e58;
  TSharedPtr<FCulture,1> local_e48;
  TSharedPtr<FCulture,1> local_e38;
  TSharedPtr<FCulture,1> local_e28;
  TSharedPtr<FCulture,1> local_e18;
  TSharedPtr<FCulture,1> local_e08;
  TSharedPtr<FCulture,1> local_df8;
  TSharedPtr<FCulture,1> local_de8;
  TSharedPtr<FCulture,1> local_dd8;
  TSharedPtr<FCulture,1> local_dc8;
  TSharedPtr<FCulture,1> local_db8;
  TSharedPtr<FCulture,1> local_da8;
  TSharedPtr<FCulture,1> local_d98;
  TSharedPtr<FCulture,1> local_d88;
  TSharedPtr<FCulture,1> local_d78;
  TSharedPtr<FCulture,1> local_d68;
  TSharedPtr<FCulture,1> local_d58;
  TSharedPtr<FCulture,1> local_d48;
  FString local_d38;
  FString local_d28;
  TSharedPtr<FCulture,1> local_d18;
  TSharedPtr<FCulture,1> local_d08;
  TSharedPtr<FCulture,1> local_cf8;
  TSharedPtr<FCulture,1> local_ce8;
  TSharedPtr<FCulture,1> local_cd8;
  TSharedPtr<FCulture,1> local_cc8;
  TSharedPtr<FCulture,1> local_cb8;
  TSharedPtr<FCulture,1> local_ca8;
  TSharedPtr<FCulture,1> local_c98;
  TSharedPtr<FCulture,1> local_c88;
  TSharedPtr<FCulture,1> local_c78;
  TSharedPtr<FCulture,1> local_c68;
  TSharedPtr<FCulture,1> local_c58;
  TSharedPtr<FCulture,1> local_c48;
  TSharedPtr<FCulture,1> local_c38;
  TSharedPtr<FCulture,1> local_c28;
  FString local_c18;
  TSharedPtr<FCulture,1> local_c08;
  TSharedPtr<FCulture,1> local_bf8;
  TSharedPtr<FCulture,1> local_be8;
  TSharedPtr<FCulture,1> local_bd8;
  TSharedPtr<FCulture,1> local_bc8;
  TSharedPtr<FCulture,1> local_bb8;
  TSharedPtr<FCulture,1> local_ba8;
  TSharedPtr<FCulture,1> local_b98;
  TSharedPtr<FCulture,1> local_b88;
  FString local_b78;
  TSharedPtr<FCulture,1> local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FDateTime local_aa8;
  FDateTime local_aa0;
  FDateTime local_a98;
  FText local_a90;
  FString local_a80;
  FText local_a70;
  FText local_a60;
  FString local_a50;
  FText local_a40;
  FText local_a30;
  FString local_a20;
  FText local_a10;
  FText local_a00;
  FString local_9f0;
  FText local_9e0;
  FText local_9d0;
  FString local_9c0;
  FText local_9b0;
  FText local_9a0;
  FString local_990;
  FText local_980;
  FText local_970;
  FString local_960;
  FText local_950;
  FText local_940;
  FString local_930;
  FText local_920;
  FText local_910;
  FString local_900;
  FText local_8f0;
  FText local_8e0;
  FString local_8d0;
  FText local_8c0;
  FText local_8b0;
  FString local_8a0;
  FText local_890;
  FText local_880;
  FString local_870;
  FText local_860;
  FText local_850;
  FString local_840;
  FText local_830;
  FText local_820;
  FString local_810;
  FText local_800;
  FText local_7f0;
  FString local_7e0;
  FText local_7d0;
  FText local_7c0;
  FString local_7b0;
  FText local_7a0;
  FText local_790;
  FString local_780;
  FText local_770;
  FText local_760;
  FString local_750;
  FText local_740;
  FText local_730;
  FString local_720;
  FText local_710;
  FText local_700;
  FString local_6f0;
  FText local_6e0;
  FText local_6d0;
  FString local_6c0;
  FText local_6b0;
  FText local_6a0;
  FString local_690;
  FText local_680;
  FText local_670;
  FString local_660;
  FText local_650;
  FText local_640;
  FString local_630;
  FText local_620;
  FText local_610;
  FText local_600;
  FString local_5f0;
  FText local_5e0;
  FString local_5d0;
  FText local_5c0;
  FText local_5b0;
  FString local_5a0;
  FText local_590;
  FText local_580;
  FString local_570;
  FText local_560;
  FText local_550;
  FString local_540;
  FText local_530;
  FText local_520;
  FString local_510;
  FText local_500;
  FText local_4f0;
  FString local_4e0;
  FText local_4d0;
  FText local_4c0;
  FString local_4b0;
  FText local_4a0;
  FText local_490;
  FString local_480;
  FText local_470;
  FDateTime local_460;
  FString local_458;
  FText local_448;
  FText local_438;
  FString local_428;
  FText local_418;
  FText local_408;
  FString local_3f8;
  FText local_3e8;
  FText local_3d8;
  FString local_3c8;
  FText local_3b8;
  FText local_3a8;
  FString local_398;
  FText local_388;
  FText local_378;
  FString local_368;
  FText local_358;
  FText local_348;
  FString local_338;
  FText local_328;
  FText local_318;
  FString local_308;
  FText local_2f8;
  FText local_2e8;
  FString local_2d8;
  FText local_2c8;
  FText local_2b8;
  FString local_2a8;
  FText local_298;
  FText local_288;
  FString local_278;
  FText local_268;
  FText local_258;
  FString local_248;
  FText local_238;
  FText local_228;
  FString local_218;
  FText local_208;
  FText local_1f8;
  FString local_1e8;
  FText local_1d8;
  FText local_1c8;
  FString local_1b8;
  FText local_1a8;
  FText local_198;
  FString local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FText local_e8;
  FString local_d8;
  FText local_c8;
  FString local_b8;
  FText local_a8;
  FString local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  FText local_48;
  
  local_48.Flags = 0x41bfc8dd;
  local_48._12_4_ = 1;
  local_res8 = this;
  this_00 = FInternationalization::Get();
  local_fb8.Language.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_fb8.Language.Data.ArrayNum = 0;
  local_fb8.Language.Data.ArrayMax = 0;
  local_fb8.Locale.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_fb8.Locale.Data.ArrayNum = 0;
  local_fb8.Locale.Data.ArrayMax = 0;
  local_fb8.AssetGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_fb8.AssetGroups.ArrayNum = 0;
  local_fb8.AssetGroups.ArrayMax = 0;
  FInternationalization::BackupCultureState(this_00,&local_fb8);
  pFVar7 = FDateTime::FDateTime(&local_460,0x7b2,1,1,0,0,0,0);
  local_res18.Ticks = pFVar7->Ticks;
  pFVar7 = FDateTime::FDateTime(&local_aa8,0x7b2,1,1,0,0,0,0);
  local_res20.Ticks = pFVar7->Ticks + 10000000000000000;
  pFVar7 = FDateTime::FDateTime(&local_aa0,0x7b2,1,1,0,0,0,0);
  local_1088.Ticks = pFVar7->Ticks + 0x27797f26c57d80;
  pFVar7 = FDateTime::FDateTime(&local_a98,0x7b2,1,1,0,0,0,0);
  local_1080.Ticks = pFVar7->Ticks + 0x2bdc545d587500;
  FDateTime::FDateTime(&local_1078,1,1,1,0,0,0,0);
  FDateTime::FDateTime(&local_1070,0x7c6,6,0xd,0xc,0x22,0x38,0x315);
  FDateTime::Now();
  FDateTime::UtcNow();
  ::FString::FString(&local_ee8,"en-US");
  bVar5 = FInternationalization::SetCurrentCulture(this_00,&local_ee8);
  if (local_ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar8 = FText::FromString(&local_a70,L"1/1/70, 12:00 AM");
    local_ed8.Object = (FCulture *)0x0;
    local_ed8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_a80);
    pFVar10 = FText::AsDateTime(&local_a90,&local_res18,Short,Short,pFVar9,&local_ed8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Epoch",pFVar10,pFVar8);
    if (local_a90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a90.TextData.Reference + 0x10))();
    }
    if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a80.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ed8.SharedReferenceCount.ReferenceController);
    if (local_a70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a70.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_a40,L"Jan 1, 1970, 12:00:00 AM");
    local_ec8.Object = (FCulture *)0x0;
    local_ec8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_a50);
    pFVar10 = FText::AsDateTime(&local_a60,&local_res18,Medium,Medium,pFVar9,&local_ec8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Epoch",pFVar10,pFVar8);
    if (local_a60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a60.TextData.Reference + 0x10))();
    }
    if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a50.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ec8.SharedReferenceCount.ReferenceController);
    if (local_a40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a40.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_a10,L"January 1, 1970 at 12:00:00 AM GMT");
    local_eb8.Object = (FCulture *)0x0;
    local_eb8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_a20);
    pFVar10 = FText::AsDateTime(&local_a30,&local_res18,Long,Long,pFVar9,&local_eb8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Epoch",pFVar10,pFVar8);
    if (local_a30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a30.TextData.Reference + 0x10))();
    }
    if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a20.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_eb8.SharedReferenceCount.ReferenceController);
    if (local_a10.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a10.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_9e0,L"Thursday, January 1, 1970 at 12:00:00 AM GMT");
    local_ea8.Object = (FCulture *)0x0;
    local_ea8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_9f0);
    pFVar10 = FText::AsDateTime(&local_a00,&local_res18,Full,Full,pFVar9,&local_ea8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Epoch",pFVar10,pFVar8);
    if (local_a00.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a00.TextData.Reference + 0x10))();
    }
    if (local_9f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ea8.SharedReferenceCount.ReferenceController);
    if (local_9e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_9e0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_9b0,L"9/9/01, 1:46 AM");
    local_e98.Object = (FCulture *)0x0;
    local_e98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_9c0);
    pFVar10 = FText::AsDateTime(&local_9d0,&local_res20,Short,Short,pFVar9,&local_e98);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Billennium",pFVar10,pFVar8);
    if (local_9d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_9d0.TextData.Reference + 0x10))();
    }
    if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e98.SharedReferenceCount.ReferenceController);
    if (local_9b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_9b0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_980,L"Sep 9, 2001, 1:46:40 AM");
    local_e88.Object = (FCulture *)0x0;
    local_e88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_990);
    pFVar10 = FText::AsDateTime(&local_9a0,&local_res20,Medium,Medium,pFVar9,&local_e88);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Billennium",pFVar10,pFVar8);
    if (local_9a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_9a0.TextData.Reference + 0x10))();
    }
    if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_990.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e88.SharedReferenceCount.ReferenceController);
    if (local_980.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_980.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_950,L"September 9, 2001 at 1:46:40 AM GMT");
    local_e78.Object = (FCulture *)0x0;
    local_e78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_960);
    pFVar10 = FText::AsDateTime(&local_970,&local_res20,Long,Long,pFVar9,&local_e78);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Billennium",pFVar10,pFVar8);
    if (local_970.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_970.TextData.Reference + 0x10))();
    }
    if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_960.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e78.SharedReferenceCount.ReferenceController);
    if (local_950.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_950.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_920,L"Sunday, September 9, 2001 at 1:46:40 AM GMT");
    local_e68.Object = (FCulture *)0x0;
    local_e68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_930);
    pFVar10 = FText::AsDateTime(&local_940,&local_res20,Full,Full,pFVar9,&local_e68);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Billennium",pFVar10,pFVar8);
    if (local_940.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_940.TextData.Reference + 0x10))();
    }
    if (local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_930.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e68.SharedReferenceCount.ReferenceController);
    if (local_920.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_920.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_8f0,L"3/18/05, 1:58 AM");
    local_e58.Object = (FCulture *)0x0;
    local_e58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_900);
    pFVar10 = FText::AsDateTime(&local_910,&local_1088,Short,Short,pFVar9,&local_e58);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Ones",pFVar10,pFVar8);
    if (local_910.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_910.TextData.Reference + 0x10))();
    }
    if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_900.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e58.SharedReferenceCount.ReferenceController);
    if (local_8f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8f0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_8c0,L"Mar 18, 2005, 1:58:31 AM");
    local_e48.Object = (FCulture *)0x0;
    local_e48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_8d0);
    pFVar10 = FText::AsDateTime(&local_8e0,&local_1088,Medium,Medium,pFVar9,&local_e48);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Ones",pFVar10,pFVar8);
    if (local_8e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8e0.TextData.Reference + 0x10))();
    }
    if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e48.SharedReferenceCount.ReferenceController);
    if (local_8c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8c0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_890,L"March 18, 2005 at 1:58:31 AM GMT");
    local_e38.Object = (FCulture *)0x0;
    local_e38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_8a0);
    pFVar10 = FText::AsDateTime(&local_8b0,&local_1088,Long,Long,pFVar9,&local_e38);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Ones",pFVar10,pFVar8);
    if (local_8b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8b0.TextData.Reference + 0x10))();
    }
    if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e38.SharedReferenceCount.ReferenceController);
    if (local_890.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_890.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_860,L"Friday, March 18, 2005 at 1:58:31 AM GMT");
    local_e28.Object = (FCulture *)0x0;
    local_e28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_870);
    pFVar10 = FText::AsDateTime(&local_880,&local_1088,Full,Full,pFVar9,&local_e28);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Ones",pFVar10,pFVar8);
    if (local_880.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_880.TextData.Reference + 0x10))();
    }
    if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_870.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e28.SharedReferenceCount.ReferenceController);
    if (local_860.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_860.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_830,L"2/13/09, 11:31 PM");
    local_e18.Object = (FCulture *)0x0;
    local_e18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_840);
    pFVar10 = FText::AsDateTime(&local_850,&local_1080,Short,Short,pFVar9,&local_e18);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Decimal Sequence",pFVar10,pFVar8);
    if (local_850.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_850.TextData.Reference + 0x10))();
    }
    if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_840.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e18.SharedReferenceCount.ReferenceController);
    if (local_830.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_830.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_800,L"Feb 13, 2009, 11:31:30 PM");
    local_e08.Object = (FCulture *)0x0;
    local_e08.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_810);
    pFVar10 = FText::AsDateTime(&local_820,&local_1080,Medium,Medium,pFVar9,&local_e08);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Decimal Sequence",pFVar10,pFVar8);
    if (local_820.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_820.TextData.Reference + 0x10))();
    }
    if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_810.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e08.SharedReferenceCount.ReferenceController);
    if (local_800.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_800.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_7d0,L"February 13, 2009 at 11:31:30 PM GMT");
    local_df8.Object = (FCulture *)0x0;
    local_df8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_7e0);
    pFVar10 = FText::AsDateTime(&local_7f0,&local_1080,Long,Long,pFVar9,&local_df8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Decimal Sequence",pFVar10,pFVar8);
    if (local_7f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7f0.TextData.Reference + 0x10))();
    }
    if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_df8.SharedReferenceCount.ReferenceController);
    if (local_7d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7d0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_7a0,L"Friday, February 13, 2009 at 11:31:30 PM GMT");
    local_de8.Object = (FCulture *)0x0;
    local_de8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_7b0);
    pFVar10 = FText::AsDateTime(&local_7c0,&local_1080,Full,Full,pFVar9,&local_de8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Decimal Sequence",pFVar10,pFVar8);
    if (local_7c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7c0.TextData.Reference + 0x10))();
    }
    if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_de8.SharedReferenceCount.ReferenceController);
    if (local_7a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7a0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_770,L"1/1/01, 12:00 AM");
    local_dd8.Object = (FCulture *)0x0;
    local_dd8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_780);
    pFVar10 = FText::AsDateTime(&local_790,&local_1078,Short,Short,pFVar9,&local_dd8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Year One",pFVar10,pFVar8);
    if (local_790.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_790.TextData.Reference + 0x10))();
    }
    if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_780.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_dd8.SharedReferenceCount.ReferenceController);
    if (local_770.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_770.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_740,L"Jan 1, 1, 12:00:00 AM");
    local_dc8.Object = (FCulture *)0x0;
    local_dc8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_750);
    pFVar10 = FText::AsDateTime(&local_760,&local_1078,Medium,Medium,pFVar9,&local_dc8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Year One",pFVar10,pFVar8);
    if (local_760.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_760.TextData.Reference + 0x10))();
    }
    if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_750.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_dc8.SharedReferenceCount.ReferenceController);
    if (local_740.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_740.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_710,L"January 1, 1 at 12:00:00 AM GMT");
    local_db8.Object = (FCulture *)0x0;
    local_db8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_720);
    pFVar10 = FText::AsDateTime(&local_730,&local_1078,Long,Long,pFVar9,&local_db8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Year One",pFVar10,pFVar8);
    if (local_730.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_730.TextData.Reference + 0x10))();
    }
    if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_720.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_db8.SharedReferenceCount.ReferenceController);
    if (local_710.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_710.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_6e0,L"Saturday, January 1, 1 at 12:00:00 AM GMT");
    local_da8.Object = (FCulture *)0x0;
    local_da8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_6f0);
    pFVar10 = FText::AsDateTime(&local_700,&local_1078,Full,Full,pFVar9,&local_da8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Year One",pFVar10,pFVar8);
    if (local_700.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_700.TextData.Reference + 0x10))();
    }
    if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_da8.SharedReferenceCount.ReferenceController);
    if (local_6e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6e0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_6b0,L"6/13/90, 12:34 PM");
    local_d98.Object = (FCulture *)0x0;
    local_d98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_6c0);
    pFVar10 = FText::AsDateTime(&local_6d0,&local_1070,Short,Short,pFVar9,&local_d98);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Date-Time",pFVar10,pFVar8);
    if (local_6d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6d0.TextData.Reference + 0x10))();
    }
    if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d98.SharedReferenceCount.ReferenceController);
    if (local_6b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6b0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_680,L"Jun 13, 1990, 12:34:56 PM");
    local_d88.Object = (FCulture *)0x0;
    local_d88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_690);
    pFVar10 = FText::AsDateTime(&local_6a0,&local_1070,Medium,Medium,pFVar9,&local_d88);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Date-Time",pFVar10,pFVar8);
    if (local_6a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6a0.TextData.Reference + 0x10))();
    }
    if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_690.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d88.SharedReferenceCount.ReferenceController);
    if (local_680.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_680.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_650,L"June 13, 1990 at 12:34:56 PM GMT");
    local_d78.Object = (FCulture *)0x0;
    local_d78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_660);
    pFVar10 = FText::AsDateTime(&local_670,&local_1070,Long,Long,pFVar9,&local_d78);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Date-Time",pFVar10,pFVar8);
    if (local_670.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_670.TextData.Reference + 0x10))();
    }
    if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_660.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d78.SharedReferenceCount.ReferenceController);
    if (local_650.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_650.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_620,L"Wednesday, June 13, 1990 at 12:34:56 PM GMT");
    local_d68.Object = (FCulture *)0x0;
    local_d68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_630);
    pFVar10 = FText::AsDateTime(&local_640,&local_1070,Full,Full,pFVar9,&local_d68);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Date-Time",pFVar10,pFVar8);
    if (local_640.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_640.TextData.Reference + 0x10))();
    }
    if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_630.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d68.SharedReferenceCount.ReferenceController);
    if (local_620.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_620.TextData.Reference + 0x10))();
    }
    local_d48.Object = (FCulture *)0x0;
    local_d48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_5f0);
    pFVar8 = FText::AsDateTime(&local_600,&local_1068,Short,Short,pFVar9,&local_d48);
    local_f88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f88.Data.ArrayNum = 0;
    local_f88.Data.ArrayMax = 0;
    local_d58.Object = (FCulture *)0x0;
    local_d58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = FText::AsDateTime(&local_610,&local_1060,Short,Short,&local_f88,&local_d58);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Local Time",pFVar10,pFVar8);
    if (local_610.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_610.TextData.Reference + 0x10))();
    }
    if (local_f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f88.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d58.SharedReferenceCount.ReferenceController);
    if (local_600.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_600.TextData.Reference + 0x10))();
    }
    if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d48.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x48);
    ::FString::PrintfImpl
              (&local_d38,L"Internationalization data for %s missing - test is partially disabled.")
    ;
    (*pcVar4)(pFVar3,&local_d38,0);
    if (local_d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d38.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_d28,"ja-JP");
  bVar5 = FInternationalization::SetCurrentCulture(this_00,&local_d28);
  if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar8 = FText::FromString(&local_5c0,L"1970/01/01 0:00");
    local_d18.Object = (FCulture *)0x0;
    local_d18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_5d0);
    pFVar10 = FText::AsDateTime(&local_5e0,&local_res18,Short,Short,pFVar9,&local_d18);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Epoch",pFVar10,pFVar8);
    if (local_5e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5e0.TextData.Reference + 0x10))();
    }
    if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d18.SharedReferenceCount.ReferenceController);
    if (local_5c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5c0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_590,L"1970/01/01 0:00:00");
    local_d08.Object = (FCulture *)0x0;
    local_d08.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_5a0);
    pFVar10 = FText::AsDateTime(&local_5b0,&local_res18,Medium,Medium,pFVar9,&local_d08);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Epoch",pFVar10,pFVar8);
    if (local_5b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5b0.TextData.Reference + 0x10))();
    }
    if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d08.SharedReferenceCount.ReferenceController);
    if (local_590.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_590.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_560,L"1970年1月1日 0:00:00 GMT");
    local_cf8.Object = (FCulture *)0x0;
    local_cf8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_570);
    pFVar10 = FText::AsDateTime(&local_580,&local_res18,Long,Long,pFVar9,&local_cf8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Epoch",pFVar10,pFVar8);
    if (local_580.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_580.TextData.Reference + 0x10))();
    }
    if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cf8.SharedReferenceCount.ReferenceController);
    if (local_560.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_560.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_530,L"1970年1月1日木曜日 0時00分00秒 GMT");
    local_ce8.Object = (FCulture *)0x0;
    local_ce8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_540);
    pFVar10 = FText::AsDateTime(&local_550,&local_res18,Full,Full,pFVar9,&local_ce8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Epoch",pFVar10,pFVar8);
    if (local_550.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_550.TextData.Reference + 0x10))();
    }
    if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ce8.SharedReferenceCount.ReferenceController);
    if (local_530.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_530.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_500,L"2001/09/09 1:46");
    local_cd8.Object = (FCulture *)0x0;
    local_cd8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_510);
    pFVar10 = FText::AsDateTime(&local_520,&local_res20,Short,Short,pFVar9,&local_cd8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Billennium",pFVar10,pFVar8);
    if (local_520.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_520.TextData.Reference + 0x10))();
    }
    if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_510.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cd8.SharedReferenceCount.ReferenceController);
    if (local_500.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_500.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_4d0,L"2001/09/09 1:46:40");
    local_cc8.Object = (FCulture *)0x0;
    local_cc8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_4e0);
    pFVar10 = FText::AsDateTime(&local_4f0,&local_res20,Medium,Medium,pFVar9,&local_cc8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Billennium",pFVar10,pFVar8);
    if (local_4f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4f0.TextData.Reference + 0x10))();
    }
    if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cc8.SharedReferenceCount.ReferenceController);
    if (local_4d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4d0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_4a0,L"2001年9月9日 1:46:40 GMT");
    local_cb8.Object = (FCulture *)0x0;
    local_cb8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_4b0);
    pFVar10 = FText::AsDateTime(&local_4c0,&local_res20,Long,Long,pFVar9,&local_cb8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Billennium",pFVar10,pFVar8);
    if (local_4c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4c0.TextData.Reference + 0x10))();
    }
    if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cb8.SharedReferenceCount.ReferenceController);
    if (local_4a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4a0.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_470,L"2001年9月9日日曜日 1時46分40秒 GMT");
    local_ca8.Object = (FCulture *)0x0;
    local_ca8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_480);
    pFVar10 = FText::AsDateTime(&local_490,&local_res20,Full,Full,pFVar9,&local_ca8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Billennium",pFVar10,pFVar8);
    if (local_490.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_490.TextData.Reference + 0x10))();
    }
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ca8.SharedReferenceCount.ReferenceController);
    if (local_470.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_470.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_448,L"2005/03/18 1:58");
    local_c98.Object = (FCulture *)0x0;
    local_c98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_458);
    pFVar10 = FText::AsDateTime(&local_258,&local_1088,Short,Short,pFVar9,&local_c98);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Ones",pFVar10,pFVar8);
    if (local_258.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
    }
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c98.SharedReferenceCount.ReferenceController);
    if (local_448.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_418,L"2005/03/18 1:58:31");
    local_c88.Object = (FCulture *)0x0;
    local_c88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_428);
    pFVar10 = FText::AsDateTime(&local_438,&local_1088,Medium,Medium,pFVar9,&local_c88);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Ones",pFVar10,pFVar8);
    if (local_438.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
    }
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c88.SharedReferenceCount.ReferenceController);
    if (local_418.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_3e8,L"2005年3月18日 1:58:31 GMT");
    local_c78.Object = (FCulture *)0x0;
    local_c78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_3f8);
    pFVar10 = FText::AsDateTime(&local_408,&local_1088,Long,Long,pFVar9,&local_c78);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Ones",pFVar10,pFVar8);
    if (local_408.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
    }
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c78.SharedReferenceCount.ReferenceController);
    if (local_3e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_3b8,L"2005年3月18日金曜日 1時58分31秒 GMT");
    local_c68.Object = (FCulture *)0x0;
    local_c68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_3c8);
    pFVar10 = FText::AsDateTime(&local_3d8,&local_1088,Full,Full,pFVar9,&local_c68);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Ones",pFVar10,pFVar8);
    if (local_3d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
    }
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c68.SharedReferenceCount.ReferenceController);
    if (local_3b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_388,L"2009/02/13 23:31");
    local_c58.Object = (FCulture *)0x0;
    local_c58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_398);
    pFVar10 = FText::AsDateTime(&local_3a8,&local_1080,Short,Short,pFVar9,&local_c58);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Decimal Sequence",pFVar10,pFVar8);
    if (local_3a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c58.SharedReferenceCount.ReferenceController);
    if (local_388.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_358,L"2009/02/13 23:31:30");
    local_c48.Object = (FCulture *)0x0;
    local_c48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_368);
    pFVar10 = FText::AsDateTime(&local_378,&local_1080,Medium,Medium,pFVar9,&local_c48);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Decimal Sequence",pFVar10,pFVar8);
    if (local_378.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c48.SharedReferenceCount.ReferenceController);
    if (local_358.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_328,L"2009年2月13日 23:31:30 GMT");
    local_c38.Object = (FCulture *)0x0;
    local_c38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_338);
    pFVar10 = FText::AsDateTime(&local_348,&local_1080,Long,Long,pFVar9,&local_c38);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Decimal Sequence",pFVar10,pFVar8);
    if (local_348.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
    }
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c38.SharedReferenceCount.ReferenceController);
    if (local_328.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_2f8,L"2009年2月13日金曜日 23時31分30秒 GMT");
    local_c28.Object = (FCulture *)0x0;
    local_c28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_308);
    pFVar10 = FText::AsDateTime(&local_318,&local_1080,Full,Full,pFVar9,&local_c28);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Unix Decimal Sequence",pFVar10,pFVar8);
    if (local_318.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c28.SharedReferenceCount.ReferenceController);
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_2c8,L"1/01/01 0:00");
    local_b68.Object = (FCulture *)0x0;
    local_b68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_2d8);
    pFVar10 = FText::AsDateTime(&local_2e8,&local_1078,Short,Short,pFVar9,&local_b68);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Year One",pFVar10,pFVar8);
    if (local_2e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
    }
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b68.SharedReferenceCount.ReferenceController);
    if (local_2c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_298,L"1/01/01 0:00:00");
    local_c08.Object = (FCulture *)0x0;
    local_c08.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_2a8);
    pFVar10 = FText::AsDateTime(&local_2b8,&local_1078,Medium,Medium,pFVar9,&local_c08);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Year One",pFVar10,pFVar8);
    if (local_2b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
    }
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c08.SharedReferenceCount.ReferenceController);
    if (local_298.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_268,L"1年1月1日 0:00:00 GMT");
    local_bf8.Object = (FCulture *)0x0;
    local_bf8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_278);
    pFVar10 = FText::AsDateTime(&local_288,&local_1078,Long,Long,pFVar9,&local_bf8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Year One",pFVar10,pFVar8);
    if (local_288.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bf8.SharedReferenceCount.ReferenceController);
    if (local_268.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_238,L"1年1月1日土曜日 0時00分00秒 GMT");
    local_be8.Object = (FCulture *)0x0;
    local_be8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_248);
    pFVar10 = FText::AsDateTime(&local_48,&local_1078,Full,Full,pFVar9,&local_be8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Year One",pFVar10,pFVar8);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_be8.SharedReferenceCount.ReferenceController);
    if (local_238.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_208,L"1990/06/13 12:34");
    local_bd8.Object = (FCulture *)0x0;
    local_bd8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_218);
    pFVar10 = FText::AsDateTime(&local_228,&local_1070,Short,Short,pFVar9,&local_bd8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Date-Time",pFVar10,pFVar8);
    if (local_228.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bd8.SharedReferenceCount.ReferenceController);
    if (local_208.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_1d8,L"1990/06/13 12:34:56");
    local_bc8.Object = (FCulture *)0x0;
    local_bc8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_1e8);
    pFVar10 = FText::AsDateTime(&local_1f8,&local_1070,Medium,Medium,pFVar9,&local_bc8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Date-Time",pFVar10,pFVar8);
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bc8.SharedReferenceCount.ReferenceController);
    if (local_1d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_1a8,L"1990年6月13日 12:34:56 GMT");
    local_bb8.Object = (FCulture *)0x0;
    local_bb8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_1b8);
    pFVar10 = FText::AsDateTime(&local_1c8,&local_1070,Long,Long,pFVar9,&local_bb8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Date-Time",pFVar10,pFVar8);
    if (local_1c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bb8.SharedReferenceCount.ReferenceController);
    if (local_1a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_178,L"1990年6月13日水曜日 12時34分56秒 GMT");
    local_ba8.Object = (FCulture *)0x0;
    local_ba8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_188);
    pFVar10 = FText::AsDateTime(&local_198,&local_1070,Full,Full,pFVar9,&local_ba8);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Date-Time",pFVar10,pFVar8);
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ba8.SharedReferenceCount.ReferenceController);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    local_b88.Object = (FCulture *)0x0;
    local_b88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = FText::GetInvariantTimeZone(&local_148);
    pFVar8 = FText::AsDateTime(&local_158,&local_1068,Short,Short,pFVar9,&local_b88);
    local_f78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f78.Data.ArrayNum = 0;
    local_f78.Data.ArrayMax = 0;
    local_b98.Object = (FCulture *)0x0;
    local_b98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = FText::AsDateTime(&local_168,&local_1060,Short,Short,&local_f78,&local_b98);
    `FDateTimeFormattingRulesTestClass::DateTimeFormattingRulesTest'::__l2::<lambda_1>::operator()
              (&local_res8,L"Testing Local Time",pFVar10,pFVar8);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    if (local_f78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f78.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b98.SharedReferenceCount.ReferenceController);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b88.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x48);
    ::FString::PrintfImpl
              (&local_b78,L"Internationalization data for %s missing - test is partially disabled.")
    ;
    (*pcVar4)(pFVar3,&local_b78,0);
    if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b78.Data.AllocatorInstance.Data);
    }
  }
  FInternationalization::RestoreCultureState(this_00,&local_fb8);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_fb8.AssetGroups.AllocatorInstance.Data,
             local_fb8.AssetGroups.ArrayNum);
  if ((TTuple<FName,FString> *)local_fb8.AssetGroups.AllocatorInstance.Data !=
      (TTuple<FName,FString> *)0x0) {
    FMemory::Free(local_fb8.AssetGroups.AllocatorInstance.Data);
  }
  if (local_fb8.Locale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fb8.Locale.Data.AllocatorInstance.Data);
  }
  if (local_fb8.Language.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fb8.Language.Data.AllocatorInstance.Data);
  }
  if (((this_00->InvariantCulture).Object == (FCulture *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = (this_00->InvariantCulture).SharedReferenceCount.ReferenceController;
  pFVar2 = (this_00->InvariantCulture).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FCulture *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FDateTime::FDateTime(&local_res10,0x7c7,6,0x15,9,0x1e,0,0);
  ::FString::FString(&local_1058,L"06/21/1991");
  pFVar9 = FDateTime::ToFormattedString(&local_res10,&local_138,L"%m/%d/%Y");
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_1058.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_1058.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff063;
    }
  }
  else {
    bVar5 = local_1058.Data.ArrayNum + iVar6 == 1;
LAB_141bff063:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_ab8,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_ab8,0);
      if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_1058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1058.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1048,L"Friday, June 21, 1991");
  pFVar9 = FDateTime::ToFormattedString(&local_res10,&local_128,L"%A, %B %e, %Y");
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_1048.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_1048.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff14f;
    }
  }
  else {
    bVar5 = local_1048.Data.ArrayNum + iVar6 == 1;
LAB_141bff14f:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_b58,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_b58,0);
      if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b58.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_1048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1048.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1038,L"Fri, Jun 21");
  pFVar9 = FDateTime::ToFormattedString(&local_res10,&local_118,L"%a, %b %e");
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_1038.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_1038.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff238;
    }
  }
  else {
    bVar5 = local_1038.Data.ArrayNum + iVar6 == 1;
LAB_141bff238:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_b48,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_b48,0);
      if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b48.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_1038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1038.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1028,L"09:30");
  pFVar9 = FDateTime::ToFormattedString(&local_res10,&local_108,L"%H:%M");
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_1028.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_1028.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff321;
    }
  }
  else {
    bVar5 = local_1028.Data.ArrayNum + iVar6 == 1;
LAB_141bff321:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_b38,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_b38,0);
      if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b38.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_1028.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1028.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1018,L"9:30 AM");
  pFVar9 = FDateTime::ToFormattedString(&local_res10,&local_f8,L"%l:%M %p");
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_1018.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_1018.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff40a;
    }
  }
  else {
    bVar5 = local_1018.Data.ArrayNum + iVar6 == 1;
LAB_141bff40a:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_b28,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_b28,0);
      if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_1018.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1018.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1008,L"06/21/1991");
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f28.Object = pFVar2;
  local_f28.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar9 = FText::GetInvariantTimeZone(&local_d8);
  ::FString::FString(&local_b08,L"%m/%d/%Y");
  pFVar8 = FText::AsDateTime(&local_e8,&local_res10,&local_b08,pFVar9,&local_f28);
  pFVar9 = FText::ToString(pFVar8);
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_1008.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_1008.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff543;
    }
  }
  else {
    bVar5 = local_1008.Data.ArrayNum + iVar6 == 1;
LAB_141bff543:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_b18,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_b18,0);
      if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b18.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b08.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f28.SharedReferenceCount.ReferenceController);
  if (local_1008.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1008.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ff8,L"Friday, June 21, 1991");
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f68.Object = pFVar2;
  local_f68.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar9 = FText::GetInvariantTimeZone(&local_b8);
  ::FString::FString(&local_ae8,L"%A, %B %e, %Y");
  pFVar8 = FText::AsDateTime(&local_c8,&local_res10,&local_ae8,pFVar9,&local_f68);
  pFVar9 = FText::ToString(pFVar8);
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_ff8.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_ff8.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff6a2;
    }
  }
  else {
    bVar5 = local_ff8.Data.ArrayNum + iVar6 == 1;
LAB_141bff6a2:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_af8,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_af8,0);
      if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_af8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f68.SharedReferenceCount.ReferenceController);
  if (local_ff8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ff8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_fe8,L"Fri, Jun 21");
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f58.Object = pFVar2;
  local_f58.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar9 = FText::GetInvariantTimeZone(&local_98);
  ::FString::FString(&local_ac8,L"%a, %b %e");
  pFVar8 = FText::AsDateTime(&local_a8,&local_res10,&local_ac8,pFVar9,&local_f58);
  pFVar9 = FText::ToString(pFVar8);
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_fe8.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_fe8.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff7fe;
    }
  }
  else {
    bVar5 = local_fe8.Data.ArrayNum + iVar6 == 1;
LAB_141bff7fe:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_ad8,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_ad8,0);
      if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f58.SharedReferenceCount.ReferenceController);
  if (local_fe8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fe8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_fd8,L"09:30");
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f48.Object = pFVar2;
  local_f48.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar9 = FText::GetInvariantTimeZone(&local_78);
  ::FString::FString(&local_f18,L"%H:%M");
  pFVar8 = FText::AsDateTime(&local_88,&local_res10,&local_f18,pFVar9,&local_f48);
  pFVar9 = FText::ToString(pFVar8);
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_fd8.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                     (wchar_t *)local_fd8.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_141bff963;
    }
  }
  else {
    bVar5 = local_fd8.Data.ArrayNum + iVar6 == 1;
LAB_141bff963:
    if (!bVar5) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar3 = pFVar11->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_c18,L"%s - A=%s B=%s");
      (*pcVar4)(pFVar3,&local_c18,0);
      if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c18.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_f18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f18.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f48.SharedReferenceCount.ReferenceController);
  if (local_fd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fd8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_fc8,L"9:30 AM");
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f38.Object = pFVar2;
  local_f38.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar9 = FText::GetInvariantTimeZone(&local_58);
  ::FString::FString(&local_ef8,L"%l:%M %p");
  pFVar8 = FText::AsDateTime(&local_68,&local_res10,&local_ef8,pFVar9,&local_f38);
  pFVar9 = FText::ToString(pFVar8);
  iVar6 = (pFVar9->Data).ArrayNum;
  if (iVar6 == local_fc8.Data.ArrayNum) {
    if (iVar6 < 2) goto LAB_141bffb3d;
    iVar6 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                   (wchar_t *)local_fc8.Data.AllocatorInstance.Data);
    bVar5 = iVar6 == 0;
  }
  else {
    bVar5 = local_fc8.Data.ArrayNum + iVar6 == 1;
  }
  if (!bVar5) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar3 = pFVar11->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f08,L"%s - A=%s B=%s");
    (*pcVar4)(pFVar3,&local_f08,0);
    if (local_f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f08.Data.AllocatorInstance.Data);
    }
  }
LAB_141bffb3d:
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f38.SharedReferenceCount.ReferenceController);
  if (local_fc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fc8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

