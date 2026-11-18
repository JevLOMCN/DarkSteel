// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// FCameraDebugGraphRenderer @ 14d58c5e0

FCameraDebugGraphRenderer * __thiscall
UE::Cameras::Internal::FCameraDebugGraphRenderer::FCameraDebugGraphRenderer
          (FCameraDebugGraphRenderer *this,FCanvas *param_1,FCameraDebugGraphDrawParams *param_2)

{
  TArray<FLinearColor,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  ITextData *pIVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  ForElementType<FLinearColor> _Dst;
  ForElementType<FLinearColor> _Src;
  undefined1 local_res8 [8];
  
  this->Canvas = param_1;
  (this->DrawParams).GraphPosition.field0_0x0 = (param_2->GraphPosition).field0_0x0;
  (this->DrawParams).GraphSize.field0_0x0 = (param_2->GraphSize).field0_0x0;
  fVar5 = (param_2->GraphBackgroundColor).field0_0x0._s_0.G;
  fVar6 = (param_2->GraphBackgroundColor).field0_0x0._s_0.B;
  fVar7 = (param_2->GraphBackgroundColor).field0_0x0._s_0.A;
  (this->DrawParams).GraphBackgroundColor.field0_0x0._s_0.R =
       (param_2->GraphBackgroundColor).field0_0x0._s_0.R;
  (this->DrawParams).GraphBackgroundColor.field0_0x0._s_0.G = fVar5;
  (this->DrawParams).GraphBackgroundColor.field0_0x0._s_0.B = fVar6;
  (this->DrawParams).GraphBackgroundColor.field0_0x0._s_0.A = fVar7;
  (this->DrawParams).GraphName.TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_2->GraphName).TextData.Reference;
  (this->DrawParams).GraphName.TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  pTVar1 = &(this->DrawParams).GraphLineColors;
  (this->DrawParams).GraphName.Flags = (param_2->GraphName).Flags;
  uVar8 = *(undefined8 *)((longlong)&(param_2->GraphNameColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DrawParams).GraphNameColor.field0_0x0 =
       *(undefined8 *)&(param_2->GraphNameColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DrawParams).GraphNameColor.field0_0x0 + 8) = uVar8;
  (this->DrawParams).HistoryTime = param_2->HistoryTime;
  (this->DrawParams).GraphLineColors.AllocatorInstance.SecondaryData =
       (ForElementType<FLinearColor>)0x0;
  _Src = (param_2->GraphLineColors).AllocatorInstance.SecondaryData;
  iVar3 = (param_2->GraphLineColors).ArrayNum;
  (this->DrawParams).GraphLineColors.ArrayNum = iVar3;
  if (_Src == (ForElementType<FLinearColor>)0x0) {
    _Src = (ForElementType<FLinearColor>)&param_2->GraphLineColors;
  }
  piVar2 = &(this->DrawParams).GraphLineColors.ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    _Dst = (this->DrawParams).GraphLineColors.AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FLinearColor>)0x0) {
      _Dst = (ForElementType<FLinearColor>)pTVar1;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// DrawEmptyFrame @ 14d5a09a0

void __thiscall
UE::Cameras::Internal::FCameraDebugGraphRenderer::DrawEmptyFrame(FCameraDebugGraphRenderer *this)

{
  bool bVar1;
  UFont *this_00;
  float fVar2;
  TVector2<double>_u_0 TStack_248;
  TVector2<double>_u_0 TStack_238;
  FCanvasTextItem FStack_228;
  
  TStack_238._s_0.X = (double)(this->DrawParams).GraphSize.field0_0x0._s_0.X;
  TStack_238._s_0.Y = (double)(this->DrawParams).GraphSize.field0_0x0._s_0.Y;
  TStack_248._s_0.X = (double)(this->DrawParams).GraphPosition.field0_0x0._s_0.X;
  TStack_248._s_0.Y = (double)(this->DrawParams).GraphPosition.field0_0x0._s_0.Y;
  FCanvasTileItem::FCanvasTileItem
            ((FCanvasTileItem *)&FStack_228,(TVector2<double> *)&TStack_248._s_0,
             (TVector2<double> *)&TStack_238._s_0,&(this->DrawParams).GraphBackgroundColor);
  FStack_228._padding_._4_4_ = 2;
  FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&FStack_228);
  bVar1 = FText::IsEmpty(&(this->DrawParams).GraphName);
  if (!bVar1) {
    this_00 = UEngine::GetSmallFont();
    fVar2 = UFont::GetMaxCharHeight(this_00);
    TStack_248._s_0.X =
         (double)(GGameplayCamerasDebugGraphPadding +
                 (this->DrawParams).GraphPosition.field0_0x0._s_0.X);
    TStack_248._s_0.Y =
         (double)((((this->DrawParams).GraphSize.field0_0x0._s_0.Y -
                   GGameplayCamerasDebugGraphPadding) - fVar2) +
                 (this->DrawParams).GraphPosition.field0_0x0._s_0.Y);
    FCanvasTextItem::FCanvasTextItem
              (&FStack_228,(TVector2<double> *)&TStack_248._s_0,&(this->DrawParams).GraphName,
               this_00,&(this->DrawParams).GraphNameColor);
    FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&FStack_228);
    FCanvasTextItem::~FCanvasTextItem(&FStack_228);
  }
  return;
}

// DrawFrame @ 14d5a0d00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::Cameras::Internal::FCameraDebugGraphRenderer::DrawFrame
          (FCameraDebugGraphRenderer *this,TArrayView<float,int> *param_1)

{
  float fVar1;
  ForElementType<FLinearColor> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UFont *this_00;
  FText *pFVar6;
  FTextFormat *pFVar7;
  ForElementType<FLinearColor> FVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_308;
  FTextFormat local_2f8;
  TVector2<double>_u_0 local_2e8;
  FText local_2d8;
  FFormatArgumentValue local_2c8;
  FText local_2a8;
  FTextFormat local_298;
  FCanvasTextItem local_288;
  
  DrawFrameImpl(this);
  this_00 = UEngine::GetTinyFont();
  fVar12 = UFont::GetMaxCharHeight(this_00);
  uVar10 = 0;
  iVar9 = param_1->ArrayNum;
  fVar13 = GGameplayCamerasDebugGraphPadding + (this->DrawParams).GraphPosition.field0_0x0._s_0.X;
  fVar14 = GGameplayCamerasDebugGraphPadding + (this->DrawParams).GraphPosition.field0_0x0._s_0.Y;
  if (0 < iVar9) {
    fVar12 = fVar12 + __real_40000000;
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar10 < (this->DrawParams).GraphLineColors.ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (this->DrawParams).GraphLineColors.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FLinearColor>)&(this->DrawParams).GraphLineColors;
      if (FVar2 != (ForElementType<FLinearColor>)0x0) {
        FVar8 = FVar2;
      }
      uVar5 = 0;
      if ((int)uVar10 < iVar9) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)((longlong)param_1->DataPtr + lVar11);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_2a8,L"CameraDebugGraph",L"CurrentValueFmt",L"{0}");
      pFVar7 = FTextFormat::FTextFormat(&local_298,pFVar6,Default);
      local_2c8.Type = Float;
      local_2c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_2c8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_308.ArrayNum = 1;
      local_2c8.field1_0x8.FloatValue = fVar1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_308.AllocatorInstance,1,&local_308.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_308.AllocatorInstance.Data,&local_2c8,1);
      local_2f8.TextFormatData.Object = (pFVar7->TextFormatData).Object;
      local_2f8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_2f8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_2f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_2d8,&local_2f8,&local_308);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_308.AllocatorInstance.Data,local_308.ArrayNum);
      if ((FFormatArgumentValue *)local_308.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_308.AllocatorInstance.Data);
      }
      if (local_2c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_2c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
      local_2e8._s_0.Y = (double)fVar14;
      local_2e8._s_0.X = (double)fVar13;
      FCanvasTextItem::FCanvasTextItem
                (&local_288,(TVector2<double> *)&local_2e8._s_0,&local_2d8,this_00,
                 (FLinearColor *)((longlong)(int)uVar10 * 0x10 + (longlong)FVar8));
      if (local_2d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
      }
      if (local_2a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
      }
      FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_288);
      fVar14 = fVar14 + fVar12;
      FCanvasTextItem::~FCanvasTextItem(&local_288);
      iVar9 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar10 < iVar9);
  }
  return;
}

// DrawFrameImpl @ 14d5a1040

void __thiscall
UE::Cameras::Internal::FCameraDebugGraphRenderer::DrawFrameImpl(FCameraDebugGraphRenderer *this)

{
  bool bVar1;
  UFont *this_00;
  float fVar2;
  TVector2<double>_u_0 local_248;
  TVector2<double>_u_0 local_238;
  FCanvasTextItem local_228;
  
  local_238._s_0.X = (double)(this->DrawParams).GraphSize.field0_0x0._s_0.X;
  local_238._s_0.Y = (double)(this->DrawParams).GraphSize.field0_0x0._s_0.Y;
  local_248._s_0.X = (double)(this->DrawParams).GraphPosition.field0_0x0._s_0.X;
  local_248._s_0.Y = (double)(this->DrawParams).GraphPosition.field0_0x0._s_0.Y;
  FCanvasTileItem::FCanvasTileItem
            ((FCanvasTileItem *)&local_228,(TVector2<double> *)&local_248._s_0,
             (TVector2<double> *)&local_238._s_0,&(this->DrawParams).GraphBackgroundColor);
  local_228._padding_._4_4_ = 2;
  FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_228);
  bVar1 = FText::IsEmpty(&(this->DrawParams).GraphName);
  if (!bVar1) {
    this_00 = UEngine::GetSmallFont();
    fVar2 = UFont::GetMaxCharHeight(this_00);
    local_248._s_0.X =
         (double)(GGameplayCamerasDebugGraphPadding +
                 (this->DrawParams).GraphPosition.field0_0x0._s_0.X);
    local_248._s_0.Y =
         (double)((((this->DrawParams).GraphSize.field0_0x0._s_0.Y -
                   GGameplayCamerasDebugGraphPadding) - fVar2) +
                 (this->DrawParams).GraphPosition.field0_0x0._s_0.Y);
    FCanvasTextItem::FCanvasTextItem
              (&local_228,(TVector2<double> *)&local_248._s_0,&(this->DrawParams).GraphName,this_00,
               &(this->DrawParams).GraphNameColor);
    FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_228);
    FCanvasTextItem::~FCanvasTextItem(&local_228);
  }
  return;
}

// DrawGraphLine @ 14d5a1170

void __thiscall
UE::Cameras::Internal::FCameraDebugGraphRenderer::DrawGraphLine
          (FCameraDebugGraphRenderer *this,FLineDrawParams *param_1,TStridedView<float,int> *param_2
          ,TStridedView<float,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  UFont *this_00;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  FCanvasItem local_158;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  
  this_00 = UEngine::GetSmallFont();
  fVar11 = UFont::GetMaxCharHeight(this_00);
  dVar15 = (double)((this->DrawParams).GraphSize.field0_0x0._s_0.X -
                   GGameplayCamerasDebugGraphPadding * __real_40000000);
  dVar14 = (double)(((this->DrawParams).GraphSize.field0_0x0._s_0.Y -
                    GGameplayCamerasDebugGraphPadding * __real_40400000) - fVar11);
  dVar5 = (double)(GGameplayCamerasDebugGraphPadding +
                  (this->DrawParams).GraphPosition.field0_0x0._s_0.X);
  fVar11 = (this->DrawParams).HistoryTime;
  dVar6 = dVar5 + dVar15;
  dVar7 = (double)(GGameplayCamerasDebugGraphPadding +
                  (this->DrawParams).GraphPosition.field0_0x0._s_0.Y) + dVar14;
  if (fVar11 <= 0.0) {
    fVar11 = GGameplayCamerasDebugGraphDefaultHistoryTime;
  }
  iVar9 = param_2->NumElements;
  fVar13 = (float)(dVar15 / (double)fVar11);
  pfVar8 = TStridedView<float,int>::GetElementPtr(param_2,iVar9 + -1);
  fVar11 = param_1->MinValue;
  fVar1 = *pfVar8;
  fVar12 = param_1->MaxValue - fVar11;
  if (fVar12 <= 0.0) {
    fVar12 = __real_3f800000;
  }
  iVar10 = param_3->NumElements;
  if (iVar9 < param_3->NumElements) {
    iVar10 = iVar9;
  }
  iVar9 = iVar10 + -1;
  fVar12 = (float)(dVar14 / (double)fVar12);
  if (0 < iVar9) {
    iVar10 = iVar10 + -2;
    do {
      pfVar8 = TStridedView<float,int>::GetElementPtr(param_2,iVar9);
      fVar2 = *pfVar8;
      pfVar8 = TStridedView<float,int>::GetElementPtr(param_2,iVar10);
      fVar3 = *pfVar8;
      pfVar8 = TStridedView<float,int>::GetElementPtr(param_3,iVar9);
      fVar4 = *pfVar8;
      pfVar8 = TStridedView<float,int>::GetElementPtr(param_3,iVar10);
      local_158.Position.field0_0x0._s_0.X = dVar6 - (double)((fVar1 - fVar2) * fVar13);
      local_158.Position.field0_0x0._s_0.Y = (double)((fVar11 - fVar4) * fVar12) + dVar7;
      local_100 = dVar6 - (double)((fVar1 - fVar3) * fVar13);
      local_f8 = (double)((fVar11 - *pfVar8) * fVar12) + dVar7;
      local_118 = local_158.Position.field0_0x0._s_0.X;
      local_110 = local_158.Position.field0_0x0._s_0.Y;
      if (local_100 < dVar5) {
        fVar11 = (float)(local_158.Position.field0_0x0._s_0.X - local_100);
        if (fVar11 <= 0.0) {
          return;
        }
        local_158.StereoDepth = 0;
        local_158.BlendMode = SE_BLEND_Opaque;
        local_158.bFreezeTime = false;
        local_158.BatchedElementParameters = (FBatchedElementParameters *)0x0;
        local_158._padding_ = (longlong)&___7FCanvasLineItem__6B_;
        local_e8 = 0;
        dVar14 = (double)(float)((dVar5 - local_100) / (double)fVar11);
        local_108 = 0;
        local_f8 = (local_158.Position.field0_0x0._s_0.Y - local_f8) * dVar14 + local_f8;
        local_f0 = 0;
        local_100 = dVar14 * (local_158.Position.field0_0x0._s_0.X - local_100) + local_100;
        local_158.Color.field0_0x0._0_8_ = *(undefined8 *)&(param_1->LineColor).field0_0x0;
        local_158.Color.field0_0x0._8_8_ =
             *(undefined8 *)((longlong)&(param_1->LineColor).field0_0x0 + 8);
        FCanvas::DrawItem(this->Canvas,&local_158);
        return;
      }
      local_158.Color.field0_0x0._0_8_ = *(undefined8 *)&(param_1->LineColor).field0_0x0;
      local_158.Color.field0_0x0._8_8_ =
           *(undefined8 *)((longlong)&(param_1->LineColor).field0_0x0 + 8);
      local_108 = 0;
      local_f0 = 0;
      local_158.StereoDepth = 0;
      local_158.BlendMode = SE_BLEND_Opaque;
      local_158.bFreezeTime = false;
      local_158.BatchedElementParameters = (FBatchedElementParameters *)0x0;
      local_158._padding_ = (longlong)&___7FCanvasLineItem__6B_;
      local_e8 = 0;
      FCanvas::DrawItem(this->Canvas,&local_158);
      iVar9 = iVar9 + -1;
      iVar10 = iVar10 + -1;
    } while (0 < iVar9);
  }
  return;
}

