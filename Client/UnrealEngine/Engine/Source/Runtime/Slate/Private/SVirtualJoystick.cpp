// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 18

// AddControl @ 1428d09b0

void __thiscall SVirtualJoystick::AddControl(SVirtualJoystick *this,FControlInfo *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISlateBrushSource *pIVar3;
  FKeyDetails *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  double dVar6;
  int iVar7;
  ForElementType<SVirtualJoystick::FControlData> FVar8;
  undefined1 *puVar9;
  
  iVar7 = (this->Controls).ArrayNum;
  piVar1 = &(this->Controls).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<SVirtualJoystick::FControlData>_>
                      (0x138,8,&(this->Controls).AllocatorInstance,piVar1);
  }
  (this->Controls).ArrayNum = iVar7 + 1;
  FVar8 = (this->Controls).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<SVirtualJoystick::FControlData>)0x0) {
    FVar8 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
  }
  puVar9 = (undefined1 *)((longlong)iVar7 * 0x138 + (longlong)FVar8);
  DefaultConstructItems<SVirtualJoystick::FControlData,int>(puVar9,1);
  *puVar9 = param_1->bTreatAsButton;
  pTVar2 = (param_1->Image1).SharedReferenceCount.ReferenceController;
  pIVar3 = (param_1->Image1).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(puVar9 + 0x10);
  *(ISlateBrushSource **)(puVar9 + 8) = pIVar3;
  *(TReferenceControllerBase<1> **)(puVar9 + 0x10) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar2 = (param_1->Image2).SharedReferenceCount.ReferenceController;
  pIVar3 = (param_1->Image2).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(puVar9 + 0x20);
  *(ISlateBrushSource **)(puVar9 + 0x18) = pIVar3;
  *(TReferenceControllerBase<1> **)(puVar9 + 0x20) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  dVar6 = (param_1->Center).field0_0x0._s_0.Y;
  *(double *)(puVar9 + 0x28) = (param_1->Center).field0_0x0._s_0.X;
  *(double *)(puVar9 + 0x30) = dVar6;
  dVar6 = (param_1->VisualSize).field0_0x0._s_0.Y;
  *(double *)(puVar9 + 0x38) = (param_1->VisualSize).field0_0x0._s_0.X;
  *(double *)(puVar9 + 0x40) = dVar6;
  dVar6 = (param_1->ThumbSize).field0_0x0._s_0.Y;
  *(double *)(puVar9 + 0x48) = (param_1->ThumbSize).field0_0x0._s_0.X;
  *(double *)(puVar9 + 0x50) = dVar6;
  dVar6 = (param_1->InteractionSize).field0_0x0._s_0.Y;
  *(double *)(puVar9 + 0x58) = (param_1->InteractionSize).field0_0x0._s_0.X;
  *(double *)(puVar9 + 0x60) = dVar6;
  dVar6 = (param_1->InputScale).field0_0x0._s_0.Y;
  *(double *)(puVar9 + 0x68) = (param_1->InputScale).field0_0x0._s_0.X;
  *(double *)(puVar9 + 0x70) = dVar6;
  *(FName *)(puVar9 + 0x78) = (param_1->MainInputKey).KeyName;
  pTVar2 = (param_1->MainInputKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->MainInputKey).KeyDetails.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(puVar9 + 0x88);
  *(FKeyDetails **)(puVar9 + 0x80) = pFVar4;
  *(TReferenceControllerBase<1> **)(puVar9 + 0x88) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(FName *)(puVar9 + 0x90) = (param_1->AltInputKey).KeyName;
  pTVar2 = (param_1->AltInputKey).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->AltInputKey).KeyDetails.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(puVar9 + 0xa0);
  *(FKeyDetails **)(puVar9 + 0x98) = pFVar4;
  *(TReferenceControllerBase<1> **)(puVar9 + 0xa0) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// AlignBoxIntoScreen @ 1428d2230

void __cdecl
SVirtualJoystick::AlignBoxIntoScreen
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = __real_3fe0000000000000;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if ((dVar1 < (param_3->field0_0x0)._s_0.X || dVar1 == (param_3->field0_0x0)._s_0.X) &&
     ((param_2->field0_0x0)._s_0.Y <= (param_3->field0_0x0)._s_0.Y)) {
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar1 = dVar1 * __real_3fe0000000000000;
    if (dVar2 - dVar1 < 0.0) {
      (param_1->field0_0x0)._s_0.X = dVar1;
      dVar2 = dVar1;
    }
    dVar1 = (param_3->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.X * dVar4;
    if (dVar1 < dVar3 + dVar2) {
      (param_1->field0_0x0)._s_0.X = dVar1 - dVar3;
    }
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Y * dVar4;
    if (dVar1 - dVar2 < 0.0) {
      (param_1->field0_0x0)._s_0.Y = dVar2;
      dVar1 = dVar2;
    }
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.Y * dVar4;
    if (dVar2 < dVar4 + dVar1) {
      (param_1->field0_0x0)._s_0.Y = dVar2 - dVar4;
    }
  }
  return;
}

// ClearControls @ 1428db590

void __thiscall SVirtualJoystick::ClearControls(SVirtualJoystick *this)

{
  int *piVar1;
  ForElementType<SVirtualJoystick::FControlData> FVar2;
  
  FVar2 = (this->Controls).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<SVirtualJoystick::FControlData>)0x0) {
    FVar2 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
  }
  DestructItems<SVirtualJoystick::FControlData,int>((FControlData *)FVar2,(this->Controls).ArrayNum)
  ;
  piVar1 = &(this->Controls).ArrayMax;
  (this->Controls).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<SVirtualJoystick::FControlData>_>
              (0x138,8,0,&(this->Controls).AllocatorInstance,0,piVar1);
  }
  return;
}

// ComputeDesiredSize @ 1428e1e40

TVector2<double> * __thiscall
SVirtualJoystick::ComputeDesiredSize
          (SVirtualJoystick *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// ComputeThumbPosition @ 1428e2770

TVector2<double> * __thiscall
SVirtualJoystick::ComputeThumbPosition
          (SVirtualJoystick *this,TVector2<double> *__return_storage_ptr__,int param_1,
          TVector2<double> *param_2,float *param_3,float *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  TVector2<double> *pTVar6;
  ForElementType<SVirtualJoystick::FControlData> FVar7;
  longlong lVar8;
  undefined8 extraout_XMM0_Qa;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = 0.0;
  fVar11 = 0.0;
  uVar5 = 0;
  if (param_1 < (this->Controls).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TVector2<double> *)(*pcVar1)();
    return pTVar6;
  }
  FVar7 = (this->Controls).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<SVirtualJoystick::FControlData>)0x0) {
    FVar7 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
  }
  lVar8 = (longlong)param_1 * 0x138;
  dVar3 = (param_2->field0_0x0)._s_0.X - *(double *)((uchar *)((longlong)FVar7 + 0xb8) + lVar8);
  dVar2 = (param_2->field0_0x0)._s_0.Y - *(double *)((uchar *)((longlong)FVar7 + 0xc0) + lVar8);
  if ((dVar3 != 0.0) || (dVar2 != 0.0)) {
    fVar11 = (float)(dVar3 * dVar3 + dVar2 * dVar2);
    FGenericPlatformMath::Atan2(dVar2,dVar3);
    __libm_sse2_sincosf_();
    fVar9 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
    fVar10 = (float)((__real_4000000000000000 /
                     *(double *)((uchar *)((longlong)FVar7 + 0xd8) + lVar8)) * (double)fVar9);
    fVar12 = (float)((__real_4000000000000000 /
                     *(double *)((uchar *)((longlong)FVar7 + 0xe0) + lVar8)) *
                    (double)(float)extraout_XMM0_Qa);
    fVar10 = fVar12 * fVar12 + fVar10 * fVar10;
    fVar12 = __real_3f800000 / fVar10;
    if (fVar12 < fVar11) {
      fVar10 = __real_3f800000 / SQRT(fVar10);
      dVar3 = (double)(fVar10 * fVar9);
      dVar2 = (double)(fVar10 * (float)extraout_XMM0_Qa);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  if (param_3 != (float *)0x0) {
    *param_3 = fVar11;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar12;
  }
  return __return_storage_ptr__;
}

// Construct @ 14290c0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SVirtualJoystick::Construct(SVirtualJoystick *this,FArguments *param_1)

{
  code *pcVar1;
  GenericApplication *pGVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  this->bVisible = 1;
  this->bPreventReCenter = 0;
  FSlateApplication::Get();
  FVar3 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
  pGVar2 = FSlateApplicationBase::PlatformApplication.Object;
  if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)
               ->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pGVar2 == (GenericApplication *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>::
  AddSP<SVirtualJoystick>
            ((TMulticastDelegateRegistration<void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>
              *)&pGVar2->OnDisplayMetricsChangedEvent,(SVirtualJoystick *)&stack0x00000008,
             (pmf_2438976d *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// HandleDisplayMetricsChanged @ 14294ca70

void __thiscall
SVirtualJoystick::HandleDisplayMetricsChanged(SVirtualJoystick *this,FDisplayMetrics *param_1)

{
  ForElementType<SVirtualJoystick::FControlData> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<SVirtualJoystick::FControlData> FVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->Controls).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Controls).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->Controls).AllocatorInstance.SecondaryData;
      FVar5 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
      if (FVar1 != (ForElementType<SVirtualJoystick::FControlData>)0x0) {
        FVar5 = FVar1;
      }
      uVar6 = uVar6 + 1;
      *(undefined1 *)(lVar7 + 0x131 + (longlong)FVar5) = 0;
      lVar7 = lVar7 + 0x138;
    } while ((int)uVar6 < (this->Controls).ArrayNum);
  }
  return;
}

// HandleTouch @ 14294e850

bool __thiscall
SVirtualJoystick::HandleTouch
          (SVirtualJoystick *this,int param_1,TVector2<double> *param_2,TVector2<double> *param_3)

{
  TArray<SVirtualJoystick::FControlData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TVector2<double> *pTVar7;
  ForElementType<SVirtualJoystick::FControlData> FVar8;
  longlong lVar9;
  ForElementType<SVirtualJoystick::FControlData> FVar10;
  uint uVar11;
  TVector2<double>_u_0 local_58;
  TVector2<double> local_48;
  
  pTVar1 = &this->Controls;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->Controls).ArrayNum) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar10 = (this->Controls).AllocatorInstance.SecondaryData;
  lVar9 = (longlong)param_1 * 0x138;
  if (FVar10 == (ForElementType<SVirtualJoystick::FControlData>)0x0) {
    FVar10 = (ForElementType<SVirtualJoystick::FControlData>)pTVar1;
  }
  pTVar7 = ComputeThumbPosition(this,&local_48,param_1,param_2,(float *)0x0,(float *)0x0);
  dVar2 = (pTVar7->field0_0x0)._s_0.Y;
  *(double *)((uchar *)((longlong)FVar10 + 0xa8) + lVar9) = (pTVar7->field0_0x0)._s_0.X;
  *(double *)((uchar *)((longlong)FVar10 + 0xa8) + lVar9 + 8) = dVar2;
  uVar6 = 0;
  if (param_1 < (this->Controls).ArrayNum) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar8 = (this->Controls).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<SVirtualJoystick::FControlData>)0x0) {
    FVar8 = (ForElementType<SVirtualJoystick::FControlData>)pTVar1;
  }
  local_58._s_0.X =
       *(double *)((uchar *)((longlong)FVar10 + 0xa8) + lVar9) +
       *(double *)((uchar *)((longlong)FVar8 + 0xb8) + lVar9);
  local_58._s_0.Y =
       *(double *)((uchar *)((longlong)FVar8 + 0xc0) + lVar9) +
       *(double *)((uchar *)((longlong)FVar10 + 0xb0) + lVar9);
  AlignBoxIntoScreen((TVector2<double> *)&local_58._s_0,
                     (TVector2<double> *)(lVar9 + 0xe8 + (longlong)FVar10),param_3);
  uVar6 = 0;
  if (param_1 < (this->Controls).ArrayNum) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar8 = (this->Controls).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<SVirtualJoystick::FControlData>)0x0) {
    FVar8 = (ForElementType<SVirtualJoystick::FControlData>)pTVar1;
  }
  dVar2 = *(double *)((uchar *)((longlong)FVar8 + 0xc0) + lVar9);
  *(double *)((uchar *)((longlong)FVar10 + 0xa8) + lVar9) =
       local_58._s_0.X - *(double *)((uchar *)((longlong)FVar8 + 0xb8) + lVar9);
  *(double *)((uchar *)((longlong)FVar10 + 0xb0) + lVar9) = local_58._s_0.Y - dVar2;
  return true;
}

// OnPaint @ 1429816a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SVirtualJoystick::OnPaint
          (SVirtualJoystick *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  ForElementType<SVirtualJoystick::FControlData> FVar5;
  longlong *plVar6;
  TVector2<float>_u_0_s_0 TVar7;
  code *pcVar8;
  double dVar9;
  float afVar10 [2];
  float afVar11 [2];
  bool bVar12;
  uint uVar13;
  int iVar14;
  FSlateBrush *pFVar15;
  ForElementType<SVirtualJoystick::FControlData> FVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_1f8 [32];
  float local_16c;
  float fStack_168;
  float local_160;
  float fStack_15c;
  undefined1 local_158 [16];
  TTransform2<float> local_148;
  TTransform2<float> local_130;
  TTransform2<float> local_118;
  TTransform2<float> local_100;
  TVector2<float>_u_0 local_e8;
  float local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  float local_cc [2];
  float afStack_c4 [2];
  TVector2<float>_u_0 local_bc;
  byte local_b4;
  TVector2<float>_u_0 local_b0;
  float local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  float local_94 [2];
  float afStack_8c [2];
  TVector2<float>_u_0 local_84;
  byte local_7c;
  ulonglong local_78;
  
  afVar11 = _UNK_15076b188;
  afVar10 = ___xmm_3f80000000000000000000003f800000;
  dVar9 = __real_3fe0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (this->bVisible != 0) {
    local_158._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
    uVar18 = 0;
    local_158._8_4_ =
         (undefined4)*(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
    local_158._12_4_ = this->CurrentOpacity;
    if (0 < (this->Controls).ArrayNum) {
      lVar17 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar18 < (this->Controls).ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          iVar14 = (*pcVar8)();
          return iVar14;
        }
        FVar5 = (this->Controls).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
        if (FVar5 != (ForElementType<SVirtualJoystick::FControlData>)0x0) {
          FVar16 = FVar5;
        }
        plVar6 = *(longlong **)(lVar17 + 0x18 + (longlong)FVar16);
        if (plVar6 != (longlong *)0x0) {
          pFVar15 = (FSlateBrush *)(**(code **)(*plVar6 + 8))();
          dVar2 = *(double *)(lVar17 + 0xd8 + (longlong)FVar16);
          dVar3 = *(double *)(lVar17 + 0xe0 + (longlong)FVar16);
          TVar7 = (param_2->AbsolutePosition).field0_0x0._s_0;
          fVar1 = param_2->Scale;
          local_148.M.M[0] = afVar10;
          local_148.M.M[1] = afVar11;
          fVar19 = (float)(*(double *)(lVar17 + (longlong)FVar16 + 0xb8) - dVar2 * dVar9);
          fVar20 = (float)(*(double *)(lVar17 + (longlong)FVar16 + 0xc0) - dVar3 * dVar9);
          local_148.Trans.field0_0x0._s_0.Y = fVar20;
          local_148.Trans.field0_0x0._s_0.X = fVar19;
          local_16c = TVar7.X;
          fStack_168 = TVar7.Y;
          Concatenate<TTransform2<float>_>
                    (&local_130,&local_148,&param_2->AccumulatedRenderTransform);
          local_e8._s_0.Y = fVar20 * fVar1 + fStack_168;
          local_e8._s_0.X = fVar19 * fVar1 + local_16c;
          local_d4 = CONCAT44((float)dVar3,(float)dVar2);
          local_b4 = param_2->bHasRenderTransform * '\x02' | local_b4 & 0xfc;
          local_dc = 0;
          local_cc[0] = local_130.M.M[0][0];
          local_cc[1] = local_130.M.M[0][1];
          afStack_c4[0] = local_130.M.M[1][0];
          afStack_c4[1] = local_130.M.M[1][1];
          local_bc = local_130.Trans.field0_0x0;
          local_e0 = fVar1;
          FSlateDrawElement::MakeBox
                    (param_4,param_5,(FPaintGeometry *)&local_e8._s_0,pFVar15,None,
                     (FLinearColor *)local_158);
          param_5 = param_5 + 1;
        }
        plVar6 = *(longlong **)(lVar17 + 8 + (longlong)FVar16);
        if (plVar6 != (longlong *)0x0) {
          pFVar15 = (FSlateBrush *)(**(code **)(*plVar6 + 8))();
          dVar2 = *(double *)(lVar17 + 0xe8 + (longlong)FVar16);
          dVar3 = *(double *)(lVar17 + 0xf0 + (longlong)FVar16);
          local_118.M.M[0] = afVar10;
          local_118.M.M[1] = afVar11;
          TVar7 = (param_2->AbsolutePosition).field0_0x0._s_0;
          fVar1 = param_2->Scale;
          fVar19 = (float)((*(double *)(lVar17 + 0xa8 + (longlong)FVar16) +
                           *(double *)(lVar17 + (longlong)FVar16 + 0xb8)) - dVar2 * dVar9);
          fVar20 = (float)((*(double *)(lVar17 + 0xb0 + (longlong)FVar16) +
                           *(double *)(lVar17 + (longlong)FVar16 + 0xc0)) - dVar3 * dVar9);
          local_118.Trans.field0_0x0._s_0.Y = fVar20;
          local_118.Trans.field0_0x0._s_0.X = fVar19;
          local_160 = TVar7.X;
          fStack_15c = TVar7.Y;
          Concatenate<TTransform2<float>_>
                    (&local_100,&local_118,&param_2->AccumulatedRenderTransform);
          local_b0._s_0.Y = fVar20 * fVar1 + fStack_15c;
          local_b0._s_0.X = fVar19 * fVar1 + local_160;
          local_9c = CONCAT44((float)dVar3,(float)dVar2);
          local_7c = param_2->bHasRenderTransform * '\x02' | local_7c & 0xfc;
          local_a4 = 0;
          local_84 = local_100.Trans.field0_0x0;
          local_94[0] = local_100.M.M[0][0];
          local_94[1] = local_100.M.M[0][1];
          afStack_8c[0] = local_100.M.M[1][0];
          afStack_8c[1] = local_100.M.M[1][1];
          local_a8 = fVar1;
          FSlateDrawElement::MakeBox
                    (param_4,param_5,(FPaintGeometry *)&local_b0._s_0,pFVar15,None,
                     (FLinearColor *)local_158);
          param_5 = param_5 + 1;
        }
        uVar18 = uVar18 + 1;
        lVar17 = lVar17 + 0x138;
      } while ((int)uVar18 < (this->Controls).ArrayNum);
    }
  }
  return param_5;
}

// OnTouchEnded @ 142982fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SVirtualJoystick::OnTouchEnded
          (SVirtualJoystick *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<SVirtualJoystick::FControlData> FVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  uint uVar7;
  FReply *pFVar8;
  ForElementType<SVirtualJoystick::FControlData> FVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FReply local_d8;
  
  uVar11 = 0;
  uVar12 = uVar11;
  if (0 < (this->Controls).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < (this->Controls).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FReply *)(*pcVar4)();
        return pFVar8;
      }
      FVar3 = (this->Controls).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
      if (FVar3 != (ForElementType<SVirtualJoystick::FControlData>)0x0) {
        FVar9 = FVar3;
      }
      if (*(uint *)(uVar12 + 0x118 + (longlong)FVar9) == param_2->PointerIndex) {
        *(undefined8 *)(uVar12 + 0xa8 + (longlong)FVar9) = 0;
        *(undefined8 *)(uVar12 + 0xb0 + (longlong)FVar9) = 0;
        *(undefined4 *)(uVar12 + 0x118 + (longlong)FVar9) = 0xffffffff;
        *(undefined1 *)(uVar12 + 0x130 + (longlong)FVar9) = 1;
        if (*(char *)(uVar12 + 0x132 + (longlong)FVar9) == '\0') {
          FReply::FReply(&local_d8,true);
          FVar5.ReferenceController = local_d8.MouseCaptor.WeakReferenceCount.ReferenceController;
          local_d8.MouseCaptor.Object = (SWidget *)0x0;
          local_d8.MouseCaptor.WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1)
              ;
            }
          }
          local_d8.bUseHighPrecisionMouse = 0;
          local_d8.bReleaseMouseCapture = 1;
          FReply::FReply(__return_storage_ptr__,&local_d8);
          FReply::~FReply(&local_d8);
          return __return_storage_ptr__;
        }
        *(undefined1 *)(uVar12 + 0x132 + (longlong)FVar9) = 0;
        break;
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0x138;
    } while ((int)(uVar10 + 1) < (this->Controls).ArrayNum);
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 142983340

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SVirtualJoystick::OnTouchMoved
          (SVirtualJoystick *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  ForElementType<SVirtualJoystick::FControlData> FVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TTransform2<float> *pTVar6;
  FReply *pFVar7;
  ForElementType<SVirtualJoystick::FControlData> FVar8;
  uint uVar9;
  longlong lVar10;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  TTransform2<float> local_58;
  
  pTVar6 = Inverse<TTransform2<float>_>(&local_58,&param_1->AccumulatedRenderTransform);
  uVar9 = 0;
  fStack_84 = SUB84(param_2->ScreenSpacePosition,4);
  local_88 = SUB84(param_2->ScreenSpacePosition,0);
  local_68 = (double)(fStack_84 * (pTVar6->M).M[1][0] + local_88 * (pTVar6->M).M[0][0] +
                     (pTVar6->Trans).field0_0x0._s_0.X);
  local_60 = (double)(local_88 * (pTVar6->M).M[0][1] + fStack_84 * (pTVar6->M).M[1][1] +
                     (pTVar6->Trans).field0_0x0._s_0.Y);
  if (0 < (this->Controls).ArrayNum) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->Controls).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar2)();
          return pFVar7;
        }
      }
      FVar1 = (this->Controls).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
      if (FVar1 != (ForElementType<SVirtualJoystick::FControlData>)0x0) {
        FVar8 = FVar1;
      }
      if (*(uint *)(lVar10 + 0x118 + (longlong)FVar8) == param_2->PointerIndex) {
        if (*(char *)(lVar10 + 0x132 + (longlong)FVar8) != '\0') break;
        local_80 = SUB84(param_1->Size,0);
        fStack_7c = SUB84(param_1->Size,4);
        local_78 = (double)local_80;
        local_70 = (double)fStack_7c;
        cVar4 = (**(code **)(this->_padding_ + 0x250))(this,uVar9,&local_68,&local_78);
        if (cVar4 != '\0') {
          bVar3 = true;
          goto LAB_1429834d2;
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x138;
    } while ((int)uVar9 < (this->Controls).ArrayNum);
  }
  bVar3 = false;
LAB_1429834d2:
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 142983690

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SVirtualJoystick::OnTouchStarted
          (SVirtualJoystick *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  double *pdVar1;
  ForElementType<SVirtualJoystick::FControlData> FVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TTransform2<float> *pTVar10;
  FReply *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ForElementType<SVirtualJoystick::FControlData> FVar13;
  longlong lVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_198;
  float fStack_194;
  double local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 local_178;
  TSharedRef<SWidget,1> local_170;
  double local_160;
  double local_158;
  TSharedRef<SWidget,1> local_150;
  TTransform2<float> local_140;
  FReply local_128;
  
  pTVar10 = Inverse<TTransform2<float>_>(&local_140,&param_1->AccumulatedRenderTransform);
  dVar6 = __real_3fe0000000000000;
  uVar15 = 0;
  fStack_194 = SUB84(param_2->ScreenSpacePosition,4);
  local_198 = SUB84(param_2->ScreenSpacePosition,0);
  dVar16 = (double)(fStack_194 * (pTVar10->M).M[1][0] + local_198 * (pTVar10->M).M[0][0] +
                   (pTVar10->Trans).field0_0x0._s_0.X);
  dVar17 = (double)(local_198 * (pTVar10->M).M[0][1] + fStack_194 * (pTVar10->M).M[1][1] +
                   (pTVar10->Trans).field0_0x0._s_0.Y);
  local_190 = dVar16;
  dStack_188 = dVar17;
  if (0 < (this->Controls).ArrayNum) {
    lVar14 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar15 < (this->Controls).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         dVar16 = local_190, dVar17 = dStack_188, bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FReply *)(*pcVar5)();
        return pFVar11;
      }
      FVar2 = (this->Controls).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
      if (FVar2 != (ForElementType<SVirtualJoystick::FControlData>)0x0) {
        FVar13 = FVar2;
      }
      if (*(int *)((longlong)FVar13 + 0x118 + lVar14) == -1) {
        dVar20 = *(double *)((longlong)FVar13 + 200 + lVar14);
        dVar18 = *(double *)((longlong)FVar13 + 0xf8 + lVar14) * dVar6;
        if ((dVar20 - dVar18 <= dVar16) && (dVar16 <= dVar20 + dVar18)) {
          dVar20 = *(double *)((longlong)FVar13 + 0xd0 + lVar14);
          dVar18 = *(double *)((longlong)FVar13 + 0x100 + lVar14) * dVar6;
          if ((dVar20 - dVar18 <= dVar17) && (dVar17 <= dVar20 + dVar18)) {
            local_180 = param_1->Size;
            dVar20 = *(double *)((longlong)FVar13 + 0xd8 + lVar14);
            dVar19 = (double)(float)local_180;
            dVar18 = (double)local_180._4_4_;
            if ((dVar20 <= dVar19) && (*(double *)((longlong)FVar13 + 0xe0 + lVar14) <= dVar18)) {
              dVar20 = dVar20 * dVar6;
              if (dVar16 - dVar20 < 0.0) {
                dVar16 = dVar20;
                local_190 = dVar20;
              }
              dVar20 = *(double *)((longlong)FVar13 + 0xd8 + lVar14) * dVar6;
              if (dVar19 < dVar20 + dVar16) {
                local_190 = dVar19 - dVar20;
              }
              dVar16 = *(double *)((longlong)FVar13 + 0xe0 + lVar14) * dVar6;
              if (dVar17 - dVar16 < 0.0) {
                dVar17 = dVar16;
                dStack_188 = dVar16;
              }
              dVar16 = *(double *)((longlong)FVar13 + 0xe0 + lVar14) * dVar6;
              if (dVar18 < dVar16 + dVar17) {
                dStack_188 = dVar18 - dVar16;
              }
            }
            *(uint *)((longlong)FVar13 + 0x118 + lVar14) = param_2->PointerIndex;
            if (this->ActivationDelay != 0.0) {
              *(undefined1 *)((longlong)FVar13 + 0x132 + lVar14) = 1;
              *(undefined4 *)((longlong)FVar13 + 0x11c + lVar14) = 0;
              pdVar1 = (double *)((longlong)FVar13 + 0x120 + lVar14);
              *pdVar1 = local_190;
              pdVar1[1] = dStack_188;
              break;
            }
            this->CurrentOpacity = this->ActiveOpacity;
            if (this->bPreventReCenter == 0) {
              pdVar1 = (double *)((longlong)FVar13 + 0xb8 + lVar14);
              *pdVar1 = local_190;
              pdVar1[1] = dStack_188;
            }
            local_178 = param_1->Size;
            local_160 = (double)(float)local_178;
            local_158 = (double)local_178._4_4_;
            cVar8 = (**(code **)(this->_padding_ + 0x250))(this,uVar15,&local_190,&local_160);
            dVar16 = local_190;
            dVar17 = dStack_188;
            if (cVar8 != '\0') {
              FReply::FReply(&local_128,true);
              pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                                  ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_150);
              pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
              pSVar4 = pTVar12->Object;
              if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_150.SharedReferenceCount.ReferenceController);
              }
              else {
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_150.SharedReferenceCount.ReferenceController);
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_170.Object = pSVar4;
              local_170.SharedReferenceCount.ReferenceController = pTVar3;
              pFVar11 = FReply::CaptureMouse(&local_128,&local_170);
              FReply::FReply(__return_storage_ptr__,pFVar11);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              FReply::~FReply(&local_128);
              return __return_storage_ptr__;
            }
          }
        }
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x138;
    } while ((int)uVar15 < (this->Controls).ArrayNum);
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// SetControls @ 14298f450

void __thiscall
SVirtualJoystick::SetControls
          (SVirtualJoystick *this,
          TArray<SVirtualJoystick::FControlInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<SVirtualJoystick::FControlData> FVar3;
  FControlInfo *pFVar4;
  FControlInfo *pFVar5;
  undefined1 local_res8 [8];
  
  FVar3 = (this->Controls).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<SVirtualJoystick::FControlData>)0x0) {
    FVar3 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
  }
  DestructItems<SVirtualJoystick::FControlData,int>((FControlData *)FVar3,(this->Controls).ArrayNum)
  ;
  piVar1 = &(this->Controls).ArrayMax;
  (this->Controls).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<SVirtualJoystick::FControlData>_>
              (0x138,8,0,&(this->Controls).AllocatorInstance,0,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar4 = (FControlInfo *)(param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<SVirtualJoystick::FControlInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    AddControl(this,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  return;
}

// SetGlobalParameters @ 142990aa0

void __thiscall
SVirtualJoystick::SetGlobalParameters
          (SVirtualJoystick *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,bool param_6,float param_7)

{
  this->bPreventReCenter = 0;
  *(uint *)&this->field_0x4b4 = *(uint *)&this->field_0x4b4 | (uint)param_6 << 2;
  this->InactiveOpacity = param_2;
  this->TimeUntilReset = param_4;
  this->ActiveOpacity = param_1;
  this->TimeUntilDeactive = param_3;
  this->ActivationDelay = param_5;
  this->StartupDelay = param_7;
  if (0.0 < param_7) {
    this->State = State_WaitForStart;
  }
  return;
}

// SetJoystickVisibility @ 142992da0

void __thiscall
SVirtualJoystick::SetJoystickVisibility(SVirtualJoystick *this,bool param_1,bool param_2)

{
  TAttribute<EVisibility> local_28;
  
  if (!param_2) {
    if (param_1) {
      if ((this->State == State_Active) || (this->State == State_CountingDownToInactive)) {
        this->CurrentOpacity = this->ActiveOpacity;
      }
      else {
        this->CurrentOpacity = this->InactiveOpacity;
      }
    }
    else {
      this->CurrentOpacity = 0.0;
    }
  }
  this->bVisible = 0;
  *(uint *)&this->field_0x4b4 = *(uint *)&this->field_0x4b4 | (uint)param_1;
  local_28.Value = EVisibility::HitTestInvisible;
  if (param_1 != 0) {
    local_28.Value = EVisibility::Visible;
  }
  local_28.bIsSet = true;
  local_28.Getter._16_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)this,&local_28);
  return;
}

// ShouldDisplayTouchInterface @ 1429a0a30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl SVirtualJoystick::ShouldDisplayTouchInterface(void)

{
  bool bVar1;
  FSlateApplication *this;
  bool local_res8 [32];
  
  local_res8[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/Engine.InputSettings",L"bAlwaysShowTouchInterface",local_res8,
             &GInputIni);
  if (local_res8[0] == false) {
    this = FSlateApplication::Get();
    bVar1 = FSlateApplication::IsFakingTouchEvents(this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// SupportsKeyboardFocus @ 1429a6280

bool __thiscall SVirtualJoystick::SupportsKeyboardFocus(SVirtualJoystick *this)

{
  return false;
}

// Tick @ 1429aa9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SVirtualJoystick::Tick(SVirtualJoystick *this,FGeometry *param_1,double param_2,float param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uchar uVar3;
  char cVar4;
  EVirtualJoystickState EVar5;
  ForElementType<SVirtualJoystick::FControlData> FVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  uint uVar17;
  FName FVar18;
  FName FVar19;
  IPlatformInputDeviceMapper *pIVar20;
  FSlateApplication *pFVar21;
  ForElementType<SVirtualJoystick::FControlData> FVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  int local_res8;
  ulonglong in_stack_fffffffffffffe98;
  float local_158;
  float fStack_154;
  uint local_150;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_13c;
  double local_130;
  double local_128;
  FKey local_120;
  FKey local_108 [8];
  
  EVar5 = this->State;
  if ((EVar5 == State_WaitForStart) || (EVar5 == State_CountingDownToStart)) {
    fVar34 = 0.0;
  }
  else {
    if (EVar5 < State_CountingDownToReset) {
      fVar34 = this->ActiveOpacity;
    }
    else {
      fVar34 = this->InactiveOpacity;
    }
    fVar34 = (fVar34 - this->CurrentOpacity) * param_3 * __real_40400000 + this->CurrentOpacity;
  }
  iVar26 = 0;
  this->CurrentOpacity = fVar34;
  fVar15 = __real_bf800000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar14 = __real_3f800000;
  dVar13 = __real_3ff0000000000000;
  fVar34 = param_1->Scale;
  iVar23 = (this->Controls).ArrayNum;
  local_158 = SUB84(param_1->Size,0);
  fStack_154 = SUB84(param_1->Size,4);
  local_res8 = 0;
  local_150 = 0;
  fVar40 = local_158 * fVar34;
  if (local_158 * fVar34 <= fStack_154 * fVar34) {
    fVar40 = fStack_154 * fVar34;
  }
  fVar34 = (fVar40 * __real_3a800000) / fVar34;
  if (0 < iVar23) {
    lVar25 = 0;
    local_148 = 0;
    fVar40 = __real_322bcc77;
    do {
      uVar28 = 0;
      if ((int)local_150 < (this->Controls).ArrayNum) {
        uVar28 = ~local_150 >> 0x1f;
      }
      if (uVar28 == 0) {
        in_stack_fffffffffffffe98 = (ulonglong)(int)local_150;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      FVar6 = (this->Controls).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
      if (FVar6 != (ForElementType<SVirtualJoystick::FControlData>)0x0) {
        FVar22 = FVar6;
      }
      if (*(char *)(local_148 * 0x138 + 0x132 + (longlong)FVar22) != '\0') {
        fVar27 = param_3 + *(float *)((uchar *)((longlong)FVar22 + 0x11c) + lVar25);
        *(float *)((uchar *)((longlong)FVar22 + 0x11c) + lVar25) = fVar27;
        if (this->ActivationDelay <= fVar27 && fVar27 != this->ActivationDelay) {
          ((uchar *)((longlong)FVar22 + 0x132))[lVar25] = '\0';
          this->CurrentOpacity = this->ActiveOpacity;
          if (this->bPreventReCenter == 0) {
            uVar12 = *(undefined8 *)((uchar *)((longlong)FVar22 + 0x120) + lVar25 + 8);
            *(undefined8 *)((uchar *)((longlong)FVar22 + 0xb8) + lVar25) =
                 *(undefined8 *)((uchar *)((longlong)FVar22 + 0x120) + lVar25);
            *(undefined8 *)((uchar *)((longlong)FVar22 + 0xb8) + lVar25 + 8) = uVar12;
          }
          local_13c = param_1->Size;
          local_130 = (double)(float)local_13c;
          local_128 = (double)local_13c._4_4_;
          (**(code **)(this->_padding_ + 0x250))
                    (this,local_150,lVar25 + 0x120 + (longlong)FVar22,&local_130);
        }
      }
      if ((((uchar *)((longlong)FVar22 + 0x131))[lVar25] == '\0') ||
         (fVar34 != this->PreviousScalingFactor)) {
        fVar27 = (float)*(double *)(local_148 * 0x138 + 0x30 + (longlong)FVar22);
        fStack_154 = SUB84(param_1->Size,4);
        if (fVar15 <= fVar27) {
          if (0.0 <= fVar27) {
            if (fVar14 < fVar27) {
              fStack_154 = fVar27 * fVar34;
            }
            else {
              fStack_154 = fStack_154 * fVar27;
            }
          }
          else {
            fStack_154 = (fVar27 + fVar14) * fStack_154;
          }
        }
        else {
          fStack_154 = fVar27 * fVar34 + fStack_154;
        }
        fVar27 = (float)*(double *)((uchar *)((longlong)FVar22 + 0x28) + lVar25);
        local_158 = SUB84(param_1->Size,0);
        if (fVar15 <= fVar27) {
          if (0.0 <= fVar27) {
            if (fVar14 < fVar27) {
              local_158 = fVar27 * fVar34;
            }
            else {
              local_158 = local_158 * fVar27;
            }
          }
          else {
            local_158 = (fVar27 + fVar14) * local_158;
          }
        }
        else {
          local_158 = fVar27 * fVar34 + local_158;
        }
        uVar32 = SUB84((double)fStack_154,0);
        uVar33 = (undefined4)((ulonglong)(double)fStack_154 >> 0x20);
        auVar9._8_4_ = uVar32;
        auVar9._0_8_ = (double)local_158;
        auVar9._12_4_ = uVar33;
        *(undefined1 (*) [16])((uchar *)((longlong)FVar22 + 200) + lVar25) = auVar9;
        auVar10._8_4_ = uVar32;
        auVar10._0_8_ = (double)local_158;
        auVar10._12_4_ = uVar33;
        *(undefined1 (*) [16])((uchar *)((longlong)FVar22 + 0xb8) + lVar25) = auVar10;
        fVar27 = (float)*(double *)((uchar *)((longlong)FVar22 + 0x40) + lVar25);
        fStack_154 = SUB84(param_1->Size,4);
        if (fVar15 <= fVar27) {
          if (0.0 <= fVar27) {
            if (fVar14 < fVar27) {
              fStack_154 = fVar27 * fVar34;
            }
            else {
              fStack_154 = fStack_154 * fVar27;
            }
          }
          else {
            fStack_154 = (fVar27 + fVar14) * fStack_154;
          }
        }
        else {
          fStack_154 = fVar27 * fVar34 + fStack_154;
        }
        fVar27 = (float)*(double *)((uchar *)((longlong)FVar22 + 0x38) + lVar25);
        local_158 = SUB84(param_1->Size,0);
        if (fVar15 <= fVar27) {
          if (0.0 <= fVar27) {
            if (fVar14 < fVar27) {
              local_158 = fVar27 * fVar34;
            }
            else {
              local_158 = local_158 * fVar27;
            }
          }
          else {
            local_158 = (fVar27 + fVar14) * local_158;
          }
        }
        else {
          local_158 = fVar27 * fVar34 + local_158;
        }
        *(double *)((uchar *)((longlong)FVar22 + 0xd8) + lVar25) = (double)local_158;
        *(double *)((uchar *)((longlong)FVar22 + 0xe0) + lVar25) = (double)fStack_154;
        fVar27 = (float)*(double *)((uchar *)((longlong)FVar22 + 0x60) + lVar25);
        fStack_154 = SUB84(param_1->Size,4);
        if (fVar15 <= fVar27) {
          if (0.0 <= fVar27) {
            if (fVar14 < fVar27) {
              fStack_154 = fVar27 * fVar34;
            }
            else {
              fStack_154 = fStack_154 * fVar27;
            }
          }
          else {
            fStack_154 = (fVar27 + fVar14) * fStack_154;
          }
        }
        else {
          fStack_154 = fVar27 * fVar34 + fStack_154;
        }
        fVar27 = (float)*(double *)((uchar *)((longlong)FVar22 + 0x58) + lVar25);
        local_158 = SUB84(param_1->Size,0);
        if (fVar15 <= fVar27) {
          if (0.0 <= fVar27) {
            if (fVar14 < fVar27) {
              local_158 = fVar27 * fVar34;
            }
            else {
              local_158 = local_158 * fVar27;
            }
          }
          else {
            local_158 = (fVar27 + fVar14) * local_158;
          }
        }
        else {
          local_158 = fVar27 * fVar34 + local_158;
        }
        *(double *)((uchar *)((longlong)FVar22 + 0xf8) + lVar25) = (double)local_158;
        *(double *)((uchar *)((longlong)FVar22 + 0x100) + lVar25) = (double)fStack_154;
        fVar27 = (float)*(double *)((uchar *)((longlong)FVar22 + 0x50) + lVar25);
        fStack_154 = SUB84(param_1->Size,4);
        if (fVar15 <= fVar27) {
          if (0.0 <= fVar27) {
            if (fVar14 < fVar27) {
              fStack_154 = fVar27 * fVar34;
            }
            else {
              fStack_154 = fStack_154 * fVar27;
            }
          }
          else {
            fStack_154 = (fVar27 + fVar14) * fStack_154;
          }
        }
        else {
          fStack_154 = fVar27 * fVar34 + fStack_154;
        }
        fVar27 = (float)*(double *)((uchar *)((longlong)FVar22 + 0x48) + lVar25);
        local_158 = SUB84(param_1->Size,0);
        if (fVar15 <= fVar27) {
          if (0.0 <= fVar27) {
            if (fVar14 < fVar27) {
              local_158 = fVar27 * fVar34;
            }
            else {
              local_158 = local_158 * fVar27;
            }
          }
          else {
            local_158 = (fVar27 + fVar14) * local_158;
          }
        }
        else {
          local_158 = fVar27 * fVar34 + local_158;
        }
        *(double *)((uchar *)((longlong)FVar22 + 0xe8) + lVar25) = (double)local_158;
        *(double *)((uchar *)((longlong)FVar22 + 0xf0) + lVar25) = (double)fStack_154;
        uVar12 = *(undefined8 *)((uchar *)((longlong)FVar22 + 0x68) + lVar25 + 8);
        ((uchar *)((longlong)FVar22 + 0x131))[lVar25] = '\x01';
        *(undefined8 *)((uchar *)((longlong)FVar22 + 0x108) + lVar25) =
             *(undefined8 *)((uchar *)((longlong)FVar22 + 0x68) + lVar25);
        *(undefined8 *)((uchar *)((longlong)FVar22 + 0x108) + lVar25 + 8) = uVar12;
      }
      if ((-1 < *(int *)((uchar *)((longlong)FVar22 + 0x118) + lVar25)) ||
         (((uchar *)((longlong)FVar22 + 0x130))[lVar25] != '\0')) {
        uVar3 = ((uchar *)((longlong)FVar22 + 0x130))[lVar25];
        dVar35 = 0.0;
        dVar36 = 0.0;
        dVar37 = (*(double *)((uchar *)((longlong)FVar22 + 0xa8) + lVar25) +
                 *(double *)((uchar *)((longlong)FVar22 + 0xa8) + lVar25)) /
                 *(double *)((uchar *)((longlong)FVar22 + 0xd8) + lVar25);
        ((uchar *)((longlong)FVar22 + 0x130))[lVar25] = '\0';
        dVar38 = *(double *)(local_148 * 0x138 + 0xb0 + (longlong)FVar22);
        dVar38 = (dVar38 + dVar38) / *(double *)(local_148 * 0x138 + 0xe0 + (longlong)FVar22);
        fVar27 = (float)(dVar38 * dVar38 + dVar37 * dVar37);
        fVar39 = SQRT(fVar27);
        if (fVar40 < fVar27) {
          dVar35 = (double)(fVar14 / fVar39);
          dVar36 = dVar35 * dVar37;
          dVar35 = dVar35 * dVar38;
        }
        uVar30 = SUB84(dVar35,0) & uVar24;
        uVar31 = (uint)((ulonglong)dVar35 >> 0x20) & uVar17;
        uVar28 = SUB84(dVar36,0) & uVar24;
        uVar29 = (uint)((ulonglong)dVar36 >> 0x20) & uVar17;
        if ((double)CONCAT44(uVar31,uVar30) < (double)CONCAT44(uVar29,uVar28) ||
            (double)CONCAT44(uVar31,uVar30) == (double)CONCAT44(uVar29,uVar28)) {
          dVar38 = dVar13;
          if (dVar36 != 0.0) {
            dVar37 = dVar35 * dVar35;
            dVar38 = dVar36 * dVar36;
            goto LAB_1429ab04c;
          }
        }
        else {
          dVar37 = dVar36 * dVar36;
          dVar38 = dVar35 * dVar35;
LAB_1429ab04c:
          dVar38 = SQRT(dVar37 / dVar38 + dVar13);
        }
        dVar11 = (double)fVar39;
        dVar37 = *(double *)((uchar *)((longlong)FVar22 + 0x108) + lVar25);
        dVar35 = dVar11 * *(double *)((uchar *)((longlong)FVar22 + 0x110) + lVar25) *
                 (double)(float)dVar38 * dVar35;
        bVar16 = FKey::IsValid((FKey *)((longlong)FVar22 + lVar25 + 0x78));
        if (bVar16) {
          FVar18 = FKey::GetFName((FKey *)((longlong)FVar22 + lVar25 + 0x78));
          FVar18 = *(FName *)FVar18;
        }
        else {
          FVar18 = FGamepadKeyNames::RightAnalogX;
          if (local_150 == 0) {
            FVar18 = FGamepadKeyNames::LeftAnalogX;
          }
        }
        bVar16 = FKey::IsValid((FKey *)((longlong)FVar22 + lVar25 + 0x90));
        if (bVar16) {
          FVar19 = FKey::GetFName((FKey *)((longlong)FVar22 + lVar25 + 0x90));
          FVar19 = *(FName *)FVar19;
        }
        else {
          FVar19 = FGamepadKeyNames::RightAnalogY;
          if (local_150 == 0) {
            FVar19 = FGamepadKeyNames::LeftAnalogY;
          }
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentApplication.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                ,0x141,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar16 = IsInGameThread();
        if ((((!bVar16) && (bVar16 = IsInSlateThread(), !bVar16)) &&
            (bVar16 = (*IsInAsyncLoadingThread)(), !bVar16)) &&
           ((bVar16 = IsInParallelLoadingThread(), !bVar16 &&
            (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                 ,0x142,L""), bVar16)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FSlateApplication::SetAllUserFocusToGameViewport
                  (FSlateApplication::CurrentApplication.Object,SetDirectly);
        pIVar20 = IPlatformInputDeviceMapper::Get();
        (**(code **)(pIVar20->_padding_ + 0x70))
                  (pIVar20,&local_140,FSlateApplicationBase::SlateAppPrimaryPlatformUser.InternalId)
        ;
        uVar32 = local_140;
        fVar40 = (float)(dVar11 * dVar37 * (double)(float)dVar38 * dVar36);
        local_120.KeyDetails.Object = (FKeyDetails *)0x0;
        local_120.KeyDetails.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        cVar4 = *(char *)(local_148 * 0x138 + (longlong)FVar22);
        local_120.KeyName = FVar18;
        bVar16 = FKey::IsAnalog(&local_120);
        if (bVar16) {
          pFVar21 = FSlateApplication::Get();
          in_stack_fffffffffffffe98 = CONCAT44((int)(in_stack_fffffffffffffe98 >> 0x20),fVar40);
          (**(code **)(*(longlong *)&pFVar21->field_0x198 + 0x90))
                    (&pFVar21->field_0x198,FVar18,
                     FSlateApplicationBase::SlateAppPrimaryPlatformUser.InternalId,uVar32,
                     in_stack_fffffffffffffe98);
        }
        else {
          pFVar21 = FSlateApplication::Get();
          in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffffffffffff00;
          lVar7 = *(longlong *)&pFVar21->field_0x198;
          if (cVar4 == '\0') {
            if (fVar40 == 0.0) goto LAB_1429ab282;
            (**(code **)(lVar7 + 0x98))
                      (&pFVar21->field_0x198,FVar18,
                       FSlateApplicationBase::SlateAppPrimaryPlatformUser.InternalId,uVar32,
                       in_stack_fffffffffffffe98);
          }
          else if (uVar3 == '\0') {
            (**(code **)(lVar7 + 0x98))();
          }
          else {
LAB_1429ab282:
            (**(code **)(lVar7 + 0xa0))();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_120.KeyDetails.SharedReferenceCount.ReferenceController);
        fVar40 = __real_322bcc77;
        iVar26 = local_res8;
        if (*(char *)(local_148 * 0x138 + (longlong)FVar22) == '\0') {
          fVar40 = (float)(double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^
                                           __xmm_80000000000000008000000000000000._4_4_,
                                           SUB84(dVar35,0) ^
                                           (uint)__xmm_80000000000000008000000000000000);
          local_108[0].KeyDetails.Object = (FKeyDetails *)0x0;
          local_108[0].KeyDetails.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_108[0].KeyName = FVar19;
          bVar16 = FKey::IsAnalog(local_108);
          if (bVar16) {
            pFVar21 = FSlateApplication::Get();
            in_stack_fffffffffffffe98 = CONCAT44((int)(in_stack_fffffffffffffe98 >> 0x20),fVar40);
            (**(code **)(*(longlong *)&pFVar21->field_0x198 + 0x90))
                      (&pFVar21->field_0x198,FVar19,
                       FSlateApplicationBase::SlateAppPrimaryPlatformUser.InternalId,uVar32,
                       in_stack_fffffffffffffe98);
          }
          else {
            pFVar21 = FSlateApplication::Get();
            in_stack_fffffffffffffe98 = in_stack_fffffffffffffe98 & 0xffffffffffffff00;
            lVar7 = *(longlong *)&pFVar21->field_0x198;
            if (fVar40 == 0.0) {
              (**(code **)(lVar7 + 0xa0))
                        (&pFVar21->field_0x198,FVar19,
                         FSlateApplicationBase::SlateAppPrimaryPlatformUser.InternalId,uVar32,
                         in_stack_fffffffffffffe98);
            }
            else {
              (**(code **)(lVar7 + 0x98))();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108[0].KeyDetails.SharedReferenceCount.ReferenceController);
          fVar40 = __real_322bcc77;
        }
      }
      if (*(int *)((uchar *)((longlong)FVar22 + 0x118) + lVar25) != -1) {
        iVar26 = iVar26 + 1;
        local_res8 = iVar26;
      }
      iVar23 = (this->Controls).ArrayNum;
      local_150 = local_150 + 1;
      local_148 = local_148 + 1;
      lVar25 = lVar25 + 0x138;
    } while ((int)local_150 < iVar23);
  }
  this->PreviousScalingFactor = fVar34;
  if ((iVar26 < 1) && (this->bPreventReCenter == 0)) {
    EVar5 = this->State;
    if (EVar5 == State_Active) {
      if (iVar26 == 0) {
        this->Countdown = this->TimeUntilDeactive;
        this->State = State_CountingDownToInactive;
      }
    }
    else {
      if (EVar5 == State_CountingDownToInactive) {
        fVar34 = this->Countdown - param_3;
        this->Countdown = fVar34;
        if (0.0 < fVar34) {
          return;
        }
        if (0.0 < this->TimeUntilReset) {
          this->Countdown = this->TimeUntilReset;
          this->State = State_CountingDownToReset;
          return;
        }
      }
      else if (EVar5 == State_CountingDownToReset) {
        fVar34 = this->Countdown - param_3;
        this->Countdown = fVar34;
        if (0.0 < fVar34) {
          return;
        }
        uVar24 = 0;
        if (0 < iVar23) {
          lVar25 = 0;
          while( true ) {
            uVar17 = 0;
            if ((int)uVar24 < (this->Controls).ArrayNum) {
              uVar17 = ~uVar24 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) break;
            FVar6 = (this->Controls).AllocatorInstance.SecondaryData;
            FVar22 = (ForElementType<SVirtualJoystick::FControlData>)&this->Controls;
            if (FVar6 != (ForElementType<SVirtualJoystick::FControlData>)0x0) {
              FVar22 = FVar6;
            }
            uVar24 = uVar24 + 1;
            puVar1 = (undefined8 *)(lVar25 + 200 + (longlong)FVar22);
            uVar12 = puVar1[1];
            puVar2 = (undefined8 *)(lVar25 + 0xb8 + (longlong)FVar22);
            *puVar2 = *puVar1;
            puVar2[1] = uVar12;
            lVar25 = lVar25 + 0x138;
            if ((this->Controls).ArrayNum <= (int)uVar24) {
              this->State = State_Inactive;
              return;
            }
          }
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        if (EVar5 == State_WaitForStart) {
          this->Countdown = this->StartupDelay;
          this->State = State_CountingDownToStart;
          return;
        }
        if (EVar5 != State_CountingDownToStart) {
          return;
        }
        fVar34 = this->Countdown - param_3;
        this->Countdown = fVar34;
        if (0.0 < fVar34) {
          return;
        }
      }
      this->State = State_Inactive;
    }
  }
  else {
    this->State = State_Active;
  }
  return;
}

