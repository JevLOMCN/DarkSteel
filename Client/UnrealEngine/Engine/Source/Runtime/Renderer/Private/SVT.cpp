// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator() @ 145668f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::SVT::AddStreamingDebugPass'::__l2::<lambda_1>::operator()(void *this,FCanvas *param_1)

{
  float fVar1;
  FName FVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  wchar_t *pwVar8;
  double dVar9;
  wchar_t *pwVar10;
  UFont *pUVar11;
  FText *pFVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FName *this_00;
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong *plVar23;
  undefined1 auStackY_a68 [32];
  int local_a18;
  float local_a08;
  float fStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  longlong local_9f8;
  FLinearColor_u_0 local_9e8;
  TVector2<double>_u_0 local_9d8;
  TVector2<double>_u_0 local_9c8;
  TVector2<double>_u_0 local_9b8;
  undefined8 *local_9a8;
  wchar_t *local_998;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  TVector2<double>_u_0 local_988;
  TVector2<double>_u_0 local_978;
  TVector2<double>_u_0 local_968;
  TVector2<double>_u_0 local_958;
  FString local_948;
  FText local_938;
  FText local_928;
  undefined1 local_918 [64];
  TVector<double>_u_0 local_8d8;
  undefined1 local_8c0 [88];
  undefined1 local_868 [152];
  undefined1 local_7d0 [392];
  undefined1 local_648 [152];
  TVector2<double>_u_0 local_5b0 [24];
  undefined1 local_428 [152];
  TVector2<double>_u_0 local_390 [24];
  TStringBuilderBase<wchar_t> local_208;
  wchar_t local_1e8 [128];
  ulonglong local_e8 [22];
  
  local_e8[0] = __security_cookie.value ^ (ulonglong)auStackY_a68;
  local_208.bIsDynamic = false;
  local_208.bIsExternal = false;
  local_208.Base = local_1e8;
  local_208.CurPos = local_1e8;
  local_208.End = (wchar_t *)local_e8;
  local_9a8 = this;
  TStringBuilderBase<wchar_t>::AppendfImpl
            (&local_208,
             L"Sparse Volume Texture Streaming Stats\nRequested Peak Bandwidth: %#08.2f MiB/s, Bandwidth Limit: %#08.2f MiB/s, Bandwidth Throttle Scale: %6.2f%%\n"
            );
  pUVar11 = UEngine::GetSmallFont();
  _local_a08 = local_208.Base;
  uStack_a00 = (undefined4)((longlong)local_208.CurPos - (longlong)local_208.Base >> 1);
  local_9b8._s_0.Y = (double)CONCAT44(uStack_9fc,uStack_a00);
  local_9b8._s_0.X = (double)local_208.Base;
  pFVar12 = FText::FromStringView((FText *)&local_9d8._s_0,(TStringView<wchar_t> *)&local_9b8._s_0);
  local_9c8._s_0.X = (double)___xmm_40400000000000004020000000000000;
  local_9c8._s_0.Y = _UNK_150ff7078;
  FCanvasTextItem::FCanvasTextItem
            ((FCanvasTextItem *)local_428,(TVector2<double> *)&local_9c8._s_0,pFVar12,pUVar11,
             &FLinearColor::White);
  if ((longlong *)local_9d8._s_0.X != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_9d8._s_0.X + 0x10))();
  }
  dVar7 = _UNK_150689688;
  dVar6 = ___xmm_3ff00000000000003ff0000000000000;
  local_428._72_4_ = local_428._72_4_ | 2;
  local_428._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  local_390[0]._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_390[0]._s_0.Y = _UNK_150689688;
  FCanvasTextItemBase::Draw((FCanvasTextItemBase *)local_428,param_1);
  dVar9 = __real_4022000000000000;
  pwVar8 = __real_4020000000000000;
  dVar5 = __real_402c000000000000;
  local_208.CurPos = local_208.Base;
  plVar23 = *(longlong **)this;
  local_a18 = 0;
  if (0 < (int)plVar23[1]) {
    local_9f8 = 0;
    dVar20 = __real_404e000000000000;
    do {
      uVar17 = 0;
      this_00 = (FName *)(*plVar23 + local_9f8);
      ::FName::ToString(this_00,&local_948);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_208,L"    Asset: \'%s\', Num Frames: %i\n");
      if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_948.Data.AllocatorInstance.Data);
      }
      pUVar11 = UEngine::GetSmallFont();
      local_998 = local_208.Base;
      uStack_990 = (undefined4)((longlong)local_208.CurPos - (longlong)local_208.Base >> 1);
      local_9e8._8_8_ = CONCAT44(uStack_98c,uStack_990);
      local_9e8._0_8_ = local_208.Base;
      pFVar12 = FText::FromStringView(&local_938,(TStringView<wchar_t> *)&local_9e8._s_0);
      local_988._s_0.X = (double)pwVar8;
      local_988._s_0.Y = dVar20;
      FCanvasTextItem::FCanvasTextItem
                ((FCanvasTextItem *)local_648,(TVector2<double> *)&local_988._s_0,pFVar12,pUVar11,
                 &FLinearColor::White);
      if (local_938.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_938.TextData.Reference + 0x10))();
      }
      local_648._72_4_ = local_648._72_4_ | 2;
      local_648._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
      local_5b0[0]._s_0.X = dVar6;
      local_5b0[0]._s_0.Y = dVar7;
      FCanvasTextItemBase::Draw((FCanvasTextItemBase *)local_648,param_1);
      dVar4 = _UNK_150ff7068;
      pwVar10 = ___xmm_3f8000003f0000000000000000000000;
      dVar3 = dVar20 + dVar5;
      local_208.CurPos = local_208.Base;
      uVar14 = uVar17;
      uVar16 = uVar17;
      if (0 < (int)this_00[4].ComparisonIndex.Value) {
        do {
          fVar1 = *(float *)(uVar14 + (longlong)this_00[1]);
          fStack_a04 = (FLinearColor::Green.field0_0x0._s_0.G - FLinearColor::Red.field0_0x0._s_0.G)
                       * fVar1 + FLinearColor::Red.field0_0x0._s_0.G;
          local_a08 = (FLinearColor::Green.field0_0x0._s_0.R - FLinearColor::Red.field0_0x0._s_0.R)
                      * fVar1 + FLinearColor::Red.field0_0x0._s_0.R;
          plVar23 = (longlong *)((double)(int)uVar16 * dVar9 + (double)pwVar8);
          local_978._s_0.X = (double)pwVar8;
          uStack_a00 = (FLinearColor::Green.field0_0x0._s_0.B - FLinearColor::Red.field0_0x0._s_0.B)
                       * fVar1 + FLinearColor::Red.field0_0x0._s_0.B;
          uStack_9fc = (FLinearColor::Green.field0_0x0._s_0.A - FLinearColor::Red.field0_0x0._s_0.A)
                       * fVar1 + FLinearColor::Red.field0_0x0._s_0.A;
          local_9e8._0_8_ = pwVar10;
          local_9e8._8_8_ = dVar4;
          local_978._s_0.Y =
               (double)*(float *)(uVar14 + (longlong)this_00[2]) * __real_4038000000000000;
          dVar20 = (dVar6 - (double)*(float *)(uVar14 + (longlong)this_00[2])) *
                   __real_4038000000000000;
          if (local_978._s_0.Y <= dVar6) {
            local_978._s_0.Y = dVar6;
          }
          if (__real_4037000000000000 <= dVar20) {
            dVar20 = __real_4037000000000000;
          }
          local_968._s_0.Y = dVar20 + dVar3;
          local_968._s_0.X = (double)plVar23;
          FCanvasTileItem::FCanvasTileItem
                    ((FCanvasTileItem *)local_918,(TVector2<double> *)&local_968._s_0,
                     (TVector2<double> *)&local_978._s_0,(FLinearColor *)&local_9e8._s_0);
          FCanvasTileItem::Draw((FCanvasTileItem *)local_918,param_1);
          local_958._s_0.X = (double)pwVar8;
          local_958._s_0.Y = (double)fVar1 * __real_4038000000000000;
          dVar20 = (dVar6 - (double)fVar1) * __real_4038000000000000;
          if (local_958._s_0.Y <= dVar6) {
            local_958._s_0.Y = dVar6;
          }
          if (__real_4037000000000000 <= dVar20) {
            dVar20 = __real_4037000000000000;
          }
          local_9d8._s_0.Y = dVar20 + dVar3;
          local_9d8._0_8_ = plVar23;
          FCanvasTileItem::FCanvasTileItem
                    ((FCanvasTileItem *)local_868,(TVector2<double> *)&local_9d8._s_0,
                     (TVector2<double> *)&local_958._s_0,(FLinearColor *)&local_a08);
          FCanvasTileItem::Draw((FCanvasTileItem *)local_868,param_1);
          uVar15 = (int)uVar16 + 1;
          uVar14 = uVar14 + 4;
          uVar16 = (ulonglong)uVar15;
        } while ((int)uVar15 < (int)this_00[4].ComparisonIndex.Value);
      }
      dVar20 = dVar3 + __real_403a000000000000;
      if (0 < (int)this_00[4].Number) {
        dVar4 = dVar3 + __real_4039000000000000;
        uVar14 = uVar17;
        do {
          FVar2 = this_00[3];
          auVar22._0_8_ = (double)*(float *)(uVar17 + 0x10 + (longlong)FVar2);
          auVar22._8_8_ = 0;
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (&local_208,
                     L"        Instance Key: %u, Frame: %#06.2f, Estimated Frame Rate: %#06.2f, Requested Peak Bandwidth: %#07.2f MiB/s, Allocated Bandwidth: %#07.2f MiB/s, Requested Mip: %#5.2f, Bandwidth Budget Mip: %#5.2f\n"
                    );
          pUVar11 = UEngine::GetSmallFont();
          local_9c8._0_8_ = local_208.Base;
          local_9c8._8_4_ = (int)((longlong)local_208.CurPos - (longlong)local_208.Base >> 1);
          local_9e8._0_8_ = local_208.Base;
          local_9e8._8_8_ = local_9c8._s_0.Y;
          pFVar12 = FText::FromStringView(&local_928,(TStringView<wchar_t> *)&local_9e8._s_0);
          local_9b8._s_0.X = (double)pwVar8;
          local_9b8._s_0.Y = dVar20;
          FCanvasTextItem::FCanvasTextItem
                    ((FCanvasTextItem *)local_868,(TVector2<double> *)&local_9b8._s_0,pFVar12,
                     pUVar11,&FLinearColor::White);
          if (local_928.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_928.TextData.Reference + 0x10))();
          }
          local_868._72_4_ = local_868._72_4_ | 2;
          local_868._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
          local_7d0._0_8_ = dVar6;
          local_7d0._8_8_ = dVar7;
          FCanvasTextItemBase::Draw((FCanvasTextItemBase *)local_868,param_1);
          dVar20 = dVar20 + dVar5;
          local_208.CurPos = local_208.Base;
          fVar1 = *(float *)(uVar17 + 4 + (longlong)FVar2);
          iVar13 = (int)fVar1;
          auVar18._0_8_ = (double)fVar1;
          auVar18._8_8_ = 0;
          auVar22 = roundpd(auVar22,auVar18,1);
          fVar19 = fVar1;
          if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar1)) {
            auVar21._4_4_ = fVar1;
            auVar21._0_4_ = fVar1;
            auVar21._8_8_ = 0;
            uVar15 = movmskps((int)local_208.Base,auVar21);
            fVar19 = (float)(int)(iVar13 - (uVar15 & 1));
          }
          local_8d8._s_0.Z = 0.0;
          local_8c0._16_8_ = 0.0;
          local_918._24_8_ = 0;
          local_918[0x20] = 0;
          local_918._40_8_ = 0;
          local_918._0_8_ = &___7FCanvasLineItem__6B_;
          local_8c0._24_4_ = 0;
          local_918._48_16_ = (undefined1  [16])FLinearColor::Blue.field0_0x0;
          local_918._8_8_ =
               auVar22._0_8_ * dVar9 + (double)(fVar1 - fVar19) * (double)pwVar8 + (double)pwVar8;
          local_918._16_8_ = dVar3 - dVar6;
          local_8d8._s_0.X = (double)local_918._8_8_;
          local_8d8._s_0.Y = dVar3 - dVar6;
          local_8c0._0_8_ = local_918._8_8_;
          local_8c0._8_8_ = dVar4;
          FCanvasLineItem::Draw((FCanvasLineItem *)local_918,param_1);
          local_918._0_8_ = &___7FCanvasItem__6B_;
          FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_868);
          uVar15 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar15;
          uVar17 = uVar17 + 0x1c;
        } while ((int)uVar15 < (int)this_00[4].Number);
      }
      FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_648);
      local_a18 = local_a18 + 1;
      local_9f8 = local_9f8 + 0x28;
      plVar23 = (longlong *)*local_9a8;
    } while (local_a18 < (int)plVar23[1]);
  }
  FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_428);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_208);
  return;
}

// AddStreamingDebugPass @ 145672fd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::SVT::AddStreamingDebugPass(FRDGBuilder *param_1,FSceneView *param_2,FScreenPassTexture *param_3)

{
  code *pcVar1;
  bool bVar2;
  IStreamingManager *pIVar3;
  undefined8 uVar4;
  FCanvas *this;
  undefined8 local_res20;
  FRDGEventName local_48;
  FRDGTexture *local_30;
  TIntRect<int>_u_0 local_28;
  undefined1 local_18;
  
  if (GSVTStreamingShowDebugInfo != 0) {
    pIVar3 = GetStreamingManager();
    uVar4 = (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,param_1);
    local_30 = param_3->Texture;
    local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)*(undefined8 *)&(param_3->ViewRect).field0_0x0;
    local_28._s_0.Max.field0_0x0 =
         (TIntPoint<int>)
         ((TIntPoint<int>_u_0 *)((longlong)&(param_3->ViewRect).field0_0x0 + 8))->_s_0;
    local_18 = 1;
    FRDGEventName::FRDGEventName(&local_48,1,L"SVT::StreamingDebug");
    local_res20 = uVar4;
    if ((local_30 == (FRDGTexture *)0x0) ||
       ((local_28._8_4_ == local_28._0_4_ && (local_28._12_4_ == local_28._4_4_)))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Output.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x2dd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this = FCanvas::Create(param_1,local_30,(FHitProxyConsumer *)0x0,&param_2->Family->Time,
                           param_2->FeatureLevel,param_2->Family->DebugDPIScale);
    FCanvas::SetRenderTargetRect(this,(TIntRect<int> *)&local_28._s_0);
    `UE::SVT::AddStreamingDebugPass'::__l2::<lambda_1>::operator()(&local_res20,this);
    FCanvas::Flush_RenderThread(this,param_1,false);
    if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

