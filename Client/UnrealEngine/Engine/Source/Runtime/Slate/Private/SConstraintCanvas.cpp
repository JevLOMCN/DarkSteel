// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// SConstraintCanvas @ 1428b9b50

SConstraintCanvas * __thiscall SConstraintCanvas::SConstraintCanvas(SConstraintCanvas *this)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SConstraintCanvas__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SConstraintCanvas____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar2 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ~SConstraintCanvas @ 1428c10f0

void __thiscall SConstraintCanvas::~SConstraintCanvas(SConstraintCanvas *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SConstraintCanvas__6B_;
  DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int>
            ((TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar1 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// operator() @ 1428c6a20

void __thiscall
`SConstraintCanvas::AddSlot'::__l2::<lambda_1>::operator()(void *this,FSlot *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  FSlot *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  
  pTVar12 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar12->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1428c6a6d;
      }
      LOCK();
      aVar7 = pTVar12->SharedReferenceCount;
      bVar13 = aVar6 == aVar7;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar13);
    lVar3 = *(longlong *)this;
    if (lVar3 != 0) {
      fVar1 = param_1->ZOrder;
      uVar9 = 0;
      iVar2 = *(int *)(lVar3 + 0x240);
      if (0 < iVar2) {
        lVar11 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar9 < *(int *)(lVar3 + 0x240)) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = *(FSlot **)(*(longlong *)(lVar3 + 0x238) + lVar11 * 8);
          if (((float)(int)fVar1 < pFVar4->ZOrder) && (pFVar4 != param_1)) break;
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar2);
      }
      if (iVar2 <= (int)uVar9) {
        uVar10 = iVar2 - 1;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(lVar3 + 0x240)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(FSlot **)(*(longlong *)(lVar3 + 0x238) + (longlong)(int)uVar10 * 8) == param_1)
        goto LAB_1428c6a6d;
      }
      if ((uVar9 != 0xffffffff) && (param_2 != uVar9)) {
        if (param_2 < (int)uVar9) {
          uVar9 = uVar9 - 1;
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5074335080894169260>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SConstraintCanvas.cpp"
                              ,0xac,"false");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        TPanelChildren<SConstraintCanvas::FSlot>::Move
                  ((TPanelChildren<SConstraintCanvas::FSlot> *)(lVar3 + 0x218),param_2,uVar9);
      }
    }
  }
LAB_1428c6a6d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// AddSlot @ 1428d1130

FScopedWidgetSlotArguments * __thiscall
SConstraintCanvas::AddSlot
          (SConstraintCanvas *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FSlot *this_00;
  undefined ***pppuVar6;
  FSlot *local_res8;
  TSharedRef<SWidget,1> local_58;
  code *local_48;
  undefined **local_38;
  SWidget *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined ***local_20;
  
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_58);
  pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar5->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::`2'::<lambda_1>,0,0>::_vftable_;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`SConstraintCanvas::AddSlot'::__l2::<lambda_1>,void,SConstraintCanvas::FSlot_const_*,int>
             ::Call;
  local_30 = pSVar4;
  local_28 = pTVar3;
  this_00 = ::operator_new(0xe8);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    local_res8 = FSlot::FSlot(this_00);
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Children = &this->Children;
  __return_storage_ptr__->Index = -1;
  *(code **)&__return_storage_ptr__->Added = local_48;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  if (local_48 != (code *)0x0) {
    pppuVar6 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar6 = local_20;
    }
    (*(code *)**pppuVar6)();
    if (local_48 != (code *)0x0) {
      pppuVar6 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar6 = local_20;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// ArrangeLayeredChildren @ 1428d71c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SConstraintCanvas::ArrangeLayeredChildren
          (SConstraintCanvas *this,FGeometry *param_1,FArrangedChildren *param_2,
          TArray<bool,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int *piVar1;
  FDeprecateSlateVector2D *pFVar2;
  longlong lVar3;
  ForElementType<FArrangedWidget> FVar4;
  ForElementType<bool> FVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  FGeometry *this_00;
  bool bVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  FMargin *pFVar26;
  TVector2<double> *pTVar27;
  bool *pbVar28;
  FDeprecateSlateVector2D FVar29;
  ForElementType<FArrangedWidget> FVar30;
  longlong lVar31;
  ForElementType<bool> FVar32;
  UClass *this_01;
  longlong *plVar33;
  ForElementType<FArrangedWidget> FVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  undefined1 auStackY_258 [32];
  bool local_208;
  byte local_207;
  FDeprecateSlateVector2D local_204;
  float local_1fc;
  float fStack_1f8;
  longlong local_1f0;
  FSlateLayoutTransform local_1e8;
  FGeometry *local_1d8;
  FDeprecateSlateVector2D local_1d0;
  undefined8 local_1c8;
  FDeprecateSlateVector2D local_1c0;
  FArrangedChildren *local_1b8;
  SConstraintCanvas *local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  FReadAccessScope local_180;
  FReadAccessScope local_168;
  undefined1 local_148 [32];
  float local_128 [3] [2];
  SWidget *local_110;
  FSharedReferencer<1> local_108;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (0 < (this->Children).Children.ArrayNum) {
    local_1d8 = param_1;
    local_1b8 = param_2;
    local_1b0 = this;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      this_01 = Z_Construct_UClass_USlateSettings_NoRegister();
      if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_01);
      }
      bExplicitChildZOrder = *(bool *)((this_01->ClassDefaultObject).field0_0x0.DebugPtr + 1);
      _Init_thread_footer(&::_TSS0);
    }
    fVar21 = __real_3727c5ac;
    iVar25 = (this->Children).Children.ArrayNum;
    uVar35 = 0;
    if (0 < iVar25) {
      local_1f0 = 0;
      fVar38 = __real_ff7fffff;
      do {
        lVar31 = local_1f0;
        uVar24 = 0;
        if ((int)uVar35 < iVar25) {
          uVar24 = ~uVar35 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar3 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar31);
        local_207 = *(byte *)(*(longlong *)(lVar3 + 0x10) + 0x39);
        if (((param_2->VisibilityFilter).Value.Value & local_207) != 0) {
          pFVar26 = TAttribute<FMargin>::Get((TAttribute<FMargin> *)(lVar3 + 0x20));
          fVar12 = pFVar26->Left;
          fVar13 = pFVar26->Top;
          fVar14 = pFVar26->Right;
          fVar15 = pFVar26->Bottom;
          pTVar27 = TAttribute<UE::Math::TVector2<double>_>::Get
                              ((TAttribute<UE::Math::TVector2<double>_> *)(lVar3 + 0x90));
          dVar36 = (pTVar27->field0_0x0)._s_0.X;
          dVar16 = (pTVar27->field0_0x0)._s_0.Y;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x78),
                     &local_180);
          if (((*(int *)(lVar3 + 0x88) == 0) ||
              (plVar33 = *(longlong **)(lVar3 + 0x80), plVar33 == (longlong *)0x0)) ||
             (cVar23 = (**(code **)(*plVar33 + 0x38))(), cVar23 == '\0')) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_180);
          if (bVar22) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x78),
                       &local_168);
            if (*(int *)(lVar3 + 0x88) == 0) {
              plVar33 = (longlong *)0x0;
            }
            else {
              plVar33 = *(longlong **)(lVar3 + 0x80);
            }
            (**(code **)(*plVar33 + 0x60))(plVar33,&local_1a0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_168);
            *(undefined8 *)(lVar3 + 0x50) = local_1a0;
            *(undefined8 *)(lVar3 + 0x58) = uStack_198;
            *(undefined8 *)(lVar3 + 0x60) = local_190;
            *(undefined8 *)(lVar3 + 0x68) = uStack_188;
          }
          dVar17 = *(double *)(lVar3 + 0x50);
          dVar18 = *(double *)(lVar3 + 0x58);
          dVar19 = *(double *)(lVar3 + 0x60);
          dVar20 = *(double *)(lVar3 + 0x68);
          pbVar28 = TAttribute<bool>::Get((TAttribute<bool> *)(lVar3 + 0xc0));
          this_00 = local_1d8;
          local_204 = local_1d8->Size;
          local_1c8._4_4_ = local_204._4_4_;
          local_1d0._0_4_ = local_204._0_4_;
          dVar37 = (double)(float)local_1d0._0_4_;
          dVar9 = (double)local_1c8._4_4_;
          dVar7 = (double)(float)local_1d0._0_4_;
          dVar10 = (double)local_1c8._4_4_;
          dVar8 = (double)fVar14;
          dVar11 = (double)fVar15;
          local_1d0 = local_204;
          local_1c8 = local_204;
          local_1c0 = local_204;
          if (*pbVar28 != false) {
            FVar29 = SWidget::GetDesiredSize(((TSharedRef<SWidget,1> *)(lVar3 + 0x10))->Object);
            dVar8 = (double)*(float *)FVar29;
            dVar11 = (double)*(float *)((longlong)FVar29 + 4);
          }
          dVar37 = (double)((float)(dVar37 * dVar17) + fVar12);
          if (dVar17 == dVar19) {
            dVar37 = dVar37 - dVar36 * dVar8;
          }
          else {
            dVar8 = ((double)(float)(dVar7 * dVar19) - dVar37) - (double)fVar14;
          }
          dVar36 = (double)(fVar13 + (float)(dVar9 * dVar18));
          if (dVar18 == dVar20) {
            dVar36 = dVar36 - dVar16 * dVar11;
          }
          else {
            dVar11 = ((double)(float)(dVar10 * dVar20) - dVar36) - (double)fVar15;
          }
          local_1fc = (float)dVar8;
          local_1e8.Scale = 1.0;
          fStack_1f8 = (float)dVar11;
          local_204._4_4_ = fStack_1f8;
          local_204._0_4_ = local_1fc;
          local_1e8.Translation.field0_0x0._s_0.X = (float)dVar37;
          local_1e8.Translation.field0_0x0._s_0.Y = (float)dVar36;
          FGeometry::MakeChild
                    (this_00,(FArrangedWidget *)local_148,(TSharedRef<SWidget,1> *)(lVar3 + 0x10),
                     (FDeprecateVector2DParameter *)&local_204,&local_1e8);
          param_2 = local_1b8;
          if (((local_1b8->VisibilityFilter).Value.Value & local_207) != 0) {
            FVar34 = (ForElementType<FArrangedWidget>)&local_1b8->Array;
            FVar4 = (local_1b8->Array).AllocatorInstance.SecondaryData;
            FVar30 = FVar34;
            if (FVar4 != (ForElementType<FArrangedWidget>)0x0) {
              FVar30 = FVar4;
            }
            if ((ulonglong)FVar30 <= local_148) {
              FVar30 = FVar34;
              if (FVar4 != (ForElementType<FArrangedWidget>)0x0) {
                FVar30 = FVar4;
              }
              if ((local_148 <
                   (undefined1 *)((longlong)FVar30 + (longlong)(local_1b8->Array).ArrayMax * 0x48))
                 && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar25 = (param_2->Array).ArrayNum;
            piVar1 = &(param_2->Array).ArrayMax;
            if (iVar25 == *piVar1) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                                 (0x848,(ForElementType<FArrangedWidget> *)FVar34,piVar1);
            }
            (param_2->Array).ArrayNum = iVar25 + 1;
            FVar4 = (param_2->Array).AllocatorInstance.SecondaryData;
            lVar31 = (longlong)iVar25;
            if (FVar4 != (ForElementType<FArrangedWidget>)0x0) {
              FVar34 = FVar4;
            }
            pFVar2 = (FDeprecateSlateVector2D *)((longlong)FVar34 + lVar31 * 0x48);
            *pFVar2 = (FDeprecateSlateVector2D)local_148._0_8_;
            pFVar2[1] = (FDeprecateSlateVector2D)local_148._8_8_;
            *(undefined8 *)((uchar *)((longlong)FVar34 + 0x10) + lVar31 * 0x48) = local_148._16_8_;
            *(undefined8 *)((uchar *)((longlong)FVar34 + 0x10) + lVar31 * 0x48 + 8) =
                 local_148._24_8_;
            *(float (*) [2])((uchar *)((longlong)FVar34 + 0x20) + lVar31 * 0x48) = local_128[0];
            *(float (*) [2])((uchar *)((longlong)FVar34 + 0x20) + lVar31 * 0x48 + 8) = local_128[1];
            *(float (*) [2])((uchar *)((longlong)FVar34 + 0x30) + lVar31 * 0x48) = local_128[2];
            *(SWidget **)((uchar *)((longlong)FVar34 + 0x38) + lVar31 * 0x48) = local_110;
            *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar34 + 0x40) + lVar31 * 0x48) =
                 local_108.ReferenceController;
            if (local_108.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_108.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_108.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.ReferenceController);
          local_208 = true;
          if (bExplicitChildZOrder != false) {
            local_208 = false;
            if (fVar38 + fVar21 < *(float *)(lVar3 + 0xe0)) {
              local_208 = 0 < param_3->ArrayNum;
              fVar38 = *(float *)(lVar3 + 0xe0);
            }
          }
          FVar5 = (param_3->AllocatorInstance).SecondaryData;
          FVar32 = (ForElementType<bool>)param_3;
          if (FVar5 != (ForElementType<bool>)0x0) {
            FVar32 = FVar5;
          }
          if ((ulonglong)FVar32 <= &local_208) {
            FVar32 = (ForElementType<bool>)param_3;
            if (FVar5 != (ForElementType<bool>)0x0) {
              FVar32 = FVar5;
            }
            if ((&local_208 < (bool *)((longlong)FVar32 + (longlong)param_3->ArrayMax)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar25 = param_3->ArrayNum;
          if (iVar25 == param_3->ArrayMax) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                               (0x101,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar25 + 1;
          FVar5 = (param_3->AllocatorInstance).SecondaryData;
          FVar32 = (ForElementType<bool>)param_3;
          if (FVar5 != (ForElementType<bool>)0x0) {
            FVar32 = FVar5;
          }
          *(bool *)((longlong)iVar25 + (longlong)FVar32) = local_208;
          lVar31 = local_1f0;
          this = local_1b0;
        }
        iVar25 = (this->Children).Children.ArrayNum;
        local_1f0 = lVar31 + 8;
        uVar35 = uVar35 + 1;
      } while ((int)uVar35 < iVar25);
    }
  }
  return;
}

// ClearChildren @ 1428dae00

void __thiscall SConstraintCanvas::ClearChildren(SConstraintCanvas *this)

{
  int *piVar1;
  TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pTVar2 = &(this->Children).Children;
  local_18.Data = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->Children).Children.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Children).Children.ArrayNum;
  local_10._4_4_ = (this->Children).Children.ArrayMax;
  *piVar1 = 0;
  (this->Children).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int>
            ((TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int>
            ((TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> *)
             local_18.Data,(int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int>
              ((TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> *)
               (pTVar2->AllocatorInstance).Data,(this->Children).Children.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Children).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar5 = 0;
  }
  DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int>
            ((TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> *)
             local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1428e0a30

TVector2<double> * __thiscall
SConstraintCanvas::ComputeDesiredSize
          (SConstraintCanvas *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  uint uVar11;
  EVisibility EVar12;
  bool bVar13;
  char cVar14;
  TVector2<double> *pTVar15;
  FMargin *pFVar16;
  bool *pbVar17;
  FDeprecateSlateVector2D FVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  iVar21 = (this->Children).Children.ArrayNum;
  uVar23 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar10 = __real_3ff0000000000000;
  if (0 < iVar21) {
    lVar22 = 0;
    EVar12 = EVisibility::Collapsed;
    do {
      uVar19 = 0;
      if ((int)uVar23 < iVar21) {
        uVar19 = ~uVar23 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar12 = EVisibility::Collapsed, bVar13)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TVector2<double> *)(*pcVar5)();
        return pTVar15;
      }
      lVar4 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar22);
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar4 + 0x10) + 0x39) !=
          EVar12.Value.Value) {
        pFVar16 = TAttribute<FMargin>::Get((TAttribute<FMargin> *)(lVar4 + 0x20));
        fVar24 = pFVar16->Left;
        fVar25 = pFVar16->Top;
        fVar2 = pFVar16->Right;
        fVar1 = pFVar16->Bottom;
        TAttribute<UE::Math::TVector2<double>_>::Get
                  ((TAttribute<UE::Math::TVector2<double>_> *)(lVar4 + 0x90));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x78),
                   &local_118);
        if (((*(int *)(lVar4 + 0x88) == 0) ||
            (plVar20 = *(longlong **)(lVar4 + 0x80), plVar20 == (longlong *)0x0)) ||
           (cVar14 = (**(code **)(*plVar20 + 0x38))(), cVar14 == '\0')) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_118);
        if (bVar13) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x78),
                     &local_100);
          if (*(int *)(lVar4 + 0x88) == 0) {
            plVar20 = (longlong *)0x0;
          }
          else {
            plVar20 = *(longlong **)(lVar4 + 0x80);
          }
          (**(code **)(*plVar20 + 0x60))(plVar20,&local_e8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_100);
          *(undefined8 *)(lVar4 + 0x50) = local_e8;
          *(undefined8 *)(lVar4 + 0x58) = uStack_e0;
          *(undefined8 *)(lVar4 + 0x60) = local_d8;
          *(undefined8 *)(lVar4 + 0x68) = uStack_d0;
        }
        dVar3 = *(double *)(lVar4 + 0x50);
        dVar6 = *(double *)(lVar4 + 0x58);
        dVar7 = *(double *)(lVar4 + 0x60);
        dVar8 = *(double *)(lVar4 + 0x68);
        pbVar17 = TAttribute<bool>::Get((TAttribute<bool> *)(lVar4 + 0xc0));
        if (*pbVar17 != false) {
          FVar18 = SWidget::GetDesiredSize(*(SWidget **)(lVar4 + 0x10));
          fVar1 = *(float *)((longlong)FVar18 + 4);
          fVar2 = *(float *)FVar18;
        }
        if ((dVar3 == dVar7) && ((dVar3 == 0.0 || (dVar3 == dVar10)))) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if ((dVar6 == dVar8) && ((dVar6 == 0.0 || (dVar6 == dVar10)))) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        if (bVar13) {
          fVar24 = (float)((uint)fVar24 & uVar11);
        }
        else {
          fVar24 = 0.0;
        }
        dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.X;
        dVar6 = (double)fVar24 + (double)fVar2;
        if ((double)fVar24 + (double)fVar2 <= dVar3) {
          dVar6 = dVar3;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6;
        EVar12 = EVisibility::Collapsed;
        if (bVar9) {
          fVar25 = (float)((uint)fVar25 & uVar11);
        }
        else {
          fVar25 = 0.0;
        }
        dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
        dVar6 = (double)fVar25 + (double)fVar1;
        if ((double)fVar25 + (double)fVar1 <= dVar3) {
          dVar6 = dVar3;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
      }
      iVar21 = (this->Children).Children.ArrayNum;
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 8;
    } while ((int)uVar23 < iVar21);
  }
  return __return_storage_ptr__;
}

// Construct @ 1428f95a0

void __thiscall SConstraintCanvas::Construct(SConstraintCanvas *this,FArguments *param_1)

{
  FIdentityFunctor local_res8 [8];
  TArray<SConstraintCanvas::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  AlgoImpl::
  StableSortInternal<SConstraintCanvas::FSlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SConstraintCanvas::FSlot::FSlotArguments,_SConstraintCanvas::Construct_::__l2::<lambda_1>_>_>
            ((FSlotArguments *)(param_1->_Slots).AllocatorInstance.Data,(param_1->_Slots).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SConstraintCanvas::FSlot>::AddSlots(&this->Children,&local_18);
  return;
}

// GetChildren @ 14293e4e0

FChildren * __thiscall SConstraintCanvas::GetChildren(SConstraintCanvas *this)

{
  return (FChildren *)&this->Children;
}

// OnArrangeChildren @ 14295e0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SConstraintCanvas::OnArrangeChildren
          (SConstraintCanvas *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  undefined1 auStack_58 [32];
  TArray<bool,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.ArrayMax = 0x10;
  local_38.AllocatorInstance.SecondaryData = (ForElementType<bool>)0x0;
  local_38.ArrayNum = 0;
  ArrangeLayeredChildren(this,param_1,param_2,&local_38);
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
    FMemory::Free((void *)local_38.AllocatorInstance.SecondaryData);
  }
  return;
}

// OnPaint @ 14297e1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SConstraintCanvas::OnPaint
          (SConstraintCanvas *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ForElementType<FArrangedWidget> FVar6;
  ForElementType<bool> FVar7;
  uint uVar8;
  FArrangedWidget *pFVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStackY_238 [32];
  bool local_1f8;
  int local_1f4;
  FPaintArgs local_1d0;
  TArray<bool,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_1a0;
  FArrangedChildren local_180;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_238;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"SConstraintCanvas");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId316,"SConstraintCanvas",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SConstraintCanvas.cpp"
               ,0x13c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId316);
  }
  local_180.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_180.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_180.Array.ArrayNum = 0;
  local_180.Array.ArrayMax = 4;
  local_180.bAllow3DWidgets = false;
  local_1a0.AllocatorInstance.SecondaryData = (ForElementType<bool>)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0x10;
  ArrangeLayeredChildren(this,param_2,&local_180,&local_1a0);
  if ((!param_7) || (local_1f8 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    local_1f8 = false;
  }
  local_1d0.RootGrid = param_1->RootGrid;
  local_1d0.CurrentGrid = param_1->CurrentGrid;
  local_1d0.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
  local_1f4 = param_5;
  local_1d0.CurrentTime = param_1->CurrentTime;
  local_1d0.DeltaTime = param_1->DeltaTime;
  local_1d0._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  uVar8 = 0;
  local_1d0.PaintParentPtr = (SWidget *)this;
  if (0 < local_180.Array.ArrayNum) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar8 < local_180.Array.ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      FVar6 = (ForElementType<FArrangedWidget>)&local_180.Array;
      if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar6 = local_180.Array.AllocatorInstance.SecondaryData;
      }
      pFVar9 = (FArrangedWidget *)((longlong)FVar6 + lVar11);
      bVar2 = SWidget::IsChildWidgetCulled((SWidget *)this,param_3,pFVar9);
      iVar4 = param_5;
      if (!bVar2) {
        uVar3 = 0;
        if ((int)uVar8 < local_1a0.ArrayNum) {
          uVar3 = ~uVar8 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        FVar7 = (ForElementType<bool>)&local_1a0;
        if (local_1a0.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
          FVar7 = local_1a0.AllocatorInstance.SecondaryData;
        }
        iVar5 = param_5 + 1;
        if (*(char *)(lVar10 + (longlong)FVar7) == '\0') {
          iVar5 = local_1f4;
        }
        iVar4 = SWidget::Paint((pFVar9->Widget).Object,&local_1d0,(FGeometry *)pFVar9,param_3,
                               param_4,iVar5,param_6,local_1f8);
        local_1f4 = iVar5;
        if (iVar4 < param_5) {
          iVar4 = param_5;
        }
      }
      param_5 = iVar4;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x48;
    } while ((int)uVar8 < local_180.Array.ArrayNum);
  }
  if (local_1a0.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
    FMemory::Free((void *)local_1a0.AllocatorInstance.SecondaryData);
  }
  FVar6 = (ForElementType<FArrangedWidget>)&local_180.Array;
  if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar6 = local_180.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar6,local_180.Array.ArrayNum);
  if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_180.Array.AllocatorInstance.SecondaryData);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return param_5;
}

// RemoveSlot @ 142989b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall SConstraintCanvas::RemoveSlot(SConstraintCanvas *this,TSharedRef<SWidget,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  SWidget::Invalidate((SWidget *)this,Layout);
  iVar6 = (this->Children).Children.ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (param_1->Object ==
          *(SWidget **)
           (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar8) + 0x10)) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Children).Children.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        pFVar1 = (this->Children).Children.AllocatorInstance.Data;
        puVar2 = *(undefined8 **)(pFVar1 + (longlong)(int)uVar7 * 8);
        *(undefined8 *)(pFVar1 + (longlong)(int)uVar7 * 8) = 0;
        TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAt(&(this->Children).Children,uVar7,Default);
        if (puVar2 == (undefined8 *)0x0) {
          return uVar7;
        }
        (**(code **)*puVar2)(puVar2,1);
        return uVar7;
      }
      iVar6 = (this->Children).Children.ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return -1;
}

// Slot @ 1429a18f0

FSlotArguments * __cdecl SConstraintCanvas::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlot *this;
  FSlot *local_res8 [4];
  
  this = ::operator_new(0xe8);
  local_res8[0] = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    local_res8[0] = FSlot::FSlot(this);
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)local_res8);
  return __return_storage_ptr__;
}

