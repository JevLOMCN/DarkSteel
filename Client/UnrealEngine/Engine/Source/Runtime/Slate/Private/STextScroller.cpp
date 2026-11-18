// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// Construct @ 142a201c0

void __thiscall STextScroller::Construct(STextScroller *this,FArguments *param_1)

{
  EWidgetUpdateFlags EVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EWidgetUpdateFlags EVar8;
  
  fVar5 = (param_1->_ScrollOptions).StartDelay;
  fVar6 = (param_1->_ScrollOptions).EndDelay;
  fVar7 = (param_1->_ScrollOptions).FadeInDelay;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  (this->ScrollOptions).Speed = (param_1->_ScrollOptions).Speed;
  (this->ScrollOptions).StartDelay = fVar5;
  (this->ScrollOptions).EndDelay = fVar6;
  (this->ScrollOptions).FadeInDelay = fVar7;
  EVar8 = EVar1 & ~NeedsTick;
  (this->ScrollOptions).FadeOutDelay = (param_1->_ScrollOptions).FadeOutDelay;
  this->ScrollOrientation = param_1->_ScrollOrientation;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar8;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar8);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  return;
}

// OnArrangeChildren @ 142a2dd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STextScroller::OnArrangeChildren(STextScroller *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  FDeprecateSlateVector2D *pFVar3;
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  EOrientation EVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  FDeprecateSlateVector2D FVar12;
  longlong lVar13;
  ForElementType<FArrangedWidget> FVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_198 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  FSlateLayoutTransform local_130 [3];
  undefined1 local_108 [32];
  float local_e8 [3] [2];
  SWidget *local_d0;
  FSharedReferencer<1> local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TVar4 = ((SWidget *)this->_padding_)->VisibilityAttribute;
  if (((param_2->VisibilityFilter).Value.Value & (byte)TVar4) == 0) {
    return;
  }
  local_140 = this->_padding_;
  uStack_138 = this->_padding_;
  dVar7 = (double)this->_padding_;
  dVar8 = (double)this->_padding_;
  fVar9 = (float)local_140;
  fVar18 = (float)uStack_138;
  fVar19 = (float)local_140;
  if (GSlateFlowDirection == RightToLeft) {
    local_140._4_4_ = (float)((ulonglong)local_140 >> 0x20);
    local_140 = CONCAT44(local_140._4_4_,(float)uStack_138);
    uStack_138._4_4_ = (float)((ulonglong)uStack_138 >> 0x20);
    uStack_138 = CONCAT44(uStack_138._4_4_,fVar9);
    fVar19 = fVar18;
    fVar18 = fVar9;
  }
  local_148 = param_1->Size;
  EVar5 = this->ScrollOrientation;
  iVar11 = (int)this->_padding_;
  fVar9 = (float)local_148;
  if ((GSlateFlowDirection == LeftToRight) || (GSlateFlowDirection != RightToLeft)) {
LAB_142a2de43:
    if (iVar11 != 0) goto LAB_142a2de4e;
LAB_142a2dec3:
    fVar15 = (float)dVar7 * (fVar9 - (fVar19 + fVar18));
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
  }
  else {
    if (iVar11 == 1) {
      iVar11 = 3;
    }
    else {
      if (iVar11 != 3) goto LAB_142a2de43;
      iVar11 = 1;
    }
LAB_142a2de4e:
    fVar16 = (float)local_148 - (fVar19 + fVar18);
    FVar12 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    fVar17 = (float)dVar7 * *(float *)FVar12;
    fVar15 = fVar17;
    if ((EVar5 != Orient_Horizontal) && (fVar15 = fVar16, fVar17 <= fVar16)) {
      fVar15 = fVar17;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (iVar11 != 1) {
      if (iVar11 == 2) {
        fVar19 = ((fVar9 - fVar15) * __real_3f000000 + fVar19) - fVar18;
      }
      else {
        if (iVar11 != 3) goto LAB_142a2dec3;
        fVar19 = (fVar9 - fVar15) - fVar18;
      }
    }
  }
  fVar18 = local_140._4_4_;
  local_148 = param_1->Size;
  iVar11 = *(int *)((longlong)&this->_padding_ + 4);
  EVar5 = this->ScrollOrientation;
  fVar9 = local_148._4_4_;
  fVar17 = local_148._4_4_ - (uStack_138._4_4_ + local_140._4_4_);
  if (iVar11 != 0) {
    FVar12 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    fVar16 = (float)dVar8 * *(float *)((longlong)FVar12 + 4);
    if ((EVar5 != Orient_Vertical) && (fVar17 <= fVar16)) {
      fVar16 = fVar17;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if (iVar11 == 1) goto LAB_142a2df89;
    if (iVar11 == 2) {
      fVar18 = ((fVar9 - fVar16) * __real_3f000000 + fVar18) - uStack_138._4_4_;
      goto LAB_142a2df89;
    }
    if (iVar11 == 3) {
      fVar18 = (fVar9 - fVar16) - uStack_138._4_4_;
      goto LAB_142a2df89;
    }
  }
  fVar16 = (float)dVar8 * fVar17;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
LAB_142a2df89:
  SWidget::GetDesiredSize((SWidget *)this->_padding_);
  local_148._4_4_ = fVar16;
  local_148._0_4_ = fVar15;
  local_130[0].Scale = 1.0;
  local_130[0].Translation.field0_0x0._0_4_ = fVar19;
  local_130[0].Translation.field0_0x0._4_4_ = fVar18;
  FGeometry::MakeChild
            (param_1,(FArrangedWidget *)local_108,(TSharedRef<SWidget,1> *)&this->_padding_,
             (FDeprecateVector2DParameter *)&local_148,local_130);
  if (((param_2->VisibilityFilter).Value.Value & (byte)TVar4) != 0) {
    FVar14 = (param_2->Array).AllocatorInstance.SecondaryData;
    pTVar1 = &param_2->Array;
    if (FVar14 == (ForElementType<FArrangedWidget>)0x0) {
      FVar14 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    if ((((ulonglong)FVar14 <= local_108) &&
        (local_108 < (undefined1 *)((longlong)FVar14 + (longlong)(param_2->Array).ArrayMax * 0x48)))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (param_2->Array).ArrayNum;
    piVar2 = &(param_2->Array).ArrayMax;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                         (0x848,&pTVar1->AllocatorInstance,piVar2);
    }
    (param_2->Array).ArrayNum = iVar11 + 1;
    FVar14 = (param_2->Array).AllocatorInstance.SecondaryData;
    lVar13 = (longlong)iVar11;
    if (FVar14 == (ForElementType<FArrangedWidget>)0x0) {
      FVar14 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    pFVar3 = (FDeprecateSlateVector2D *)((longlong)FVar14 + lVar13 * 0x48);
    *pFVar3 = (FDeprecateSlateVector2D)local_108._0_8_;
    pFVar3[1] = (FDeprecateSlateVector2D)local_108._8_8_;
    *(undefined8 *)((uchar *)((longlong)FVar14 + 0x10) + lVar13 * 0x48) = local_108._16_8_;
    *(undefined8 *)((uchar *)((longlong)FVar14 + 0x10) + lVar13 * 0x48 + 8) = local_108._24_8_;
    *(float (*) [2])((uchar *)((longlong)FVar14 + 0x20) + lVar13 * 0x48) = local_e8[0];
    *(float (*) [2])((uchar *)((longlong)FVar14 + 0x20) + lVar13 * 0x48 + 8) = local_e8[1];
    *(float (*) [2])((uchar *)((longlong)FVar14 + 0x30) + lVar13 * 0x48) = local_e8[2];
    *(SWidget **)((uchar *)((longlong)FVar14 + 0x38) + lVar13 * 0x48) = local_d0;
    *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar14 + 0x40) + lVar13 * 0x48) =
         local_c8.ReferenceController;
    if (local_c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
  return;
}

// OnPaint @ 142a30df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STextScroller::OnPaint
          (STextScroller *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  float fVar2;
  EOrientation EVar3;
  SWidget *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  FDeprecateSlateVector2D FVar8;
  undefined8 *puVar9;
  TSharedRef<SWidget,1> *pTVar10;
  ulong64 uVar11;
  TSharedRef<FActiveTimerHandle,1> *pTVar12;
  ulonglong uVar13;
  FDeprecateVector2DParameter FVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStackY_188 [32];
  undefined1 local_140 [16];
  FDeprecateSlateVector2D local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  FDeprecateVector2DParameter local_120;
  undefined1 local_118 [16];
  TTransform2<float> local_108;
  FWidgetStyle *local_f0;
  FSlateWindowElementList *local_e8;
  FActiveTimerHandle *local_e0;
  FSharedReferencer<1> local_d8;
  TSharedRef<FActiveTimerHandle,1> local_d0;
  TSharedRef<SWidget,1> local_c0;
  undefined1 local_b0 [24];
  float (*local_98) [2];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar15 = 0;
  local_e8 = param_4;
  EVar3 = this->ScrollOrientation;
  local_f0 = param_6;
  local_130 = param_2->Size;
  uVar13 = uVar15;
  if (EVar3 == Orient_Vertical) {
    uVar13 = 4;
  }
  local_118._0_8_ = param_3;
  fVar16 = *(float *)(&local_130.field_0x0 + uVar13);
  fVar2 = fVar16;
  local_120 = (FDeprecateVector2DParameter)param_2;
  local_140._0_8_ = param_1;
  if (fVar16 != 0.0) {
    FVar8 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    fVar2 = *(float *)(uVar13 + (longlong)FVar8);
  }
  if ((fVar2 <= fVar16 + __real_40000000) || (this->ActiveState == Suspend)) {
    if ((this->ActiveTimerHandle).Object != (FActiveTimerHandle *)0x0) {
      this->TickerState = StopTicking;
    }
  }
  else {
    pTVar1 = &this->ActiveTimerHandle;
    param_1 = (FPaintArgs *)local_140._0_8_;
    if (pTVar1->Object == (FActiveTimerHandle *)0x0) {
      this->TickerState = StartTicking;
      local_108.M.M[0][0] = 0.0;
      local_108.M.M[0][1] = 0.0;
      local_108.M.M[1][0] = 0.0;
      local_108.M.M[1][1] = 0.0;
      local_108.Trans.field0_0x0._s_0.X = 0.0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_108,
                 (FWriteAccessScope *)local_b0);
      local_98 = local_108.M.M + 1;
      puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_108.M.M + 1));
      uVar13 = uVar15;
      FVar14 = local_120;
      if (puVar9 != (undefined8 *)0x0) {
        uStack_124 = local_d0.SharedReferenceCount.ReferenceController._4_4_;
        local_130 = (FDeprecateSlateVector2D)OnScrollTextTick;
        uStack_128 = 0.0;
        pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_c0);
        FVar14 = (FDeprecateVector2DParameter)(pTVar10->SharedReferenceCount).ReferenceController;
        pSVar4 = pTVar10->Object;
        if (FVar14 != (FDeprecateVector2DParameter)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar14 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar14 + 8) + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)((longlong)FVar14 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar14 + 8) + 1);
          UNLOCK();
        }
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar11;
        *puVar9 = &
                  ___7__TBaseSPMethodDelegateInstance__0A_VSTextScroller___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[3] = pSVar4;
        *(FDeprecateVector2DParameter *)(puVar9 + 4) = FVar14;
        if (FVar14 != (FDeprecateVector2DParameter)0x0) {
          LOCK();
          (((TVector2<float> *)((longlong)FVar14 + 0xc))->field0_0x0)._s_0.X =
               (float)((int)(((TVector2<float> *)((longlong)FVar14 + 0xc))->field0_0x0)._s_0.X + 1);
          UNLOCK();
        }
        *(FDeprecateSlateVector2D *)(puVar9 + 5) = local_130;
        puVar9[6] = CONCAT44(uStack_124,uStack_128);
        uVar13 = 7;
        param_3 = (FSlateRect *)local_118._0_8_;
      }
      if ((uVar13 & 4) != 0) {
        uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffb);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar14);
      }
      if ((uVar13 & 2) != 0) {
        uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffd);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar14);
      }
      if ((uVar13 & 1) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
      }
      if ((bool)local_b0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
      }
      pTVar12 = SWidget::RegisterActiveTimer
                          ((SWidget *)this,&local_d0,0.0,
                           (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                            *)&local_108);
      local_d8.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
      local_e0 = pTVar12->Object;
      if (local_d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_d8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_e0) {
        pTVar1->Object = local_e0;
        local_e0 = (FActiveTimerHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ActiveTimerHandle).SharedReferenceCount,&local_d8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_d0.SharedReferenceCount.ReferenceController._4_4_,
                          local_d0.SharedReferenceCount.ReferenceController._0_4_));
      param_1 = (FPaintArgs *)local_140._0_8_;
      param_2 = (FGeometry *)local_120;
    }
  }
  if (this->ScrollOffset != 0.0) {
    if ((GSlateFlowDirection == LeftToRight) ||
       (fVar16 = __real_3f800000, this->ScrollOrientation == Orient_Vertical)) {
      fVar16 = __real_bf800000;
    }
    local_118 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    if (EVar3 == Orient_Vertical) {
      uVar15 = 8;
    }
    local_120 = (FDeprecateVector2DParameter)0x3f0000003f000000;
    local_140._4_4_ =
         (*(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)param_2 + 0xc))->_s_0).X;
    local_140._8_4_ =
         (*(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)param_2 + 0xc))->_s_0).Y;
    uVar5 = param_2->Size;
    local_130 = (FDeprecateSlateVector2D)0x3f800000;
    uStack_128 = 0.0;
    *(double *)(local_118 + uVar15) = (double)(this->ScrollOffset * fVar16);
    local_108.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_108.M.M[0][1] = _UNK_15076b184;
    local_108.M.M[1][0] = _UNK_15076b188;
    local_108.M.M[1][1] = _UNK_15076b18c;
    uVar6 = local_118._0_8_;
    local_118._0_8_ = uVar5;
    local_108.Trans.field0_0x0._s_0.X = (float)(double)uVar6;
    local_108.Trans.field0_0x0._s_0.Y = (float)(double)local_118._8_8_;
    local_140._0_4_ = *(float *)((longlong)param_2 + 8);
    FGeometry::FGeometry
              ((FGeometry *)local_b0,(FDeprecateVector2DParameter *)local_118,
               (FSlateLayoutTransform *)&local_130,&local_108,&local_120,
               (FSlateLayoutTransform *)local_140,(TTransform2<float> *)((longlong)param_2 + 0x1c));
    param_2 = (FGeometry *)local_b0;
  }
  iVar7 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,local_e8,param_5,local_f0,
                     param_7);
  return iVar7;
}

// OnScrollTextTick @ 142a315b0

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
STextScroller::OnScrollTextTick(STextScroller *this,double param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  EOrientation EVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  EActiveTimerReturnType EVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_enum_EActiveTimerReturnType___cdecl_STextScroller::OnScrollTextTick(double,float)_::_2_::FStat_STAT_STextScroller_OnTick>
  FVar11;
  FDeprecateSlateVector2D FVar12;
  FGeometry *pFVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90 [2];
  FName local_80;
  undefined8 local_70;
  FSharedReferencer<1> FStack_68;
  FStatMessage local_60 [3];
  
  lVar15 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_STextScroller_OnTick ==
        (FThreadSafeStaticStat<_private:_enum_EActiveTimerReturnType___cdecl_STextScroller::OnScrollTextTick(double,float)_::_2_::FStat_STAT_STextScroller_OnTick>
         )0x0) {
      pFVar10 = ::FName::FName(&local_98,"STAT_STextScroller_OnTick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_STextScroller_OnTick,*pFVar10,
                 L"STAT_STextScroller_OnTick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_STextScroller_OnTick;
  if (StatPtr_STAT_STextScroller_OnTick ==
      (FThreadSafeStaticStat<_private:_enum_EActiveTimerReturnType___cdecl_STextScroller::OnScrollTextTick(double,float)_::_2_::FStat_STAT_STextScroller_OnTick>
       )0x0) {
    pFVar10 = ::FName::FName(local_90,"STAT_STextScroller_OnTick");
    FVar11 = (FThreadSafeStaticStat<_private:_enum_EActiveTimerReturnType___cdecl_STextScroller::OnScrollTextTick(double,float)_::_2_::FStat_STAT_STextScroller_OnTick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_STextScroller_OnTick,*pFVar10,
                          L"STAT_STextScroller_OnTick","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value == 0) && (FVar14.Number == 0)) {
LAB_142a3172d:
    bVar6 = false;
    FVar14 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_res20.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\STextScroller.cpp"
                   ,0x6a);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142a3172d;
    local_a8 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
  }
  if ((this->TickerState == None) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickerState != ETickerState::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\STextScroller.cpp"
                         ,0x6c,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    EVar9 = (*pcVar4)();
    return EVar9;
  }
  EVar3 = this->ScrollOrientation;
  if (this->TickerState == StartTicking) {
    if (EVar3 == Orient_Vertical) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
    }
    else {
      if (*(char *)((longlong)&this->_padding_ + 7) != '\x01') {
        *(undefined1 *)((longlong)&this->_padding_ + 7) = 1;
        SWidget::Invalidate((SWidget *)this,Paint);
      }
      *(undefined4 *)&this->_padding_ = 1;
    }
    this->TickerState = Ticking;
  }
  else {
    if (this->TickerState == StopTicking) {
      if (EVar3 == Orient_Vertical) {
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
      }
      else {
        if (*(char *)((longlong)&this->_padding_ + 7) != '\0') {
          *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
          SWidget::Invalidate((SWidget *)this,Paint);
        }
        *(undefined4 *)&this->_padding_ = 0;
      }
      this->TickerState = None;
      this->FontAlpha = 1.0;
      this->TimeElapsed = 0.0;
      this->ScrollOffset = 0.0;
      if (this->ActiveState != Suspend) {
        this->ActiveState = Start;
      }
      if (__real_3f800000 != *(float *)((longlong)&this->_padding_ + 4)) {
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
        SWidget::Invalidate((SWidget *)this,Paint);
      }
      local_70 = 0;
      FStack_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->ActiveTimerHandle != (TSharedPtr<FActiveTimerHandle,1> *)&local_70) {
        (this->ActiveTimerHandle).Object = (FActiveTimerHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ActiveTimerHandle).SharedReferenceCount,&FStack_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_68.ReferenceController);
      EVar9 = Stop;
      goto LAB_142a31a3c;
    }
    FVar12 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    fVar17 = param_2 + this->TimeElapsed;
    if (EVar3 == Orient_Vertical) {
      lVar15 = 4;
    }
    fVar2 = *(float *)(lVar15 + (longlong)FVar12);
    this->TimeElapsed = fVar17;
    switch(this->ActiveState) {
    case FadeIn:
      fVar2 = (this->ScrollOptions).FadeInDelay;
      fVar16 = fVar17 / fVar2;
      if (__real_3f800000 <= fVar16) {
        fVar16 = __real_3f800000;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      this->FontAlpha = fVar16;
      if (fVar2 <= fVar17) {
        this->FontAlpha = 1.0;
        this->TimeElapsed = 0.0;
        this->ScrollOffset = 0.0;
        this->ActiveState = Start;
      }
      break;
    case Start:
      this->TimeElapsed = 0.0;
      this->ScrollOffset = 0.0;
      this->ActiveState = StartWait;
      break;
    case StartWait:
      if ((this->ScrollOptions).StartDelay <= fVar17) {
        this->TimeElapsed = 0.0;
        this->ScrollOffset = 0.0;
        this->ActiveState = Scrolling;
      }
      break;
    case Scrolling:
      this->ScrollOffset = param_2 * (this->ScrollOptions).Speed + this->ScrollOffset;
      pFVar13 = SWidget::GetCachedGeometry((SWidget *)this);
      local_a8 = *(FName *)&pFVar13->Size;
      if (fVar2 <= *(float *)((longlong)&local_a8.ComparisonIndex.Value + lVar15) +
                   this->ScrollOffset) {
        this->ActiveState = Stop;
        goto LAB_142a3190a;
      }
      break;
    case Stop:
      this->ActiveState = StopWait;
LAB_142a3190a:
      this->TimeElapsed = 0.0;
      break;
    case StopWait:
      if ((this->ScrollOptions).EndDelay <= fVar17) {
        this->ActiveState = FadeOut;
        goto LAB_142a3190a;
      }
      break;
    case FadeOut:
      fVar2 = (this->ScrollOptions).FadeOutDelay;
      fVar16 = fVar17 / fVar2;
      if (__real_3f800000 <= fVar16) {
        fVar16 = __real_3f800000;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      this->FontAlpha = __real_3f800000 - fVar16;
      if (fVar2 <= fVar17) {
        this->ScrollOffset = 0.0;
        this->FontAlpha = 0.0;
        this->ActiveState = FadeIn;
        goto LAB_142a3190a;
      }
    }
    if (this->FontAlpha != *(float *)((longlong)&this->_padding_ + 4)) {
      *(float *)((longlong)&this->_padding_ + 4) = this->FontAlpha;
      SWidget::Invalidate((SWidget *)this,Paint);
    }
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  EVar9 = Continue;
LAB_142a31a3c:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return EVar9;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar9;
}

// ResetScrollState @ 142a35a00

void __thiscall STextScroller::ResetScrollState(STextScroller *this)

{
  this->FontAlpha = 1.0;
  this->TimeElapsed = 0.0;
  this->ScrollOffset = 0.0;
  if (this->ActiveState != Suspend) {
    this->ActiveState = Start;
  }
  if (__real_3f800000 != *(float *)((longlong)&this->_padding_ + 4)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// StartScrolling @ 142a36e50

void __thiscall STextScroller::StartScrolling(STextScroller *this)

{
  bool bVar1;
  
  bVar1 = __real_3f800000 != *(float *)((longlong)&this->_padding_ + 4);
  this->FontAlpha = 1.0;
  this->TimeElapsed = 0.0;
  this->ScrollOffset = 0.0;
  this->ActiveState = Start;
  if (bVar1) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SuspendScrolling @ 142a36ec0

void __thiscall STextScroller::SuspendScrolling(STextScroller *this)

{
  bool bVar1;
  
  bVar1 = __real_3f800000 != *(float *)((longlong)&this->_padding_ + 4);
  this->ActiveState = Suspend;
  this->FontAlpha = 1.0;
  this->TimeElapsed = 0.0;
  this->ScrollOffset = 0.0;
  if (bVar1) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

