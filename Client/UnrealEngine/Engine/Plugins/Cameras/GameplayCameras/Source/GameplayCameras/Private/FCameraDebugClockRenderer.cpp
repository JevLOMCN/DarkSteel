// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FCameraDebugClockRenderer @ 14d58c380

FCameraDebugClockRenderer * __thiscall
UE::Cameras::Internal::FCameraDebugClockRenderer::FCameraDebugClockRenderer
          (FCameraDebugClockRenderer *this,FCanvas *param_1,FCameraDebugClockDrawParams *param_2)

{
  ITextData *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  this->Canvas = param_1;
  (this->DrawParams).ClockPosition.field0_0x0 = (param_2->ClockPosition).field0_0x0;
  (this->DrawParams).ClockSize.field0_0x0 = (param_2->ClockSize).field0_0x0;
  fVar2 = (param_2->ClockBackgroundColor).field0_0x0._s_0.G;
  fVar3 = (param_2->ClockBackgroundColor).field0_0x0._s_0.B;
  fVar4 = (param_2->ClockBackgroundColor).field0_0x0._s_0.A;
  (this->DrawParams).ClockBackgroundColor.field0_0x0._s_0.R =
       (param_2->ClockBackgroundColor).field0_0x0._s_0.R;
  (this->DrawParams).ClockBackgroundColor.field0_0x0._s_0.G = fVar2;
  (this->DrawParams).ClockBackgroundColor.field0_0x0._s_0.B = fVar3;
  (this->DrawParams).ClockBackgroundColor.field0_0x0._s_0.A = fVar4;
  (this->DrawParams).ClockName.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->ClockName).TextData.Reference;
  (this->DrawParams).ClockName.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->DrawParams).ClockName.Flags = (param_2->ClockName).Flags;
  uVar5 = *(undefined8 *)((longlong)&(param_2->ClockNameColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DrawParams).ClockNameColor.field0_0x0 =
       *(undefined8 *)&(param_2->ClockNameColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DrawParams).ClockNameColor.field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(param_2->ClockFaceColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DrawParams).ClockFaceColor.field0_0x0 =
       *(undefined8 *)&(param_2->ClockFaceColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DrawParams).ClockFaceColor.field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(param_2->ClockValueLineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DrawParams).ClockValueLineColor.field0_0x0 =
       *(undefined8 *)&(param_2->ClockValueLineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DrawParams).ClockValueLineColor.field0_0x0 + 8) = uVar5;
  return this;
}

// DrawAngleClock @ 14d59e8b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::Cameras::Internal::FCameraDebugClockRenderer::DrawAngleClock
          (FCameraDebugClockRenderer *this,double param_1)

{
  FLinearColor *pFVar1;
  double dVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  UFont *pUVar5;
  float fVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar7;
  float fVar8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_358;
  TVector2<double>_u_0 local_348;
  FText local_338;
  FFormatArgumentValue local_328;
  FCanvasItem local_308;
  double local_2c8;
  double local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  FText local_288;
  FTextFormat local_278;
  FCanvasTextItem local_268;
  
  DrawFrame(this);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_288,L"CameraDebugClock",L"CurrentValueFmt",L"{0}");
  pFVar4 = FTextFormat::FTextFormat(&local_278,pFVar3,Default);
  local_328.Type = Double;
  local_328.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_328.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_358.ArrayNum = 1;
  local_328.field1_0x8.DoubleValue = param_1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_358.AllocatorInstance,1,&local_358.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_358.AllocatorInstance.Data,&local_328,1);
  local_348._s_0.X = (double)(pFVar4->TextFormatData).Object;
  local_348._s_0.Y = (double)(pFVar4->TextFormatData).SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_348._s_0.Y != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_348._s_0.Y)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_348._s_0.Y)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_338,(FTextFormat *)&local_348._s_0,&local_358);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_358.AllocatorInstance.Data,local_358.ArrayNum);
  if ((FFormatArgumentValue *)local_358.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
  if (local_328.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_328.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar4->TextFormatData).SharedReferenceCount.ReferenceController);
  pUVar5 = UEngine::GetTinyFont();
  UFont::GetMaxCharHeight(pUVar5);
  pFVar1 = &(this->DrawParams).ClockValueLineColor;
  local_348._s_0.X =
       (double)(GGameplayCamerasDebugClockPadding +
               (this->DrawParams).ClockPosition.field0_0x0._s_0.X);
  local_348._s_0.Y =
       (double)(GGameplayCamerasDebugClockPadding +
               (this->DrawParams).ClockPosition.field0_0x0._s_0.Y);
  FCanvasTextItem::FCanvasTextItem
            (&local_268,(TVector2<double> *)&local_348._s_0,&local_338,pUVar5,pFVar1);
  FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_268);
  FCanvasTextItem::~FCanvasTextItem(&local_268);
  if (local_338.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
  }
  if (local_288.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
  }
  pUVar5 = UEngine::GetSmallFont();
  fVar6 = UFont::GetMaxCharHeight(pUVar5);
  fVar7 = (this->DrawParams).ClockSize.field0_0x0._s_0.Y;
  fVar8 = (this->DrawParams).ClockSize.field0_0x0._s_0.X;
  if (fVar7 <= fVar8) {
    fVar8 = fVar7;
  }
  dVar2 = (double)((fVar8 - GGameplayCamerasDebugClockPadding * __real_40000000) * __real_3f000000);
  fVar8 = (float)((double)GGameplayCamerasDebugClockPadding + dVar2) +
          (this->DrawParams).ClockPosition.field0_0x0._s_0.X;
  fVar7 = (float)((double)(((fVar7 - GGameplayCamerasDebugClockPadding * __real_40400000) - fVar6) *
                          __real_3f000000) + (double)GGameplayCamerasDebugClockPadding) +
          (this->DrawParams).ClockPosition.field0_0x0._s_0.Y;
  __libm_sse2_sincos_();
  local_308.StereoDepth = 0;
  local_308.BlendMode = SE_BLEND_Opaque;
  local_308.bFreezeTime = false;
  local_308.Position.field0_0x0._s_0.Y = (double)fVar7;
  local_308.BatchedElementParameters = (FBatchedElementParameters *)0x0;
  local_308._padding_ = (longlong)&___7FCanvasLineItem__6B_;
  local_298 = 0x40400000;
  local_308.Position.field0_0x0._s_0.X = (double)fVar8;
  local_2b0 = (double)((float)((double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar2) + fVar8)
  ;
  local_2b8 = 0;
  local_2a0 = 0;
  local_2a8 = (double)(fVar7 - (float)((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar2))
  ;
  local_308.Color.field0_0x0._0_8_ = *(undefined8 *)&pFVar1->field0_0x0;
  local_308.Color.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(this->DrawParams).ClockValueLineColor.field0_0x0 + 8);
  local_2c8 = local_308.Position.field0_0x0._s_0.X;
  local_2c0 = local_308.Position.field0_0x0._s_0.Y;
  FCanvas::DrawItem(this->Canvas,&local_308);
  return;
}

// DrawCurrentValue @ 14d5a0860

void __thiscall
UE::Cameras::Internal::FCameraDebugClockRenderer::DrawCurrentValue
          (FCameraDebugClockRenderer *this,FText *param_1)

{
  UFont *this_00;
  TVector2<double>_u_0 local_238;
  FCanvasTextItem local_228;
  
  this_00 = UEngine::GetTinyFont();
  UFont::GetMaxCharHeight(this_00);
  local_238._s_0.X =
       (double)(GGameplayCamerasDebugClockPadding +
               (this->DrawParams).ClockPosition.field0_0x0._s_0.X);
  local_238._s_0.Y =
       (double)(GGameplayCamerasDebugClockPadding +
               (this->DrawParams).ClockPosition.field0_0x0._s_0.Y);
  FCanvasTextItem::FCanvasTextItem
            (&local_228,(TVector2<double> *)&local_238._s_0,param_1,this_00,
             &(this->DrawParams).ClockValueLineColor);
  FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_228);
  FCanvasTextItem::~FCanvasTextItem(&local_228);
  return;
}

// DrawFrame @ 14d5a09b0

void __thiscall
UE::Cameras::Internal::FCameraDebugClockRenderer::DrawFrame(FCameraDebugClockRenderer *this)

{
  int iVar1;
  bool bVar2;
  UFont *pUVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector2<double>_u_0 local_2e8;
  TVector2<double>_u_0 local_2d8;
  undefined1 local_2c8 [24];
  undefined8 local_2b0;
  bool local_2a8;
  FBatchedElementParameters *local_2a0;
  FLinearColor_u_0 local_298;
  TVector2<double>_u_0 local_288;
  longlong local_278;
  TVector2<double>_u_0 local_270;
  TVector2<double>_u_0 local_260 [36];
  
  local_2d8._s_0.X = (double)(this->DrawParams).ClockSize.field0_0x0._s_0.X;
  local_2e8._s_0.X = (double)(this->DrawParams).ClockPosition.field0_0x0._s_0.X;
  local_2e8._s_0.Y = (double)(this->DrawParams).ClockPosition.field0_0x0._s_0.Y;
  local_2d8._s_0.Y = (double)(this->DrawParams).ClockSize.field0_0x0._s_0.Y;
  FCanvasTileItem::FCanvasTileItem
            ((FCanvasTileItem *)local_2c8,(TVector2<double> *)&local_2e8._s_0,
             (TVector2<double> *)&local_2d8._s_0,&(this->DrawParams).ClockBackgroundColor);
  local_2b0 = CONCAT44(2,(uint)local_2b0);
  FCanvas::DrawItem(this->Canvas,(FCanvasItem *)local_2c8);
  bVar2 = FText::IsEmpty(&(this->DrawParams).ClockName);
  if (!bVar2) {
    pUVar3 = UEngine::GetSmallFont();
    fVar5 = UFont::GetMaxCharHeight(pUVar3);
    local_2e8._s_0.X =
         (double)(GGameplayCamerasDebugClockPadding +
                 (this->DrawParams).ClockPosition.field0_0x0._s_0.X);
    local_2e8._s_0.Y =
         (double)((((this->DrawParams).ClockSize.field0_0x0._s_0.Y -
                   GGameplayCamerasDebugClockPadding) - fVar5) +
                 (this->DrawParams).ClockPosition.field0_0x0._s_0.Y);
    FCanvasTextItem::FCanvasTextItem
              ((FCanvasTextItem *)local_2c8,(TVector2<double> *)&local_2e8._s_0,
               &(this->DrawParams).ClockName,pUVar3,&(this->DrawParams).ClockNameColor);
    FCanvas::DrawItem(this->Canvas,(FCanvasItem *)local_2c8);
    FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_2c8);
  }
  pUVar3 = UEngine::GetSmallFont();
  fVar6 = UFont::GetMaxCharHeight(pUVar3);
  fVar5 = (this->DrawParams).ClockSize.field0_0x0._s_0.Y;
  fVar7 = (this->DrawParams).ClockSize.field0_0x0._s_0.X;
  fVar8 = fVar5;
  if (fVar7 <= fVar5) {
    fVar8 = fVar7;
  }
  fVar7 = (fVar8 - GGameplayCamerasDebugClockPadding * __real_40000000) * __real_3f000000;
  fVar9 = fVar7 + GGameplayCamerasDebugClockPadding +
          (this->DrawParams).ClockPosition.field0_0x0._s_0.X;
  fVar8 = fVar7 + fVar9;
  iVar1 = (int)fVar7 / 0x19;
  if ((int)fVar7 / 0x19 < 0x14) {
    iVar1 = 0x14;
  }
  iVar4 = 0;
  fVar6 = ((fVar5 - GGameplayCamerasDebugClockPadding * __real_40400000) - fVar6) * __real_3f000000
          + GGameplayCamerasDebugClockPadding + (this->DrawParams).ClockPosition.field0_0x0._s_0.Y;
  fVar5 = fVar6;
  if (0 < iVar1) {
    do {
      iVar4 = iVar4 + 1;
      __libm_sse2_sincosf_();
      local_278 = 0;
      local_2b0 = 0;
      local_2c8._16_8_ = (undefined8)fVar5;
      local_2a8 = false;
      local_2a0 = (FBatchedElementParameters *)0x0;
      local_2c8._0_8_ = &___7FCanvasLineItem__6B_;
      local_260[0]._8_4_ = 0;
      fVar5 = fVar6 - extraout_XMM0_Da * fVar7;
      local_2c8._8_8_ = (undefined8)fVar8;
      fVar8 = extraout_XMM0_Db * fVar7 + fVar9;
      local_270._s_0.Y = (double)fVar5;
      local_270._s_0.X = (double)fVar8;
      local_298._0_8_ = *(undefined8 *)&(this->DrawParams).ClockFaceColor.field0_0x0;
      local_298._8_8_ = *(longlong *)((longlong)&(this->DrawParams).ClockFaceColor.field0_0x0 + 8);
      local_260[0]._s_0.X = 0.0;
      local_288._s_0.X = (double)local_2c8._8_8_;
      local_288._s_0.Y = (double)local_2c8._16_8_;
      FCanvas::DrawItem(this->Canvas,(FCanvasItem *)local_2c8);
    } while (iVar4 < iVar1);
  }
  return;
}

// DrawVectorClock @ 14d5a1f60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::Cameras::Internal::FCameraDebugClockRenderer::DrawVectorClock
          (FCameraDebugClockRenderer *this,TVector2<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  UFont *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  FString local_108;
  FCanvasItem local_f8;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  float local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48 [4];
  
  DrawFrame(this);
  ::FString::PrintfImpl(&local_108,L"X=%3.3f Y=%3.3f");
  pFVar3 = FText::FromString(&local_58,&local_108);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"CameraDebugClock",L"CurrentValueFmt",L"{0}");
  pFVar5 = FTextFormat::FTextFormat(local_48,pFVar4,Default);
  pFVar3 = FText::Format<FText>(&local_78,pFVar5,pFVar3);
  DrawCurrentValue(this,pFVar3);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  this_00 = UEngine::GetSmallFont();
  fVar6 = UFont::GetMaxCharHeight(this_00);
  fVar7 = (this->DrawParams).ClockSize.field0_0x0._s_0.Y;
  fVar8 = (this->DrawParams).ClockSize.field0_0x0._s_0.X;
  if (fVar7 <= fVar8) {
    fVar8 = fVar7;
  }
  dVar1 = (double)((fVar8 - GGameplayCamerasDebugClockPadding * __real_40000000) * __real_3f000000);
  fVar8 = (float)(dVar1 + (double)GGameplayCamerasDebugClockPadding) +
          (this->DrawParams).ClockPosition.field0_0x0._s_0.X;
  fVar7 = (float)((double)(((fVar7 - GGameplayCamerasDebugClockPadding * __real_40400000) - fVar6) *
                          __real_3f000000) + (double)GGameplayCamerasDebugClockPadding) +
          (this->DrawParams).ClockPosition.field0_0x0._s_0.Y;
  dVar2 = __real_3ff0000000000000;
  if (param_2 != 0.0) {
    dVar2 = dVar1 / param_2;
  }
  local_f8.Position.field0_0x0._s_0.Y = (double)fVar7;
  local_f8.StereoDepth = 0;
  local_f8.BlendMode = SE_BLEND_Opaque;
  local_f8.bFreezeTime = false;
  local_f8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
  local_f8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
  local_f8.Position.field0_0x0._s_0.X = (double)fVar8;
  local_a8 = 0;
  local_90 = 0;
  local_a0 = (double)((float)(dVar2 * (param_1->field0_0x0)._s_0.X) + fVar8);
  local_88 = GGameplayCamerasDebugClockArrowThickness;
  local_98 = (double)(fVar7 - (float)(dVar2 * (param_1->field0_0x0)._s_0.Y));
  local_f8.Color.field0_0x0._0_8_ =
       *(undefined8 *)&(this->DrawParams).ClockValueLineColor.field0_0x0;
  local_f8.Color.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(this->DrawParams).ClockValueLineColor.field0_0x0 + 8);
  local_b8 = local_f8.Position.field0_0x0._s_0.X;
  local_b0 = local_f8.Position.field0_0x0._s_0.Y;
  FCanvas::DrawItem(this->Canvas,&local_f8);
  return;
}

// GetClockFaceParams @ 14d5a6e70

void __thiscall
UE::Cameras::Internal::FCameraDebugClockRenderer::GetClockFaceParams
          (FCameraDebugClockRenderer *this,TVector2<float> *param_1,double *param_2)

{
  TVector2<float>_u_0 TVar1;
  UFont *this_00;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  this_00 = UEngine::GetSmallFont();
  fVar2 = UFont::GetMaxCharHeight(this_00);
  fVar5 = (this->DrawParams).ClockSize.field0_0x0._s_0.Y;
  fVar4 = (this->DrawParams).ClockSize.field0_0x0._s_0.X;
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  dVar3 = (double)((fVar4 - GGameplayCamerasDebugClockPadding * __real_40000000) * __real_3f000000);
  fVar5 = ((fVar5 - GGameplayCamerasDebugClockPadding * __real_40400000) - fVar2) * __real_3f000000;
  *param_2 = dVar3;
  TVar1._s_0.Y = (float)((double)fVar5 + (double)GGameplayCamerasDebugClockPadding) +
                 (this->DrawParams).ClockPosition.field0_0x0._s_0.Y;
  TVar1._s_0.X = (float)(dVar3 + (double)GGameplayCamerasDebugClockPadding) +
                 (this->DrawParams).ClockPosition.field0_0x0._s_0.X;
  param_1->field0_0x0 = TVar1;
  return;
}

