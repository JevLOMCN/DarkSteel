// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// FParticlePerfStatsListener_NiagaraBaselineComparisonRender @ 149334e80

FParticlePerfStatsListener_NiagaraBaselineComparisonRender * __thiscall
FParticlePerfStatsListener_NiagaraBaselineComparisonRender::
FParticlePerfStatsListener_NiagaraBaselineComparisonRender
          (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *this)

{
  FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this,false,true,false);
  this->_padding_ = (longlong)&___7FParticlePerfStatsListener_NiagaraBaselineComparisonRender__6B_;
  this->NumFrames = 0;
  this->NumFramesRT = 0;
  *(undefined8 *)&this->CurrentStats = 0;
  *(undefined8 *)&(this->CurrentStats).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentStats).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentStats).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentStats).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentStats).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentStats).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentStats).field_0x48 = 0;
  return this;
}

// NeedsSystemStats @ 14935f8d0

bool __thiscall
FParticlePerfStatsListener_NiagaraBaselineComparisonRender::NeedsSystemStats
          (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *this)

{
  return true;
}

// NeedsWorldStats @ 14935f900

bool __thiscall
FParticlePerfStatsListener_NiagaraBaselineComparisonRender::NeedsWorldStats
          (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *this)

{
  return false;
}

// RenderStats @ 149366c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats
          (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *this,UWorld *param_1,
          FViewport *param_2,FCanvas *param_3,int param_4,int param_5,TVector<double> *param_6,
          TRotator<double> *param_7)

{
  FName FVar1;
  UNiagaraBaselineController *pUVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  longlong *plVar7;
  FBaselineReportItem *pFVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar9;
  int iVar10;
  EComparisonResult EVar11;
  int iVar12;
  UNiagaraSystem *pUVar13;
  UClass *pUVar14;
  UNiagaraEffectType *pUVar15;
  UFont *this_00;
  ulonglong uVar16;
  size_t sVar17;
  FString *pFVar18;
  UObject *pUVar19;
  FLinearColor_u_0 *pFVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>_>
  *pTVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  wchar_t *pwVar29;
  wchar_t *pwVar30;
  TStringView<wchar_t> *pTVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  FLinearColor_u_0 FVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [8];
  FString local_4a0;
  FText local_490;
  float local_480;
  int local_47c;
  int local_478;
  FLinearColor_u_0 local_468;
  float local_458;
  int local_454;
  uint local_450;
  FText local_448;
  FText local_438;
  FText local_428;
  FLinearColor_u_0 local_418;
  FLinearColor_u_0 local_408;
  FLinearColor_u_0 local_3f8;
  FLinearColor_u_0 local_3e8;
  FLinearColor_u_0 local_3d8;
  FLinearColor_u_0 local_3c8;
  FLinearColor_u_0 local_3b8;
  FLinearColor_u_0 local_3a8;
  FLinearColor_u_0 local_398;
  longlong *local_388;
  undefined1 auStack_380 [16];
  uint uStack_370;
  int iStack_36c;
  longlong local_368;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
  *pTStack_360;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
  *local_358;
  undefined2 local_350;
  FName local_348;
  FName local_340;
  FName local_338;
  FBaselineReportItem *local_330;
  LPCRITICAL_SECTION local_328;
  double local_320;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FString local_2c8;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FString local_2a8;
  FScriptContainerElement *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  FScriptContainerElement *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FString local_278;
  undefined4 local_268;
  wchar_t *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  undefined1 local_f8 [32];
  longlong local_d8;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
  *pTStack_d0;
  
  local_328 = (LPCRITICAL_SECTION)&this->_padding_;
  if (local_328 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_328);
  pTVar25 = &this->CurrentStats;
  local_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0 = 0;
  uVar28 = *(int *)&(this->CurrentStats).field_0x8 - *(int *)&(this->CurrentStats).field_0x34;
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
  }
  if (0 < (int)uVar28) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar28,&local_4b8,0,(int *)((longlong)&local_4b0 + 4));
  }
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_f8,
             (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
              *)pTVar25);
  local_350 = 0;
  stack0xfffffffffffffc88 = local_f8._16_16_;
  local_388 = (longlong *)local_f8._0_8_;
  auStack_380._0_8_ = local_f8._8_8_;
  local_368 = local_d8;
  pTStack_360 = pTStack_d0;
  local_358 = (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
               *)pTVar25;
  if (local_f8._28_4_ < *(int *)(local_f8._16_8_ + 0x18)) {
    iVar33 = 1;
    iVar10 = local_f8._28_4_;
    do {
      plVar7 = local_388;
      pUVar13 = (UNiagaraSystem *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_388 + (longlong)iVar10 * 0x20));
      if (pUVar13 != (UNiagaraSystem *)0x0) {
        pUVar14 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar24 = (int)pUVar14->_padding_;
        if ((iVar24 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
            &pUVar14->_padding_)) {
          lVar23 = *plVar7 + (longlong)iVar10 * 0x20;
          pUVar15 = UNiagaraSystem::GetEffectType(pUVar13);
          if ((0.0 < *(float *)(lVar23 + 8)) &&
             (((0.0 < *(float *)(lVar23 + 0xc) && (0.0 < *(float *)(lVar23 + 0x10))) &&
              (0.0 < *(float *)(lVar23 + 0x14))))) {
            iVar10 = (uint)local_4b0;
            if ((uint)local_4b0 == local_4b0._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&local_4b8,(int *)((longlong)&local_4b0 + 4));
            }
            local_4b0 = CONCAT44(local_4b0._4_4_,iVar10 + 1);
            pFVar26 = local_4b8.Data + (longlong)iVar10 * 0x40;
            DefaultConstructItems<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,int>
                      (pFVar26,1);
            *(UNiagaraSystem **)&pFVar26->field_0x0 = pUVar13;
            uVar4 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)(pFVar26 + 8) = *(undefined8 *)(lVar23 + 8);
            *(undefined8 *)(pFVar26 + 0x10) = uVar4;
            if (pUVar15 != (UNiagaraEffectType *)0x0) {
              EVar11 = FNiagaraPerfBaselineStats::Compare
                                 ((FNiagaraPerfBaselineStats *)(lVar23 + 8),
                                  &pUVar15->PerfBaselineStats,
                                  (FNiagaraPerfBaselineStats *)(pFVar26 + 0x18),
                                  (EComparisonResult *)(pFVar26 + 0x2c),
                                  (EComparisonResult *)(pFVar26 + 0x30),
                                  (EComparisonResult *)(pFVar26 + 0x34),
                                  (EComparisonResult *)(pFVar26 + 0x38));
              *(EComparisonResult *)(pFVar26 + 0x28) = EVar11;
            }
          }
        }
      }
      uStack_370 = uStack_370 & ~auStack_380._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_380);
      iVar10 = iStack_36c;
    } while (iStack_36c < *(int *)(auStack_380._8_8_ + 0x18));
    if (((char)local_350 != '\0') && (local_350._1_1_ != '\0')) {
      uVar28 = *(int *)&(local_358->Elements).field_0x8 - *(int *)&(local_358->Elements).field_0x34;
      if (3 < uVar28) {
        uVar22 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_268 = (undefined4)lVar23;
        iVar33 = 1 << ((byte)lVar23 & 0x1f);
      }
      if (((0 < (int)uVar28) && (local_358->HashSize < iVar33)) || (iVar33 < local_358->HashSize)) {
        local_358->HashSize = iVar33;
        TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
        ::Rehash(local_358);
      }
    }
  }
  AlgoImpl::
  IntroSortInternal<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,int,FIdentityFunctor,TDereferenceWrapper<_FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats_::__l2::FBaselineReportItem,TLess<void>_>_>
            ((FBaselineReportItem *)local_4b8.Data,(uint)local_4b0,local_res8[0],
             (TLess<void> *)local_4a8);
  this_00 = UEngine::GetSmallFont();
  if ((this_00 == (UFont *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Font != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                         ,0x3ee,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    iVar10 = (*pcVar3)();
    return iVar10;
  }
  local_480 = 0.0;
  local_458 = 0.0;
  UFont::GetCharSize(this_00,L'W',&local_480,&local_458);
  iVar33 = (int)ROUND(local_480 * __real_40c00000 + local_480 * __real_40c00000 + __real_3f000000)
           >> 1;
  iVar24 = (int)ROUND(local_480 * __real_42000000 + local_480 * __real_42000000 + __real_3f000000)
           >> 1;
  fVar34 = UFont::GetMaxCharHeight(this_00);
  fVar5 = __real_3f800000;
  iVar10 = iVar24 + 0x32;
  local_478 = iVar33 * 4;
  iVar32 = (int)(fVar34 + __real_40000000);
  uVar28 = 0;
  local_408 = FLinearColor::White.field0_0x0;
  local_320 = (double)(local_478 + iVar24 + 4);
  local_47c = iVar10;
  local_454 = iVar32;
  FCanvas::DrawTile(param_3,__real_4048000000000000,(double)(param_5 + -1),local_320,(double)iVar32,
                    0.0,0.0,__real_3f800000,__real_3f800000,&HeaderBackground,(FTexture *)0x0,true);
  dVar6 = __real_4049000000000000;
  local_1f8 = L"System Name";
  dVar36 = (double)param_5;
  uStack_1f0 = 0xb;
  local_178._12_4_ = uStack_1ec;
  local_178.Size = 0xb;
  local_178.DataPtr = L"System Name";
  FCanvas::DrawShadowedString
            (param_3,__real_4049000000000000,dVar36,&local_178,this_00,
             (FLinearColor *)&local_408._s_0,&FLinearColor::Black);
  uStack_250 = 6;
  local_258 = L"GT Avg";
  local_1e8._12_4_ = uStack_24c;
  local_1e8.Size = 6;
  local_1e8.DataPtr = L"GT Avg";
  dVar37 = (double)iVar10;
  FCanvas::DrawShadowedString
            (param_3,dVar37,dVar36,&local_1e8,this_00,(FLinearColor *)&local_408._s_0,
             &FLinearColor::Black);
  uStack_240 = 6;
  local_248 = L"GT Max";
  local_1d8._12_4_ = uStack_23c;
  local_1d8.Size = 6;
  local_1d8.DataPtr = L"GT Max";
  FCanvas::DrawShadowedString
            (param_3,(double)(iVar33 + iVar10),dVar36,&local_1d8,this_00,
             (FLinearColor *)&local_408._s_0,&FLinearColor::Black);
  uStack_230 = 6;
  local_238 = L"RT Avg";
  local_1c8._12_4_ = uStack_22c;
  local_1c8.Size = 6;
  dVar39 = (double)(iVar10 + iVar33 * 2);
  local_1c8.DataPtr = L"RT Avg";
  FCanvas::DrawShadowedString
            (param_3,dVar39,dVar36,&local_1c8,this_00,(FLinearColor *)&local_408._s_0,
             &FLinearColor::Black);
  uStack_220 = 6;
  local_228 = L"RT Max";
  local_1b8._12_4_ = uStack_21c;
  local_1b8.Size = 6;
  dVar38 = (double)(iVar10 + iVar33 * 3);
  local_1b8.DataPtr = L"RT Max";
  FCanvas::DrawShadowedString
            (param_3,dVar38,dVar36,&local_1b8,this_00,(FLinearColor *)&local_408._s_0,
             &FLinearColor::Black);
  fVar34 = __real_3b808081;
  uVar16 = (ulonglong)(int)(uint)local_4b0;
  local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar24 = param_5 + iVar32;
  local_4a0.Data.ArrayNum = 0;
  local_4a0.Data.ArrayMax = 0;
  local_330 = (FBaselineReportItem *)(local_4b8.Data + uVar16 * 0x40);
  local_450 = (uint)local_4b0;
  uVar22 = uVar16;
  FVar27.Data = local_4b8.Data;
  do {
    pFVar8 = local_330;
    if ((int)uVar16 != (int)uVar22) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<`FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats'::__l2::FBaselineReportItem,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lpCriticalSection = local_328;
    if ((FBaselineReportItem *)FVar27.Data == pFVar8) {
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      }
      if ((FBaselineReportItem *)local_4b8.Data != (FBaselineReportItem *)0x0) {
        FMemory::Free(local_4b8.Data);
      }
      LeaveCriticalSection(lpCriticalSection);
      return iVar24;
    }
    pUVar13 = ((FBaselineReportItem *)FVar27.Data)->System;
    pUVar15 = UNiagaraSystem::GetEffectType(pUVar13);
    EVar11 = ((FBaselineReportItem *)FVar27.Data)->OverallResult;
    FVar35 = FLinearColor::Green.field0_0x0;
    if ((((EVar11 != Good) && (FVar35 = FLinearColor::Yellow.field0_0x0, EVar11 != Poor)) &&
        (FVar35 = FLinearColor::Red.field0_0x0, EVar11 != Bad)) &&
       ((FVar35 = FLinearColor::Blue.field0_0x0, EVar11 != Unknown &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                            ,0xa9,L"Invalid result in GetComparisonResultColor()"),
        FVar35 = FLinearColor::Black.field0_0x0, bVar9)))) {
      pcVar3 = (code *)swi(3);
      iVar10 = (*pcVar3)();
      return iVar10;
    }
    uVar28 = uVar28 + 1;
    local_418 = FVar35;
    FCanvas::DrawTile(param_3,__real_4048000000000000,(double)(iVar24 + -1),local_320,(double)iVar32
                      ,0.0,0.0,fVar5,fVar5,BackgroundColors + (uVar28 & 1),(FTexture *)0x0,true);
    FVar1 = (FName)pUVar13->_padding_;
    if (pUVar15 == (UNiagaraEffectType *)0x0) {
      local_338 = FVar1;
      ::FName::ToString(&local_338,&local_278);
      local_3a8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
      local_3a8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
      local_3a8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
      local_3a8._s_0.A = (float)FColor::Blue.field0_0x0._3_1_ * fVar34;
      if (local_278.Data.ArrayNum == 0) {
        local_298 = (FScriptContainerElement *)0x15060d16c;
LAB_149367e8d:
        sVar17 = wcslen((wchar_t *)local_298);
        iVar12 = (int)sVar17;
      }
      else {
        iVar12 = 0;
        local_298 = local_278.Data.AllocatorInstance.Data;
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_149367e8d;
      }
      local_128._12_4_ = uStack_28c;
      local_128.Size = iVar12;
      local_128.DataPtr = (wchar_t *)local_298;
      iStack_290 = iVar12;
      FCanvas::DrawShadowedString
                (param_3,dVar6,(double)iVar24,&local_128,this_00,(FLinearColor *)&local_3a8._s_0,
                 &FLinearColor::Black);
      ::FString::Reset(&local_4a0,0);
      ::FString::AppendfImpl(&local_4a0,L"System has no Effect Type!");
      local_398._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
      local_398._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
      local_398._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
      local_398._s_0.A = (float)FColor::Blue.field0_0x0._3_1_ * fVar34;
      if (local_4a0.Data.ArrayNum == 0) {
        local_288 = (FScriptContainerElement *)0x15060d16c;
LAB_149367f80:
        sVar17 = wcslen((wchar_t *)local_288);
        iVar12 = (int)sVar17;
      }
      else {
        iVar12 = 0;
        local_288 = local_4a0.Data.AllocatorInstance.Data;
        if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_149367f80;
      }
      local_118._12_4_ = uStack_27c;
      local_118.Size = iVar12;
      local_118.DataPtr = (wchar_t *)local_288;
      iStack_280 = iVar12;
      FCanvas::DrawShadowedString
                (param_3,dVar37,(double)iVar24,&local_118,this_00,(FLinearColor *)&local_398._s_0,
                 &FLinearColor::Black);
      FVar21.Data = local_278.Data.AllocatorInstance.Data;
    }
    else {
      local_348 = FVar1;
      ::FName::ToString(&local_348,&local_2a8);
      if (local_2a8.Data.ArrayNum == 0) {
        local_318 = (FScriptContainerElement *)0x15060d16c;
LAB_14936740f:
        sVar17 = wcslen((wchar_t *)local_318);
        iVar12 = (int)sVar17;
      }
      else {
        iVar12 = 0;
        local_318 = local_2a8.Data.AllocatorInstance.Data;
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14936740f;
      }
      local_1a8._12_4_ = uStack_30c;
      local_1a8.Size = iVar12;
      dVar36 = (double)iVar24;
      local_1a8.DataPtr = (wchar_t *)local_318;
      iStack_310 = iVar12;
      FCanvas::DrawShadowedString
                (param_3,dVar6,dVar36,&local_1a8,this_00,(FLinearColor *)&local_418._s_0,
                 &FLinearColor::Black);
      if ((((pUVar15->PerfBaselineVersion).D == UNiagaraEffectType::CurrentPerfBaselineVersion.D &&
           (pUVar15->PerfBaselineVersion).C == UNiagaraEffectType::CurrentPerfBaselineVersion.C) &&
          (pUVar15->PerfBaselineVersion).B == UNiagaraEffectType::CurrentPerfBaselineVersion.B) &&
          UNiagaraEffectType::CurrentPerfBaselineVersion.A == (pUVar15->PerfBaselineVersion).A) {
        EVar11 = ((FBaselineReportItem *)FVar27.Data)->GTAvgResult;
        FVar35 = FLinearColor::Green.field0_0x0;
        if (((EVar11 != Good) && (FVar35 = FLinearColor::Yellow.field0_0x0, EVar11 != Poor)) &&
           ((FVar35 = FLinearColor::Red.field0_0x0, EVar11 != Bad &&
            ((FVar35 = FLinearColor::Blue.field0_0x0, EVar11 != Unknown &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                                 ,0xa9,L"Invalid result in GetComparisonResultColor()"),
             FVar35 = FLinearColor::Black.field0_0x0, bVar9)))))) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        EVar11 = ((FBaselineReportItem *)FVar27.Data)->GTAvgResult;
        local_468 = FVar35;
        if (EVar11 == Good) {
          pwVar29 = L"BaselineResultName_Good";
          pwVar30 = L"Good";
        }
        else if (EVar11 == Poor) {
          pwVar29 = L"BaselineResultName_Poor";
          pwVar30 = L"Poor";
        }
        else if (EVar11 == Bad) {
          pwVar29 = L"BaselineResultName_Bad";
          pwVar30 = L"Bad";
        }
        else if (EVar11 == Unknown) {
          pwVar29 = L"BaselineResultName_Unknown";
          pwVar30 = L"Unknown";
        }
        else {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                             ,0xb6,L"Invalid result in GetComparisonResultText()");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            iVar10 = (*pcVar3)();
            return iVar10;
          }
          pwVar29 = L"BaselineResultName_Invalid";
          pwVar30 = L"Invalid";
        }
        FText::AsLocalizable_Advanced_LocText
                  (&local_490,L"NiagaraPerformanceBaselines",pwVar29,pwVar30);
        pFVar18 = FText::ToString(&local_490);
        if ((pFVar18->Data).ArrayNum == 0) {
          local_308 = (FScriptContainerElement *)0x15060d16c;
LAB_1493675de:
          sVar17 = wcslen((wchar_t *)local_308);
          iVar12 = (int)sVar17;
        }
        else {
          local_308 = (pFVar18->Data).AllocatorInstance.Data;
          iVar12 = 0;
          if (local_308 != (FScriptContainerElement *)0x0) goto LAB_1493675de;
        }
        local_198._12_4_ = uStack_2fc;
        local_198.Size = iVar12;
        local_198.DataPtr = (wchar_t *)local_308;
        iStack_300 = iVar12;
        FCanvas::DrawShadowedString
                  (param_3,dVar37,dVar36,&local_198,this_00,(FLinearColor *)&local_468._s_0,
                   &FLinearColor::Black);
        EVar11 = ((FBaselineReportItem *)FVar27.Data)->GTMaxResult;
        FVar35 = FLinearColor::Green.field0_0x0;
        if ((((EVar11 != Good) && (FVar35 = FLinearColor::Yellow.field0_0x0, EVar11 != Poor)) &&
            (FVar35 = FLinearColor::Red.field0_0x0, EVar11 != Bad)) &&
           ((FVar35 = FLinearColor::Blue.field0_0x0, EVar11 != Unknown &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                                ,0xa9,L"Invalid result in GetComparisonResultColor()"),
            FVar35 = FLinearColor::Black.field0_0x0, bVar9)))) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        EVar11 = ((FBaselineReportItem *)FVar27.Data)->GTMaxResult;
        local_468 = FVar35;
        local_3f8 = FVar35;
        if (EVar11 == Good) {
          pwVar29 = L"BaselineResultName_Good";
          pwVar30 = L"Good";
        }
        else if (EVar11 == Poor) {
          pwVar29 = L"BaselineResultName_Poor";
          pwVar30 = L"Poor";
        }
        else if (EVar11 == Bad) {
          pwVar29 = L"BaselineResultName_Bad";
          pwVar30 = L"Bad";
        }
        else if (EVar11 == Unknown) {
          pwVar29 = L"BaselineResultName_Unknown";
          pwVar30 = L"Unknown";
        }
        else {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                             ,0xb6,L"Invalid result in GetComparisonResultText()");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            iVar10 = (*pcVar3)();
            return iVar10;
          }
          pwVar29 = L"BaselineResultName_Invalid";
          pwVar30 = L"Invalid";
        }
        FText::AsLocalizable_Advanced_LocText
                  (&local_448,L"NiagaraPerformanceBaselines",pwVar29,pwVar30);
        FText::operator=(&local_490,&local_448);
        if (local_448.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
        }
        pFVar18 = FText::ToString(&local_490);
        if ((pFVar18->Data).ArrayNum == 0) {
          local_2f8 = (FScriptContainerElement *)0x15060d16c;
LAB_14936777e:
          sVar17 = wcslen((wchar_t *)local_2f8);
          iVar12 = (int)sVar17;
        }
        else {
          local_2f8 = (pFVar18->Data).AllocatorInstance.Data;
          iVar12 = 0;
          if (local_2f8 != (FScriptContainerElement *)0x0) goto LAB_14936777e;
        }
        local_188._12_4_ = uStack_2ec;
        local_188.Size = iVar12;
        local_188.DataPtr = (wchar_t *)local_2f8;
        iStack_2f0 = iVar12;
        FCanvas::DrawShadowedString
                  (param_3,(double)(iVar33 + iVar10),dVar36,&local_188,this_00,
                   (FLinearColor *)&local_468._s_0,&FLinearColor::Black);
        EVar11 = ((FBaselineReportItem *)FVar27.Data)->RTAvgResult;
        FVar35 = FLinearColor::Green.field0_0x0;
        if (((EVar11 != Good) && (FVar35 = FLinearColor::Yellow.field0_0x0, EVar11 != Poor)) &&
           ((FVar35 = FLinearColor::Red.field0_0x0, EVar11 != Bad &&
            ((FVar35 = FLinearColor::Blue.field0_0x0, EVar11 != Unknown &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                                 ,0xa9,L"Invalid result in GetComparisonResultColor()"),
             FVar35 = FLinearColor::Black.field0_0x0, bVar9)))))) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        EVar11 = ((FBaselineReportItem *)FVar27.Data)->RTAvgResult;
        local_468 = FVar35;
        local_3e8 = FVar35;
        if (EVar11 == Good) {
          pwVar29 = L"BaselineResultName_Good";
          pwVar30 = L"Good";
        }
        else if (EVar11 == Poor) {
          pwVar29 = L"BaselineResultName_Poor";
          pwVar30 = L"Poor";
        }
        else if (EVar11 == Bad) {
          pwVar29 = L"BaselineResultName_Bad";
          pwVar30 = L"Bad";
        }
        else if (EVar11 == Unknown) {
          pwVar29 = L"BaselineResultName_Unknown";
          pwVar30 = L"Unknown";
        }
        else {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                             ,0xb6,L"Invalid result in GetComparisonResultText()");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            iVar10 = (*pcVar3)();
            return iVar10;
          }
          pwVar29 = L"BaselineResultName_Invalid";
          pwVar30 = L"Invalid";
        }
        FText::AsLocalizable_Advanced_LocText
                  (&local_438,L"NiagaraPerformanceBaselines",pwVar29,pwVar30);
        FText::operator=(&local_490,&local_438);
        if (local_438.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
        }
        pFVar18 = FText::ToString(&local_490);
        if ((pFVar18->Data).ArrayNum == 0) {
          local_2e8 = (FScriptContainerElement *)0x15060d16c;
LAB_14936791e:
          sVar17 = wcslen((wchar_t *)local_2e8);
          iVar12 = (int)sVar17;
        }
        else {
          local_2e8 = (pFVar18->Data).AllocatorInstance.Data;
          iVar12 = 0;
          if (local_2e8 != (FScriptContainerElement *)0x0) goto LAB_14936791e;
        }
        local_108._12_4_ = uStack_2dc;
        local_108.Size = iVar12;
        local_108.DataPtr = (wchar_t *)local_2e8;
        iStack_2e0 = iVar12;
        FCanvas::DrawShadowedString
                  (param_3,dVar39,dVar36,&local_108,this_00,(FLinearColor *)&local_468._s_0,
                   &FLinearColor::Black);
        EVar11 = ((FBaselineReportItem *)FVar27.Data)->RTMaxResult;
        FVar35 = FLinearColor::Green.field0_0x0;
        if ((((EVar11 != Good) && (FVar35 = FLinearColor::Yellow.field0_0x0, EVar11 != Poor)) &&
            (FVar35 = FLinearColor::Red.field0_0x0, EVar11 != Bad)) &&
           ((FVar35 = FLinearColor::Blue.field0_0x0, EVar11 != Unknown &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                                ,0xa9,L"Invalid result in GetComparisonResultColor()"),
            FVar35 = FLinearColor::Black.field0_0x0, bVar9)))) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        EVar11 = ((FBaselineReportItem *)FVar27.Data)->RTMaxResult;
        local_468 = FVar35;
        local_3d8 = FVar35;
        if (EVar11 == Good) {
          pwVar29 = L"BaselineResultName_Good";
          pwVar30 = L"Good";
        }
        else if (EVar11 == Poor) {
          pwVar29 = L"BaselineResultName_Poor";
          pwVar30 = L"Poor";
        }
        else if (EVar11 == Bad) {
          pwVar29 = L"BaselineResultName_Bad";
          pwVar30 = L"Bad";
        }
        else if (EVar11 == Unknown) {
          pwVar29 = L"BaselineResultName_Unknown";
          pwVar30 = L"Unknown";
        }
        else {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                             ,0xb6,L"Invalid result in GetComparisonResultText()");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            iVar10 = (*pcVar3)();
            return iVar10;
          }
          pwVar29 = L"BaselineResultName_Invalid";
          pwVar30 = L"Invalid";
        }
        FText::AsLocalizable_Advanced_LocText
                  (&local_428,L"NiagaraPerformanceBaselines",pwVar29,pwVar30);
        FText::operator=(&local_490,&local_428);
        if (local_428.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
        }
        pFVar18 = FText::ToString(&local_490);
        if ((pFVar18->Data).ArrayNum == 0) {
          local_2d8 = (FScriptContainerElement *)0x15060d16c;
LAB_149367abe:
          sVar17 = wcslen((wchar_t *)local_2d8);
          iVar12 = (int)sVar17;
        }
        else {
          local_2d8 = (pFVar18->Data).AllocatorInstance.Data;
          iVar12 = 0;
          if (local_2d8 != (FScriptContainerElement *)0x0) goto LAB_149367abe;
        }
        local_168._12_4_ = uStack_2cc;
        local_168.Size = iVar12;
        local_168.DataPtr = (wchar_t *)local_2d8;
        iStack_2d0 = iVar12;
        FCanvas::DrawShadowedString
                  (param_3,dVar38,dVar36,&local_168,this_00,(FLinearColor *)&local_468._s_0,
                   &FLinearColor::Black);
        pUVar2 = (pUVar15->PerformanceBaselineController).field0_0x0.DebugPtr;
        if (pUVar2 != (UNiagaraBaselineController *)0x0) {
          pUVar19 = TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar2->System);
          if (pUVar19 == (UObject *)0x0) {
            if (*(longlong *)&(pUVar2->System).SoftObjectPtr.field_0x8 != 0) {
              FSoftObjectPath::TryLoad
                        ((FSoftObjectPath *)&(pUVar2->System).SoftObjectPtr.field_0x8,
                         (FUObjectSerializeContext *)0x0);
              pUVar19 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar2->System);
              goto LAB_149367b47;
            }
LAB_149367c24:
            uStack_200 = 0x18;
            pTVar31 = &local_148;
            local_3b8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
            local_3b8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
            local_3b8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
            local_208 = L"Missing Baseline System!";
            iVar12 = local_47c + local_478;
            local_3b8._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * fVar34;
            pFVar20 = &local_3b8;
            local_148._12_4_ = uStack_1fc;
            local_148.Size = 0x18;
            local_148.DataPtr = L"Missing Baseline System!";
          }
          else {
LAB_149367b47:
            if (pUVar19 == (UObject *)0x0) goto LAB_149367c24;
            pUVar14 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
            iVar12 = (int)pUVar14->_padding_;
            if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar12) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
                &pUVar14->_padding_)) goto LAB_149367c24;
            if ((pUVar19[2].field_0x20 & 1) != 0) goto LAB_149367cd7;
            uStack_210 = 0x1b;
            pTVar31 = &local_158;
            local_3c8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
            local_3c8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
            local_3c8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
            local_218 = L"Base System Dynamic Bounds!";
            iVar12 = local_47c + local_478;
            local_3c8._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * fVar34;
            pFVar20 = &local_3c8;
            local_158._12_4_ = uStack_20c;
            local_158.Size = 0x1b;
            local_158.DataPtr = L"Base System Dynamic Bounds!";
          }
          FCanvas::DrawShadowedString
                    (param_3,(double)iVar12,dVar36,pTVar31,this_00,(FLinearColor *)&pFVar20->_s_0,
                     &FLinearColor::Black);
        }
LAB_149367cd7:
        FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
        if (local_490.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_490.TextData.Reference + 0x10))();
          FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
        }
      }
      else {
        ::FString::Reset(&local_4a0,0);
        if ((pUVar15->PerformanceBaselineController).field0_0x0.DebugPtr ==
            (UNiagaraBaselineController *)0x0) {
          local_340 = (FName)pUVar15->_padding_;
          ::FName::ToString(&local_340,&local_2c8);
          ::FString::AppendfImpl(&local_4a0,L"No perf baseline controller for FXType: %s");
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
        }
        else {
          ::FString::AppendChars(&local_4a0,L"Baseline is invalid.",0x14);
        }
        if (local_4a0.Data.ArrayNum == 0) {
          local_2b8 = (FScriptContainerElement *)0x15060d16c;
LAB_149367da1:
          sVar17 = wcslen((wchar_t *)local_2b8);
          iVar12 = (int)sVar17;
        }
        else {
          iVar12 = 0;
          local_2b8 = local_4a0.Data.AllocatorInstance.Data;
          if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_149367da1;
        }
        local_138._12_4_ = uStack_2ac;
        local_138.Size = iVar12;
        local_138.DataPtr = (wchar_t *)local_2b8;
        iStack_2b0 = iVar12;
        FCanvas::DrawShadowedString
                  (param_3,dVar37,dVar36,&local_138,this_00,(FLinearColor *)&local_418._s_0,
                   &FLinearColor::Black);
        FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
      }
    }
    if (FVar21.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar21.Data);
    }
    iVar24 = iVar24 + local_454;
    uVar16 = local_4b0 & 0xffffffff;
    FVar27.Data = FVar27.Data + 0x40;
    uVar22 = (ulonglong)local_450;
  } while( true );
}

// Tick @ 149370a70

bool __thiscall
FParticlePerfStatsListener_NiagaraBaselineComparisonRender::Tick
          (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *this)

{
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>_>
  *this_00;
  FWeakObjectPtr *this_01;
  uint uVar1;
  int iVar2;
  FWeakObjectPtr this_02;
  undefined1 *puVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  uint local_res18;
  int local_res20 [2];
  FWeakObjectPtr local_f8;
  longlong *local_f0;
  int iStack_e8;
  uint uStack_e4;
  longlong *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  int local_bc;
  UObject *local_b8;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr *local_a0;
  TBitArray<FDefaultBitArrayAllocator> *local_98;
  LPCRITICAL_SECTION local_90;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  
  local_res10 = FParticlePerfStatsListener_GatherAll::Tick
                          ((FParticlePerfStatsListener_GatherAll *)this);
  this->NumFrames = this->NumFrames + 1;
  if (GPerfTestFrames < this->NumFrames) {
    local_90 = (LPCRITICAL_SECTION)&this->_padding_;
    this->NumFrames = 0;
    if (local_90 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_90);
    local_f0 = &this->_padding_;
    iStack_e8 = 0;
    iVar2 = (int)this->_padding_;
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
    local_d0 = 0;
    uStack_e4 = 1;
    iStack_d4 = 0;
    if (iVar2 != 0) {
      plVar16 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar16 = (longlong *)pTVar18;
      }
      uVar13 = (uint)*plVar16;
      while (uVar13 == 0) {
        iStack_e8 = iStack_e8 + 1;
        local_d0 = local_d0 + 0x20;
        iStack_d4 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_149370b82;
        uVar13 = *(uint *)((longlong)plVar16 + (longlong)iStack_e8 * 4);
      }
      uStack_e4 = ~(uVar13 - 1) & uVar13;
      uVar11 = (ulonglong)uStack_e4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_c0 = (int)lVar15;
      iStack_d4 = local_c0 + -1 + local_d0;
      if (iVar2 < iStack_d4) {
        iStack_d4 = iVar2;
      }
    }
LAB_149370b82:
    uVar13 = (uint)this->_padding_;
    iStack_c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    uVar19 = uVar13 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uStack_e4,iStack_e8);
    uStack_d8 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_d4;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_80._28_4_ = iStack_d4;
    TStack_80.BaseBitIndex = local_d0;
    uStack_60 = CONCAT44(uStack_c4,iStack_c8);
    local_res18 = uVar13;
    local_e0 = (longlong *)pTVar18;
    iStack_cc = iStack_d4;
    local_98 = pTVar18;
    local_88 = local_f0;
    TStack_80.Array = pTVar18;
    if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    dVar6 = __real_412e848000000000;
    uVar1 = (uint)this->_padding_;
    uVar5 = local_res18;
    if (uVar13 != uVar1) {
      plVar16 = (longlong *)pTVar18;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar16 = (longlong *)this->_padding_;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        iVar14 = iVar14 + 1;
        uVar19 = uVar19 + 0x20;
        local_res18 = uVar1;
        uVar5 = uVar1;
        if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 < iVar14)
        goto LAB_149370ca0;
        uVar13 = *(uint *)((longlong)plVar16 + (longlong)iVar14 * 4);
      }
      uVar11 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_bc = (int)lVar15;
      local_res18 = local_bc + -1 + uVar19;
      uVar5 = local_res18;
      if ((int)uVar1 < (int)local_res18) {
        local_res18 = uVar1;
        uVar5 = uVar1;
      }
    }
LAB_149370ca0:
    while( true ) {
      plVar16 = local_88;
      if ((int)local_88[1] - *(int *)((longlong)local_88 + 0x34) != (int)uStack_60) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_80.CurrentBitIndex == uVar5) && (TStack_80.Array == pTVar18)) &&
         (plVar16 == &this->_padding_)) break;
      this_01 = (FWeakObjectPtr *)(*plVar16 + (longlong)TStack_80.CurrentBitIndex * 0x18);
      pUVar9 = FWeakObjectPtr::Get(this_01);
      if (pUVar9 != (UObject *)0x0) {
        pUVar10 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar2 = (int)pUVar10->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar10->_padding_)) {
          this_02 = this_01[1];
          if ((this_02 == (FWeakObjectPtr)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stats",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                                 ,0x378,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          this_00 = &this->CurrentStats;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          local_f8.ObjectIndex = 0;
          local_f8.ObjectSerialNumber = 0;
          local_b8 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_b8);
          uVar13 = local_f8.ObjectSerialNumber ^ local_f8.ObjectIndex;
          if (*(int *)&(this->CurrentStats).field_0x8 != *(int *)&(this->CurrentStats).field_0x34) {
            puVar3 = *(undefined1 **)&(this->CurrentStats).field_0x40;
            puVar17 = &(this->CurrentStats).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar17 = puVar3;
            }
            for (iVar2 = *(int *)(puVar17 +
                                 (ulonglong)(*(int *)&(this->CurrentStats).field_0x48 - 1U & uVar13)
                                 * 4); iVar2 != -1;
                iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0))
            {
              local_a8 = *(FWeakObjectPtr *)
                          ((longlong)iVar2 * 0x20 + *(longlong *)&this_00->field_0x0);
              local_b0 = local_f8;
              bVar7 = TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>::
                      UEOpEquals<UFXSystemAsset_const_,bool>
                                ((TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_a8,
                                 (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_b0);
              if (bVar7) {
                if ((iVar2 != -1) &&
                   (lVar15 = (longlong)iVar2 * 0x20 + *(longlong *)&this_00->field_0x0, lVar15 != 0)
                   ) goto LAB_149370e5d;
                break;
              }
            }
          }
          local_a0 = &local_f8;
          TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
                      *)this_00,(uint)local_res20,
                     (TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&> *)
                     (ulonglong)uVar13,(bool *)&local_a0);
          lVar15 = (longlong)local_res20[0] * 0x20 + *(longlong *)&this_00->field_0x0;
LAB_149370e5d:
          if (*(longlong *)((longlong)this_02 + 200) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = (ulonglong)
                     (*(longlong *)((longlong)this_02 + 0xe8) +
                      *(longlong *)((longlong)this_02 + 0xf0) +
                      *(longlong *)((longlong)this_02 + 0xf8) +
                      *(longlong *)((longlong)this_02 + 0xe0) +
                      *(longlong *)((longlong)this_02 + 0xd0) +
                     *(longlong *)((longlong)this_02 + 0xd8)) /
                     *(ulonglong *)((longlong)this_02 + 200);
          }
          uVar13 = 5;
          *(float *)(lVar15 + 8) =
               (float)((double)uVar11 * FGenericPlatformTime::SecondsPerCycle64 * dVar6);
          if (*(uint *)this_02 < 10) {
            uVar13 = *(uint *)this_02 >> 1;
          }
          uVar12 = FAccumulatedParticlePerfStats_GT::GetPerInstanceMaxCycles
                             ((FAccumulatedParticlePerfStats_GT *)this_02,uVar13);
          *(float *)(lVar15 + 0x10) =
               (float)((double)uVar12 * FGenericPlatformTime::SecondsPerCycle64 * dVar6);
          FAccumulatedParticlePerfStats::ResetGT((FAccumulatedParticlePerfStats *)this_02);
          pTVar18 = local_98;
        }
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    LeaveCriticalSection(local_90);
  }
  return (bool)local_res10;
}

// TickRT @ 149373100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticlePerfStatsListener_NiagaraBaselineComparisonRender::TickRT
          (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *this)

{
  FWeakObjectPtr *this_00;
  uint uVar1;
  FWeakObjectPtr this_01;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  FWeakObjectPtr local_e0;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  UObject *local_a0;
  FWeakObjectPtr local_98;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  LPCRITICAL_SECTION local_88;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FParticlePerfStatsListener_GatherAll::TickRT((FParticlePerfStatsListener_GatherAll *)this);
  this->NumFramesRT = this->NumFramesRT + 1;
  if (GPerfTestFrames < this->NumFramesRT) {
    local_88 = (LPCRITICAL_SECTION)&this->_padding_;
    this->NumFramesRT = 0;
    if (local_88 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_88);
    local_d8 = &this->_padding_;
    iStack_d0 = 0;
    iVar5 = (int)this->_padding_;
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
    local_b8 = 0;
    uStack_cc = 1;
    iStack_bc = 0;
    if (iVar5 != 0) {
      plVar12 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar12 = (longlong *)pTVar15;
      }
      uVar10 = (uint)*plVar12;
      while (uVar10 == 0) {
        iStack_d0 = iStack_d0 + 1;
        local_b8 = local_b8 + 0x20;
        iStack_bc = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_149373223;
        uVar10 = *(uint *)((longlong)plVar12 + (longlong)iStack_d0 * 4);
      }
      uStack_cc = ~(uVar10 - 1) & uVar10;
      uVar8 = (ulonglong)uStack_cc * 2 + 1;
      lVar14 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_a8 = (int)lVar14;
      iStack_bc = local_a8 + -1 + local_b8;
      if (iVar5 < iStack_bc) {
        iStack_bc = iVar5;
      }
    }
LAB_149373223:
    uVar10 = (uint)this->_padding_;
    iStack_b0 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    uVar13 = uVar10 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_cc,iStack_d0);
    uStack_c0 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_bc;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_78._28_4_ = iStack_bc;
    TStack_78.BaseBitIndex = local_b8;
    uStack_58 = CONCAT44(uStack_ac,iStack_b0);
    local_c8 = (longlong *)pTVar15;
    iStack_b4 = iStack_bc;
    local_90 = pTVar15;
    local_80 = local_d8;
    TStack_78.Array = pTVar15;
    if ((((int)uVar10 < 0) || (iVar5 < (int)uVar10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar3 = __real_412e848000000000;
    uVar1 = (uint)this->_padding_;
    if (uVar10 != uVar1) {
      plVar12 = (longlong *)pTVar15;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar12 = (longlong *)this->_padding_;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)plVar12 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        iVar11 = iVar11 + 1;
        uVar13 = uVar13 + 0x20;
        uVar10 = uVar1;
        if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 < iVar11)
        goto LAB_14937332f;
        uVar10 = *(uint *)((longlong)plVar12 + (longlong)iVar11 * 4);
      }
      uVar8 = (ulonglong)(~(uVar10 - 1) & uVar10) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_a4 = (int)lVar14;
      uVar10 = local_a4 + -1 + uVar13;
      if ((int)uVar1 < (int)uVar10) {
        uVar10 = uVar1;
      }
    }
LAB_14937332f:
    while( true ) {
      plVar12 = local_80;
      if ((int)local_80[1] - *(int *)((longlong)local_80 + 0x34) != (int)uStack_58) {
        local_e8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (((TStack_78.CurrentBitIndex == uVar10) && (TStack_78.Array == pTVar15)) &&
         (plVar12 == &this->_padding_)) break;
      this_00 = (FWeakObjectPtr *)(*plVar12 + (longlong)TStack_78.CurrentBitIndex * 0x18);
      pUVar6 = FWeakObjectPtr::Get(this_00);
      if (pUVar6 != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar5 = (int)pUVar7->_padding_;
        if ((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar7->_padding_)) {
          this_01 = this_00[1];
          if ((this_01 == (FWeakObjectPtr)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stats",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                                 ,0x39f,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          lVar14 = 0;
          local_e0.ObjectIndex = 0;
          local_e0.ObjectSerialNumber = 0;
          local_a0 = pUVar6;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_a0);
          local_98 = local_e0;
          iVar5 = TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                            ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
                              *)&this->CurrentStats,
                             local_e0.ObjectSerialNumber ^ local_e0.ObjectIndex,
                             (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_98);
          if (((iVar5 == -1) ||
              (lVar14 = (longlong)iVar5 * 0x20 + *(longlong *)&this->CurrentStats, lVar14 == 0)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar4 = IsInGameThread();
          if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<392709136413884568>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                 ,0x98,"IsInRenderingThread()"), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar8 = 0;
          if (*(ulonglong *)((longlong)this_01 + 0x108) != 0) {
            uVar8 = (ulonglong)
                    (*(longlong *)((longlong)this_01 + 0x118) +
                    *(longlong *)((longlong)this_01 + 0x110)) /
                    *(ulonglong *)((longlong)this_01 + 0x108);
          }
          uVar13 = 5;
          *(float *)(lVar14 + 0xc) =
               (float)((double)uVar8 * FGenericPlatformTime::SecondsPerCycle64 * dVar3);
          bVar4 = IsInGameThread();
          if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<392709136413884568>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                 ,0x98,"IsInRenderingThread()"), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(uint *)((longlong)this_01 + 0x100) < 10) {
            bVar4 = IsInGameThread();
            if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
               (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<392709136413884568>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                   ,0x98,"IsInRenderingThread()"), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar13 = *(uint *)((longlong)this_01 + 0x100) >> 1;
          }
          bVar4 = IsInGameThread();
          if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<392709136413884568>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                 ,0x98,"IsInRenderingThread()"), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = FAccumulatedParticlePerfStats_RT::GetPerInstanceMaxCycles
                            ((FAccumulatedParticlePerfStats_RT *)((longlong)this_01 + 0x100),uVar13)
          ;
          *(float *)(lVar14 + 0x14) =
               (float)((double)uVar9 * FGenericPlatformTime::SecondsPerCycle64 * dVar3);
          FAccumulatedParticlePerfStats::ResetRT((FAccumulatedParticlePerfStats *)this_01);
          pTVar15 = local_90;
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    LeaveCriticalSection(local_88);
  }
  return;
}

