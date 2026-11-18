// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 13

// FAudioSpectrumPlotGridAndLabelDrawingHelper @ 14d8b3f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FAudioSpectrumPlotGridAndLabelDrawingHelper * __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::FAudioSpectrumPlotGridAndLabelDrawingHelper
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,FGeometry *param_1,
          FSlateWindowElementList *param_2,FAudioSpectrumPlotScaleInfo *param_3)

{
  int iVar1;
  FDeprecateSlateVector2D FVar2;
  FSlateApplication *this_00;
  FDeprecateVector2DParameter local_30;
  FDeprecateVector2DParameter local_28;
  FSlateRect *local_20;
  FSlateRenderer *local_18;
  
  this->AllottedGeometry = param_1;
  this->ElementList = param_2;
  this->ScaleInfo = param_3;
  local_20 = &this->LocalBackgroundRect;
  FVar2 = FGeometry::GetLocalSize(param_1);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_30,(FDeprecateSlateVector2D *)FVar2);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_28,&UE::Math::TVector2<float>::ZeroVector);
  FSlateRect::FSlateRect(local_20,&local_28,&local_30);
  this_00 = FSlateApplication::Get();
  local_18 = FSlateApplicationBase::GetRenderer((FSlateApplicationBase *)this_00);
  FSlateRenderer::GetFontMeasureService(local_18,&this->FontMeasureService);
  (this->SpaceDrawSize).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->DrawnLabelRects).AllocatorInstance);
  (this->DrawnLabelRects).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->DrawnLabelRects).AllocatorInstance);
  (this->DrawnLabelRects).ArrayMax = iVar1;
  return this;
}

// operator() @ 14d8c6c00

bool __thiscall
`FAudioSpectrumPlotGridAndLabelDrawingHelper::IsOverlappingPreviouslyDrawnLabel'::__l2::<lambda_1>::
operator()(void *this,FSlateRect *param_1)

{
  bool local_18;
  
  if ((((param_1->Bottom < *(float *)(*(longlong *)this + 4) ||
         param_1->Bottom == *(float *)(*(longlong *)this + 4)) ||
       (*(float *)(*(longlong *)this + 0xc) <= param_1->Top)) ||
      (param_1->Right < **(float **)this || param_1->Right == **(float **)this)) ||
     (*(float *)(*(longlong *)this + 8) <= param_1->Left)) {
    local_18 = false;
  }
  else {
    local_18 = true;
  }
  return local_18;
}

// DrawCrosshairWithLabels @ 14d913c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d916240) */
/* WARNING: Removing unreachable block (ram,0x00014d91504c) */
/* WARNING: Removing unreachable block (ram,0x00014d916b3d) */
/* WARNING: Removing unreachable block (ram,0x00014d914039) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffd50 : 0x00014d9161ca */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawCrosshairWithLabels
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,int param_1,float param_2,float param_3
          ,FSlateFontInfo *param_4,FLinearColor *param_5,FLinearColor *param_6)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  TStringView<wchar_t> *pTVar4;
  FDeprecateSlateVector2D FVar5;
  FString *pFVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  float fVar10;
  undefined1 auStackY_ef8 [32];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_ea8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_e98;
  float local_e88;
  float local_e84;
  char local_e80;
  char local_e7f;
  char local_e7e;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_e78;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_e68;
  char local_e58;
  bool local_e57;
  bool local_e56;
  bool local_e55;
  bool local_e54;
  float local_e50;
  FFreqFormattingOptions local_e4c [2];
  float local_e48;
  float local_e44;
  float local_e40;
  float local_e3c;
  TVector2<float>_u_0 local_e38;
  float local_e30;
  float local_e2c;
  float local_e28;
  float local_e24;
  TVector2<float>_u_0 local_e20;
  float local_e18;
  float local_e10;
  float local_e08;
  float local_e00;
  float local_df8;
  float local_df0;
  float local_de8;
  float local_de4;
  float local_de0;
  int local_dd8;
  int local_dd4;
  float local_dd0;
  int local_dcc;
  int local_dc8;
  float local_dc0;
  float local_db8;
  float local_db0;
  float local_da8;
  float local_da0;
  float local_d98;
  float local_d94;
  float local_d90;
  int local_d8c;
  int local_d88;
  float local_d84;
  float local_d80;
  int local_d7c;
  int local_d78;
  int local_d74;
  float local_d70;
  int local_d6c;
  int local_d68;
  float local_d60;
  float local_d58;
  int local_d54;
  float local_d50;
  float local_d48;
  float local_d40;
  FGeometry *local_d38;
  FGeometry *local_d30;
  FGeometry *local_d28;
  FGeometry *local_d20;
  float local_d18;
  float local_d10;
  int local_d08;
  int local_d04;
  float local_d00;
  float local_cfc;
  float local_cf8;
  float local_cf4;
  float local_cf0;
  float local_cec;
  float local_ce8;
  float local_ce0;
  float local_cd8;
  int local_cd0;
  int local_ccc;
  float local_cc8;
  int local_cc4;
  int local_cc0;
  int local_cbc;
  int local_cb8;
  float *local_cb0;
  FScriptContainerElement *local_ca8;
  float local_ca0;
  float fStack_c9c;
  FScriptContainerElement *local_c98;
  float local_c90;
  float fStack_c8c;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_c88;
  float *local_c80;
  float *local_c78;
  FScriptContainerElement *local_c70;
  float local_c68;
  float fStack_c64;
  FScriptContainerElement *local_c60;
  float local_c58;
  float fStack_c54;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_c50;
  float local_c48;
  float local_c44;
  float local_c40;
  float local_c3c;
  float local_c38;
  float local_c34;
  FScriptContainerElement *local_c30;
  float local_c28;
  float fStack_c24;
  FScriptContainerElement *local_c20;
  float local_c18;
  float fStack_c14;
  FScriptContainerElement *local_c10;
  float local_c08;
  float fStack_c04;
  FScriptContainerElement *local_c00;
  float local_bf8;
  float fStack_bf4;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_bf0;
  FNameEntryId *local_be8;
  FNameEntryId *local_be0;
  FScriptContainerElement *local_bd8;
  float local_bd0;
  float fStack_bcc;
  FScriptContainerElement *local_bc8;
  float local_bc0;
  float fStack_bbc;
  FScriptContainerElement *local_bb8;
  float local_bb0;
  float fStack_bac;
  FScriptContainerElement *local_ba8;
  float local_ba0;
  float fStack_b9c;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_b98;
  undefined1 *local_b90;
  float local_b88;
  float local_b84;
  float local_b80;
  float local_b7c;
  FString local_b78;
  FSoundLevelFormattingOptions local_b68;
  FString local_b60;
  int local_b50;
  int local_b4c;
  int local_b48;
  int local_b44;
  int local_b40;
  int local_b3c;
  int local_b38;
  int local_b34;
  TStringView<wchar_t> *local_b30;
  FSlateFontMeasure *local_b28;
  FAudioSpectrumPlotScaleInfo *local_b20;
  FAudioSpectrumPlotScaleInfo *local_b18;
  TStringView<wchar_t> *local_b10;
  FSlateFontMeasure *local_b08;
  FString *local_b00;
  FString *local_af8;
  FScriptContainerElement *local_af0;
  FScriptContainerElement *local_ae8;
  FScriptContainerElement *local_ae0;
  FScriptContainerElement *local_ad8;
  FScriptContainerElement *local_ad0;
  FScriptContainerElement *local_ac8;
  undefined4 local_ac0;
  undefined4 local_abc;
  FScriptContainerElement *local_ab8;
  FScriptContainerElement *local_ab0;
  FScriptContainerElement *local_aa8;
  longlong local_aa0;
  longlong local_a98;
  FScriptContainerElement *local_a90;
  FScriptContainerElement *local_a88;
  FScriptContainerElement *local_a80;
  undefined8 *local_a78;
  FScriptContainerElement *local_a70;
  FScriptContainerElement *local_a68;
  FScriptContainerElement *local_a60;
  FScriptContainerElement *local_a58;
  FScriptContainerElement *local_a50;
  FScriptContainerElement *local_a48;
  undefined4 local_a40;
  undefined4 local_a3c;
  FScriptContainerElement *local_a38;
  FScriptContainerElement *local_a30;
  FScriptContainerElement *local_a28;
  longlong local_a20;
  longlong local_a18;
  FScriptContainerElement *local_a10;
  FScriptContainerElement *local_a08;
  FScriptContainerElement *local_a00;
  undefined8 *local_9f8;
  FString *local_9f0;
  FScriptContainerElement *local_9e8;
  FScriptContainerElement *local_9e0;
  FScriptContainerElement *local_9d8;
  FScriptContainerElement *local_9d0;
  FScriptContainerElement *local_9c8;
  FScriptContainerElement *local_9c0;
  undefined4 local_9b8;
  undefined4 local_9b4;
  FScriptContainerElement *local_9b0;
  FScriptContainerElement *local_9a8;
  FScriptContainerElement *local_9a0;
  longlong local_998;
  longlong local_990;
  FScriptContainerElement *local_988;
  FScriptContainerElement *local_980;
  FScriptContainerElement *local_978;
  undefined8 *local_970;
  FScriptContainerElement *local_968;
  FScriptContainerElement *local_960;
  FScriptContainerElement *local_958;
  FScriptContainerElement *local_950;
  FScriptContainerElement *local_948;
  FScriptContainerElement *local_940;
  undefined4 local_938;
  undefined4 local_934;
  FScriptContainerElement *local_930;
  FScriptContainerElement *local_928;
  FScriptContainerElement *local_920;
  longlong local_918;
  longlong local_910;
  FScriptContainerElement *local_908;
  FScriptContainerElement *local_900;
  FScriptContainerElement *local_8f8;
  undefined8 *local_8f0;
  FScriptContainerElement *local_8e8;
  FScriptContainerElement *local_8e0;
  FScriptContainerElement *local_8d8;
  FScriptContainerElement *local_8d0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_8c8;
  TVector2<float>_u_0 local_8c0;
  FDeprecateVector2DParameter local_8b8;
  TTransform2<float> *local_8b0;
  FSlateLayoutTransform *local_8a8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_8a0;
  FPaintGeometry *local_898;
  FSlateWindowElementList *local_890;
  FNameEntryId *local_888;
  FNameEntryId *local_880;
  TVector2<float>_u_0 local_878;
  TVector2<float>_u_0 local_870;
  TStringView<wchar_t> *local_868;
  FSlateFontMeasure *local_860;
  FString *local_858;
  FString *local_850;
  FScriptContainerElement *local_848;
  FScriptContainerElement *local_840;
  FScriptContainerElement *local_838;
  FScriptContainerElement *local_830;
  FScriptContainerElement *local_828;
  FScriptContainerElement *local_820;
  undefined4 local_818;
  undefined4 local_814;
  FScriptContainerElement *local_810;
  FScriptContainerElement *local_808;
  FScriptContainerElement *local_800;
  longlong local_7f8;
  longlong local_7f0;
  FScriptContainerElement *local_7e8;
  FScriptContainerElement *local_7e0;
  FScriptContainerElement *local_7d8;
  undefined8 *local_7d0;
  FScriptContainerElement *local_7c8;
  FScriptContainerElement *local_7c0;
  FScriptContainerElement *local_7b8;
  FScriptContainerElement *local_7b0;
  FScriptContainerElement *local_7a8;
  FScriptContainerElement *local_7a0;
  undefined4 local_798;
  undefined4 local_794;
  FScriptContainerElement *local_790;
  FScriptContainerElement *local_788;
  FScriptContainerElement *local_780;
  longlong local_778;
  longlong local_770;
  FScriptContainerElement *local_768;
  FScriptContainerElement *local_760;
  FScriptContainerElement *local_758;
  undefined8 *local_750;
  FString *local_748;
  FScriptContainerElement *local_740;
  FScriptContainerElement *local_738;
  FScriptContainerElement *local_730;
  FScriptContainerElement *local_728;
  FScriptContainerElement *local_720;
  FScriptContainerElement *local_718;
  undefined4 local_710;
  undefined4 local_70c;
  FScriptContainerElement *local_708;
  FScriptContainerElement *local_700;
  FScriptContainerElement *local_6f8;
  longlong local_6f0;
  longlong local_6e8;
  FScriptContainerElement *local_6e0;
  FScriptContainerElement *local_6d8;
  FScriptContainerElement *local_6d0;
  undefined8 *local_6c8;
  FScriptContainerElement *local_6c0;
  FScriptContainerElement *local_6b8;
  FScriptContainerElement *local_6b0;
  FScriptContainerElement *local_6a8;
  FScriptContainerElement *local_6a0;
  FScriptContainerElement *local_698;
  undefined4 local_690;
  undefined4 local_68c;
  FScriptContainerElement *local_688;
  FScriptContainerElement *local_680;
  FScriptContainerElement *local_678;
  longlong local_670;
  longlong local_668;
  FScriptContainerElement *local_660;
  FScriptContainerElement *local_658;
  FScriptContainerElement *local_650;
  undefined8 *local_648;
  FScriptContainerElement *local_640;
  FScriptContainerElement *local_638;
  FScriptContainerElement *local_630;
  FScriptContainerElement *local_628;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_620;
  TVector2<float>_u_0 local_618;
  FDeprecateVector2DParameter local_610;
  TTransform2<float> *local_608;
  FSlateLayoutTransform *local_600;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_5f8;
  FPaintGeometry *local_5f0;
  FSlateWindowElementList *local_5e8;
  FString *local_5e0;
  FString *local_5d8;
  undefined1 *local_5d0;
  float *local_5c8;
  TVector2<float>_u_0 local_5c0;
  TVector2<float>_u_0 local_5b8;
  FScriptContainerElement *local_5b0;
  FScriptContainerElement *local_5a8;
  FScriptContainerElement *local_5a0;
  FScriptContainerElement *local_598;
  FScriptContainerElement *local_590;
  FScriptContainerElement *local_588;
  undefined4 local_580;
  undefined4 local_57c;
  FScriptContainerElement *local_578;
  FScriptContainerElement *local_570;
  FScriptContainerElement *local_568;
  longlong local_560;
  longlong local_558;
  FScriptContainerElement *local_550;
  FScriptContainerElement *local_548;
  FScriptContainerElement *local_540;
  undefined8 *local_538;
  FScriptContainerElement *local_530;
  FScriptContainerElement *local_528;
  FScriptContainerElement *local_520;
  FScriptContainerElement *local_518;
  FScriptContainerElement *local_510;
  FScriptContainerElement *local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  FScriptContainerElement *local_4f8;
  FScriptContainerElement *local_4f0;
  FScriptContainerElement *local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  FScriptContainerElement *local_4d0;
  FScriptContainerElement *local_4c8;
  FScriptContainerElement *local_4c0;
  undefined8 *local_4b8;
  FScriptContainerElement *local_4b0;
  FScriptContainerElement *local_4a8;
  FScriptContainerElement *local_4a0;
  FScriptContainerElement *local_498;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_490;
  TVector2<float>_u_0 local_488;
  FDeprecateVector2DParameter local_480;
  TTransform2<float> *local_478;
  FSlateLayoutTransform *local_470;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_468;
  FPaintGeometry *local_460;
  FSlateWindowElementList *local_458;
  FString *local_450;
  float *local_448;
  float *local_440;
  TVector2<float>_u_0 local_438;
  TVector2<float>_u_0 local_430;
  FScriptContainerElement *local_428;
  FScriptContainerElement *local_420;
  FScriptContainerElement *local_418;
  FScriptContainerElement *local_410;
  FScriptContainerElement *local_408;
  FScriptContainerElement *local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  FScriptContainerElement *local_3f0;
  FScriptContainerElement *local_3e8;
  FScriptContainerElement *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  FScriptContainerElement *local_3c8;
  FScriptContainerElement *local_3c0;
  FScriptContainerElement *local_3b8;
  undefined8 *local_3b0;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  FScriptContainerElement *local_398;
  FScriptContainerElement *local_390;
  FScriptContainerElement *local_388;
  FScriptContainerElement *local_380;
  undefined4 local_378;
  undefined4 local_374;
  FScriptContainerElement *local_370;
  FScriptContainerElement *local_368;
  FScriptContainerElement *local_360;
  longlong local_358;
  longlong local_350;
  FScriptContainerElement *local_348;
  FScriptContainerElement *local_340;
  FScriptContainerElement *local_338;
  undefined8 *local_330;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_308;
  TVector2<float>_u_0 local_300;
  FDeprecateVector2DParameter local_2f8;
  TTransform2<float> *local_2f0;
  FSlateLayoutTransform *local_2e8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_2e0;
  FPaintGeometry *local_2d8;
  FSlateWindowElementList *local_2d0;
  float local_2c8;
  float local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  float local_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  undefined1 local_298 [16];
  undefined1 local_288 [48];
  undefined1 local_258 [16];
  FNameEntryId local_248;
  float fStack_244;
  FNameEntryId local_240;
  float fStack_23c;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [28];
  FSlateLayoutTransform local_1fc;
  FSlateLayoutTransform local_1f0;
  FSlateLayoutTransform local_1e4;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  FString local_1b8;
  FString local_1a8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_198;
  TStringView<wchar_t> local_188;
  FString local_178;
  FString local_168;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_158;
  FString local_148;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_138;
  FString local_128;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_118;
  FPaintGeometry local_108;
  FPaintGeometry local_d0;
  FPaintGeometry local_98;
  FPaintGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_ef8;
  fVar10 = param_3;
  local_b28 = TSharedRef<FSlateFontMeasure,1>::operator->(&this->FontMeasureService);
  local_b30 = &local_1d8;
  pTVar4 = TStringView<wchar_t>::TStringView<wchar_t>(local_b30,L" ");
  puVar8 = local_228;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TStringView<wchar_t> *)((longlong)&pTVar4->DataPtr + 1);
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_228;
  puVar9 = local_218;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FVar5 = FSlateFontMeasure::Measure
                    (local_b28,(TStringView<wchar_t> *)local_258,(FSlateFontInfo *)local_218,fVar10)
  ;
  (this->SpaceDrawSize).field0_0x0 = *(TVector2<float>_u_0 *)FVar5;
  local_b20 = this->ScaleInfo;
  local_e88 = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX(local_b20,param_2);
  local_b18 = this->ScaleInfo;
  local_e84 = FAudioSpectrumPlotScaleInfo::SoundLevelToLocalY(local_b18,param_3);
  if ((local_e84 < (this->LocalBackgroundRect).Top) ||
     (pfVar1 = &(this->LocalBackgroundRect).Bottom, *pfVar1 <= local_e84 && local_e84 != *pfVar1)) {
    local_e80 = '\0';
  }
  else {
    local_e80 = '\x01';
  }
  local_e7e = local_e80;
  if ((local_e88 < (this->LocalBackgroundRect).Left) ||
     (pfVar1 = &(this->LocalBackgroundRect).Right, *pfVar1 <= local_e88 && local_e88 != *pfVar1)) {
    local_e7f = '\0';
  }
  else {
    local_e7f = '\x01';
  }
  local_e58 = local_e7f;
  if (local_e7f != '\0') {
    local_2c8 = __real_40800000;
    local_2c4 = __real_40c00000;
    local_e18 = (this->LocalBackgroundRect).Bottom;
    local_e00 = (this->LocalBackgroundRect).Top;
    local_e10 = local_e18;
    if (local_e84 < local_e18) {
      local_e10 = local_e84;
    }
    local_c48 = local_e10;
    local_e08 = local_e10;
    local_df8 = local_e00;
    if (local_e00 < local_e10) {
      local_df8 = local_e10;
    }
    local_c44 = local_df8;
    local_c40 = local_df8;
    local_c3c = local_df8;
    local_e50 = local_df8;
    local_df0 = local_e84 - local_df8;
    if (local_df0 <= __real_00000000) {
      if (__real_00000000 <= local_df0) {
        local_de8 = 0.0;
      }
      else {
        local_de8 = __real_bf800000;
      }
      local_de4 = local_de8;
    }
    else {
      local_de4 = __real_3f800000;
    }
    local_c38 = local_de4;
    local_e28 = local_de4;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_ea8.AllocatorInstance);
    local_ea8.ArrayNum = 0;
    local_ea8.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_ea8.AllocatorInstance);
    if (local_ea8.ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,2,&local_ea8.AllocatorInstance,local_ea8.ArrayNum,&local_ea8.ArrayMax);
    }
    local_e4c[0].bAlwaysDisplayMaximumFractionalDigits = true;
    local_e4c[0].bIncludeUnits = true;
    FormatFreqString(&local_b60,param_2,local_e4c);
    local_b08 = TSharedRef<FSlateFontMeasure,1>::operator->(&this->FontMeasureService);
    local_b10 = &local_1c8;
    pTVar4 = TStringView<wchar_t>::TStringView<wchar_t><FString>(local_b10,&local_b60);
    puVar8 = local_298;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *(undefined1 *)&pTVar4->DataPtr;
      pTVar4 = (TStringView<wchar_t> *)((longlong)&pTVar4->DataPtr + 1);
      puVar8 = puVar8 + 1;
    }
    puVar8 = local_298;
    puVar9 = local_288;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FVar5 = FSlateFontMeasure::Measure
                      (local_b08,(TStringView<wchar_t> *)(local_258 + 8),(FSlateFontInfo *)local_288
                       ,fVar10);
    local_e20 = *(TVector2<float>_u_0 *)FVar5;
    local_d40 = (this->LocalBackgroundRect).Right - local_e20._s_0.X;
    local_d60 = (this->LocalBackgroundRect).Left;
    local_de0 = local_e88 - __real_3f000000 * local_e20._s_0.X;
    local_d48 = local_d40;
    if (local_de0 < local_d40) {
      local_d48 = local_de0;
    }
    local_c34 = local_d48;
    local_d50 = local_d48;
    local_d80 = local_d60;
    if (local_d60 < local_d48) {
      local_d80 = local_d48;
    }
    local_b88 = local_d80;
    local_b84 = local_d80;
    local_b80 = local_d80;
    local_dd0 = local_d80;
    local_d58 = (this->LocalBackgroundRect).Top + local_e20._s_0.Y;
    local_e30 = (this->LocalBackgroundRect).Bottom - local_e20._s_0.Y;
    if (local_e84 < local_d58) {
      local_d18 = (this->LocalBackgroundRect).Top;
      local_c18 = local_e88;
      local_c20 = (FScriptContainerElement *)&local_c18;
      local_a70 = local_ea8.AllocatorInstance.Data;
      local_a68 = local_ea8.AllocatorInstance.Data;
      local_a60 = local_ea8.AllocatorInstance.Data;
      fStack_c14 = local_d18;
      if (local_ea8.AllocatorInstance.Data <= local_c20) {
        local_a58 = local_ea8.AllocatorInstance.Data;
        local_a50 = local_ea8.AllocatorInstance.Data;
        local_a48 = local_ea8.AllocatorInstance.Data;
        if (local_c20 < local_ea8.AllocatorInstance.Data + (longlong)local_ea8.ArrayMax * 8) {
          local_a40 = 0;
          local_a3c = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_a20 = (longlong)local_ea8.ArrayNum;
          local_a18 = (longlong)local_ea8.ArrayMax;
          local_a38 = local_ea8.AllocatorInstance.Data;
          local_a30 = local_ea8.AllocatorInstance.Data;
          local_a28 = local_ea8.AllocatorInstance.Data;
          local_a10 = local_ea8.AllocatorInstance.Data;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (local_ea8.ArrayNum == local_ea8.ArrayMax) {
        local_ea8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_ea8.AllocatorInstance,&local_ea8.ArrayMax);
      }
      local_dd4 = local_ea8.ArrayNum;
      local_a08 = local_ea8.AllocatorInstance.Data;
      local_a00 = local_ea8.AllocatorInstance.Data + (longlong)local_ea8.ArrayNum * 8;
      local_ea8.ArrayNum = local_ea8.ArrayNum + 1;
      local_9f8 = ::operator_new(8,local_a00);
      *local_9f8 = CONCAT44(fStack_c14,local_c18);
      local_2bc = local_dd4;
    }
    else {
      local_b00 = &local_1b8;
      local_af8 = ::FString::FString(local_b00,&local_b60);
      fVar10 = (this->LocalBackgroundRect).Top;
      local_b7c = fVar10;
      DrawLabelIfNoOverlap
                (this,param_1,local_dd0,fVar10,(TVector2<float> *)&local_e20._s_0,local_af8,param_4,
                 param_5);
      local_c28 = local_e88;
      fStack_c24 = local_d58;
      local_c30 = (FScriptContainerElement *)&local_c28;
      local_af0 = local_ea8.AllocatorInstance.Data;
      local_ae8 = local_ea8.AllocatorInstance.Data;
      local_ae0 = local_ea8.AllocatorInstance.Data;
      if (local_ea8.AllocatorInstance.Data <= local_c30) {
        local_ad8 = local_ea8.AllocatorInstance.Data;
        local_ad0 = local_ea8.AllocatorInstance.Data;
        local_ac8 = local_ea8.AllocatorInstance.Data;
        if (local_c30 < local_ea8.AllocatorInstance.Data + (longlong)local_ea8.ArrayMax * 8) {
          local_ac0 = 0;
          local_abc = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_aa0 = (longlong)local_ea8.ArrayNum;
          local_a98 = (longlong)local_ea8.ArrayMax;
          local_ab8 = local_ea8.AllocatorInstance.Data;
          local_ab0 = local_ea8.AllocatorInstance.Data;
          local_aa8 = local_ea8.AllocatorInstance.Data;
          local_a90 = local_ea8.AllocatorInstance.Data;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (local_ea8.ArrayNum == local_ea8.ArrayMax) {
        local_ea8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_ea8.AllocatorInstance,&local_ea8.ArrayMax);
      }
      local_dd8 = local_ea8.ArrayNum;
      local_a88 = local_ea8.AllocatorInstance.Data;
      local_a80 = local_ea8.AllocatorInstance.Data + (longlong)local_ea8.ArrayNum * 8;
      local_ea8.ArrayNum = local_ea8.ArrayNum + 1;
      local_a78 = ::operator_new(8,local_a80);
      *local_a78 = CONCAT44(fStack_c24,local_c28);
      local_2c0 = local_dd8;
    }
    if (local_e30 < local_e84) {
      local_d10 = (this->LocalBackgroundRect).Bottom;
      local_bf8 = local_e88;
      local_c00 = (FScriptContainerElement *)&local_bf8;
      local_968 = local_ea8.AllocatorInstance.Data;
      local_960 = local_ea8.AllocatorInstance.Data;
      local_958 = local_ea8.AllocatorInstance.Data;
      fStack_bf4 = local_d10;
      if (local_ea8.AllocatorInstance.Data <= local_c00) {
        local_950 = local_ea8.AllocatorInstance.Data;
        local_948 = local_ea8.AllocatorInstance.Data;
        local_940 = local_ea8.AllocatorInstance.Data;
        if (local_c00 < local_ea8.AllocatorInstance.Data + (longlong)local_ea8.ArrayMax * 8) {
          local_938 = 0;
          local_934 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_918 = (longlong)local_ea8.ArrayNum;
          local_910 = (longlong)local_ea8.ArrayMax;
          local_930 = local_ea8.AllocatorInstance.Data;
          local_928 = local_ea8.AllocatorInstance.Data;
          local_920 = local_ea8.AllocatorInstance.Data;
          local_908 = local_ea8.AllocatorInstance.Data;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (local_ea8.ArrayNum == local_ea8.ArrayMax) {
        local_ea8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_ea8.AllocatorInstance,&local_ea8.ArrayMax);
      }
      local_dc8 = local_ea8.ArrayNum;
      local_900 = local_ea8.AllocatorInstance.Data;
      local_8f8 = local_ea8.AllocatorInstance.Data + (longlong)local_ea8.ArrayNum * 8;
      local_ea8.ArrayNum = local_ea8.ArrayNum + 1;
      local_8f0 = ::operator_new(8,local_8f8);
      *local_8f0 = CONCAT44(fStack_bf4,local_bf8);
      local_2b4 = local_dc8;
    }
    else {
      local_9f0 = &local_1a8;
      pFVar6 = ::FString::FString(local_9f0,&local_b60);
      fVar10 = local_e30;
      DrawLabelIfNoOverlap
                (this,param_1,local_dd0,local_e30,(TVector2<float> *)&local_e20._s_0,pFVar6,param_4,
                 param_5);
      local_c08 = local_e88;
      fStack_c04 = local_e30;
      local_c10 = (FScriptContainerElement *)&local_c08;
      local_9e8 = local_ea8.AllocatorInstance.Data;
      local_9e0 = local_ea8.AllocatorInstance.Data;
      local_9d8 = local_ea8.AllocatorInstance.Data;
      if (local_ea8.AllocatorInstance.Data <= local_c10) {
        local_9d0 = local_ea8.AllocatorInstance.Data;
        local_9c8 = local_ea8.AllocatorInstance.Data;
        local_9c0 = local_ea8.AllocatorInstance.Data;
        if (local_c10 < local_ea8.AllocatorInstance.Data + (longlong)local_ea8.ArrayMax * 8) {
          local_9b8 = 0;
          local_9b4 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_998 = (longlong)local_ea8.ArrayNum;
          local_990 = (longlong)local_ea8.ArrayMax;
          local_9b0 = local_ea8.AllocatorInstance.Data;
          local_9a8 = local_ea8.AllocatorInstance.Data;
          local_9a0 = local_ea8.AllocatorInstance.Data;
          local_988 = local_ea8.AllocatorInstance.Data;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (local_ea8.ArrayNum == local_ea8.ArrayMax) {
        local_ea8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_ea8.AllocatorInstance,&local_ea8.ArrayMax);
      }
      local_dcc = local_ea8.ArrayNum;
      local_980 = local_ea8.AllocatorInstance.Data;
      local_978 = local_ea8.AllocatorInstance.Data + (longlong)local_ea8.ArrayNum * 8;
      local_ea8.ArrayNum = local_ea8.ArrayNum + 1;
      local_970 = ::operator_new(8,local_978);
      *local_970 = CONCAT44(fStack_c04,local_c08);
      local_2b8 = local_dcc;
    }
    local_bf0 = &local_198;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_bf0->AllocatorInstance);
    local_d08 = local_ea8.ArrayNum;
    local_d04 = local_ea8.ArrayNum;
    local_8e8 = local_ea8.AllocatorInstance.Data;
    local_8e0 = local_ea8.AllocatorInstance.Data;
    local_8d8 = local_ea8.AllocatorInstance.Data;
    local_8d0 = local_ea8.AllocatorInstance.Data;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<UE::Math::TVector2<float>,int>
              (local_bf0,(TVector2<float> *)local_ea8.AllocatorInstance.Data,local_ea8.ArrayNum,0);
    local_8c8 = local_bf0;
    local_8a0 = local_bf0;
    local_d30 = this->AllottedGeometry;
    local_e57 = local_d30->bHasRenderTransform;
    local_8c0._s_0 = *(TVector2<float>_u_0_s_0 *)&local_d30->Size;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_8b8,(TVector2<float> *)&local_8c0._s_0);
    local_8b0 = FGeometry::GetAccumulatedRenderTransform(local_d30);
    local_8a8 = FGeometry::GetAccumulatedLayoutTransform
                          (local_d30,(FSlateLayoutTransform *)(local_218 + 0x10));
    FPaintGeometry::FPaintGeometry(&local_108,local_8a8,local_8b0,&local_8b8,local_e57);
    local_898 = &local_108;
    local_890 = this->ElementList;
    FSlateDrawElement::MakeLines
              (local_890,param_1,local_898,local_8a0,None,param_6,true,__real_3f800000);
    if (local_e7e == '\0') {
      local_be8 = &local_248;
      local_248.Value = (uint)__real_40c00000;
      local_878._s_0.Y = fStack_244;
      local_878._s_0.X = __real_40c00000;
      local_be0 = &local_240;
      local_240.Value = (uint)local_e88;
      fStack_23c = local_e50;
      local_870._s_0.Y = local_e50;
      local_870._s_0.X = local_e88;
      local_888 = local_be8;
      local_880 = local_be0;
      fStack_244 = local_e28 * __real_40800000;
      DrawVerticalArrowhead
                (this,param_1,(TVector2<float>)local_870,(TVector2<float>)local_878._s_0,param_6);
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_e98.AllocatorInstance);
    local_e98.ArrayNum = 0;
    local_e98.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_e98.AllocatorInstance);
    if (local_e98.ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,2,&local_e98.AllocatorInstance,local_e98.ArrayNum,&local_e98.ArrayMax);
    }
    local_b68.NumFractionalDigits = 1;
    local_b68.bIncludeUnits = true;
    FormatSoundLevelString(&local_b78,param_3,&local_b68);
    local_860 = TSharedRef<FSlateFontMeasure,1>::operator->(&this->FontMeasureService);
    local_868 = &local_188;
    pTVar4 = TStringView<wchar_t>::TStringView<wchar_t><FString>(local_868,&local_b78);
    puVar8 = local_288 + 0x10;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *(undefined1 *)&pTVar4->DataPtr;
      pTVar4 = (TStringView<wchar_t> *)((longlong)&pTVar4->DataPtr + 1);
      puVar8 = puVar8 + 1;
    }
    puVar8 = local_288 + 0x10;
    puVar9 = local_288 + 0x20;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FVar5 = FSlateFontMeasure::Measure
                      (local_860,(TStringView<wchar_t> *)local_238,
                       (FSlateFontInfo *)(local_288 + 0x20),fVar10);
    local_e38 = *(TVector2<float>_u_0 *)FVar5;
    local_db8 = (this->LocalBackgroundRect).Bottom - local_e38._s_0.Y;
    local_da0 = (this->LocalBackgroundRect).Top;
    local_dc0 = local_e84 - __real_3f000000 * local_e38._s_0.Y;
    local_db0 = local_db8;
    if (local_dc0 < local_db8) {
      local_db0 = local_dc0;
    }
    local_d00 = local_db0;
    local_da8 = local_db0;
    local_d98 = local_da0;
    if (local_da0 < local_db0) {
      local_d98 = local_db0;
    }
    local_cfc = local_d98;
    local_cf8 = local_d98;
    local_cf4 = local_d98;
    local_e48 = local_d98;
    local_d94 = (this->LocalBackgroundRect).Left + local_e38._s_0.X;
    local_e40 = (this->LocalBackgroundRect).Right - local_e38._s_0.X;
    local_e44 = local_d94 + (this->SpaceDrawSize).field0_0x0._s_0.X;
    local_e3c = local_e40 - (this->SpaceDrawSize).field0_0x0._s_0.X;
    if (local_e7e == '\0') {
      local_d70 = local_d98 + __real_3f000000 * local_e38._s_0.Y;
      if (local_e44 + __real_41100000 < local_e88) {
        local_5e0 = &local_148;
        local_5d8 = ::FString::FString(local_5e0,&local_b78);
        local_cc8 = (this->LocalBackgroundRect).Left;
        DrawLabelIfNoOverlap
                  (this,param_1,local_cc8,local_e48,(TVector2<float> *)&local_e38._s_0,local_5d8,
                   param_4,param_5);
        local_e2c = local_e44 + __real_40400000;
        local_b90 = local_238 + 8;
        local_238._8_4_ = __real_40c00000;
        local_5c0._s_0.Y = (float)local_238._12_4_;
        local_5c0._s_0.X = __real_40c00000;
        local_cb0 = &local_2b0;
        fStack_2ac = local_e50;
        local_5b8._s_0.Y = local_e50;
        local_5b8._s_0.X = local_2b0;
        local_5d0 = local_b90;
        local_5c8 = local_cb0;
        local_2b0 = local_e2c;
        local_238._12_4_ = local_e28 * __real_40800000;
        DrawVerticalArrowhead
                  (this,param_1,(TVector2<float>)local_5b8,(TVector2<float>)local_5c0._s_0,param_6);
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_e68.AllocatorInstance);
        local_e68.ArrayNum = 0;
        local_e68.ArrayMax =
             TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                       (&local_e68.AllocatorInstance);
        if (local_e68.ArrayMax < 2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,2,&local_e68.AllocatorInstance,local_e68.ArrayNum,&local_e68.ArrayMax);
        }
        local_ca0 = local_e2c;
        fStack_c9c = local_d70;
        local_ca8 = (FScriptContainerElement *)&local_ca0;
        local_5b0 = local_e68.AllocatorInstance.Data;
        local_5a8 = local_e68.AllocatorInstance.Data;
        local_5a0 = local_e68.AllocatorInstance.Data;
        if (local_e68.AllocatorInstance.Data <= local_ca8) {
          local_598 = local_e68.AllocatorInstance.Data;
          local_590 = local_e68.AllocatorInstance.Data;
          local_588 = local_e68.AllocatorInstance.Data;
          if (local_ca8 < local_e68.AllocatorInstance.Data + (longlong)local_e68.ArrayMax * 8) {
            local_580 = 0;
            local_57c = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_560 = (longlong)local_e68.ArrayNum;
            local_558 = (longlong)local_e68.ArrayMax;
            local_578 = local_e68.AllocatorInstance.Data;
            local_570 = local_e68.AllocatorInstance.Data;
            local_568 = local_e68.AllocatorInstance.Data;
            local_550 = local_e68.AllocatorInstance.Data;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_e68.ArrayNum == local_e68.ArrayMax) {
          local_e68.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_e68.AllocatorInstance,&local_e68.ArrayMax);
        }
        local_d78 = local_e68.ArrayNum;
        local_548 = local_e68.AllocatorInstance.Data;
        local_540 = local_e68.AllocatorInstance.Data + (longlong)local_e68.ArrayNum * 8;
        local_e68.ArrayNum = local_e68.ArrayNum + 1;
        local_538 = ::operator_new(8,local_540);
        *local_538 = CONCAT44(fStack_c9c,local_ca0);
        local_b40 = local_d78;
        local_c90 = local_e2c;
        fStack_c8c = local_e50;
        local_c98 = (FScriptContainerElement *)&local_c90;
        local_530 = local_e68.AllocatorInstance.Data;
        local_528 = local_e68.AllocatorInstance.Data;
        local_520 = local_e68.AllocatorInstance.Data;
        if (local_e68.AllocatorInstance.Data <= local_c98) {
          local_518 = local_e68.AllocatorInstance.Data;
          local_510 = local_e68.AllocatorInstance.Data;
          local_508 = local_e68.AllocatorInstance.Data;
          if (local_c98 < local_e68.AllocatorInstance.Data + (longlong)local_e68.ArrayMax * 8) {
            local_500 = 0;
            local_4fc = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_4e0 = (longlong)local_e68.ArrayNum;
            local_4d8 = (longlong)local_e68.ArrayMax;
            local_4f8 = local_e68.AllocatorInstance.Data;
            local_4f0 = local_e68.AllocatorInstance.Data;
            local_4e8 = local_e68.AllocatorInstance.Data;
            local_4d0 = local_e68.AllocatorInstance.Data;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_e68.ArrayNum == local_e68.ArrayMax) {
          local_e68.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_e68.AllocatorInstance,&local_e68.ArrayMax);
        }
        local_d74 = local_e68.ArrayNum;
        local_4c8 = local_e68.AllocatorInstance.Data;
        local_4c0 = local_e68.AllocatorInstance.Data + (longlong)local_e68.ArrayNum * 8;
        local_e68.ArrayNum = local_e68.ArrayNum + 1;
        local_4b8 = ::operator_new(8,local_4c0);
        *local_4b8 = CONCAT44(fStack_c8c,local_c90);
        local_b3c = local_d74;
        local_c88 = &local_138;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_c88->AllocatorInstance);
        local_cc4 = local_e68.ArrayNum;
        local_cc0 = local_e68.ArrayNum;
        local_4b0 = local_e68.AllocatorInstance.Data;
        local_4a8 = local_e68.AllocatorInstance.Data;
        local_4a0 = local_e68.AllocatorInstance.Data;
        local_498 = local_e68.AllocatorInstance.Data;
        TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
        CopyToEmpty<UE::Math::TVector2<float>,int>
                  (local_c88,(TVector2<float> *)local_e68.AllocatorInstance.Data,local_e68.ArrayNum,
                   0);
        local_490 = local_c88;
        local_468 = local_c88;
        local_d20 = this->AllottedGeometry;
        local_e55 = local_d20->bHasRenderTransform;
        local_488._s_0 = *(TVector2<float>_u_0_s_0 *)&local_d20->Size;
        UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                  (&local_480,(TVector2<float> *)&local_488._s_0);
        local_478 = FGeometry::GetAccumulatedRenderTransform(local_d20);
        local_470 = FGeometry::GetAccumulatedLayoutTransform(local_d20,&local_1f0);
        FPaintGeometry::FPaintGeometry(&local_98,local_470,local_478,&local_480,local_e55);
        local_460 = &local_98;
        local_458 = this->ElementList;
        FSlateDrawElement::MakeLines
                  (local_458,param_1,local_460,local_468,None,param_6,true,__real_3f800000);
        TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
        ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_e68);
      }
      if (local_e88 < local_e3c - __real_41100000) {
        local_450 = &local_128;
        pFVar6 = ::FString::FString(local_450,&local_b78);
        DrawLabelIfNoOverlap
                  (this,param_1,local_e40,local_e48,(TVector2<float> *)&local_e38._s_0,pFVar6,
                   param_4,param_5);
        local_e24 = local_e3c - __real_40400000;
        local_c80 = &local_2a8;
        local_2a8 = __real_40c00000;
        local_438._s_0.Y = fStack_2a4;
        local_438._s_0.X = __real_40c00000;
        local_c78 = &local_2a0;
        fStack_29c = local_e50;
        local_430._s_0.Y = local_e50;
        local_430._s_0.X = local_2a0;
        local_448 = local_c80;
        local_440 = local_c78;
        local_2a0 = local_e24;
        fStack_2a4 = local_e28 * __real_40800000;
        DrawVerticalArrowhead
                  (this,param_1,(TVector2<float>)local_430,(TVector2<float>)local_438._s_0,param_6);
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_e78.AllocatorInstance);
        local_e78.ArrayNum = 0;
        local_e78.ArrayMax =
             TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                       (&local_e78.AllocatorInstance);
        if (local_e78.ArrayMax < 2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,2,&local_e78.AllocatorInstance,local_e78.ArrayNum,&local_e78.ArrayMax);
        }
        local_c68 = local_e24;
        fStack_c64 = local_d70;
        local_c70 = (FScriptContainerElement *)&local_c68;
        local_428 = local_e78.AllocatorInstance.Data;
        local_420 = local_e78.AllocatorInstance.Data;
        local_418 = local_e78.AllocatorInstance.Data;
        if (local_e78.AllocatorInstance.Data <= local_c70) {
          local_410 = local_e78.AllocatorInstance.Data;
          local_408 = local_e78.AllocatorInstance.Data;
          local_400 = local_e78.AllocatorInstance.Data;
          if (local_c70 < local_e78.AllocatorInstance.Data + (longlong)local_e78.ArrayMax * 8) {
            local_3f8 = 0;
            local_3f4 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_3d8 = (longlong)local_e78.ArrayNum;
            local_3d0 = (longlong)local_e78.ArrayMax;
            local_3f0 = local_e78.AllocatorInstance.Data;
            local_3e8 = local_e78.AllocatorInstance.Data;
            local_3e0 = local_e78.AllocatorInstance.Data;
            local_3c8 = local_e78.AllocatorInstance.Data;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_e78.ArrayNum == local_e78.ArrayMax) {
          local_e78.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_e78.AllocatorInstance,&local_e78.ArrayMax);
        }
        local_d6c = local_e78.ArrayNum;
        local_3c0 = local_e78.AllocatorInstance.Data;
        local_3b8 = local_e78.AllocatorInstance.Data + (longlong)local_e78.ArrayNum * 8;
        local_e78.ArrayNum = local_e78.ArrayNum + 1;
        local_3b0 = ::operator_new(8,local_3b8);
        *local_3b0 = CONCAT44(fStack_c64,local_c68);
        local_b38 = local_d6c;
        local_c58 = local_e24;
        fStack_c54 = local_e50;
        local_c60 = (FScriptContainerElement *)&local_c58;
        local_3a8 = local_e78.AllocatorInstance.Data;
        local_3a0 = local_e78.AllocatorInstance.Data;
        local_398 = local_e78.AllocatorInstance.Data;
        if (local_e78.AllocatorInstance.Data <= local_c60) {
          local_390 = local_e78.AllocatorInstance.Data;
          local_388 = local_e78.AllocatorInstance.Data;
          local_380 = local_e78.AllocatorInstance.Data;
          if (local_c60 < local_e78.AllocatorInstance.Data + (longlong)local_e78.ArrayMax * 8) {
            local_378 = 0;
            local_374 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_358 = (longlong)local_e78.ArrayNum;
            local_350 = (longlong)local_e78.ArrayMax;
            local_370 = local_e78.AllocatorInstance.Data;
            local_368 = local_e78.AllocatorInstance.Data;
            local_360 = local_e78.AllocatorInstance.Data;
            local_348 = local_e78.AllocatorInstance.Data;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_e78.ArrayNum == local_e78.ArrayMax) {
          local_e78.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_e78.AllocatorInstance,&local_e78.ArrayMax);
        }
        local_d68 = local_e78.ArrayNum;
        local_340 = local_e78.AllocatorInstance.Data;
        local_338 = local_e78.AllocatorInstance.Data + (longlong)local_e78.ArrayNum * 8;
        local_e78.ArrayNum = local_e78.ArrayNum + 1;
        local_330 = ::operator_new(8,local_338);
        *local_330 = CONCAT44(fStack_c54,local_c58);
        local_b34 = local_d68;
        local_c50 = &local_118;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_c50->AllocatorInstance);
        local_cbc = local_e78.ArrayNum;
        local_cb8 = local_e78.ArrayNum;
        local_328 = local_e78.AllocatorInstance.Data;
        local_320 = local_e78.AllocatorInstance.Data;
        local_318 = local_e78.AllocatorInstance.Data;
        local_310 = local_e78.AllocatorInstance.Data;
        TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
        CopyToEmpty<UE::Math::TVector2<float>,int>
                  (local_c50,(TVector2<float> *)local_e78.AllocatorInstance.Data,local_e78.ArrayNum,
                   0);
        local_308 = local_c50;
        local_2e0 = local_c50;
        local_d28 = this->AllottedGeometry;
        local_e54 = local_d28->bHasRenderTransform;
        local_300._s_0 = *(TVector2<float>_u_0_s_0 *)&local_d28->Size;
        UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                  (&local_2f8,(TVector2<float> *)&local_300._s_0);
        local_2f0 = FGeometry::GetAccumulatedRenderTransform(local_d28);
        local_2e8 = FGeometry::GetAccumulatedLayoutTransform(local_d28,&local_1e4);
        FPaintGeometry::FPaintGeometry(&local_60,local_2e8,local_2f0,&local_2f8,local_e54);
        local_2d8 = &local_60;
        local_2d0 = this->ElementList;
        FSlateDrawElement::MakeLines
                  (local_2d0,param_1,local_2d8,local_2e0,None,param_6,true,__real_3f800000);
        TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
        ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_e78);
      }
    }
    else {
      if (local_e88 <= local_d94) {
        local_ce8 = (this->LocalBackgroundRect).Left;
        fStack_bbc = local_e84;
        local_bc8 = (FScriptContainerElement *)&local_bc0;
        local_7c8 = local_e98.AllocatorInstance.Data;
        local_7c0 = local_e98.AllocatorInstance.Data;
        local_7b8 = local_e98.AllocatorInstance.Data;
        local_bc0 = local_ce8;
        if (local_e98.AllocatorInstance.Data <= local_bc8) {
          local_7b0 = local_e98.AllocatorInstance.Data;
          local_7a8 = local_e98.AllocatorInstance.Data;
          local_7a0 = local_e98.AllocatorInstance.Data;
          if (local_bc8 < local_e98.AllocatorInstance.Data + (longlong)local_e98.ArrayMax * 8) {
            local_798 = 0;
            local_794 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_778 = (longlong)local_e98.ArrayNum;
            local_770 = (longlong)local_e98.ArrayMax;
            local_790 = local_e98.AllocatorInstance.Data;
            local_788 = local_e98.AllocatorInstance.Data;
            local_780 = local_e98.AllocatorInstance.Data;
            local_768 = local_e98.AllocatorInstance.Data;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_e98.ArrayNum == local_e98.ArrayMax) {
          local_e98.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_e98.AllocatorInstance,&local_e98.ArrayMax);
        }
        local_d88 = local_e98.ArrayNum;
        local_760 = local_e98.AllocatorInstance.Data;
        local_758 = local_e98.AllocatorInstance.Data + (longlong)local_e98.ArrayNum * 8;
        local_e98.ArrayNum = local_e98.ArrayNum + 1;
        local_750 = ::operator_new(8,local_758);
        *local_750 = CONCAT44(fStack_bbc,local_bc0);
        local_b4c = local_d88;
      }
      else {
        local_858 = &local_178;
        local_850 = ::FString::FString(local_858,&local_b78);
        local_cf0 = (this->LocalBackgroundRect).Left;
        DrawLabelIfNoOverlap
                  (this,param_1,local_cf0,local_e48,(TVector2<float> *)&local_e38._s_0,local_850,
                   param_4,param_5);
        if (local_e88 <= local_e44) {
          local_d90 = local_e88;
        }
        else {
          local_d90 = local_e44;
        }
        local_cec = local_d90;
        local_bd0 = local_d90;
        fStack_bcc = local_e84;
        local_bd8 = (FScriptContainerElement *)&local_bd0;
        local_848 = local_e98.AllocatorInstance.Data;
        local_840 = local_e98.AllocatorInstance.Data;
        local_838 = local_e98.AllocatorInstance.Data;
        if (local_e98.AllocatorInstance.Data <= local_bd8) {
          local_830 = local_e98.AllocatorInstance.Data;
          local_828 = local_e98.AllocatorInstance.Data;
          local_820 = local_e98.AllocatorInstance.Data;
          if (local_bd8 < local_e98.AllocatorInstance.Data + (longlong)local_e98.ArrayMax * 8) {
            local_818 = 0;
            local_814 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_7f8 = (longlong)local_e98.ArrayNum;
            local_7f0 = (longlong)local_e98.ArrayMax;
            local_810 = local_e98.AllocatorInstance.Data;
            local_808 = local_e98.AllocatorInstance.Data;
            local_800 = local_e98.AllocatorInstance.Data;
            local_7e8 = local_e98.AllocatorInstance.Data;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_e98.ArrayNum == local_e98.ArrayMax) {
          local_e98.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_e98.AllocatorInstance,&local_e98.ArrayMax);
        }
        local_d8c = local_e98.ArrayNum;
        local_7e0 = local_e98.AllocatorInstance.Data;
        local_7d8 = local_e98.AllocatorInstance.Data + (longlong)local_e98.ArrayNum * 8;
        local_e98.ArrayNum = local_e98.ArrayNum + 1;
        local_7d0 = ::operator_new(8,local_7d8);
        *local_7d0 = CONCAT44(fStack_bcc,local_bd0);
        local_b50 = local_d8c;
      }
      if (local_e40 <= local_e88) {
        local_cd8 = (this->LocalBackgroundRect).Right;
        fStack_b9c = local_e84;
        local_ba8 = (FScriptContainerElement *)&local_ba0;
        local_6c0 = local_e98.AllocatorInstance.Data;
        local_6b8 = local_e98.AllocatorInstance.Data;
        local_6b0 = local_e98.AllocatorInstance.Data;
        local_ba0 = local_cd8;
        if (local_e98.AllocatorInstance.Data <= local_ba8) {
          local_6a8 = local_e98.AllocatorInstance.Data;
          local_6a0 = local_e98.AllocatorInstance.Data;
          local_698 = local_e98.AllocatorInstance.Data;
          if (local_ba8 < local_e98.AllocatorInstance.Data + (longlong)local_e98.ArrayMax * 8) {
            local_690 = 0;
            local_68c = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_670 = (longlong)local_e98.ArrayNum;
            local_668 = (longlong)local_e98.ArrayMax;
            local_688 = local_e98.AllocatorInstance.Data;
            local_680 = local_e98.AllocatorInstance.Data;
            local_678 = local_e98.AllocatorInstance.Data;
            local_660 = local_e98.AllocatorInstance.Data;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_e98.ArrayNum == local_e98.ArrayMax) {
          local_e98.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_e98.AllocatorInstance,&local_e98.ArrayMax);
        }
        local_d7c = local_e98.ArrayNum;
        local_658 = local_e98.AllocatorInstance.Data;
        local_650 = local_e98.AllocatorInstance.Data + (longlong)local_e98.ArrayNum * 8;
        local_e98.ArrayNum = local_e98.ArrayNum + 1;
        local_648 = ::operator_new(8,local_650);
        *local_648 = CONCAT44(fStack_b9c,local_ba0);
        local_b44 = local_d7c;
      }
      else {
        local_748 = &local_168;
        pFVar6 = ::FString::FString(local_748,&local_b78);
        DrawLabelIfNoOverlap
                  (this,param_1,local_e40,local_e48,(TVector2<float> *)&local_e38._s_0,pFVar6,
                   param_4,param_5);
        if (local_e3c <= local_e88) {
          local_d84 = local_e88;
        }
        else {
          local_d84 = local_e3c;
        }
        local_ce0 = local_d84;
        local_bb0 = local_d84;
        fStack_bac = local_e84;
        local_bb8 = (FScriptContainerElement *)&local_bb0;
        local_740 = local_e98.AllocatorInstance.Data;
        local_738 = local_e98.AllocatorInstance.Data;
        local_730 = local_e98.AllocatorInstance.Data;
        if (local_e98.AllocatorInstance.Data <= local_bb8) {
          local_728 = local_e98.AllocatorInstance.Data;
          local_720 = local_e98.AllocatorInstance.Data;
          local_718 = local_e98.AllocatorInstance.Data;
          if (local_bb8 < local_e98.AllocatorInstance.Data + (longlong)local_e98.ArrayMax * 8) {
            local_710 = 0;
            local_70c = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_6f0 = (longlong)local_e98.ArrayNum;
            local_6e8 = (longlong)local_e98.ArrayMax;
            local_708 = local_e98.AllocatorInstance.Data;
            local_700 = local_e98.AllocatorInstance.Data;
            local_6f8 = local_e98.AllocatorInstance.Data;
            local_6e0 = local_e98.AllocatorInstance.Data;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_e98.ArrayNum == local_e98.ArrayMax) {
          local_e98.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_e98.AllocatorInstance,&local_e98.ArrayMax);
        }
        local_d54 = local_e98.ArrayNum;
        local_6d8 = local_e98.AllocatorInstance.Data;
        local_6d0 = local_e98.AllocatorInstance.Data + (longlong)local_e98.ArrayNum * 8;
        local_e98.ArrayNum = local_e98.ArrayNum + 1;
        local_6c8 = ::operator_new(8,local_6d0);
        *local_6c8 = CONCAT44(fStack_bac,local_bb0);
        local_b48 = local_d54;
      }
      local_b98 = &local_158;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_b98->AllocatorInstance);
      local_cd0 = local_e98.ArrayNum;
      local_ccc = local_e98.ArrayNum;
      local_640 = local_e98.AllocatorInstance.Data;
      local_638 = local_e98.AllocatorInstance.Data;
      local_630 = local_e98.AllocatorInstance.Data;
      local_628 = local_e98.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (local_b98,(TVector2<float> *)local_e98.AllocatorInstance.Data,local_e98.ArrayNum,0)
      ;
      local_620 = local_b98;
      local_5f8 = local_b98;
      local_d38 = this->AllottedGeometry;
      local_e56 = local_d38->bHasRenderTransform;
      local_618._s_0 = *(TVector2<float>_u_0_s_0 *)&local_d38->Size;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_610,(TVector2<float> *)&local_618._s_0);
      local_608 = FGeometry::GetAccumulatedRenderTransform(local_d38);
      local_600 = FGeometry::GetAccumulatedLayoutTransform(local_d38,&local_1fc);
      FPaintGeometry::FPaintGeometry(&local_d0,local_600,local_608,&local_610,local_e56);
      local_5f0 = &local_d0;
      local_5e8 = this->ElementList;
      FSlateDrawElement::MakeLines
                (local_5e8,param_1,local_5f0,local_5f8,None,param_6,true,__real_3f800000);
    }
    ::FString::~FString(&local_b78);
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
    ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_e98);
    ::FString::~FString(&local_b60);
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
    ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_ea8);
  }
  return;
}

// DrawFrequencyAxisLabels @ 14d9172b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawFrequencyAxisLabels
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,int param_1,
          TArrayView<float_const_,int> *param_2,FSlateFontInfo *param_3,FLinearColor *param_4)

{
  float *pfVar1;
  TStringView<wchar_t> *pTVar2;
  FDeprecateSlateVector2D FVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  float in_XMM3_Da;
  FFreqFormattingOptions local_168 [2];
  float local_164;
  float local_160;
  float local_15c;
  TVector2<float>_u_0 local_158;
  float *local_150;
  int local_148;
  float local_144;
  float local_140;
  float local_13c;
  TArrayView<float_const_,int> *local_138;
  FString local_130;
  FSlateFontMeasure *local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  TStringView<wchar_t> *local_f0;
  FSlateFontMeasure *local_e8;
  FAudioSpectrumPlotScaleInfo *local_e0;
  FString *local_d8;
  FString *local_d0;
  FString *local_c8;
  FString *local_c0;
  TStringView<wchar_t> *local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [24];
  undefined1 local_88 [80];
  FString local_38;
  FString local_28;
  
  local_120 = TSharedRef<FSlateFontMeasure,1>::operator->(&this->FontMeasureService);
  local_b8 = (TStringView<wchar_t> *)(local_88 + 0x30);
  pTVar2 = TStringView<wchar_t>::TStringView<wchar_t>(local_b8,L" ");
  puVar5 = local_a0;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *(undefined1 *)&pTVar2->DataPtr;
    pTVar2 = (TStringView<wchar_t> *)((longlong)&pTVar2->DataPtr + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_a0;
  puVar6 = local_88;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FVar3 = FSlateFontMeasure::Measure
                    (local_120,(TStringView<wchar_t> *)(local_b0 + 8),(FSlateFontInfo *)local_88,
                     in_XMM3_Da);
  (this->SpaceDrawSize).field0_0x0 = *(TVector2<float>_u_0 *)FVar3;
  local_108 = param_2->DataPtr;
  local_148 = param_2->ArrayNum;
  local_100 = local_108 + local_148;
  local_150 = param_2->DataPtr;
  local_138 = param_2;
  local_118 = local_150;
  local_110 = local_150;
  local_f8 = local_100;
  for (; local_150 != local_f8; local_150 = local_150 + 1) {
    local_160 = *local_150;
    local_168[0].bAlwaysDisplayMaximumFractionalDigits = false;
    local_168[0].bIncludeUnits = false;
    FormatFreqString(&local_130,local_160,local_168);
    local_e8 = TSharedRef<FSlateFontMeasure,1>::operator->(&this->FontMeasureService);
    local_f0 = (TStringView<wchar_t> *)(local_88 + 0x40);
    pTVar2 = TStringView<wchar_t>::TStringView<wchar_t><FString>(local_f0,&local_130);
    puVar5 = local_88 + 0x10;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *(undefined1 *)&pTVar2->DataPtr;
      pTVar2 = (TStringView<wchar_t> *)((longlong)&pTVar2->DataPtr + 1);
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_88 + 0x10;
    puVar6 = local_88 + 0x20;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FVar3 = FSlateFontMeasure::Measure
                      (local_e8,(TStringView<wchar_t> *)local_b0,(FSlateFontInfo *)(local_88 + 0x20)
                       ,in_XMM3_Da);
    local_158 = *(TVector2<float>_u_0 *)FVar3;
    local_e0 = this->ScaleInfo;
    local_15c = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX(local_e0,local_160);
    local_164 = local_15c - __real_3f000000 * local_158._s_0.X;
    local_144 = local_15c + __real_3f000000 * local_158._s_0.X;
    if (((this->LocalBackgroundRect).Left <= local_164) &&
       (pfVar1 = &(this->LocalBackgroundRect).Right, local_144 < *pfVar1 || local_144 == *pfVar1)) {
      local_d8 = &local_38;
      local_d0 = ::FString::FString(local_d8,&local_130);
      local_140 = (this->LocalBackgroundRect).Top;
      DrawLabelIfNoOverlap
                (this,param_1,local_164,local_140,(TVector2<float> *)&local_158._s_0,local_d0,
                 param_3,param_4);
      local_c8 = &local_28;
      local_c0 = ::FString::FString(local_c8,&local_130);
      in_XMM3_Da = (this->LocalBackgroundRect).Bottom - local_158._s_0.Y;
      local_13c = in_XMM3_Da;
      DrawLabelIfNoOverlap
                (this,param_1,local_164,in_XMM3_Da,(TVector2<float> *)&local_158._s_0,local_c0,
                 param_3,param_4);
    }
    ::FString::~FString(&local_130);
  }
  return;
}

// DrawFrequencyGridLines @ 14d9176e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d917893) */
/* WARNING: Removing unreachable block (ram,0x00014d9179be) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawFrequencyGridLines
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,int param_1,
          TArrayView<float_const_,int> *param_2,FLinearColor *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_218 [32];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_1d0;
  uint local_1c0;
  undefined4 local_1bc;
  float local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  float *local_1a8;
  FGeometry *local_1a0;
  float local_198;
  float local_190;
  float local_188;
  int local_180;
  int local_17c;
  int local_178;
  TArrayView<float_const_,int> *local_170;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float *local_150;
  float *local_148;
  float *local_140;
  float *local_138;
  FAudioSpectrumPlotScaleInfo *local_130;
  undefined4 local_128;
  undefined4 local_124;
  TVector2<float>_u_0 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  TVector2<float>_u_0 *local_f8;
  TVector2<float>_u_0 *local_f0;
  TVector2<float>_u_0 *local_e8;
  TVector2<float>_u_0 local_e0;
  TVector2<float>_u_0 *local_d8;
  TVector2<float>_u_0 *local_d0;
  TVector2<float>_u_0 *local_c8;
  TVector2<float>_u_0 *local_c0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_b8;
  TVector2<float>_u_0 local_b0;
  FDeprecateVector2DParameter local_a8;
  TTransform2<float> *local_a0;
  FSlateLayoutTransform *local_98;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_90;
  FPaintGeometry *local_88;
  FSlateWindowElementList *local_80;
  float *local_78;
  FSlateLayoutTransform local_70;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_60;
  FPaintGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1d0.AllocatorInstance);
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1d0.AllocatorInstance);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_1d0,2,Default);
  local_1a8 = param_2->DataPtr;
  local_148 = param_2->DataPtr;
  local_178 = param_2->ArrayNum;
  local_140 = local_148 + local_178;
  local_170 = param_2;
  local_150 = local_1a8;
  local_138 = local_140;
  local_78 = local_1a8;
  do {
    if (local_1a8 == local_138) {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_1d0);
      return;
    }
    local_198 = *local_1a8;
    local_130 = this->ScaleInfo;
    local_1b8 = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX(local_130,local_198);
    local_190 = (this->LocalBackgroundRect).Top;
    local_108._s_0.Y = local_190;
    local_108._s_0.X = local_1b8;
    local_1bc = 1;
    local_1c0 = (uint)(0 < local_1d0.ArrayNum);
    local_160 = local_1b8;
    fStack_15c = local_190;
    if (local_1c0 == 0) {
      local_128 = 0;
      local_124 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data = local_108;
    local_188 = (this->LocalBackgroundRect).Bottom;
    local_158 = local_1b8;
    local_e0._s_0.Y = local_188;
    local_e0._s_0.X = local_1b8;
    local_1b0 = 1;
    local_1b4 = (uint)(1 < local_1d0.ArrayNum);
    fStack_154 = local_188;
    if (local_1b4 == 0) {
      local_1b0 = 1;
      local_100 = 0;
      local_fc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_f8 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_f0 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_e8 = (TVector2<float>_u_0 *)(local_1d0.AllocatorInstance.Data + 8);
    *local_e8 = local_e0;
    local_168 = &local_60;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_168->AllocatorInstance);
    local_180 = local_1d0.ArrayNum;
    local_17c = local_1d0.ArrayNum;
    local_d8 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_d0 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_c8 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_c0 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<UE::Math::TVector2<float>,int>
              (local_168,(TVector2<float> *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum,0);
    local_b8 = local_168;
    local_90 = local_168;
    local_1a0 = this->AllottedGeometry;
    local_b0._s_0 = *(TVector2<float>_u_0_s_0 *)&local_1a0->Size;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_a8,(TVector2<float> *)&local_b0._s_0);
    local_a0 = FGeometry::GetAccumulatedRenderTransform(local_1a0);
    local_98 = FGeometry::GetAccumulatedLayoutTransform(local_1a0,&local_70);
    FPaintGeometry::FPaintGeometry
              (&local_50,local_98,local_a0,&local_a8,local_1a0->bHasRenderTransform);
    local_88 = &local_50;
    local_80 = this->ElementList;
    FSlateDrawElement::MakeLines
              (local_80,param_1,local_88,local_90,None,param_3,true,__real_3f800000);
    local_1a8 = local_1a8 + 1;
  } while( true );
}

// DrawLabelIfNoOverlap @ 14d9184e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawLabelIfNoOverlap
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,int param_1,float param_2,float param_3
          ,TVector2<float> *param_4,FString *param_5,FSlateFontInfo *param_6,FLinearColor *param_7)

{
  undefined1 uVar1;
  FGeometry *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDeprecateSlateVector2D FVar5;
  TArray<FSlateRect,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  FSlateRect *pFVar8;
  undefined1 *puVar9;
  undefined1 auStackY_268 [32];
  TVector2<float>_u_0 local_1e8;
  FSlateLayoutTransform local_1e0;
  TVector2<float>_u_0 *local_1d0;
  FDeprecateVector2DParameter local_1c8;
  FDeprecateVector2DParameter local_1c0;
  FDeprecateVector2DParameter local_1b8;
  FDeprecateVector2DParameter local_1b0;
  FDeprecateVector2DParameter local_1a8;
  TTransform2<float> *local_1a0;
  FSlateLayoutTransform *local_198;
  FDeprecateVector2DParameter local_190;
  TVector2<float> local_188;
  FDeprecateVector2DParameter local_180;
  TTransform2<float> *local_178;
  FSlateLayoutTransform *local_170;
  FSlateRect *local_168;
  FSlateRect *local_160;
  FSlateRect *local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  undefined4 local_138;
  undefined4 local_134;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  undefined1 *local_f0;
  int local_e8;
  FSlateRect local_e0;
  FDeprecateVector2DParameter local_d0;
  FDeprecateVector2DParameter local_c8;
  FSlateRect local_c0;
  FSlateLayoutTransform local_b0;
  FSlateLayoutTransform local_a4;
  FGeometry local_98;
  FPaintGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1d0 = &local_1e8;
  local_1e8._s_0.X = param_2;
  local_1e8._s_0.Y = param_3;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_1c8,(TVector2<float> *)&local_1d0->_s_0);
  FSlateLayoutTransform::FSlateLayoutTransform(&local_1e0,&local_1c8);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_1c0,param_4);
  FVar5 = FSlateLayoutTransform::TransformPoint(&local_1e0,&local_d0);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_1b0,(FDeprecateSlateVector2D *)FVar5);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_1b8,&UE::Math::TVector2<float>::ZeroVector);
  FVar5 = FSlateLayoutTransform::TransformPoint(&local_1e0,&local_c8);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_1a8,(FDeprecateSlateVector2D *)FVar5);
  FSlateRect::FSlateRect(&local_e0,&local_1a8,&local_1b0);
  GetModifiedLabelRect(this,&local_c0,&local_e0);
  bVar3 = IsOverlappingPreviouslyDrawnLabel(this,&local_c0);
  if (!bVar3) {
    this_00 = this->AllottedGeometry;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_190,param_4);
    local_1a0 = FGeometry::GetAccumulatedRenderTransform(this_00);
    local_198 = FGeometry::GetAccumulatedLayoutTransform(this_00,&local_b0);
    FGeometry::FGeometry
              (&local_98,&local_190,&local_1e0,local_198,local_1a0,this_00->bHasRenderTransform);
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_180,&local_188);
    local_178 = FGeometry::GetAccumulatedRenderTransform(&local_98);
    local_170 = FGeometry::GetAccumulatedLayoutTransform(&local_98,&local_a4);
    FPaintGeometry::FPaintGeometry
              (&local_60,local_170,local_178,&local_180,local_98.bHasRenderTransform);
    FSlateDrawElement::MakeText(this->ElementList,param_1,&local_60,param_5,param_6,None,param_7);
    pTVar6 = &this->DrawnLabelRects;
    local_168 = (FSlateRect *)(pTVar6->AllocatorInstance).Data;
    local_160 = local_168;
    local_158 = local_168;
    if ((local_168 <= &local_e0) &&
       (local_150 = (pTVar6->AllocatorInstance).Data, local_148 = local_150, local_140 = local_150,
       &local_e0 < (FSlateRect *)(local_150 + (longlong)(this->DrawnLabelRects).ArrayMax * 0x10))) {
      local_138 = 0;
      local_134 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_118 = (longlong)(this->DrawnLabelRects).ArrayNum;
      local_110 = (longlong)(this->DrawnLabelRects).ArrayMax;
      local_130 = (pTVar6->AllocatorInstance).Data;
      local_128 = local_130;
      local_120 = local_130;
      local_108 = local_130;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->DrawnLabelRects).ArrayNum == (this->DrawnLabelRects).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&pTVar6->AllocatorInstance,&(this->DrawnLabelRects).ArrayMax);
      (this->DrawnLabelRects).ArrayNum = iVar4;
    }
    iVar4 = (this->DrawnLabelRects).ArrayNum;
    (this->DrawnLabelRects).ArrayNum = (this->DrawnLabelRects).ArrayNum + 1;
    local_100 = (pTVar6->AllocatorInstance).Data;
    local_f8 = local_100 + (longlong)iVar4 * 0x10;
    local_f0 = ::operator_new(0x10,local_f8);
    pFVar8 = &local_e0;
    puVar9 = local_f0;
    for (lVar7 = 0x10; local_e8 = iVar4, lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *(undefined1 *)&pFVar8->Left;
      pFVar8 = (FSlateRect *)((longlong)&pFVar8->Left + 1);
      puVar9 = puVar9 + 1;
    }
  }
  ::FString::~FString(param_5);
  return;
}

// DrawSoundLevelAxisLabels @ 14d91a6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawSoundLevelAxisLabels
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,int param_1,
          TArrayView<float_const_,int> *param_2,FSlateFontInfo *param_3,FLinearColor *param_4)

{
  float *pfVar1;
  TStringView<wchar_t> *pTVar2;
  FDeprecateSlateVector2D FVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  float fVar7;
  float in_XMM3_Da;
  TVector2<float>_u_0 local_158;
  float *local_150;
  int local_148;
  float local_144;
  float local_140;
  float local_13c;
  TArrayView<float_const_,int> *local_138;
  FSoundLevelFormattingOptions local_130;
  FString local_128;
  FSlateFontMeasure *local_118;
  float *local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  float *local_f0;
  TStringView<wchar_t> *local_e8;
  FSlateFontMeasure *local_e0;
  FAudioSpectrumPlotScaleInfo *local_d8;
  FString *local_d0;
  FString *local_c8;
  FString *local_c0;
  FString *local_b8;
  TStringView<wchar_t> *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [80];
  FString local_38;
  FString local_28;
  
  local_118 = TSharedRef<FSlateFontMeasure,1>::operator->(&this->FontMeasureService);
  local_b0 = (TStringView<wchar_t> *)(local_88 + 0x30);
  pTVar2 = TStringView<wchar_t>::TStringView<wchar_t>(local_b0,L" ");
  puVar5 = local_98;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *(undefined1 *)&pTVar2->DataPtr;
    pTVar2 = (TStringView<wchar_t> *)((longlong)&pTVar2->DataPtr + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_98;
  puVar6 = local_88;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FVar3 = FSlateFontMeasure::Measure
                    (local_118,(TStringView<wchar_t> *)(local_a8 + 8),(FSlateFontInfo *)local_88,
                     in_XMM3_Da);
  (this->SpaceDrawSize).field0_0x0 = *(TVector2<float>_u_0 *)FVar3;
  local_100 = param_2->DataPtr;
  local_148 = param_2->ArrayNum;
  local_f8 = local_100 + local_148;
  local_150 = param_2->DataPtr;
  local_138 = param_2;
  local_110 = local_150;
  local_108 = local_150;
  local_f0 = local_f8;
  for (; local_150 != local_f0; local_150 = local_150 + 1) {
    fVar7 = *local_150;
    local_130.NumFractionalDigits = 0;
    local_130.bIncludeUnits = false;
    FormatSoundLevelString(&local_128,fVar7,&local_130);
    local_e0 = TSharedRef<FSlateFontMeasure,1>::operator->(&this->FontMeasureService);
    local_e8 = (TStringView<wchar_t> *)(local_88 + 0x40);
    pTVar2 = TStringView<wchar_t>::TStringView<wchar_t><FString>(local_e8,&local_128);
    puVar5 = local_88 + 0x10;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *(undefined1 *)&pTVar2->DataPtr;
      pTVar2 = (TStringView<wchar_t> *)((longlong)&pTVar2->DataPtr + 1);
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_88 + 0x10;
    puVar6 = local_88 + 0x20;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FVar3 = FSlateFontMeasure::Measure
                      (local_e0,(TStringView<wchar_t> *)local_a8,(FSlateFontInfo *)(local_88 + 0x20)
                       ,in_XMM3_Da);
    local_158 = *(TVector2<float>_u_0 *)FVar3;
    local_d8 = this->ScaleInfo;
    local_144 = FAudioSpectrumPlotScaleInfo::SoundLevelToLocalY(local_d8,fVar7);
    fVar7 = local_144 - __real_3f000000 * local_158._s_0.Y;
    local_144 = local_144 + __real_3f000000 * local_158._s_0.Y;
    if (((this->LocalBackgroundRect).Top <= fVar7) &&
       (pfVar1 = &(this->LocalBackgroundRect).Bottom, local_144 < *pfVar1 || local_144 == *pfVar1))
    {
      local_d0 = &local_38;
      local_c8 = ::FString::FString(local_d0,&local_128);
      local_140 = (this->LocalBackgroundRect).Left;
      DrawLabelIfNoOverlap
                (this,param_1,local_140,fVar7,(TVector2<float> *)&local_158._s_0,local_c8,param_3,
                 param_4);
      local_c0 = &local_28;
      local_b8 = ::FString::FString(local_c0,&local_128);
      local_13c = (this->LocalBackgroundRect).Right - local_158._s_0.X;
      DrawLabelIfNoOverlap
                (this,param_1,local_13c,fVar7,(TVector2<float> *)&local_158._s_0,local_b8,param_3,
                 param_4);
      in_XMM3_Da = fVar7;
    }
    ::FString::~FString(&local_128);
  }
  return;
}

// DrawSoundLevelGridLines @ 14d91aaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d91aca3) */
/* WARNING: Removing unreachable block (ram,0x00014d91adce) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawSoundLevelGridLines
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,int param_1,
          TArrayView<float_const_,int> *param_2,FLinearColor *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_218 [32];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_1d0;
  uint local_1c0;
  undefined4 local_1bc;
  float local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  float *local_1a8;
  FGeometry *local_1a0;
  float local_198;
  float local_190;
  float local_188;
  int local_180;
  int local_17c;
  int local_178;
  TArrayView<float_const_,int> *local_170;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float *local_150;
  float *local_148;
  float *local_140;
  float *local_138;
  FAudioSpectrumPlotScaleInfo *local_130;
  undefined4 local_128;
  undefined4 local_124;
  TVector2<float>_u_0 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  TVector2<float>_u_0 *local_f8;
  TVector2<float>_u_0 *local_f0;
  TVector2<float>_u_0 *local_e8;
  TVector2<float>_u_0 local_e0;
  TVector2<float>_u_0 *local_d8;
  TVector2<float>_u_0 *local_d0;
  TVector2<float>_u_0 *local_c8;
  TVector2<float>_u_0 *local_c0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_b8;
  TVector2<float>_u_0 local_b0;
  FDeprecateVector2DParameter local_a8;
  TTransform2<float> *local_a0;
  FSlateLayoutTransform *local_98;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_90;
  FPaintGeometry *local_88;
  FSlateWindowElementList *local_80;
  float *local_78;
  FSlateLayoutTransform local_70;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_60;
  FPaintGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1d0.AllocatorInstance);
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1d0.AllocatorInstance);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_1d0,2,Default);
  local_1a8 = param_2->DataPtr;
  local_148 = param_2->DataPtr;
  local_178 = param_2->ArrayNum;
  local_140 = local_148 + local_178;
  local_170 = param_2;
  local_150 = local_1a8;
  local_138 = local_140;
  local_78 = local_1a8;
  do {
    if (local_1a8 == local_138) {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_1d0);
      return;
    }
    local_198 = *local_1a8;
    local_130 = this->ScaleInfo;
    local_1b8 = FAudioSpectrumPlotScaleInfo::SoundLevelToLocalY(local_130,local_198);
    local_190 = (this->LocalBackgroundRect).Left;
    local_108._s_0.Y = local_1b8;
    local_108._s_0.X = local_190;
    local_1bc = 1;
    local_1c0 = (uint)(0 < local_1d0.ArrayNum);
    local_160 = local_190;
    fStack_15c = local_1b8;
    if (local_1c0 == 0) {
      local_128 = 0;
      local_124 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data = local_108;
    local_188 = (this->LocalBackgroundRect).Right;
    fStack_154 = local_1b8;
    local_e0._s_0.Y = local_1b8;
    local_e0._s_0.X = local_188;
    local_1b0 = 1;
    local_1b4 = (uint)(1 < local_1d0.ArrayNum);
    local_158 = local_188;
    if (local_1b4 == 0) {
      local_1b0 = 1;
      local_100 = 0;
      local_fc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_f8 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_f0 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_e8 = (TVector2<float>_u_0 *)(local_1d0.AllocatorInstance.Data + 8);
    *local_e8 = local_e0;
    local_168 = &local_60;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_168->AllocatorInstance);
    local_180 = local_1d0.ArrayNum;
    local_17c = local_1d0.ArrayNum;
    local_d8 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_d0 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_c8 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    local_c0 = (TVector2<float>_u_0 *)local_1d0.AllocatorInstance.Data;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<UE::Math::TVector2<float>,int>
              (local_168,(TVector2<float> *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum,0);
    local_b8 = local_168;
    local_90 = local_168;
    local_1a0 = this->AllottedGeometry;
    local_b0._s_0 = *(TVector2<float>_u_0_s_0 *)&local_1a0->Size;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_a8,(TVector2<float> *)&local_b0._s_0);
    local_a0 = FGeometry::GetAccumulatedRenderTransform(local_1a0);
    local_98 = FGeometry::GetAccumulatedLayoutTransform(local_1a0,&local_70);
    FPaintGeometry::FPaintGeometry
              (&local_50,local_98,local_a0,&local_a8,local_1a0->bHasRenderTransform);
    local_88 = &local_50;
    local_80 = this->ElementList;
    FSlateDrawElement::MakeLines
              (local_80,param_1,local_88,local_90,None,param_3,true,__real_3f800000);
    local_1a8 = local_1a8 + 1;
  } while( true );
}

// DrawVerticalArrowhead @ 14d91b300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d91b359) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawVerticalArrowhead
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,int param_1,TVector2<float> param_2,
          TVector2<float> param_3,FLinearColor *param_4)

{
  code *pcVar1;
  bool bVar2;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  undefined1 auStackY_308 [32];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_2b8;
  bool local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  FGeometry *local_298;
  int local_290;
  int local_28c;
  FScriptContainerElement *local_288;
  float local_280;
  float fStack_27c;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_278;
  FScriptContainerElement *local_270;
  float local_268;
  float fStack_264;
  FScriptContainerElement *local_260;
  float local_258;
  float fStack_254;
  int local_250;
  int local_24c;
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  undefined4 local_218;
  undefined4 local_214;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  longlong local_1f8;
  longlong local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  undefined8 *local_1d0;
  FScriptContainerElement *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  longlong local_178;
  longlong local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  undefined8 *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  undefined4 local_118;
  undefined4 local_114;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  undefined8 *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_a8;
  TVector2<float>_u_0 local_a0;
  FDeprecateVector2DParameter local_98;
  TTransform2<float> *local_90;
  FSlateLayoutTransform *local_88;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_80;
  FPaintGeometry *local_78;
  FSlateWindowElementList *local_70;
  int local_68;
  FSlateLayoutTransform local_64;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_58;
  FPaintGeometry local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_308;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_2b8.AllocatorInstance);
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_2b8.AllocatorInstance);
  if (local_2b8.ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,3,&local_2b8.AllocatorInstance,local_2b8.ArrayNum,&local_2b8.ArrayMax);
  }
  local_res20 = param_3.field0_0x0._0_4_;
  local_res18 = param_2.field0_0x0._0_4_;
  local_268 = local_res18 - __real_3f000000 * local_res20;
  fStackX_1c = param_2.field0_0x0._4_4_;
  fStackX_24 = param_3.field0_0x0._4_4_;
  fStack_264 = fStackX_1c - fStackX_24;
  local_270 = (FScriptContainerElement *)&local_268;
  local_248 = local_2b8.AllocatorInstance.Data;
  local_240 = local_2b8.AllocatorInstance.Data;
  local_238 = local_2b8.AllocatorInstance.Data;
  if (local_2b8.AllocatorInstance.Data <= local_270) {
    local_230 = local_2b8.AllocatorInstance.Data;
    local_228 = local_2b8.AllocatorInstance.Data;
    local_220 = local_2b8.AllocatorInstance.Data;
    if (local_270 < local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 8) {
      local_218 = 0;
      local_214 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_1f8 = (longlong)local_2b8.ArrayNum;
      local_1f0 = (longlong)local_2b8.ArrayMax;
      local_210 = local_2b8.AllocatorInstance.Data;
      local_208 = local_2b8.AllocatorInstance.Data;
      local_200 = local_2b8.AllocatorInstance.Data;
      local_1e8 = local_2b8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
    local_2b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
  }
  local_2a4 = local_2b8.ArrayNum;
  local_1e0 = local_2b8.AllocatorInstance.Data;
  local_1d8 = local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayNum * 8;
  local_2b8.ArrayNum = local_2b8.ArrayNum + 1;
  local_1d0 = ::operator_new(8,local_1d8);
  *local_1d0 = CONCAT44(fStack_264,local_268);
  local_68 = local_2a4;
  local_258 = local_res18;
  fStack_254 = fStackX_1c;
  local_260 = (FScriptContainerElement *)&local_258;
  local_1c8 = local_2b8.AllocatorInstance.Data;
  local_1c0 = local_2b8.AllocatorInstance.Data;
  local_1b8 = local_2b8.AllocatorInstance.Data;
  if (local_2b8.AllocatorInstance.Data <= local_260) {
    local_1b0 = local_2b8.AllocatorInstance.Data;
    local_1a8 = local_2b8.AllocatorInstance.Data;
    local_1a0 = local_2b8.AllocatorInstance.Data;
    if (local_260 < local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 8) {
      local_198 = 0;
      local_194 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_178 = (longlong)local_2b8.ArrayNum;
      local_170 = (longlong)local_2b8.ArrayMax;
      local_190 = local_2b8.AllocatorInstance.Data;
      local_188 = local_2b8.AllocatorInstance.Data;
      local_180 = local_2b8.AllocatorInstance.Data;
      local_168 = local_2b8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
    local_2b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
  }
  local_2a0 = local_2b8.ArrayNum;
  local_160 = local_2b8.AllocatorInstance.Data;
  local_158 = local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayNum * 8;
  local_2b8.ArrayNum = local_2b8.ArrayNum + 1;
  local_150 = ::operator_new(8,local_158);
  *local_150 = CONCAT44(fStack_254,local_258);
  local_250 = local_2a0;
  local_280 = local_res18 + __real_3f000000 * local_res20;
  fStack_27c = fStackX_1c - fStackX_24;
  local_288 = (FScriptContainerElement *)&local_280;
  local_148 = local_2b8.AllocatorInstance.Data;
  local_140 = local_2b8.AllocatorInstance.Data;
  local_138 = local_2b8.AllocatorInstance.Data;
  if (local_2b8.AllocatorInstance.Data <= local_288) {
    local_130 = local_2b8.AllocatorInstance.Data;
    local_128 = local_2b8.AllocatorInstance.Data;
    local_120 = local_2b8.AllocatorInstance.Data;
    if (local_288 < local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 8) {
      local_118 = 0;
      local_114 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_f8 = (longlong)local_2b8.ArrayNum;
      local_f0 = (longlong)local_2b8.ArrayMax;
      local_110 = local_2b8.AllocatorInstance.Data;
      local_108 = local_2b8.AllocatorInstance.Data;
      local_100 = local_2b8.AllocatorInstance.Data;
      local_e8 = local_2b8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
    local_2b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
  }
  local_29c = local_2b8.ArrayNum;
  local_e0 = local_2b8.AllocatorInstance.Data;
  local_d8 = local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayNum * 8;
  local_2b8.ArrayNum = local_2b8.ArrayNum + 1;
  local_d0 = ::operator_new(8,local_d8);
  *local_d0 = CONCAT44(fStack_27c,local_280);
  local_24c = local_29c;
  local_278 = &local_58;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_278->AllocatorInstance);
  local_290 = local_2b8.ArrayNum;
  local_28c = local_2b8.ArrayNum;
  local_c8 = local_2b8.AllocatorInstance.Data;
  local_c0 = local_2b8.AllocatorInstance.Data;
  local_b8 = local_2b8.AllocatorInstance.Data;
  local_b0 = local_2b8.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (local_278,(TVector2<float> *)local_2b8.AllocatorInstance.Data,local_2b8.ArrayNum,0);
  local_a8 = local_278;
  local_80 = local_278;
  local_298 = this->AllottedGeometry;
  local_2a8 = local_298->bHasRenderTransform;
  local_a0._s_0 = *(TVector2<float>_u_0_s_0 *)&local_298->Size;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_98,(TVector2<float> *)&local_a0._s_0);
  local_90 = FGeometry::GetAccumulatedRenderTransform(local_298);
  local_88 = FGeometry::GetAccumulatedLayoutTransform(local_298,&local_64);
  FPaintGeometry::FPaintGeometry(&local_48,local_88,local_90,&local_98,local_2a8);
  local_78 = &local_48;
  local_70 = this->ElementList;
  FSlateDrawElement::MakeLines(local_70,param_1,local_78,local_80,None,param_4,true,__real_3f800000)
  ;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_2b8);
  return;
}

// FormatFreqString @ 14d9252d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
FAudioSpectrumPlotGridAndLabelDrawingHelper::FormatFreqString
          (FString *__return_storage_ptr__,float param_1,FFreqFormattingOptions *param_2)

{
  FString *pFVar1;
  int local_88;
  FText local_80;
  FText local_70;
  FNumberFormattingOptions local_60;
  FString *local_48;
  FString *local_40;
  FString *local_38;
  TSharedPtr<FCulture,1> local_30;
  TSharedPtr<FCulture,1> local_20 [2];
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_60);
  if (param_1 < __real_447a0000) {
    local_60.MaximumFractionalDigits = 0;
    local_60.MinimumFractionalDigits = 0;
    TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(local_20,(FNullTag *)0x0);
    FText::AsNumber(&local_70,param_1,&local_60,local_20);
    TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(local_20);
    if (param_2->bIncludeUnits == false) {
      pFVar1 = FText::ToString(&local_70);
      ::FString::FString(__return_storage_ptr__,pFVar1);
      FText::~FText(&local_70);
    }
    else {
      local_38 = FText::ToString(&local_70);
      ::FString::ConcatFC(__return_storage_ptr__,local_38,L" Hz");
      FText::~FText(&local_70);
    }
  }
  else {
    if (__real_461c4000 <= param_1) {
      local_88 = 1;
    }
    else {
      local_88 = 2;
    }
    local_60.MaximumFractionalDigits = local_88;
    if (param_2->bAlwaysDisplayMaximumFractionalDigits != false) {
      local_60.MinimumFractionalDigits = local_88;
    }
    TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(&local_30,(FNullTag *)0x0);
    FText::AsNumber(&local_80,param_1 / __real_447a0000,&local_60,&local_30);
    TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(&local_30);
    if (param_2->bIncludeUnits == false) {
      local_40 = FText::ToString(&local_80);
      ::FString::ConcatFC(__return_storage_ptr__,local_40,L" k");
      FText::~FText(&local_80);
    }
    else {
      local_48 = FText::ToString(&local_80);
      ::FString::ConcatFC(__return_storage_ptr__,local_48,L" kHz");
      FText::~FText(&local_80);
    }
  }
  return __return_storage_ptr__;
}

// FormatSoundLevelString @ 14d925680

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
FAudioSpectrumPlotGridAndLabelDrawingHelper::FormatSoundLevelString
          (FString *__return_storage_ptr__,float param_1,FSoundLevelFormattingOptions *param_2)

{
  FString *pFVar1;
  FText local_40;
  TSharedPtr<FCulture,1> local_30;
  FNumberFormattingOptions local_20;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_20);
  local_20.MinimumFractionalDigits = param_2->NumFractionalDigits;
  local_20.MaximumFractionalDigits = param_2->NumFractionalDigits;
  if (param_1 != __real_00000000) {
    local_20.AlwaysSign = true;
  }
  TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(&local_30,(FNullTag *)0x0);
  FText::AsNumber(&local_40,param_1,&local_20,&local_30);
  TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(&local_30);
  if (param_2->bIncludeUnits == false) {
    pFVar1 = FText::ToString(&local_40);
    ::FString::FString(__return_storage_ptr__,pFVar1);
    FText::~FText(&local_40);
  }
  else {
    pFVar1 = FText::ToString(&local_40);
    ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L" dB");
    FText::~FText(&local_40);
  }
  return __return_storage_ptr__;
}

// GetModifiedLabelRect @ 14d92ffa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateRect * __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::GetModifiedLabelRect
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,FSlateRect *__return_storage_ptr__,
          FSlateRect *param_1)

{
  FSlateRect::FSlateRect
            (__return_storage_ptr__,
             (float)((double)param_1->Left -
                    __real_3fe0000000000000 * (double)(this->SpaceDrawSize).field0_0x0._s_0.X),
             param_1->Top + __real_3dcccccd * (param_1->Bottom - param_1->Top),
             (float)((double)param_1->Right +
                    __real_3fe0000000000000 * (double)(this->SpaceDrawSize).field0_0x0._s_0.X),
             param_1->Bottom + __real_3dcccccd * (param_1->Top - param_1->Bottom));
  return __return_storage_ptr__;
}

// IsOverlappingPreviouslyDrawnLabel @ 14d93de90

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FAudioSpectrumPlotGridAndLabelDrawingHelper::IsOverlappingPreviouslyDrawnLabel
          (FAudioSpectrumPlotGridAndLabelDrawingHelper *this,FSlateRect *param_1)

{
  FSlateRect *pFVar1;
  FSlateRect *local_40;
  FSlateRect **local_38;
  FSlateRect *local_30;
  TArray<FSlateRect,TSizedDefaultAllocator<32>_> *local_28;
  
  local_28 = &this->DrawnLabelRects;
  local_38 = &local_40;
  local_40 = param_1;
  local_30 = param_1;
  pFVar1 = TArray<FSlateRect,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FAudioSpectrumPlotGridAndLabelDrawingHelper::IsOverlappingPreviouslyDrawnLabel_::__l2::<lambda_1>_>
                     (local_28,(<lambda_1>)param_1);
  return pFVar1 != (FSlateRect *)0x0;
}

