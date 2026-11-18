// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 2

// FPreLoadSlateWidgetRenderer @ 145abf4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FPreLoadSlateWidgetRenderer * __thiscall
FPreLoadSlateWidgetRenderer::FPreLoadSlateWidgetRenderer
          (FPreLoadSlateWidgetRenderer *this,TSharedPtr<SWindow,1> *param_1,
          TSharedPtr<SVirtualWindow,1> *param_2,FSlateRenderer *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FPreLoadSlateWidgetRenderer *pFVar4;
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
      pFVar4 = (FPreLoadSlateWidgetRenderer *)(*pcVar2)();
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
      pFVar4 = (FPreLoadSlateWidgetRenderer *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar5 = (FHittestGrid *)0x0;
  this->SlateRenderer = param_3;
  (this->HittestGrid).Object = (FHittestGrid *)0x0;
  (this->HittestGrid).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ViewportRHI).Reference = (FRHIViewport *)0x0;
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

// DrawWindow @ 145ac7690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadSlateWidgetRenderer::DrawWindow(FPreLoadSlateWidgetRenderer *this,float param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  SVirtualWindow *pSVar5;
  FHittestGrid *this_00;
  FSlateRenderer *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TVector2<float>_u_0 TVar9;
  bool bVar10;
  FSlateApplication *pFVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  FDeprecateSlateVector2D FVar12;
  FDeprecateSlateVector2D *pFVar13;
  FSlateDrawBuffer *this_01;
  FSlateWindowElementList *this_02;
  double dVar14;
  undefined1 auStackY_208 [32];
  TVector2<float>_u_0 local_1c8;
  FDeprecateVector2DParameter local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float local_18c;
  TVector2<float>_u_0 local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  FLinearColor_u_0 local_170;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  FDeprecateVector2DParameter local_140;
  undefined8 local_134;
  undefined8 local_128;
  TSharedRef<SWindow,1> local_120 [2];
  FSlateRect local_100;
  FPaintArgs local_f0;
  float local_c0;
  float fStack_bc;
  float local_b8;
  TVector2<float>_u_0 local_b4;
  TVector2<float>_u_0 local_ac;
  float local_a4 [2];
  float afStack_9c [2];
  TVector2<float>_u_0 local_94;
  byte local_8c;
  undefined8 local_78;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (!GIsRequestingExit) {
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8163699829931769787>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                          ,0x45,"FSlateApplication::IsInitialized()");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      pFVar11 = FSlateApplication::Get();
      lpCriticalSection =
           (LPCRITICAL_SECTION)(**(code **)(**(longlong **)&pFVar11->field_0x60 + 0x160))();
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      FVar12 = SWindow::GetClientSizeInScreen((SWindow *)(this->VirtualRenderWindow).Object);
      fVar1 = *(float *)FVar12;
      fVar2 = *(float *)((longlong)FVar12 + 4);
      pFVar11 = FSlateApplication::Get();
      FSlateApplication::Tick(pFVar11,Time);
      local_8c = local_8c & 0xfe;
      local_1a8 = 0;
      local_78 = 0;
      local_134 = 0;
      local_60 = 0;
      local_1c0 = (FDeprecateVector2DParameter)0x0;
      local_ac = (TVector2<float>_u_0)0x0;
      local_1b8 = 0;
      local_b8 = 1.0;
      uStack_1b4 = 0;
      local_a4[0] = ___xmm_3f80000000000000000000003f800000;
      local_a4[1] = _UNK_15076b184;
      afStack_9c[0] = _UNK_15076b188;
      afStack_9c[1] = _UNK_15076b18c;
      local_94 = (TVector2<float>_u_0)0x0;
      local_1c8 = (TVector2<float>_u_0)0x0;
      local_b4 = (TVector2<float>_u_0)0x0;
      local_c0 = fVar1;
      fStack_bc = fVar2;
      SWidget::SlatePrepass((SWidget *)(this->VirtualRenderWindow).Object,__real_3f800000);
      local_198 = local_c0;
      local_18c = fStack_bc;
      local_128 = local_b4._s_0;
      TVar9._s_0 = local_128;
      uStack_194 = 0;
      uStack_190 = 0;
      local_1b0 = (FDeprecateVector2DParameter)((ulonglong)(uint)fStack_bc << 0x20);
      local_1c0._4_4_ = 0;
      local_1c0._0_4_ = local_c0;
      local_1a0 = 0;
      local_1c8 = (TVector2<float>_u_0)0x0;
      local_128._0_4_ = local_b4._s_0.X;
      local_188._s_0.X = local_b8 * 0.0 + (float)local_128;
      local_128._4_4_ = local_b4._s_0.Y;
      local_188._s_0.Y = local_b8 * 0.0 + local_128._4_4_;
      local_17c = local_b8 * 0.0;
      local_180 = local_c0 * local_b8;
      local_174 = fStack_bc * local_b8;
      local_178 = local_b8 * 0.0;
      local_128 = TVar9._s_0;
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_188._s_0,&local_100);
      if ((this->HittestGrid).Object == (FHittestGrid *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pSVar5 = (this->VirtualRenderWindow).Object;
      this_00 = (this->HittestGrid).Object;
      local_1c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pFVar13 = (FDeprecateSlateVector2D *)&pSVar5->_padding_;
      if (*(float *)pFVar13 == 0.0) {
        pFVar13 = (FDeprecateSlateVector2D *)&pSVar5->_padding_;
      }
      local_1c0 = *(FDeprecateVector2DParameter *)pFVar13;
      FVar12 = SWindow::GetPositionInScreen((SWindow *)pSVar5);
      local_140 = *(FDeprecateVector2DParameter *)FVar12;
      FHittestGrid::SetHittestArea
                (this_00,&local_140,&local_1c0,(FDeprecateVector2DParameter *)&local_1c8._s_0);
      if ((this->HittestGrid).Object == (FHittestGrid *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      FHittestGrid::Clear((this->HittestGrid).Object);
      pFVar6 = this->SlateRenderer;
      this_01 = (FSlateDrawBuffer *)(**(code **)(pFVar6->_padding_ + 0x10))(pFVar6);
      local_120[0].Object = (SWindow *)(this->VirtualRenderWindow).Object;
      local_120[0].SharedReferenceCount.ReferenceController =
           (this->VirtualRenderWindow).SharedReferenceCount.ReferenceController;
      if (local_120[0].SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_120[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_120[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
             );
        UNLOCK();
      }
      this_02 = FSlateDrawBuffer::AddWindowElementList(this_01,local_120);
      FSlateWindowElementList::SetRenderTargetWindow(this_02,this->MainWindow);
      pFVar11 = FSlateApplication::Get();
      dVar3 = pFVar11->CurrentTime;
      dVar4 = pFVar11->LastTickTime;
      pFVar11 = FSlateApplication::Get();
      dVar14 = (double)(**(code **)(*(longlong *)pFVar11 + 0x60))(pFVar11);
      local_1b0._4_4_ = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1b0._0_4_ = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      if ((this->HittestGrid).Object == (FHittestGrid *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      FPaintArgs::FPaintArgs
                (&local_f0,(SWidget *)0x0,(this->HittestGrid).Object,local_1b0,dVar14,
                 (float)(dVar3 - dVar4));
      pSVar5 = (this->VirtualRenderWindow).Object;
      local_150 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.R;
      local_170._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
      local_160 = FLinearColor::White.field0_0x0._s_0.R;
      local_148 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.B;
      local_14c = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.G;
      local_144 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.A;
      local_170._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
      local_170._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
      local_170._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
      local_15c = FLinearColor::White.field0_0x0._s_0.G;
      local_158 = FLinearColor::White.field0_0x0._s_0.B;
      local_154 = FLinearColor::White.field0_0x0._s_0.A;
      SWidget::Paint((SWidget *)pSVar5,&local_f0,(FGeometry *)&local_c0,&local_100,this_02,0,
                     (FWidgetStyle *)&local_170._s_0,
                     (bool)*(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                             *)((longlong)&pSVar5->_padding_ + 2));
      (**(code **)(this->SlateRenderer->_padding_ + 0x58))(this->SlateRenderer,this_01);
      lVar7 = pFVar6->_padding_;
      *(float *)&this_01->ViewOffset =
           (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      *(float *)&(this_01->ViewOffset).field_0x4 =
           (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      (**(code **)(lVar7 + 0x18))(pFVar6,this_01);
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}

