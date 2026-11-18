// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 3

// FMoviePlayerWidgetRenderer @ 146c77090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FMoviePlayerWidgetRenderer * __thiscall
FMoviePlayerWidgetRenderer::FMoviePlayerWidgetRenderer
          (FMoviePlayerWidgetRenderer *this,TSharedPtr<SWindow,1> *param_1,
          TSharedPtr<SVirtualWindow,1> *param_2,FSlateRenderer *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FMoviePlayerWidgetRenderer *pFVar4;
  FHittestGrid *this_00;
  FHittestGrid *pFVar5;
  TRawPtrProxy<FHittestGrid> local_res8;
  
  this->MainWindow = param_1->Object;
  if (param_2->Object == (SVirtualWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMoviePlayerWidgetRenderer *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->VirtualRenderWindow).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->VirtualRenderWindow).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->VirtualRenderWindow).Object == (SVirtualWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMoviePlayerWidgetRenderer *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar5 = (FHittestGrid *)0x0;
  this->SlateRenderer = param_3;
  (this->HittestGrid).Object = (FHittestGrid *)0x0;
  (this->HittestGrid).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ViewportRHI).Reference = (FRHIViewport *)0x0;
  this->bIsDPIScaleEnabled = true;
  this_00 = ::operator_new(0xf8);
  if (this_00 != (FHittestGrid *)0x0) {
    pFVar5 = FHittestGrid::FHittestGrid(this_00);
  }
  local_res8.Object = pFVar5;
  TSharedPtr<FHittestGrid,1>::operator=<FHittestGrid>(&this->HittestGrid,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// DrawWindow @ 146c7b000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FMoviePlayerWidgetRenderer::DrawWindow(FMoviePlayerWidgetRenderer *this,float param_1)

{
  double dVar1;
  double dVar2;
  SVirtualWindow *pSVar3;
  FHittestGrid *this_00;
  FSlateRenderer *pFVar4;
  longlong lVar5;
  code *pcVar6;
  TVector2<float>_u_0 TVar7;
  char cVar8;
  bool bVar9;
  FSlateApplication *pFVar10;
  FDeprecateSlateVector2D FVar11;
  FDeprecateSlateVector2D *pFVar12;
  FSlateDrawBuffer *this_01;
  FSlateWindowElementList *this_02;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined4 in_XMM1_Db;
  undefined1 auStackY_1f8 [32];
  TVector2<float>_u_0 local_1b8;
  FDeprecateVector2DParameter local_1b0;
  float local_1a8;
  float fStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  float local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float local_174;
  TVector2<float>_u_0 local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  FLinearColor_u_0 local_158;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  FDeprecateVector2DParameter local_128;
  undefined8 local_11c;
  undefined8 local_110;
  TSharedRef<SWindow,1> local_108 [2];
  FSlateRect local_e8 [2];
  undefined8 local_c8;
  undefined8 local_b0;
  FPaintArgs local_a8;
  float local_78;
  float fStack_74;
  float local_70;
  TVector2<float>_u_0 local_6c;
  TVector2<float>_u_0 local_64;
  float local_5c;
  float local_58 [2];
  float local_50;
  TVector2<float>_u_0 local_4c;
  byte local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((GDynamicRHI != (FDynamicRHI *)0x0) &&
     (cVar8 = (**(code **)(GDynamicRHI->_padding_ + 0x360))
                        (GDynamicRHI,CONCAT44(in_XMM1_Db,param_1)), cVar8 != '\0')) {
    return;
  }
  pFVar10 = FSlateApplication::Get();
  fVar13 = (float)(**(code **)(*(longlong *)pFVar10 + 0x58))(pFVar10);
  if (this->bIsDPIScaleEnabled != false) {
    fVar14 = SWindow::GetDPIScaleFactor(this->MainWindow);
    fVar13 = fVar13 * fVar14;
  }
  FVar11 = SWindow::GetClientSizeInScreen((SWindow *)(this->VirtualRenderWindow).Object);
  fStack_1a4 = (__real_3f800000 / fVar13) * *(float *)((longlong)FVar11 + 4);
  local_1a8 = (__real_3f800000 / fVar13) * *(float *)FVar11;
  pFVar10 = FSlateApplication::Get();
  FSlateApplication::Tick(pFVar10,Time);
  local_44 = local_44 & 0xfe;
  local_190 = 0;
  local_c8 = 0;
  local_78 = local_1a8;
  fStack_74 = fStack_1a4;
  local_11c = 0;
  local_b0 = 0;
  uStack_19c = 0;
  local_1a0 = 0;
  local_1b0 = (FDeprecateVector2DParameter)0x0;
  local_64 = (TVector2<float>_u_0)0x0;
  local_4c = (TVector2<float>_u_0)0x0;
  local_1b8 = (TVector2<float>_u_0)0x0;
  local_6c = (TVector2<float>_u_0)0x0;
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_70 = fVar13;
  local_5c = fVar13;
  local_50 = fVar13;
  SWidget::SlatePrepass((SWidget *)(this->VirtualRenderWindow).Object,fVar13);
  local_180 = local_78;
  local_174 = fStack_74;
  local_110 = local_6c._s_0;
  TVar7._s_0 = local_110;
  uStack_17c = 0;
  uStack_178 = 0;
  local_198 = (FDeprecateVector2DParameter)((ulonglong)(uint)fStack_74 << 0x20);
  local_1b0._4_4_ = 0;
  local_1b0._0_4_ = local_78;
  local_188 = 0;
  local_1b8 = (TVector2<float>_u_0)0x0;
  local_110._0_4_ = local_6c._s_0.X;
  local_170._s_0.X = local_70 * 0.0 + (float)local_110;
  local_110._4_4_ = local_6c._s_0.Y;
  local_170._s_0.Y = local_70 * 0.0 + local_110._4_4_;
  local_168 = local_78 * local_70;
  local_164 = local_70 * 0.0;
  local_160 = local_70 * 0.0;
  local_15c = fStack_74 * local_70;
  local_110 = TVar7._s_0;
  FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_170._s_0,local_e8);
  if (((this->HittestGrid).Object == (FHittestGrid *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar3 = (this->VirtualRenderWindow).Object;
  this_00 = (this->HittestGrid).Object;
  local_1b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FDeprecateSlateVector2D *)&pSVar3->_padding_;
  if (*(float *)pFVar12 == 0.0) {
    pFVar12 = (FDeprecateSlateVector2D *)&pSVar3->_padding_;
  }
  local_1b0 = *(FDeprecateVector2DParameter *)pFVar12;
  FVar11 = SWindow::GetPositionInScreen((SWindow *)pSVar3);
  local_128 = *(FDeprecateVector2DParameter *)FVar11;
  FHittestGrid::SetHittestArea
            (this_00,&local_128,&local_1b0,(FDeprecateVector2DParameter *)&local_1b8._s_0);
  if (((this->HittestGrid).Object == (FHittestGrid *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FHittestGrid::Clear((this->HittestGrid).Object);
  pFVar4 = this->SlateRenderer;
  this_01 = (FSlateDrawBuffer *)(**(code **)(pFVar4->_padding_ + 0x10))(pFVar4);
  local_108[0].Object = (SWindow *)(this->VirtualRenderWindow).Object;
  local_108[0].SharedReferenceCount.ReferenceController =
       (this->VirtualRenderWindow).SharedReferenceCount.ReferenceController;
  if (local_108[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_108[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_02 = FSlateDrawBuffer::AddWindowElementList(this_01,local_108);
  FSlateWindowElementList::SetRenderTargetWindow(this_02,this->MainWindow);
  pFVar10 = FSlateApplication::Get();
  dVar1 = pFVar10->CurrentTime;
  dVar2 = pFVar10->LastTickTime;
  pFVar10 = FSlateApplication::Get();
  dVar15 = (double)(**(code **)(*(longlong *)pFVar10 + 0x60))(pFVar10);
  local_198._4_4_ = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  local_198._0_4_ = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  if (((this->HittestGrid).Object == (FHittestGrid *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FPaintArgs::FPaintArgs
            (&local_a8,(SWidget *)0x0,(this->HittestGrid).Object,local_198,dVar15,
             (float)(dVar1 - dVar2));
  pSVar3 = (this->VirtualRenderWindow).Object;
  local_138 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.R;
  local_158._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
  local_148 = FLinearColor::White.field0_0x0._s_0.R;
  local_130 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.B;
  local_134 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.G;
  local_12c = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.A;
  local_158._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
  local_158._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
  local_158._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
  local_144 = FLinearColor::White.field0_0x0._s_0.G;
  local_140 = FLinearColor::White.field0_0x0._s_0.B;
  local_13c = FLinearColor::White.field0_0x0._s_0.A;
  SWidget::Paint((SWidget *)pSVar3,&local_a8,(FGeometry *)&local_78,local_e8,this_02,0,
                 (FWidgetStyle *)&local_158._s_0,
                 (bool)*(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *
                        )((longlong)&pSVar3->_padding_ + 2));
  (**(code **)(this->SlateRenderer->_padding_ + 0x58))(this->SlateRenderer,this_01);
  lVar5 = pFVar4->_padding_;
  *(float *)&this_01->ViewOffset = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  *(float *)&(this_01->ViewOffset).field_0x4 =
       (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  (**(code **)(lVar5 + 0x18))(pFVar4,this_01);
  return;
}

// EnableDPIScale @ 146c7b590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FMoviePlayerWidgetRenderer::EnableDPIScale(FMoviePlayerWidgetRenderer *this,bool param_1)

{
  this->bIsDPIScaleEnabled = param_1;
  return;
}

