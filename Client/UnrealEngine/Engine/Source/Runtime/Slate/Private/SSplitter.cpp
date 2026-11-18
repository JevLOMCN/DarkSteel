// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 34

// ~SSplitter @ 1427024e0

void __thiscall SSplitter::~SSplitter(SSplitter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHandleHovered);
  pvVar1 = *(void **)&(this->OnHandleHovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHandleHovered);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMaxSlotSize);
  pvVar1 = *(void **)&(this->OnGetMaxSlotSize).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMaxSlotSize);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSplitterFinishedResizing);
  pvVar1 = *(void **)&(this->OnSplitterFinishedResizing).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSplitterFinishedResizing);
  DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int>
            ((TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar2 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// GetHandleBeingResizedFromMousePosition<1> @ 1428ab720

int __cdecl
SSplitter::GetHandleBeingResizedFromMousePosition<1>
          (float param_1,float param_2,TVector2<double> *param_3,
          TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStackX_24;
  float fStack_9c;
  
  iVar6 = param_4->ArrayNum;
  uVar7 = 1;
  fVar12 = param_2 * __real_3f000000;
  fVar13 = param_1 * __real_3f000000;
  if (1 < iVar6) {
    lVar8 = 0x14;
    do {
      uVar5 = 0;
      if ((int)(uVar7 - 1) < iVar6) {
        uVar5 = -uVar7 >> 0x1f;
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
      pFVar2 = (param_4->AllocatorInstance).Data;
      fVar11 = *(float *)(pFVar2 + lVar8 + -0xc);
      fStackX_24 = (float)((ulonglong)*(undefined8 *)(pFVar2 + lVar8 + -8) >> 0x20);
      fVar9 = fStackX_24 * *(float *)(pFVar2 + lVar8 + -0x14) + fVar11;
      fVar10 = fVar9;
      if (fVar9 < fVar11) {
        fVar10 = fVar11;
        fVar11 = fVar9;
      }
      uVar5 = 0;
      if ((int)uVar7 < param_4->ArrayNum) {
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
      dVar1 = (param_3->field0_0x0)._s_0.Y;
      fStack_9c = (float)((ulonglong)*(undefined8 *)((param_4->AllocatorInstance).Data + lVar8 + 4)
                         >> 0x20);
      if (((double)(((fVar11 + (fVar10 - fVar11)) - fVar12) + fVar13) < dVar1) &&
         (dVar1 < (double)((fStack_9c + fVar12) - fVar13))) {
        return uVar7 - 1;
      }
      iVar6 = param_4->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x14;
    } while ((int)uVar7 < iVar6);
  }
  return -1;
}

// GetHandleBeingResizedFromMousePosition<0> @ 1428ab980

int __cdecl
SSplitter::GetHandleBeingResizedFromMousePosition<0>
          (float param_1,float param_2,TVector2<double> *param_3,
          TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res20;
  float local_78;
  
  iVar6 = param_4->ArrayNum;
  uVar7 = 1;
  fVar10 = param_2 * __real_3f000000;
  fVar11 = param_1 * __real_3f000000;
  if (1 < iVar6) {
    lVar8 = 0x14;
    do {
      uVar5 = 0;
      if ((int)(uVar7 - 1) < iVar6) {
        uVar5 = -uVar7 >> 0x1f;
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
      pFVar2 = (param_4->AllocatorInstance).Data;
      local_res20 = (float)*(undefined8 *)(pFVar2 + lVar8 + -8);
      fVar9 = local_res20 * *(float *)(pFVar2 + lVar8 + -0x14) + *(float *)(pFVar2 + lVar8 + -0x10);
      if (fVar9 <= *(float *)(pFVar2 + lVar8 + -0x10)) {
        fVar9 = *(float *)(pFVar2 + lVar8 + -0x10);
      }
      uVar5 = 0;
      if ((int)uVar7 < param_4->ArrayNum) {
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
      dVar1 = (param_3->field0_0x0)._s_0.X;
      local_78 = (float)*(undefined8 *)((param_4->AllocatorInstance).Data + lVar8 + 4);
      if (((double)((fVar9 - fVar10) + fVar11) < dVar1) &&
         (dVar1 < (double)((local_78 + fVar10) - fVar11))) {
        return uVar7 - 1;
      }
      iVar6 = param_4->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x14;
    } while ((int)uVar7 < iVar6);
  }
  return -1;
}

// SSplitter @ 1428baea0

SSplitter * __thiscall SSplitter::SSplitter(SSplitter *this)

{
  TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  SSplitter *pSVar4;
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SSplitter__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  pTVar1 = &this->HighlightedHandleIndex;
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SSplitter____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  this->HoveredHandleIndex = -1;
  *(undefined4 *)&pTVar1->field_0x0 = 0xffffffff;
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar4 = (SSplitter *)(*pcVar2)();
      return pSVar4;
    }
  }
  this->bIsResizing = false;
  this->Orientation = Orient_Horizontal;
  *(undefined8 *)&this->OnSplitterFinishedResizing = 0;
  *(undefined8 *)&(this->OnSplitterFinishedResizing).field_0x8 = 0;
  *(undefined4 *)&(this->OnSplitterFinishedResizing).field_0x10 = 0;
  *(undefined8 *)&this->OnGetMaxSlotSize = 0;
  *(undefined8 *)&(this->OnGetMaxSlotSize).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetMaxSlotSize).field_0x10 = 0;
  *(undefined8 *)&this->OnHandleHovered = 0;
  *(undefined8 *)&(this->OnHandleHovered).field_0x8 = 0;
  *(undefined4 *)&(this->OnHandleHovered).field_0x10 = 0;
  this->Style = (FSplitterStyle *)0x0;
  return this;
}

// operator() @ 1428c7540

void __thiscall
`SSplitter::HandleResizingDelta'::__l32::<lambda_1>::operator()
          (void *this,FSlot *param_1,float param_2,float param_3,float param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ESizeRule *pEVar5;
  FReadAccessScope *this_00;
  longlong *plVar6;
  undefined1 local_c0 [8];
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  FDestructionSentinel local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48 [2];
  
  pEVar5 = TAttribute<enum_SSplitter::ESizeRule>::Get(&param_1->SizingRule);
  if (*pEVar5 == FractionOfParent) {
    if (0.0 < param_4) {
      param_2 = (param_3 / param_4) * param_2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->OnSlotResized_Handler,&local_90);
    if (((*(int *)&(param_1->OnSlotResized_Handler).field_0x10 == 0) ||
        (plVar6 = *(longlong **)&(param_1->OnSlotResized_Handler).field_0x8,
        plVar6 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      (param_1->SizeValue).Value = param_2;
      local_b0 = 0;
      local_c0 = (undefined1  [8])0x0;
      FStack_b8.Data = (FScriptContainerElement *)0x0;
      (param_1->SizeValue).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->SizeValue).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
                 (FWriteAccessScope *)&local_a8);
      if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_b8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
        local_b0 = local_b0 & 0xffffffff00000000;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c0);
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->OnSlotResized_Handler,local_48);
    if (*(int *)&(param_1->OnSlotResized_Handler).field_0x10 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)&(param_1->OnSlotResized_Handler).field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,param_2);
    this_00 = local_48;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->OnSlotResized_Handler,&local_78);
    puVar1 = &(param_1->OnSlotResized_Handler).field_0x8;
    if (((*(int *)&(param_1->OnSlotResized_Handler).field_0x10 == 0) ||
        (plVar6 = *(longlong **)puVar1, plVar6 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6091401847896015627>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SSplitter.cpp"
                         ,0x30b,"Slot.OnSlotResized().IsBound()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->OnSlotResized_Handler,&local_60);
    if ((*(int *)&(param_1->OnSlotResized_Handler).field_0x10 != 0) &&
       (plVar6 = *(longlong **)puVar1, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x68))(plVar6,param_3);
    }
    this_00 = &local_60;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
  return;
}

// AddSlot @ 1428d1780

FScopedWidgetSlotArguments * __thiscall
SSplitter::AddSlot(SSplitter *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1)

{
  FSlot *this_00;
  FSlot *local_res8;
  
  this_00 = ::operator_new(0xa0);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    local_res8 = FSlot::FSlot(this_00);
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Children = &this->Children;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ArrangeChildrenForLayout @ 1428d6720

TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> * __thiscall
SSplitter::ArrangeChildrenForLayout
          (SSplitter *this,
          TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometry *param_1)

{
  undefined4 uVar1;
  EOrientation EVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  EVisibility EVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *pTVar10;
  ESizeRule *pEVar11;
  FDeprecateSlateVector2D FVar12;
  float *pfVar13;
  longlong lVar14;
  FGeometry *pFVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_res8;
  float local_118;
  float local_114;
  longlong local_110;
  longlong local_108;
  ForElementType<float> local_f0;
  int local_e8;
  int local_e4 [41];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar17 = (this->Children).Children.ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (uVar17 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar17,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  uVar18 = 0;
  uVar17 = (this->Children).Children.ArrayNum;
  iVar9 = 0;
  EVar2 = this->Orientation;
  fVar33 = 0.0;
  fVar34 = 0.0;
  fVar26 = 0.0;
  fVar32 = 0.0;
  uVar20 = uVar18;
  uVar21 = uVar18;
  EVar6.Value.Value = EVisibility::Collapsed.Value.Value;
  if (0 < (int)uVar17) {
    do {
      uVar16 = (uint)uVar20;
      uVar19 = 0;
      if ((int)uVar16 < (int)uVar17) {
        uVar19 = ~uVar16 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar6 = EVisibility::Collapsed, bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      lVar14 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + uVar18);
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar14 + 0x10) + 0x39) !=
          EVar6.Value.Value) {
        uVar21 = (ulonglong)((int)uVar21 + 1);
        pEVar11 = TAttribute<enum_SSplitter::ESizeRule>::Get((void *)(lVar14 + 0x20));
        if (*pEVar11 == SizeToContent) {
          FVar12 = SWidget::GetDesiredSize(*(SWidget **)(lVar14 + 0x10));
          fVar26 = fVar26 + *(float *)((ulonglong)(-(uint)(EVar2 != Orient_Horizontal) & 4) +
                                      (longlong)FVar12);
          EVar6 = EVisibility::Collapsed;
        }
        else {
          if (*(char *)(lVar14 + 100) == '\0') {
            fVar31 = 0.0;
          }
          else {
            pfVar13 = TAttribute<float>::Get((TAttribute<float> *)(lVar14 + 0x60));
            fVar31 = *pfVar13;
          }
          fVar30 = this->MinSplitterChildLength;
          if (this->MinSplitterChildLength <= fVar31) {
            fVar30 = fVar31;
          }
          fVar32 = fVar32 + fVar30;
          pfVar13 = TAttribute<float>::Get((TAttribute<float> *)(lVar14 + 0x40));
          fVar34 = fVar34 + *pfVar13;
          EVar6 = EVisibility::Collapsed;
        }
      }
      iVar9 = (int)uVar21;
      uVar17 = (this->Children).Children.ArrayNum;
      uVar18 = uVar18 + 8;
      uVar20 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < (int)uVar17);
  }
  local_f0.Data = (float *)0x0;
  local_e4[0] = 0;
  iVar8 = iVar9 + -1;
  if (iVar9 + -1 < 0) {
    iVar8 = 0;
  }
  fVar26 = (*(float *)((longlong)((param_1->AccumulatedRenderTransform).M.M + -4) + 4 +
                      (ulonglong)(-(uint)(EVar2 != Orient_Horizontal) & 4)) -
           (float)iVar8 * this->PhysicalSplitterHandleSize) - fVar26;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  local_e8 = 0;
  if (uVar17 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>_>
              (4,4,uVar17,&local_f0,0,local_e4);
    EVar6 = EVisibility::Collapsed;
  }
  iVar9 = (this->Children).Children.ArrayNum;
  fVar31 = 0.0;
  local_res8 = 0;
  if (0 < iVar9) {
    local_110 = 0;
    local_108 = -4;
    do {
      iVar8 = local_e8;
      lVar23 = local_108;
      lVar14 = local_110;
      uVar17 = 0;
      if ((int)local_res8 < iVar9) {
        uVar17 = ~local_res8 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar6 = EVisibility::Collapsed, bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      lVar3 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar14);
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar3 + 0x10) + 0x39) ==
          EVar6.Value.Value) {
        local_114 = 0.0;
        if (((local_f0.Data <= &local_114) && (&local_114 < local_f0.Data + local_e4[0])) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        fVar30 = local_114;
        if (iVar8 == local_e4[0]) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>_>
                            (0x404,&local_f0,local_e4);
          fVar30 = local_114;
        }
      }
      else {
        pEVar11 = TAttribute<enum_SSplitter::ESizeRule>::Get((void *)(lVar3 + 0x20));
        if (*pEVar11 == SizeToContent) {
          FVar12 = SWidget::GetDesiredSize(*(SWidget **)(lVar3 + 0x10));
          fVar30 = *(float *)((ulonglong)(-(uint)(EVar2 != Orient_Horizontal) & 4) +
                             (longlong)FVar12);
        }
        else {
          pfVar13 = TAttribute<float>::Get((TAttribute<float> *)(lVar3 + 0x40));
          fVar30 = (fVar26 * *pfVar13) / fVar34 - fVar31;
          fVar31 = 0.0;
        }
        if (fVar32 <= fVar26) {
          local_118 = fVar30;
          if (*(char *)(lVar3 + 100) == '\0') {
            fVar28 = 0.0;
          }
          else {
            pfVar13 = TAttribute<float>::Get((TAttribute<float> *)(lVar3 + 0x60));
            fVar28 = *pfVar13;
          }
          if (fVar30 <= fVar28) {
            fVar30 = fVar28;
          }
          fVar28 = fVar30 - local_118;
          lVar24 = lVar14;
          lVar22 = lVar23;
          uVar17 = local_res8;
          while (lVar23 = local_108, uVar17 = uVar17 - 1, local_108 = lVar23, -1 < (int)uVar17) {
            lVar24 = lVar24 + -8;
            lVar14 = local_110;
            if (fVar28 <= 0.0) goto LAB_1428d6d8c;
            uVar16 = ~uVar17 >> 0x1f;
            uVar19 = 0;
            if ((int)uVar17 < (this->Children).Children.ArrayNum) {
              uVar19 = uVar16;
            }
            if ((uVar19 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar10;
            }
            pEVar11 = TAttribute<enum_SSplitter::ESizeRule>::Get
                                ((void *)(*(longlong *)
                                           ((this->Children).Children.AllocatorInstance.Data +
                                           lVar24) + 0x20));
            if ((*pEVar11 == FractionOfParent) &&
               ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar3 + 0x10) + 0x39) !=
                EVisibility::Collapsed.Value.Value)) {
              uVar19 = 0;
              if ((int)uVar17 < (this->Children).Children.ArrayNum) {
                uVar19 = uVar16;
              }
              if ((uVar19 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                return pTVar10;
              }
              lVar14 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar24);
              if (*(char *)(lVar14 + 100) == '\0') {
                fVar25 = 0.0;
              }
              else {
                pfVar13 = TAttribute<float>::Get((TAttribute<float> *)(lVar14 + 0x60));
                fVar25 = *pfVar13;
              }
              fVar27 = this->MinSplitterChildLength;
              if (this->MinSplitterChildLength <= fVar25) {
                fVar27 = fVar25;
              }
              uVar19 = 0;
              if ((int)uVar17 < iVar8) {
                uVar19 = uVar16;
              }
              if ((uVar19 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                return pTVar10;
              }
              fVar27 = *(lVar22 + local_f0.Data) - fVar27;
              if (0.0 < fVar27) {
                if (fVar28 <= fVar27) {
                  fVar27 = fVar28;
                }
                uVar19 = 0;
                if ((int)uVar17 < iVar8) {
                  uVar19 = uVar16;
                }
                if ((uVar19 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                  return pTVar10;
                }
                fVar28 = fVar28 - fVar27;
                *(lVar22 + local_f0.Data) = *(lVar22 + local_f0.Data) - fVar27;
              }
            }
            lVar22 = lVar22 + -4;
            lVar14 = local_110;
          }
          if (0.0 < fVar28) {
            fVar31 = fVar28;
          }
        }
LAB_1428d6d8c:
        local_118 = fVar30;
        if (((local_f0.Data <= &local_118) && (&local_118 < local_f0.Data + local_e4[0])) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        fVar30 = local_118;
        if (iVar8 == local_e4[0]) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>_>
                            (0x404,&local_f0,local_e4);
          fVar30 = local_118;
        }
      }
      local_res8 = local_res8 + 1;
      local_108 = lVar23 + 4;
      local_110 = lVar14 + 8;
      local_e8 = iVar8 + 1;
      local_f0.Data[iVar8] = fVar30;
      iVar9 = (this->Children).Children.ArrayNum;
      EVar6 = EVisibility::Collapsed;
    } while ((int)local_res8 < iVar9);
  }
  fVar32 = __real_40000000;
  fVar26 = __real_3f000000;
  uVar18 = 0;
  uVar20 = uVar18;
  uVar21 = uVar18;
  iVar8 = local_e8;
  if (0 < iVar9) {
    do {
      uVar19 = (uint)uVar18;
      uVar17 = ~uVar19 >> 0x1f;
      if (this->Orientation == Orient_Horizontal) {
        uVar29 = *(undefined4 *)&(param_1->Size).field_0x4;
        uVar16 = 0;
        if ((int)uVar19 < iVar8) {
          uVar16 = uVar17;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        pFVar15 = (FGeometry *)((longlong)local_f0.Data + uVar20);
        fVar34 = fVar33;
        fVar31 = 0.0;
      }
      else {
        uVar16 = 0;
        if ((int)uVar19 < iVar8) {
          uVar16 = uVar17;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        fVar34 = 0.0;
        uVar29 = *(undefined4 *)(uVar20 + (longlong)local_f0.Data);
        pFVar15 = param_1;
        fVar31 = fVar33;
      }
      uVar1 = *(undefined4 *)&pFVar15->Size;
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      lVar14 = (longlong)iVar9;
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(undefined4 *)(pFVar4 + lVar14 * 0x14) = 0x3f800000;
      *(ulonglong *)(pFVar4 + lVar14 * 0x14 + 4) = CONCAT44(fVar31,fVar34);
      *(ulonglong *)(pFVar4 + lVar14 * 0x14 + 0xc) = CONCAT44(uVar29,uVar1);
      uVar16 = 0;
      if ((int)uVar19 < (this->Children).Children.ArrayNum) {
        uVar16 = uVar17;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = local_e8;
      if ((TEnumAsByte<EVisibility::Private>)
          *(uchar *)(*(longlong *)
                      (*(longlong *)((this->Children).Children.AllocatorInstance.Data + uVar21) +
                      0x10) + 0x39) != EVisibility::Collapsed.Value.Value) {
        uVar16 = 0;
        if ((int)uVar19 < local_e8) {
          uVar16 = uVar17;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        fVar33 = fVar33 + (float)((int)ROUND((*(uVar20 + local_f0.Data) +
                                             this->PhysicalSplitterHandleSize) * fVar32 + fVar26) >>
                                 1);
      }
      uVar18 = (ulonglong)(uVar19 + 1);
      uVar20 = uVar20 + 4;
      uVar21 = uVar21 + 8;
    } while ((int)(uVar19 + 1) < (this->Children).Children.ArrayNum);
  }
  if (local_f0.Data != (float *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_f0.Data);
  }
  return __return_storage_ptr__;
}

// ClampChild @ 1428dad30

float __thiscall SSplitter::ClampChild(SSplitter *this,FSlot *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  
  if ((param_1->MinSizeValue).bIsSet != false) {
    pfVar1 = TAttribute<float>::Get(&param_1->MinSizeValue);
    fVar2 = *pfVar1;
    if (*pfVar1 <= param_2) {
      fVar2 = param_2;
    }
    return fVar2;
  }
  fVar2 = 0.0;
  if (0.0 <= param_2) {
    fVar2 = param_2;
  }
  return fVar2;
}

// ClearChildren @ 1428db440

void __thiscall SSplitter::ClearChildren(SSplitter *this)

{
  int *piVar1;
  TArray<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,TSizedDefaultAllocator<32>_>
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
  DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int>
            ((TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int>
            ((TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> *)local_18.Data,
             (int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int>
              ((TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> *)
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
  DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int>
            ((TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> *)local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1428e1b30

TVector2<double> * __thiscall
SSplitter::ComputeDesiredSize
          (SSplitter *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  SWidget *pSVar2;
  code *pcVar3;
  EVisibility EVar4;
  bool bVar5;
  TVector2<double> *pTVar6;
  FDeprecateSlateVector2D FVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  uVar11 = 0;
  fVar1 = this->PhysicalSplitterHandleSize;
  iVar10 = 0;
  if (this->Orientation == Orient_Horizontal) {
    local_58 = 0.0;
    dStack_50 = 0.0;
    uVar13 = uVar11;
    uVar14 = uVar11;
    EVar4.Value.Value = EVisibility::Collapsed.Value.Value;
    if (0 < (this->Children).Children.ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar12 < (this->Children).Children.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , EVar4 = EVisibility::Collapsed, bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector2<double> *)(*pcVar3)();
          return pTVar6;
        }
        pSVar2 = *(SWidget **)
                  (*(longlong *)((this->Children).Children.AllocatorInstance.Data + uVar11) + 0x10);
        if ((TEnumAsByte<EVisibility::Private>)pSVar2->VisibilityAttribute != EVar4.Value.Value) {
          uVar14 = (ulonglong)((int)uVar14 + 1);
          FVar7 = SWidget::GetDesiredSize(pSVar2);
          local_58 = local_58 + (double)*(float *)FVar7;
          dVar15 = (double)*(float *)((longlong)FVar7 + 4);
          if ((double)*(float *)((longlong)FVar7 + 4) <= dStack_50) {
            dVar15 = dStack_50;
          }
          dStack_50 = dVar15;
          EVar4 = EVisibility::Collapsed;
        }
        iVar10 = (int)uVar14;
        uVar11 = uVar11 + 8;
        uVar13 = (ulonglong)(uVar12 + 1);
      } while ((int)(uVar12 + 1) < (this->Children).Children.ArrayNum);
    }
    uVar9 = iVar10 - 1U;
    if ((int)(iVar10 - 1U) < 0) {
      uVar9 = 0;
    }
    pdVar8 = &local_58;
    local_58 = local_58 + (double)((float)(int)uVar9 * fVar1);
  }
  else {
    local_48 = 0.0;
    dStack_40 = 0.0;
    uVar13 = uVar11;
    uVar14 = uVar11;
    EVar4.Value.Value = EVisibility::Collapsed.Value.Value;
    if (0 < (this->Children).Children.ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar12 < (this->Children).Children.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , EVar4 = EVisibility::Collapsed, bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector2<double> *)(*pcVar3)();
          return pTVar6;
        }
        pSVar2 = *(SWidget **)
                  (*(longlong *)((this->Children).Children.AllocatorInstance.Data + uVar11) + 0x10);
        if ((TEnumAsByte<EVisibility::Private>)pSVar2->VisibilityAttribute != EVar4.Value.Value) {
          uVar14 = (ulonglong)((int)uVar14 + 1);
          FVar7 = SWidget::GetDesiredSize(pSVar2);
          dVar15 = (double)*(float *)FVar7;
          if ((double)*(float *)FVar7 <= local_48) {
            dVar15 = local_48;
          }
          dStack_40 = dStack_40 + (double)*(float *)((longlong)FVar7 + 4);
          local_48 = dVar15;
          EVar4 = EVisibility::Collapsed;
        }
        iVar10 = (int)uVar14;
        uVar11 = uVar11 + 8;
        uVar13 = (ulonglong)(uVar12 + 1);
      } while ((int)(uVar12 + 1) < (this->Children).Children.ArrayNum);
    }
    uVar9 = iVar10 - 1U;
    if ((int)(iVar10 - 1U) < 0) {
      uVar9 = 0;
    }
    pdVar8 = &local_48;
    dStack_40 = dStack_40 + (double)((float)(int)uVar9 * fVar1);
  }
  dVar15 = pdVar8[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar15;
  return __return_storage_ptr__;
}

// Construct @ 142906d70

void __thiscall SSplitter::Construct(SSplitter *this,FArguments *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TArray<SSplitter::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_78;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  
  if (param_1->_Style == (FSplitterStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SSplitter.cpp"
                       ,0x5c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnHandleHovered,&param_1->_OnHandleHovered);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnSplitterFinishedResizing,&param_1->_OnSplitterFinishedResizing);
  this->ResizeMode = param_1->_ResizeMode;
  this->PhysicalSplitterHandleSize = param_1->_PhysicalSplitterHandleSize;
  this->HitDetectionSplitterHandleSize = param_1->_HitDetectionSplitterHandleSize;
  this->Orientation = param_1->_Orientation;
  this->HoveredHandleIndex = -1;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->HighlightedHandleIndex,(SWidget *)this,&param_1->_HighlightedHandleIndex,None);
  this->bIsResizing = false;
  this->Style = param_1->_Style;
  if (&param_1->_OnGetMaxSlotSize != &this->OnGetMaxSlotSize) {
    local_68 = (undefined1  [8])0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGetMaxSlotSize
               ,&local_38);
    if ((*(int *)&(param_1->_OnGetMaxSlotSize).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnGetMaxSlotSize).field_0x8, plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMaxSlotSize,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  this->MinSplitterChildLength = param_1->_MinimumSlotHeight;
  local_78.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = (param_1->_Slots).ArrayNum;
  local_78.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SSplitter::FSlot>::AddSlots(&this->Children,&local_78);
  return;
}

// FindAllResizeableSlotsAfterHandle @ 142935370

void __cdecl
SSplitter::FindAllResizeableSlotsAfterHandle
          (int param_1,TPanelChildren<SSplitter::FSlot> *param_2,
          TArray<int,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *param_3)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  EVisibility EVar5;
  uint uVar6;
  int iVar7;
  ESizeRule *pEVar8;
  uint uVar9;
  longlong lVar10;
  uint local_18 [4];
  
  iVar1 = (param_2->Children).ArrayNum;
  EVar5.Value.Value = EVisibility::Collapsed.Value.Value;
joined_r0x000142935396:
  do {
    do {
      uVar6 = param_1 + 1;
      if (iVar1 <= (int)uVar6) {
        return;
      }
      uVar9 = 0;
      if ((int)uVar6 < (param_2->Children).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      local_18[0] = uVar6;
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar5 = EVisibility::Collapsed, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1 = local_18[0];
    } while ((TEnumAsByte<EVisibility::Private>)
             *(uchar *)(*(longlong *)
                         (*(longlong *)
                           ((param_2->Children).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
                         0x10) + 0x39) == EVar5.Value.Value);
    lVar10 = (longlong)(int)local_18[0];
    uVar6 = 0;
    if ((int)local_18[0] < (param_2->Children).ArrayNum) {
      uVar6 = ~local_18[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar10 = *(longlong *)((param_2->Children).AllocatorInstance.Data + lVar10 * 8);
    pEVar8 = TAttribute<enum_SSplitter::ESizeRule>::Get((void *)(lVar10 + 0x20));
    EVar5 = EVisibility::Collapsed;
    param_1 = local_18[0];
    if (*pEVar8 != FractionOfParent) goto LAB_142935486;
  } while ((*(char *)(lVar10 + 0x99) != '\0') && (*(char *)(lVar10 + 0x98) == '\0'));
  goto LAB_1429354af;
LAB_142935486:
  if (((*(char *)(lVar10 + 0x99) != '\0') && (*(char *)(lVar10 + 0x98) != '\0')) &&
     (bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar10 + 0x80)),
     EVar5 = EVisibility::Collapsed, param_1 = local_18[0], bVar4)) {
LAB_1429354af:
    puVar2 = (uint *)(param_3->AllocatorInstance).Data;
    if ((puVar2 <= local_18) &&
       ((local_18 < puVar2 + param_3->ArrayMax &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = param_3->ArrayNum;
    if (iVar7 == param_3->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>_>
                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar7 + 1;
    (param_3->AllocatorInstance).Data[iVar7] = local_18[0];
    EVar5 = EVisibility::Collapsed;
    param_1 = local_18[0];
  }
  goto joined_r0x000142935396;
}

// FindResizeableSlotAfterHandle @ 142935720

int __cdecl
SSplitter::FindResizeableSlotAfterHandle(int param_1,TPanelChildren<SSplitter::FSlot> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EVisibility EVar4;
  char cVar5;
  int iVar6;
  ESizeRule *pEVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar6 = (param_2->Children).ArrayNum;
  uVar9 = param_1 + 1;
  lVar10 = (longlong)(int)uVar9;
  EVar4.Value.Value = EVisibility::Collapsed.Value.Value;
  do {
    if (iVar6 <= lVar10) {
      return uVar9;
    }
    uVar8 = 0;
    if ((int)uVar9 < (param_2->Children).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       EVar4 = EVisibility::Collapsed, bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    if ((TEnumAsByte<EVisibility::Private>)
        *(uchar *)(*(longlong *)
                    (*(longlong *)((param_2->Children).AllocatorInstance.Data + lVar10 * 8) + 0x10)
                  + 0x39) != EVar4.Value.Value) {
      uVar8 = 0;
      if ((int)uVar9 < (param_2->Children).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      lVar1 = *(longlong *)((param_2->Children).AllocatorInstance.Data + lVar10 * 8);
      pEVar7 = TAttribute<enum_SSplitter::ESizeRule>::Get((void *)(lVar1 + 0x20));
      if (*pEVar7 == FractionOfParent) {
        if (*(char *)(lVar1 + 0x99) == '\0') {
          return uVar9;
        }
        cVar5 = *(char *)(lVar1 + 0x98);
      }
      else {
        EVar4 = EVisibility::Collapsed;
        if ((*(char *)(lVar1 + 0x99) == '\0') || (*(char *)(lVar1 + 0x98) == '\0'))
        goto LAB_142935855;
        cVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x80));
      }
      EVar4.Value.Value = EVisibility::Collapsed.Value.Value;
      if (cVar5 != '\0') {
        return uVar9;
      }
    }
LAB_142935855:
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 1;
  } while( true );
}

// FindResizeableSlotBeforeHandle @ 142935890

int __cdecl
SSplitter::FindResizeableSlotBeforeHandle(int param_1,TPanelChildren<SSplitter::FSlot> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ESizeRule *pEVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar10 = (ulonglong)param_1;
  if (param_1 < 0) {
    return param_1;
  }
  lVar11 = uVar10 * 8;
  EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
  do {
    uVar9 = (uint)uVar10;
    uVar8 = 0;
    if ((int)uVar9 < (param_2->Children).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       EVar3 = EVisibility::Collapsed, bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    if ((TEnumAsByte<EVisibility::Private>)
        *(uchar *)(*(longlong *)
                    (*(longlong *)((param_2->Children).AllocatorInstance.Data + lVar11) + 0x10) +
                  0x39) != EVar3.Value.Value) {
      uVar8 = 0;
      if ((int)uVar9 < (param_2->Children).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      lVar1 = *(longlong *)((param_2->Children).AllocatorInstance.Data + lVar11);
      pEVar7 = TAttribute<enum_SSplitter::ESizeRule>::Get((void *)(lVar1 + 0x20));
      if (*pEVar7 == FractionOfParent) {
        if (*(char *)(lVar1 + 0x99) == '\0') {
          return uVar9;
        }
        cVar5 = *(char *)(lVar1 + 0x98);
      }
      else {
        EVar3 = EVisibility::Collapsed;
        if ((*(char *)(lVar1 + 0x99) == '\0') || (*(char *)(lVar1 + 0x98) == '\0'))
        goto LAB_1429359b9;
        cVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x80));
      }
      EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
      if (cVar5 != '\0') {
        return uVar9;
      }
    }
LAB_1429359b9:
    lVar11 = lVar11 + -8;
    uVar9 = uVar9 - 1;
    uVar10 = (ulonglong)uVar9;
    if ((int)uVar9 < 0) {
      return uVar9;
    }
  } while( true );
}

// GetChildren @ 14293e580

FChildren * __thiscall SSplitter::GetChildren(SSplitter *this)

{
  return (FChildren *)&this->Children;
}

// GetOrientation @ 1429464d0

EOrientation __thiscall SSplitter::GetOrientation(SSplitter *this)

{
  return this->Orientation;
}

// HandleResizingByMousePosition @ 14294cb40

void __thiscall
SSplitter::HandleResizingByMousePosition
          (SSplitter *this,EOrientation param_1,float param_2,Type param_3,int param_4,
          TVector2<double> *param_5,TPanelChildren<SSplitter::FSlot> *param_6,
          TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *param_7)

{
  uint uVar1;
  code *pcVar2;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  
  pTVar3 = param_7;
  uVar1 = param_4 + 1;
  uVar5 = 0;
  if ((int)uVar1 < param_7->ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_7 = *(TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> **)
             ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x14 + 4);
  HandleResizingDelta(this,param_1,param_2,param_3,param_4,
                      (float)(*(double *)
                               ((longlong)&param_5->field0_0x0 +
                               (ulonglong)(-(uint)(param_1 != Orient_Horizontal) & 8)) -
                             (double)(*(float *)((longlong)&param_7 +
                                                (ulonglong)
                                                (-(uint)(param_1 != Orient_Horizontal) & 4)) -
                                     param_2 * __real_3f000000)),param_6,pTVar3);
  return;
}

// HandleResizingBySize @ 14294cc80

void __thiscall
SSplitter::HandleResizingBySize
          (SSplitter *this,EOrientation param_1,float param_2,Type param_3,int param_4,
          TVector2<double> *param_5,TPanelChildren<SSplitter::FSlot> *param_6,
          TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *param_7)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  
  pTVar5 = param_7;
  uVar7 = 0;
  if (param_4 < param_7->ArrayNum) {
    uVar7 = (uint)~param_4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (pTVar5->AllocatorInstance).Data;
  fVar1 = *(float *)(pFVar2 + (longlong)param_4 * 0x14);
  uVar3 = *(undefined8 *)(pFVar2 + (longlong)param_4 * 0x14 + 0xc);
  param_7._0_4_ = (float)uVar3;
  param_7._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  param_7 = (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)
            CONCAT44(fVar1 * param_7._4_4_,fVar1 * param_7._0_4_);
  HandleResizingDelta(this,param_1,param_2,param_3,param_4,
                      (float)(*(double *)
                               ((longlong)&param_5->field0_0x0 +
                               (ulonglong)(-(uint)(param_1 != Orient_Horizontal) & 8)) -
                             (double)*(float *)((longlong)&param_7 +
                                               (ulonglong)
                                               (-(uint)(param_1 != Orient_Horizontal) & 4))),param_6
                      ,pTVar5);
  return;
}

// HandleResizingDelta @ 14294cde0

void __thiscall
SSplitter::HandleResizingDelta
          (SSplitter *this,EOrientation param_1,float param_2,Type param_3,int param_4,float param_5
          ,TPanelChildren<SSplitter::FSlot> *param_6,
          TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  TPanelChildren<SSplitter::FSlot> *this_00;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<_protected:_void___cdecl_SSplitter::HandleResizingDelta(EOrientation,float,ESplitterResizeMode::Type,int,float,TPanelChildren<SSplitter::FSlot>_&,TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_>_const_&)_::_15_::FSlotInfo>
  FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  FSlot *pFVar12;
  ESizeRule *pEVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ForElementType<_protected:_void___cdecl_SSplitter::HandleResizingDelta(EOrientation,float,ESplitterResizeMode::Type,int,float,TPanelChildren<SSplitter::FSlot>_&,TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_>_const_&)_::_15_::FSlotInfo>
  local_108;
  undefined8 local_100;
  TArray<int,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> local_f8;
  int local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  int local_d4;
  longlong local_d0;
  FSlot *local_c8;
  FSlotInfo local_c0;
  undefined8 local_a8;
  TVector2<float>_u_0 local_a0;
  
  this_00 = param_6;
  uVar17 = 0;
  local_f8.AllocatorInstance.Data = (int *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  uVar10 = (param_6->Children).ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>_>
              (4,4,uVar10,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
  }
  iVar14 = local_f8.ArrayMax;
  iVar7 = local_f8.ArrayNum;
  if (param_3 == FixedPosition) {
    local_e8 = FindResizeableSlotAfterHandle(param_4,&this->Children);
    if ((-1 < local_e8) && (local_e8 < (this_00->Children).ArrayNum)) {
      if ((local_f8.AllocatorInstance.Data <= &local_e8) &&
         ((&local_e8 < local_f8.AllocatorInstance.Data + iVar14 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar7 == iVar14) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>_>
                          (0x404,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
      }
      local_f8.ArrayNum = iVar7 + 1;
      local_f8.AllocatorInstance.Data[iVar7] = local_e8;
      iVar7 = local_f8.ArrayNum;
    }
  }
  else if (param_3 - FixedSize < 2) {
    FindAllResizeableSlotsAfterHandle(param_4,this_00,&local_f8);
    iVar7 = local_f8.ArrayNum;
  }
  local_d4 = iVar7;
  if (0 < iVar7) {
    local_108.Data = (FSlotInfo *)0x0;
    local_100 = 0;
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_SSplitter::HandleResizingDelta_::__l15::FSlotInfo>_>
              (0x18,8,iVar7,&local_108,0,(int *)((longlong)&local_100 + 4));
    iVar14 = (int)local_100;
    local_d0 = (longlong)iVar7;
    if (0 < iVar7) {
      lVar16 = 0;
      local_c8 = (FSlot *)(ulonglong)(-(uint)(param_1 != Orient_Horizontal) & 4);
      do {
        uVar10 = 0;
        if ((int)uVar17 < iVar7) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = local_f8.AllocatorInstance.Data[lVar16];
        uVar8 = 0;
        if ((int)uVar10 < (this_00->Children).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c0.Slot =
             *(FSlot **)((this_00->Children).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
        uVar10 = 0;
        if ((int)uVar17 < iVar7) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar4 = param_7;
        uVar10 = local_f8.AllocatorInstance.Data[lVar16];
        uVar8 = 0;
        if ((int)uVar10 < param_7->ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c0.Geometry =
             (FLayoutGeometry *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x14);
        local_e4 = (TVector2<float>_u_0)
                   *(TVector2<float>_u_0 *)&((local_c0.Geometry)->LocalSize).field0_0x0._s_0;
        fVar25 = ((local_c0.Geometry)->LocalToParent).Scale;
        local_dc = CONCAT44(fVar25 * (float)local_e4._4_4_,fVar25 * (float)(undefined4)local_e4);
        local_a8 = local_dc;
        if (((local_c0.Slot)->MinSizeValue).bIsSet == false) {
          auVar19 = ZEXT812(0);
        }
        else {
          pfVar11 = TAttribute<float>::Get(&(local_c0.Slot)->MinSizeValue);
          auVar19._4_8_ = 0;
          auVar19._0_4_ = *pfVar11;
        }
        if (auVar19._0_4_ <= *(float *)((longlong)&local_a8 + (longlong)local_c8)) {
          auVar19._4_8_ = auVar19._4_8_;
          auVar19._0_4_ = *(float *)((longlong)&local_a8 + (longlong)local_c8);
        }
        local_c0.NewSize = auVar19._0_4_;
        if (((local_108.Data <= &local_c0) && (&local_c0 < local_108.Data + local_100._4_4_)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = iVar14;
        if (iVar14 == local_100._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_SSplitter::HandleResizingDelta_::__l15::FSlotInfo>_>
                            (0x818,&local_108,(int *)((longlong)&local_100 + 4));
        }
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 1;
        iVar14 = iVar9 + 1;
        local_100 = CONCAT44(local_100._4_4_,iVar14);
        local_108.Data[iVar9].Slot = local_c0.Slot;
        local_108.Data[iVar9].Geometry = local_c0.Geometry;
        *(ulonglong *)&local_108.Data[iVar9].NewSize = CONCAT44(local_c0._20_4_,local_c0.NewSize);
      } while (lVar16 < local_d0);
    }
    lVar16 = local_d0;
    uVar10 = FindResizeableSlotBeforeHandle(param_4,this_00);
    if ((((int)uVar10 < 0) || ((this_00->Children).ArrayNum <= (int)uVar10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InChildren.IsValidIndex(SlotBeforeDragHandle)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SSplitter.cpp"
                           ,0x2b9,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar12 = TPanelChildren<SSplitter::FSlot>::operator[](this_00,uVar10);
    pTVar4 = param_7;
    uVar17 = 0;
    if ((int)uVar10 < param_7->ArrayNum) {
      uVar17 = ~uVar10 >> 0x1f;
    }
    local_c8 = pFVar12;
    if ((uVar17 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    uVar2 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar10 * 0x14 + 0xc);
    fVar25 = *(float *)(pFVar1 + (longlong)(int)uVar10 * 0x14);
    local_dc._0_4_ = (float)uVar2;
    local_dc._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_e4._4_4_ = fVar25 * local_dc._4_4_;
    local_e4._0_4_ = fVar25 * (float)local_dc;
    local_a0 = local_e4;
    fVar25 = *(float *)((longlong)&local_a0 + (ulonglong)(-(uint)(param_1 != Orient_Horizontal) & 4)
                       );
    local_dc = uVar2;
    if ((pFVar12->MinSizeValue).bIsSet == false) {
      fVar24 = 0.0;
    }
    else {
      pfVar11 = TAttribute<float>::Get(&pFVar12->MinSizeValue);
      fVar24 = *pfVar11;
    }
    iVar7 = local_d4;
    if (fVar24 <= fVar25 + param_5) {
      fVar24 = fVar25 + param_5;
    }
    iVar9 = 0;
    fVar23 = fVar24 - fVar25;
    do {
      if (fVar23 == 0.0) break;
      if (param_3 == FixedSize) {
        uVar10 = iVar7 - 1;
        lVar18 = lVar16 + -1;
        fVar22 = fVar23;
      }
      else {
        uVar10 = 0;
        lVar18 = 0;
        fVar22 = fVar23 / (float)iVar7;
      }
      fVar23 = 0.0;
      if (lVar18 < lVar16) {
        lVar15 = lVar18 * 0x18;
        lVar18 = lVar16 - lVar18;
        do {
          uVar17 = 0;
          if ((int)uVar10 < iVar14) {
            uVar17 = ~uVar10 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar5.Data = local_108.Data;
          lVar16 = *(longlong *)((longlong)&(local_108.Data)->Slot + lVar15);
          fVar21 = *(float *)((longlong)&(local_108.Data)->NewSize + lVar15) - fVar22;
          if (*(char *)(lVar16 + 100) == '\0') {
            auVar20 = ZEXT812(0);
          }
          else {
            pfVar11 = TAttribute<float>::Get((TAttribute<float> *)(lVar16 + 0x60));
            auVar20._4_8_ = 0;
            auVar20._0_4_ = *pfVar11;
          }
          if (auVar20._0_4_ <= fVar21) {
            auVar20._4_8_ = auVar20._4_8_;
            auVar20._0_4_ = fVar21;
          }
          uVar10 = uVar10 + 1;
          *(float *)((longlong)&(FVar5.Data)->NewSize + lVar15) = auVar20._0_4_;
          lVar15 = lVar15 + 0x18;
          fVar23 = fVar23 + (auVar20._0_4_ - fVar21);
          lVar18 = lVar18 + -1;
          lVar16 = local_d0;
        } while (lVar18 != 0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
    pFVar12 = local_c8;
    fVar25 = ((fVar24 - fVar25) - fVar23) + fVar25;
    if ((local_c8->MinSizeValue).bIsSet == false) {
      fVar24 = 0.0;
    }
    else {
      pfVar11 = TAttribute<float>::Get(&local_c8->MinSizeValue);
      fVar24 = *pfVar11;
    }
    fVar23 = 0.0;
    if (fVar24 <= fVar25) {
      fVar24 = fVar25;
    }
    pEVar13 = TAttribute<enum_SSplitter::ESizeRule>::Get(&pFVar12->SizingRule);
    fVar25 = 0.0;
    if (*pEVar13 == FractionOfParent) {
      pfVar11 = TAttribute<float>::Get(&pFVar12->SizeValue);
      fVar23 = *pfVar11;
      fVar25 = fVar24;
    }
    uVar10 = 0;
    if (lVar16 < 1) {
      `SSplitter::HandleResizingDelta'::__l32::<lambda_1>::operator()
                (&param_6,pFVar12,fVar23,fVar24,fVar25);
    }
    else {
      lVar18 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar10 < iVar14) {
          uVar17 = ~uVar10 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar5.Data = local_108.Data;
        pEVar13 = TAttribute<enum_SSplitter::ESizeRule>::Get
                            ((void *)(*(longlong *)((longlong)&(local_108.Data)->Slot + lVar18) +
                                     0x20));
        if (*pEVar13 == FractionOfParent) {
          fVar25 = fVar25 + *(float *)((longlong)&(FVar5.Data)->NewSize + lVar18);
          pfVar11 = TAttribute<float>::Get
                              ((TAttribute<float> *)
                               (*(longlong *)((longlong)&(FVar5.Data)->Slot + lVar18) + 0x40));
          fVar23 = fVar23 + *pfVar11;
        }
        uVar10 = uVar10 + 1;
        lVar18 = lVar18 + 0x18;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      `SSplitter::HandleResizingDelta'::__l32::<lambda_1>::operator()
                (&param_6,pFVar12,fVar23,fVar24,fVar25);
      lVar18 = 0;
      uVar10 = 0;
      lVar16 = local_d0;
      do {
        uVar17 = 0;
        if ((int)uVar10 < iVar14) {
          uVar17 = ~uVar10 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        `SSplitter::HandleResizingDelta'::__l32::<lambda_1>::operator()
                  (&param_6,*(FSlot **)((longlong)&(local_108.Data)->Slot + lVar18),fVar23,
                   *(float *)((longlong)&(local_108.Data)->NewSize + lVar18),fVar25);
        uVar10 = uVar10 + 1;
        lVar18 = lVar18 + 0x18;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (local_108.Data != (FSlotInfo *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_108.Data);
    }
  }
  if (local_f8.AllocatorInstance.Data != (int *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// IsValidSlotIndex @ 142957060

bool __thiscall SSplitter::IsValidSlotIndex(SSplitter *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->Children).Children.ArrayNum)) {
    return true;
  }
  return false;
}

// NumSlots @ 14295d8f0

int __thiscall SSplitter::NumSlots(SSplitter *this)

{
  return (this->Children).Children.ArrayNum;
}

// OnArrangeChildren @ 142960c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SSplitter::OnArrangeChildren(SSplitter *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlateLayoutTransform *pFVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStackY_e8 [32];
  FDeprecateVector2DParameter local_b8;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> local_b0;
  FArrangedWidget local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  ArrangeChildrenForLayout(this,&local_b0,param_1);
  uVar5 = 0;
  if (0 < (this->Children).Children.ArrayNum) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < local_b0.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (FSlateLayoutTransform *)(local_b0.AllocatorInstance.Data + lVar7);
      uVar3 = 0;
      if ((int)uVar5 < (this->Children).Children.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_b8 = *(FDeprecateVector2DParameter *)(pFVar4 + 1);
      FGeometry::MakeChild
                (param_1,&local_98,
                 (TSharedRef<SWidget,1> *)
                 (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar6 * 8) + 0x10
                 ),&local_b8,pFVar4);
      FArrangedChildren::AddWidget(param_2,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.Widget.SharedReferenceCount.ReferenceController);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x14;
    } while ((int)uVar5 < (this->Children).Children.ArrayNum);
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

// OnCursorQuery @ 142962af0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SSplitter::OnCursorQuery
          (SSplitter *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  Type TVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  TTransform2<float> *pTVar6;
  FSlot *this_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  Type *pTVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined8 local_e0;
  TReferenceControllerBase<1> *pTStack_d8;
  undefined8 local_d0;
  TReferenceControllerBase<1> *pTStack_c8;
  undefined8 local_c0;
  TReferenceControllerBase<1> *pTStack_b8;
  Type local_b0 [2];
  undefined1 local_a8;
  undefined8 local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  undefined8 local_90;
  TReferenceControllerBase<1> *pTStack_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *pTStack_78;
  Type local_70 [2];
  TVector2<double>_u_0 local_68 [4];
  
  iVar11 = 0;
  if (this->bIsResizing != false) {
    bVar12 = this->Orientation != Orient_Horizontal;
    if (bVar12) {
      local_e8 = 1;
      local_b0[0] = ResizeUpDown;
      puVar7 = &local_e0;
      puVar9 = &local_d0;
      local_e0 = 0;
      pTStack_d8 = (TReferenceControllerBase<1> *)0x0;
      puVar8 = &local_c0;
      iVar11 = 2;
      local_d0 = 0;
      pTStack_c8 = (TReferenceControllerBase<1> *)0x0;
      pTVar10 = local_b0;
      local_c0 = 0;
      pTStack_b8 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_a8 = 1;
      puVar7 = &local_a0;
      local_a0 = 0;
      pTStack_98 = (TReferenceControllerBase<1> *)0x0;
      local_70[0] = ResizeLeftRight;
      puVar9 = &local_90;
      local_90 = 0;
      pTStack_88 = (TReferenceControllerBase<1> *)0x0;
      puVar8 = &local_80;
      local_80 = 0;
      pTStack_78 = (TReferenceControllerBase<1> *)0x0;
      pTVar10 = local_70;
    }
    lVar2 = puVar7[1];
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = lVar2;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar9[1];
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar8[1];
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    TVar1 = *pTVar10;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    __return_storage_ptr__->MouseCursor = TVar1;
    if (iVar11 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_d8);
    }
    if (bVar12) {
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
    return __return_storage_ptr__;
  }
  pTVar6 = Inverse<TTransform2<float>_>
                     ((TTransform2<float> *)&local_68[0]._s_0,&param_1->AccumulatedRenderTransform);
  local_f8._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
  local_f8._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
  fVar13 = (float)local_f8._4_4_ * (pTVar6->M).M[1][0] + (float)local_f8._0_4_ * (pTVar6->M).M[0][0]
           + (pTVar6->Trans).field0_0x0._s_0.X;
  local_f8._4_4_ =
       (float)local_f8._0_4_ * (pTVar6->M).M[0][1] + (float)local_f8._4_4_ * (pTVar6->M).M[1][1] +
       (pTVar6->Trans).field0_0x0._s_0.Y;
  local_f8._0_4_ = fVar13;
  dVar3 = (double)fVar13;
  dVar4 = (double)(float)local_f8._4_4_;
  ArrangeChildrenForLayout
            (this,(TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)local_f8,param_1);
  local_68[0]._0_8_ = dVar3;
  local_68[0]._8_8_ = dVar4;
  if (this->Orientation == Orient_Horizontal) {
    iVar5 = GetHandleBeingResizedFromMousePosition<0>
                      (this->PhysicalSplitterHandleSize,this->HitDetectionSplitterHandleSize,
                       (TVector2<double> *)&local_68[0]._s_0,
                       (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)local_f8);
  }
  else {
    iVar5 = GetHandleBeingResizedFromMousePosition<1>
                      (this->PhysicalSplitterHandleSize,this->HitDetectionSplitterHandleSize,
                       (TVector2<double> *)&local_68[0]._s_0,
                       (TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> *)local_f8);
  }
  if (iVar5 != -1) {
    this_00 = TPanelChildren<SSplitter::FSlot>::operator[](&this->Children,iVar5);
    bVar12 = FSlot::CanBeResized(this_00);
    if (bVar12) {
      bVar12 = this->Orientation != Orient_Horizontal;
      if (bVar12) {
        local_70[0] = ResizeUpDown;
        puVar8 = &local_a0;
        local_a8 = 1;
        local_a0 = 0;
        pTStack_98 = (TReferenceControllerBase<1> *)0x0;
        puVar7 = &local_90;
        local_90 = 0;
        pTStack_88 = (TReferenceControllerBase<1> *)0x0;
        puVar9 = &local_80;
        local_80 = 0;
        pTStack_78 = (TReferenceControllerBase<1> *)0x0;
        pTVar10 = local_70;
      }
      else {
        local_e8 = 1;
        puVar8 = &local_e0;
        local_e0 = 0;
        pTStack_d8 = (TReferenceControllerBase<1> *)0x0;
        local_b0[0] = ResizeLeftRight;
        puVar7 = &local_d0;
        local_d0 = 0;
        pTStack_c8 = (TReferenceControllerBase<1> *)0x0;
        puVar9 = &local_c0;
        local_c0 = 0;
        pTStack_b8 = (TReferenceControllerBase<1> *)0x0;
        pTVar10 = local_b0;
        iVar11 = 4;
      }
      lVar2 = puVar8[1];
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = lVar2;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)puVar7[1];
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)puVar9[1];
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      TVar1 = *pTVar10;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      __return_storage_ptr__->MouseCursor = TVar1;
      if (bVar12) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_98);
      }
      if (iVar11 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d8);
      }
      goto LAB_142962e46;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Default;
LAB_142962e46:
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 14296a340

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitter::OnMouseButtonDoubleClick
          (SSplitter *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  Type TVar4;
  EOrientation EVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  FReply *pFVar9;
  longlong *plVar10;
  uint uVar11;
  undefined8 local_res8;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> local_90;
  double local_80 [2];
  FReadAccessScope local_70;
  FReadAccessScope local_58 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetMaxSlotSize,
             &local_70);
  if (((*(int *)&(this->OnGetMaxSlotSize).field_0x10 == 0) ||
      (plVar10 = *(longlong **)&(this->OnGetMaxSlotSize).field_0x8, plVar10 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*plVar10 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    iVar2 = this->HoveredHandleIndex;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetMaxSlotSize,
               local_58);
    plVar10 = (longlong *)0x0;
    if (*(int *)&(this->OnGetMaxSlotSize).field_0x10 != 0) {
      plVar10 = *(longlong **)&(this->OnGetMaxSlotSize).field_0x8;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,local_80,iVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_58);
    if ((local_80[0] != 0.0) || (local_80[1] != 0.0)) {
      ArrangeChildrenForLayout(this,&local_90,param_1);
      uVar3 = this->HoveredHandleIndex;
      TVar4 = this->ResizeMode;
      fVar1 = this->PhysicalSplitterHandleSize;
      EVar5 = this->Orientation;
      uVar11 = 0;
      if ((int)uVar3 < local_90.ArrayNum) {
        uVar11 = ~uVar3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar6)();
        return pFVar9;
      }
      local_res8._0_4_ =
           (float)*(undefined8 *)
                   (local_90.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14 + 0xc);
      local_res8._4_4_ =
           (float)((ulonglong)
                   *(undefined8 *)
                    (local_90.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14 + 0xc) >> 0x20);
      local_res8 = CONCAT44(*(float *)(local_90.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14
                                      ) * local_res8._4_4_,
                            *(float *)(local_90.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14
                                      ) * (float)local_res8);
      HandleResizingDelta(this,EVar5,fVar1,TVar4,uVar3,
                          (float)(*(double *)
                                   ((longlong)local_80 +
                                   (ulonglong)(-(uint)(EVar5 != Orient_Horizontal) & 8)) -
                                 (double)*(float *)((longlong)&local_res8 +
                                                   (ulonglong)
                                                   (-(uint)(EVar5 != Orient_Horizontal) & 4))),
                          &this->Children,&local_90);
      FReply::FReply(__return_storage_ptr__,true);
      if (local_90.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_90.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  SWidget::OnMouseButtonDoubleClick((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14296d1e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitter::OnMouseButtonDown
          (SSplitter *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar1 == EKeys::LeftMouseButton.KeyName) && (this->HoveredHandleIndex != -1)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    this->bIsResizing = true;
    FReply::FReply(&local_c8,true);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar4->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8.Object = pSVar3;
    local_d8.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar5 = FReply::CaptureMouse(&local_c8,&local_d8);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_c8);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14296fb60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitter::OnMouseButtonUp
          (SSplitter *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  FWeakReferencer<1> FVar6;
  FReadAccessScope local_d8;
  FReply local_c0;
  
  FVar3 = (param_2->EffectingButton).KeyName;
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar3 == EKeys::LeftMouseButton.KeyName) && (this->bIsResizing == true)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnSplitterFinishedResizing,&local_d8);
    if ((*(int *)&(this->OnSplitterFinishedResizing).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnSplitterFinishedResizing).field_0x8,
       plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    this->bIsResizing = false;
    FReply::FReply(&local_c0,true);
    FVar6.ReferenceController = local_c0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c0.MouseCaptor.Object = (SWidget *)0x0;
    local_c0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
    }
    local_c0.bUseHighPrecisionMouse = 0;
    local_c0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c0);
    FReply::~FReply(&local_c0);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseLeave @ 142970170

void __thiscall SSplitter::OnMouseLeave(SSplitter *this,FPointerEvent *param_1)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  iVar1 = this->HoveredHandleIndex;
  if ((this->bIsResizing == false) && (this->HoveredHandleIndex = -1, iVar1 != -1)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHandleHovered,
               &local_28);
    if ((*(int *)&(this->OnHandleHovered).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnHandleHovered).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,0xffffffff);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnMouseMove @ 142975c60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitter::OnMouseMove
          (SSplitter *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  EOrientation EVar4;
  Type TVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  TTransform2<float> *pTVar14;
  FReply *pFVar15;
  float local_d8;
  float fStack_d4;
  TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_> local_d0;
  undefined8 local_c0;
  double local_b8 [2];
  TVector2<double>_u_0 local_a8;
  TVector2<double>_u_0 local_98;
  FReadAccessScope local_88;
  TTransform2<float> local_70 [2];
  
  pTVar14 = Inverse<TTransform2<float>_>(local_70,&param_1->AccumulatedRenderTransform);
  fStack_d4 = SUB84(param_2->ScreenSpacePosition,4);
  local_d8 = SUB84(param_2->ScreenSpacePosition,0);
  dVar8 = (double)(fStack_d4 * (pTVar14->M).M[1][0] + local_d8 * (pTVar14->M).M[0][0] +
                  (pTVar14->Trans).field0_0x0._s_0.X);
  dVar9 = (double)(local_d8 * (pTVar14->M).M[0][1] + fStack_d4 * (pTVar14->M).M[1][1] +
                  (pTVar14->Trans).field0_0x0._s_0.Y);
  local_b8[0] = dVar8;
  local_b8[1] = dVar9;
  ArrangeChildrenForLayout(this,&local_d0,param_1);
  if (this->bIsResizing != false) {
    if ((*(float *)&param_2->CursorDelta != 0.0) ||
       (*(float *)&(param_2->CursorDelta).field_0x4 != 0.0)) {
      iVar3 = this->HoveredHandleIndex;
      fVar2 = this->PhysicalSplitterHandleSize;
      EVar4 = this->Orientation;
      uVar1 = iVar3 + 1;
      TVar5 = this->ResizeMode;
      uVar11 = 0;
      if ((int)uVar1 < local_d0.ArrayNum) {
        uVar11 = ~uVar1 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          pFVar15 = (FReply *)(*pcVar7)();
          return pFVar15;
        }
      }
      local_c0 = *(undefined8 *)(local_d0.AllocatorInstance.Data + (longlong)(int)uVar1 * 0x14 + 4);
      HandleResizingDelta(this,EVar4,fVar2,TVar5,iVar3,
                          (float)(*(double *)
                                   ((longlong)local_b8 +
                                   (ulonglong)(-(uint)(EVar4 != Orient_Horizontal) & 8)) -
                                 (double)(*(float *)((longlong)&local_c0 +
                                                    (ulonglong)
                                                    (-(uint)(EVar4 != Orient_Horizontal) & 4)) -
                                         fVar2 * __real_3f000000)),&this->Children,&local_d0);
    }
    bVar10 = true;
    goto LAB_142975f0d;
  }
  iVar3 = this->HoveredHandleIndex;
  if (this->Orientation == Orient_Horizontal) {
    local_a8._s_0.X = dVar8;
    local_a8._s_0.Y = dVar9;
    iVar12 = GetHandleBeingResizedFromMousePosition<0>
                       (this->PhysicalSplitterHandleSize,this->HitDetectionSplitterHandleSize,
                        (TVector2<double> *)&local_a8._s_0,&local_d0);
  }
  else {
    local_98._s_0.X = dVar8;
    local_98._s_0.Y = dVar9;
    iVar12 = GetHandleBeingResizedFromMousePosition<1>
                       (this->PhysicalSplitterHandleSize,this->HitDetectionSplitterHandleSize,
                        (TVector2<double> *)&local_98._s_0,&local_d0);
  }
  this->HoveredHandleIndex = iVar12;
  if (iVar12 != -1) {
    iVar12 = FindResizeableSlotBeforeHandle(iVar12,&this->Children);
    if (-1 < iVar12) {
      iVar12 = (this->Children).Children.ArrayNum;
      iVar13 = FindResizeableSlotAfterHandle(this->HoveredHandleIndex,&this->Children);
      if (iVar13 < iVar12) goto LAB_142975eca;
    }
    this->HoveredHandleIndex = -1;
  }
LAB_142975eca:
  if (this->HoveredHandleIndex != iVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHandleHovered,
               &local_88);
    if ((*(int *)&(this->OnHandleHovered).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(this->OnHandleHovered).field_0x8, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  bVar10 = false;
LAB_142975f0d:
  FReply::FReply(__return_storage_ptr__,bVar10);
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnPaint @ 142980f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSplitter::OnPaint(SSplitter *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                  FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  uint uVar1;
  FSlateColor *this_00;
  ForElementType<FArrangedWidget> FVar2;
  float fVar3;
  byte bVar4;
  FSplitterStyle *pFVar5;
  FSplitterStyle *pFVar6;
  code *pcVar7;
  uint uVar8;
  float afVar9 [2];
  float afVar10 [2];
  float afVar11 [2];
  float afVar12 [2];
  bool bVar13;
  ESlateDrawEffect EVar14;
  int iVar15;
  FSlot *pFVar16;
  longlong lVar17;
  FLinearColor *pFVar18;
  uint uVar19;
  ForElementType<FArrangedWidget> FVar20;
  TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar21;
  uint uVar22;
  TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar23;
  ForElementType<FArrangedWidget> FVar24;
  ulonglong uVar25;
  TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_3b8 [32];
  float local_360;
  float fStack_35c;
  FLinearColor_u_0 local_310;
  FLinearColor_u_0 local_300;
  FWidgetStyle *local_2f0;
  undefined8 local_2e4;
  undefined8 local_2d8;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  TTransform2<float> local_2b0;
  TTransform2<float> local_298;
  TTransform2<float> local_280;
  TTransform2<float> local_268;
  TVector2<float>_u_0 local_250;
  float local_248;
  undefined8 local_244;
  undefined8 local_23c;
  float local_234 [2];
  float afStack_22c [2];
  TVector2<float>_u_0 local_224;
  byte local_21c;
  TVector2<float>_u_0 local_218;
  float local_210;
  undefined8 local_20c;
  undefined8 local_204;
  float local_1fc [2];
  float afStack_1f4 [2];
  TVector2<float>_u_0 local_1ec;
  byte local_1e4;
  FArrangedChildren local_1e0;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_1e0.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  TVar26 = (TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  local_2f0 = param_6;
  local_1e0.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_1e0.Array.ArrayNum = 0;
  local_1e0.Array.ArrayMax = 4;
  local_1e0.bAllow3DWidgets = false;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_1e0,false);
  iVar15 = SPanel::PaintArrangedChildren
                     ((SPanel *)this,param_1,&local_1e0,param_2,param_3,param_4,param_5,param_6,
                      param_7);
  TVar23 = (TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
           this->HoveredHandleIndex;
  uVar25 = (ulonglong)(uint)local_1e0.Array.ArrayNum;
  uVar1 = iVar15 + 1;
  pFVar5 = this->Style;
  if ((TVar23 != (TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                 0xffffffff) && (local_1e0.Array.ArrayNum != (this->Children).Children.ArrayNum)) {
    pFVar16 = TPanelChildren<SSplitter::FSlot>::operator[](&this->Children,(int)TVar23);
    uVar25 = (ulonglong)local_1e0.Array.ArrayNum;
    FVar20 = (ForElementType<FArrangedWidget>)&local_1e0.Array;
    if (local_1e0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar20 = local_1e0.Array.AllocatorInstance.SecondaryData;
    }
    FVar2 = (ForElementType<FArrangedWidget>)((longlong)FVar20 + uVar25 * 0x48);
    if (FVar20 != FVar2) {
      FVar24 = FVar20;
      do {
        if (((TSharedRef<SWidget,1> *)((longlong)FVar24 + 0x38))->Object ==
            (SWidget *)pFVar16->_padding_) {
          lVar17 = ((longlong)FVar24 - (longlong)FVar20) / 0x12 +
                   ((longlong)FVar24 - (longlong)FVar20 >> 0x3f);
          TVar23 = (TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                   ((int)(lVar17 >> 2) - (int)(lVar17 >> 0x3f));
          goto LAB_1429810ed;
        }
        FVar24 = (ForElementType<FArrangedWidget>)((longlong)FVar24 + 0x48);
      } while (FVar24 != FVar2);
    }
    TVar23 = (TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0xffffffff;
  }
LAB_1429810ed:
  TVar21 = this->HighlightedHandleIndex;
  if ((TVar21 != (TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                 0xffffffff) && ((int)uVar25 != (this->Children).Children.ArrayNum)) {
    pFVar16 = TPanelChildren<SSplitter::FSlot>::operator[](&this->Children,(int)TVar21);
    uVar25 = (ulonglong)local_1e0.Array.ArrayNum;
    FVar20 = (ForElementType<FArrangedWidget>)&local_1e0.Array;
    if (local_1e0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar20 = local_1e0.Array.AllocatorInstance.SecondaryData;
    }
    FVar2 = (ForElementType<FArrangedWidget>)((longlong)FVar20 + uVar25 * 0x48);
    if (FVar20 != FVar2) {
      FVar24 = FVar20;
      do {
        if (((TSharedRef<SWidget,1> *)((longlong)FVar24 + 0x38))->Object ==
            (SWidget *)pFVar16->_padding_) {
          TVar21 = SUB84(((longlong)FVar24 - (longlong)FVar20) / 0x48,0);
          goto LAB_142981176;
        }
        FVar24 = (ForElementType<FArrangedWidget>)((longlong)FVar24 + 0x48);
      } while (FVar24 != FVar2);
    }
    TVar21 = (TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0xffffffff;
  }
LAB_142981176:
  afVar11 = _UNK_15076b188;
  afVar9 = ___xmm_3f80000000000000000000003f800000;
  uVar8 = __xmm_80000000800000008000000080000000;
  uVar19 = (uint)uVar25;
  if (0 < (int)((uint)uVar25 - 1)) {
    do {
      uVar19 = (int)uVar25 - 1;
      if ((int)((int)TVar26 + 1U) < (int)uVar19) {
        uVar19 = (int)TVar26 + 1U;
      }
      uVar22 = 0;
      if (0 < (int)uVar19) {
        uVar22 = uVar19;
      }
      uVar19 = 0;
      if ((int)uVar22 < (int)uVar25) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        iVar15 = (*pcVar7)();
        return iVar15;
      }
      lVar17 = (longlong)(int)uVar22;
      FVar20 = (ForElementType<FArrangedWidget>)&local_1e0.Array;
      if (local_1e0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar20 = local_1e0.Array.AllocatorInstance.SecondaryData;
      }
      if (this->Orientation == Orient_Horizontal) {
        local_360 = this->PhysicalSplitterHandleSize;
        fVar28 = 0.0;
        fStack_35c = *(float *)((undefined1 *)((longlong)FVar20 + 4) + lVar17 * 0x48);
        fVar27 = (float)((uint)local_360 ^ uVar8);
      }
      else {
        fStack_35c = this->PhysicalSplitterHandleSize;
        fVar27 = 0.0;
        local_360 = *(float *)&(((FArrangedWidget *)((longlong)FVar20 + lVar17 * 0x48))->Geometry).
                               Size;
        fVar28 = (float)((uint)fStack_35c ^ uVar8);
      }
      if ((TVar23 == TVar26) || (TVar21 == TVar26)) {
        pFVar6 = this->Style;
        this_00 = &(pFVar6->HandleHighlightBrush).TintColor;
        if ((pFVar6->HandleHighlightBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
          pFVar18 = FSlateColor::GetColorFromTable(this_00);
          local_2c0 = (pFVar18->field0_0x0)._s_0.R;
          fStack_2bc = (pFVar18->field0_0x0)._s_0.G;
          fStack_2b8 = (pFVar18->field0_0x0)._s_0.B;
          fStack_2b4 = (pFVar18->field0_0x0)._s_0.A;
        }
        else {
          local_2c0 = (this_00->SpecifiedColor).field0_0x0._s_0.R;
          fStack_2bc = (pFVar6->HandleHighlightBrush).TintColor.SpecifiedColor.field0_0x0._s_0.G;
          fStack_2b8 = (pFVar6->HandleHighlightBrush).TintColor.SpecifiedColor.field0_0x0._s_0.B;
          fStack_2b4 = (pFVar6->HandleHighlightBrush).TintColor.SpecifiedColor.field0_0x0._s_0.A;
        }
        afVar12 = _UNK_15076b188;
        afVar10 = ___xmm_3f80000000000000000000003f800000;
        local_300._s_0.R = local_2c0 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
        local_300._s_0.G = fStack_2bc * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
        local_300._s_0.B = fStack_2b8 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
        local_300._s_0.A = fStack_2b4 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
        if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        local_2d8 = (TVector2<float>_u_0)
                    *(TVector2<float>_u_0 *)
                     &((TVector2<float> *)((longlong)FVar20 + 0xc))[lVar17 * 9].field0_0x0._s_0;
        bVar4 = ((undefined1 *)((longlong)FVar20 + 0x34))[lVar17 * 0x48];
        fVar3 = ((float *)((longlong)FVar20 + 8))[lVar17 * 0x12];
        local_280.Trans.field0_0x0._s_0.Y = fVar28;
        local_280.Trans.field0_0x0._s_0.X = fVar27;
        fVar27 = fVar27 * fVar3 + (float)local_2d8;
        ___xmm_3f80000000000000000000003f800000 = afVar9[0];
        _UNK_15076b184 = afVar9[1];
        local_280.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_280.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar11[0];
        _UNK_15076b18c = afVar11[1];
        local_280.M.M[1][0] = _UNK_15076b188;
        local_280.M.M[1][1] = _UNK_15076b18c;
        fVar28 = fVar28 * fVar3 + local_2d8._4_4_;
        ___xmm_3f80000000000000000000003f800000 = afVar10;
        _UNK_15076b188 = afVar12;
        Concatenate<TTransform2<float>_>
                  (&local_268,&local_280,
                   (TTransform2<float> *)(lVar17 * 0x48 + 0x1c + (longlong)FVar20));
        local_218._s_0.Y = fVar28;
        local_218._s_0.X = fVar27;
        local_204 = CONCAT44(fStack_35c,local_360);
        local_1e4 = (bVar4 & 1) * '\x02' | local_1e4 & 0xfc;
        local_20c = 0;
        EVar14 = DisabledEffect;
        if (bVar13) {
          EVar14 = None;
        }
        local_1ec = local_268.Trans.field0_0x0;
        local_1fc[0] = local_268.M.M[0][0];
        local_1fc[1] = local_268.M.M[0][1];
        afStack_1f4[0] = local_268.M.M[1][0];
        afStack_1f4[1] = local_268.M.M[1][1];
        local_210 = fVar3;
        FSlateDrawElement::MakeBox
                  (param_4,uVar1,(FPaintGeometry *)&local_218._s_0,&pFVar5->HandleNormalBrush,EVar14
                   ,(FLinearColor *)&local_300._s_0);
      }
      else {
        if ((pFVar5->HandleNormalBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
          pFVar18 = FSlateColor::GetColorFromTable(&(pFVar5->HandleNormalBrush).TintColor);
          local_2d0 = (pFVar18->field0_0x0)._s_0.R;
          fStack_2cc = (pFVar18->field0_0x0)._s_0.G;
          fStack_2c8 = (pFVar18->field0_0x0)._s_0.B;
          fStack_2c4 = (pFVar18->field0_0x0)._s_0.A;
        }
        else {
          local_2d0 = (pFVar5->HandleNormalBrush).TintColor.SpecifiedColor.field0_0x0._s_0.R;
          fStack_2cc = (pFVar5->HandleNormalBrush).TintColor.SpecifiedColor.field0_0x0._s_0.G;
          fStack_2c8 = (pFVar5->HandleNormalBrush).TintColor.SpecifiedColor.field0_0x0._s_0.B;
          fStack_2c4 = (pFVar5->HandleNormalBrush).TintColor.SpecifiedColor.field0_0x0._s_0.A;
        }
        afVar12 = _UNK_15076b188;
        afVar10 = ___xmm_3f80000000000000000000003f800000;
        local_310._s_0.R = local_2d0 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
        local_310._s_0.G = fStack_2cc * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
        local_310._s_0.B = fStack_2c8 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
        local_310._s_0.A = fStack_2c4 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
        if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        local_2e4 = (TVector2<float>_u_0)
                    *(TVector2<float>_u_0 *)
                     &((TVector2<float> *)((longlong)FVar20 + 0xc))[lVar17 * 9].field0_0x0._s_0;
        pFVar6 = this->Style;
        bVar4 = ((undefined1 *)((longlong)FVar20 + 0x34))[lVar17 * 0x48];
        fVar3 = ((float *)((longlong)FVar20 + 8))[lVar17 * 0x12];
        local_2b0.Trans.field0_0x0._s_0.Y = fVar28;
        local_2b0.Trans.field0_0x0._s_0.X = fVar27;
        fVar27 = fVar27 * fVar3 + (float)local_2e4;
        ___xmm_3f80000000000000000000003f800000 = afVar9[0];
        _UNK_15076b184 = afVar9[1];
        local_2b0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_2b0.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar11[0];
        _UNK_15076b18c = afVar11[1];
        local_2b0.M.M[1][0] = _UNK_15076b188;
        local_2b0.M.M[1][1] = _UNK_15076b18c;
        fVar28 = fVar28 * fVar3 + local_2e4._4_4_;
        ___xmm_3f80000000000000000000003f800000 = afVar10;
        _UNK_15076b188 = afVar12;
        Concatenate<TTransform2<float>_>
                  (&local_298,&local_2b0,
                   (TTransform2<float> *)(lVar17 * 0x48 + 0x1c + (longlong)FVar20));
        local_250._s_0.Y = fVar28;
        local_250._s_0.X = fVar27;
        local_23c = CONCAT44(fStack_35c,local_360);
        local_21c = (bVar4 & 1) * '\x02' | local_21c & 0xfc;
        local_244 = 0;
        EVar14 = DisabledEffect;
        if (bVar13) {
          EVar14 = None;
        }
        local_224 = local_298.Trans.field0_0x0;
        local_234[0] = local_298.M.M[0][0];
        local_234[1] = local_298.M.M[0][1];
        afStack_22c[0] = local_298.M.M[1][0];
        afStack_22c[1] = local_298.M.M[1][1];
        local_248 = fVar3;
        FSlateDrawElement::MakeBox
                  (param_4,uVar1,(FPaintGeometry *)&local_250._s_0,&pFVar6->HandleHighlightBrush,
                   EVar14,(FLinearColor *)&local_310._s_0);
        param_6 = local_2f0;
      }
      uVar25 = (ulonglong)(uint)local_1e0.Array.ArrayNum;
      TVar26 = (TSlateAttribute<int,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
               ((int)TVar26 + 1);
      uVar19 = local_1e0.Array.ArrayNum;
    } while ((int)TVar26 < (int)(local_1e0.Array.ArrayNum - 1U));
  }
  FVar20 = (ForElementType<FArrangedWidget>)&local_1e0.Array;
  if (local_1e0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar20 = local_1e0.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar20,uVar19);
  if (local_1e0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1e0.Array.AllocatorInstance.SecondaryData);
  }
  return uVar1;
}

// RemoveAt @ 1429898b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall SSplitter::RemoveAt(SSplitter *this,int param_1)

{
  TArray<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = &(this->Children).Children;
  uVar5 = 0;
  if (param_1 < (this->Children).Children.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this_00->AllocatorInstance).Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 8) = 0;
  TArray<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAt(this_00,param_1,Default);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// RemoveSlot @ 142989d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall SSplitter::RemoveSlot(SSplitter *this,TSharedRef<SWidget,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Children).Children.ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Children).Children.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
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
      if (param_1->Object ==
          *(SWidget **)
           (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar6) + 0x10)) {
        TArray<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAt(&(this->Children).Children,uVar5,Default);
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Children).Children.ArrayNum);
  }
  return -1;
}

// SetOrientation @ 142998450

void __thiscall SSplitter::SetOrientation(SSplitter *this,EOrientation param_1)

{
  this->Orientation = param_1;
  return;
}

// Slot @ 1429a1a70

FSlotArguments * __cdecl SSplitter::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlot *this;
  FSlot *local_res8 [4];
  
  this = ::operator_new(0xa0);
  local_res8[0] = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    local_res8[0] = FSlot::FSlot(this);
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)local_res8);
  return __return_storage_ptr__;
}

// SlotAt @ 1429a1ac0

FSlot * __thiscall SSplitter::SlotAt(SSplitter *this,int param_1)

{
  FSlot *pFVar1;
  
  pFVar1 = TPanelChildren<SSplitter::FSlot>::operator[](&this->Children,param_1);
  return pFVar1;
}

