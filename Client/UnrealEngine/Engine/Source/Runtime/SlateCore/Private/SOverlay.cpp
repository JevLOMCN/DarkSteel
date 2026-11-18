// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 20

// SOverlay @ 1425bf0a0

SOverlay * __thiscall SOverlay::SOverlay(SOverlay *this)

{
  EWidgetUpdateFlags EVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  SOverlay *pSVar6;
  EWidgetUpdateFlags EVar7;
  FName local_res8 [4];
  
  SWidget::SWidget((SWidget *)this);
  this->_padding_ = (longlong)&___7SOverlay__6B_;
  pFVar5 = ::FName::FName(local_res8,8,L"Children",FNAME_Add);
  FVar2 = *pFVar5;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)FVar2;
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  if (FVar2 == (FName)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SOverlay *)(*pcVar3)();
      return pSVar6;
    }
  }
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFOverlaySlot_SOverlay____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar7 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar7;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar7);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ~SOverlay @ 1425c1ca0

void __thiscall SOverlay::~SOverlay(SOverlay *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SOverlay__6B_;
  DestructItems<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,int>
            ((TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar1 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  this->_padding_ = (longlong)&___7SPanel__6B_;
  SWidget::~SWidget((SWidget *)this);
  return;
}

// AddSlot @ 1425c94c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FScopedWidgetSlotArguments * __thiscall
SOverlay::AddSlot(SOverlay *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  TPanelChildren<SOverlay::FOverlaySlot> *pTVar2;
  bool bVar3;
  uint uVar4;
  FOverlaySlot *pFVar5;
  FScopedWidgetSlotArguments *pFVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *pTVar12;
  uint uVar13;
  TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *pTVar14;
  longlong lVar15;
  TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *pTVar16;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  uint local_108;
  TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> local_100;
  FOverlaySlot *local_f8;
  FDestructionSentinel local_f0;
  undefined1 local_d8 [32];
  longlong lStack_b8;
  char local_b0;
  undefined1 local_a8 [8];
  ForAnyElementType FStack_a0;
  ulonglong local_98;
  undefined4 local_90;
  char local_8c;
  undefined4 local_88;
  char local_84;
  int local_80;
  bool local_7c;
  TPanelChildren<SOverlay::FOverlaySlot> *local_78;
  uint local_70;
  code *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar13 = 0xffffffff;
  pTVar16 = (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *)0x0;
  iVar11 = (this->Children).Children.ArrayNum;
  if (param_1 == -1) {
    param_1 = 0;
    if (iVar11 != 0) {
      pFVar5 = TPanelChildren<SOverlay::FOverlaySlot>::operator[](&this->Children,iVar11 + -1);
      param_1 = pFVar5->ZOrder + 1;
    }
  }
  else {
    pTVar14 = pTVar16;
    pTVar12 = pTVar16;
    uVar13 = 0;
    if (0 < iVar11) {
      do {
        uVar13 = (uint)pTVar14;
        uVar4 = 0;
        if ((int)uVar13 < iVar11) {
          uVar4 = ~uVar13 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_110 = (longlong)iVar11;
          local_118 = (longlong)(int)uVar13;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FScopedWidgetSlotArguments *)(*pcVar1)();
            return pFVar6;
          }
        }
        if (param_1 < *(int *)(*(longlong *)
                                (&pTVar12->field_0x0 +
                                (longlong)(this->Children).Children.AllocatorInstance.Data) + 0x40))
        break;
        iVar11 = (this->Children).Children.ArrayNum;
        uVar13 = uVar13 + 1;
        pTVar14 = (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *)(ulonglong)uVar13;
        pTVar12 = (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *)&pTVar12->field_0x8;
      } while ((int)uVar13 < iVar11);
    }
  }
  pFVar5 = ::operator_new(0x48);
  if (pFVar5 == (FOverlaySlot *)0x0) {
    local_d8._0_8_ = (FOverlaySlot *)0x0;
LAB_1425c95ef:
    local_d8._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_d8._8_8_ = (SWidget *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FScopedWidgetSlotArguments *)(*pcVar1)();
      return pFVar6;
    }
  }
  else {
    local_d8._0_8_ = FOverlaySlot::FOverlaySlot(pFVar5,param_1);
    local_d8._8_8_ = (SWidget *)0x0;
    local_d8._16_8_ = (TReferenceControllerBase<1> *)0x0;
    if ((FOverlaySlot *)local_d8._0_8_ == (FOverlaySlot *)0x0) goto LAB_1425c95ef;
  }
  local_d8._24_8_ = 0;
  local_8c = '\0';
  local_84 = '\0';
  local_7c = false;
  __return_storage_ptr__->_padding_ = local_d8._0_8_;
  __return_storage_ptr__->_padding_ = local_d8._8_8_;
  __return_storage_ptr__->_padding_ = local_d8._16_8_;
  lStack_b8 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  local_b0 = '\0';
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  local_98 = 0;
  local_68 = (code *)0x0;
  local_40 = (longlong *)0x0;
  local_d8._0_8_ = (FOverlaySlot *)0x0;
  local_d8._16_8_ = (TReferenceControllerBase<1> *)0x0;
  local_d8._8_8_ = (SWidget *)0x0;
  local_78 = &this->Children;
  local_70 = uVar13;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  uVar13 = local_70;
  pTVar2 = local_78;
  uVar9 = local_d8._0_8_;
  *(char *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_8c;
  if (local_8c != '\0') {
    *(undefined4 *)&__return_storage_ptr__->_padding_ = local_90;
  }
  *(char *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_84;
  if (local_84 != '\0') {
    *(undefined4 *)&__return_storage_ptr__->_padding_ = local_88;
  }
  *(bool *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_7c;
  if (local_7c != false) {
    *(int *)&__return_storage_ptr__->_padding_ = local_80;
  }
  lVar15 = (longlong)(int)local_70;
  __return_storage_ptr__->Children = local_78;
  __return_storage_ptr__->Index = local_70;
  *(code **)&__return_storage_ptr__->Added = local_68;
  *(longlong **)&(__return_storage_ptr__->Added).field_0x28 = local_40;
  *(undefined4 *)&(__return_storage_ptr__->Added).field_0x10 = local_58;
  *(undefined4 *)&(__return_storage_ptr__->Added).field_0x14 = uStack_54;
  *(undefined4 *)&(__return_storage_ptr__->Added).field_0x18 = uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->Added).field_0x1c = uStack_4c;
  local_40 = (longlong *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x20 = local_48;
  if (*(longlong *)&__return_storage_ptr__->Added != 0) {
    local_68 = (code *)0x0;
  }
  if ((FOverlaySlot *)local_d8._0_8_ != (FOverlaySlot *)0x0) {
    if (local_70 == 0xffffffff) {
      local_70 = TPanelChildren<SOverlay::FOverlaySlot>::AddSlot
                           (local_78,(FSlotArguments *)local_d8);
    }
    else {
      local_100.Ptr = (FOverlaySlot *)local_d8._0_8_;
      local_d8._0_8_ = (FOverlaySlot *)0x0;
      TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
      ::Insert(&local_78->Children,&local_100,local_70);
      iVar11 = (pTVar2->Children).ArrayNum;
      uVar4 = 0;
      if ((int)uVar13 < iVar11) {
        uVar4 = ~uVar13 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (local_118 = lVar15, local_110 = (longlong)iVar11,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FScopedWidgetSlotArguments *)(*pcVar1)();
        return pFVar6;
      }
      pTVar14 = *(TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> **)
                 ((pTVar2->Children).AllocatorInstance.Data + lVar15 * 8);
      piVar7 = &local_80;
      if (local_7c == false) {
        piVar7 = (int *)&pTVar14[1].field_0x18;
      }
      *(int *)&pTVar14[1].field_0x18 = *piVar7;
      TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::Construct
                (pTVar14,(FChildren *)pTVar2,(FSlotArguments *)local_d8);
      if (local_b0 != '\0') {
        pTVar12 = pTVar14;
        if (pTVar14 + 1 == (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *)0x0) {
          pTVar12 = pTVar16;
        }
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)(pTVar14 + 1),(ISlateAttributeContainer *)&pTVar12->field_0x20,
                 (TAttribute<FMargin> *)(local_d8 + 0x18),None);
      }
      puVar8 = &local_90;
      if (local_8c == '\0') {
        puVar8 = (undefined4 *)&pTVar14[1].field_0x10;
      }
      *(undefined4 *)&pTVar14[1].field_0x10 = *puVar8;
      if (local_84 == '\0') {
        puVar8 = (undefined4 *)&pTVar14[1].field_0x14;
      }
      else {
        puVar8 = &local_88;
      }
      *(undefined4 *)&pTVar14[1].field_0x14 = *puVar8;
      if (local_100.Ptr != (FOverlaySlot *)0x0) {
        (**(code **)(local_100.Ptr)->_padding_)(local_100.Ptr,1);
      }
    }
    if (local_68 == (code *)0x0) goto LAB_1425c9899;
    local_108 = local_70;
    local_f8 = (FOverlaySlot *)uVar9;
    UE::Core::Private::Function::CheckCallable(local_68);
    pcVar1 = local_68;
    plVar10 = (longlong *)&local_58;
    if (local_40 != (longlong *)0x0) {
      plVar10 = local_40;
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    (*pcVar1)(uVar9,&local_f8);
  }
  if (local_68 != (code *)0x0) {
    plVar10 = (longlong *)&local_58;
    if (local_40 != (longlong *)0x0) {
      plVar10 = local_40;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_1425c9899:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_f0);
  if (((int)local_98 != 0) && (FStack_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a0,0,0,0x10);
    local_98 = local_98 & 0xffffffff00000000;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_d8._16_8_);
  if ((FOverlaySlot *)local_d8._0_8_ != (FOverlaySlot *)0x0) {
    (**(code **)*(longlong *)local_d8._0_8_)(local_d8._0_8_,1);
  }
  return __return_storage_ptr__;
}

// ClearChildren @ 1425d1850

void __thiscall SOverlay::ClearChildren(SOverlay *this)

{
  int *piVar1;
  TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
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
  DestructItems<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,int>
            ((TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,int>
            ((TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> *)
             local_18.Data,(int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,int>
              ((TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> *)
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
  DestructItems<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,int>
            ((TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> *)
             local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1425d2080

TVector2<double> * __thiscall
SOverlay::ComputeDesiredSize(SOverlay *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  TVector2<double> *pTVar9;
  TVector2<float>_u_0 TVar10;
  TVector2<float>_u_0 TVar11;
  EVisibility EVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  double dVar16;
  float local_res10;
  float fStackX_14;
  
  iVar15 = (this->Children).Children.ArrayNum;
  uVar13 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  if (0 < iVar15) {
    lVar14 = 0;
    TVar11 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    EVar12 = EVisibility::Collapsed;
    do {
      uVar8 = 0;
      if ((int)uVar13 < iVar15) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         TVar11 = UE::Math::TVector2<float>::ZeroVector.field0_0x0, EVar12 = EVisibility::Collapsed,
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector2<double> *)(*pcVar4)();
        return pTVar9;
      }
      lVar2 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar14);
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar3 + 0x39) != EVar12.Value.Value) {
        fVar5 = *(float *)(lVar2 + 0x2c);
        fVar6 = *(float *)(lVar2 + 0x34);
        TVar10 = TVar11;
        if ((*(byte *)(lVar3 + 0x31) & 0x20) != 0) {
          TVar10._s_0 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar3 + 0x170))->_s_0;
        }
        local_res10 = TVar10._s_0.X;
        dVar16 = (double)(local_res10 + *(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x28));
        fStackX_14 = TVar10._s_0.Y;
        dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
        if (dVar16 <= dVar1) {
          dVar16 = dVar1;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar16;
        dVar16 = (double)(fStackX_14 + fVar6 + fVar5);
        dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
        if (dVar16 <= dVar1) {
          dVar16 = dVar1;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16;
      }
      iVar15 = (this->Children).Children.ArrayNum;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < iVar15);
  }
  return __return_storage_ptr__;
}

// Construct @ 1425d4840

void __thiscall SOverlay::Construct(SOverlay *this,FArguments *param_1)

{
  FIdentityFunctor local_res8 [8];
  TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  AlgoImpl::
  StableSortInternal<SOverlay::FOverlaySlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,_SOverlay::Construct_::__l2::<lambda_1>_>_>
            ((FSlotArguments *)(param_1->_Slots).AllocatorInstance.Data,(param_1->_Slots).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SOverlay::FOverlaySlot>::AddSlots(&this->Children,&local_18);
  return;
}

// GetChildIndexByZOrder @ 1425df2d0

int __thiscall SOverlay::GetChildIndexByZOrder(SOverlay *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Children).Children.ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
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
      if (*(int *)(*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar6) + 0x40)
          == param_1) {
        return uVar5;
      }
      iVar4 = (this->Children).Children.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// GetChildren @ 1425dfcd0

FChildren * __thiscall SOverlay::GetChildren(SOverlay *this)

{
  return (FChildren *)&this->Children;
}

// GetNumWidgets @ 1425e1e40

int __thiscall SOverlay::GetNumWidgets(SOverlay *this)

{
  return (this->Children).Children.ArrayNum;
}

// GetPrivateWidgetClass @ 1425e29c0

FSlateWidgetClassData * __cdecl SOverlay::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18 [2];
  FContainerInitializer local_78;
  EInvalidateWidgetReason local_68;
  ForAnyElementType local_60;
  ulonglong uStack_58;
  undefined1 local_50 [24];
  FAttributeEntry local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SOverlay");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = ::FName::FName(local_res18,8,L"Children",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&local_res8,&local_78,*pFVar1,0x218);
      local_68 = Layout;
      local_60.Data = (FScriptContainerElement *)0x0;
      uStack_58 = 0;
      pFVar1 = ::FName::FName(local_res18,"Slot.Padding");
      local_50[0] = local_68;
      local_50._8_8_ = local_60.Data;
      local_50._16_4_ = (int)uStack_58;
      FSlateAttributeDescriptor::AddContainedAttribute
                (local_78.Descriptor,&local_38,local_78.ContainerName,*pFVar1,8,
                 (FInvalidateWidgetReasonAttribute *)local_50);
      if (((int)uStack_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
        uStack_58 = uStack_58 & 0xffffffff00000000;
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SOverlay::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1425e45d0

FSlateWidgetClassData * __thiscall SOverlay::GetWidgetClass(SOverlay *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FContainerInitializer FStack_78;
  EInvalidateWidgetReason EStack_68;
  ForAnyElementType FStack_60;
  ulonglong uStack_58;
  undefined1 auStack_50 [24];
  FAttributeEntry FStack_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SOverlay");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = ::FName::FName(aFStackX_18,8,L"Children",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_78,*pFVar1,0x218);
      EStack_68 = Layout;
      FStack_60.Data = (FScriptContainerElement *)0x0;
      uStack_58 = 0;
      pFVar1 = ::FName::FName(aFStackX_18,"Slot.Padding");
      auStack_50[0] = EStack_68;
      auStack_50._8_8_ = FStack_60.Data;
      auStack_50._16_4_ = (int)uStack_58;
      FSlateAttributeDescriptor::AddContainedAttribute
                (FStack_78.Descriptor,&FStack_38,FStack_78.ContainerName,*pFVar1,8,
                 (FInvalidateWidgetReasonAttribute *)auStack_50);
      if (((int)uStack_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
        uStack_58 = uStack_58 & 0xffffffff00000000;
      }
      if (FStack_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_60.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SOverlay::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// HasSlotWithZOrder @ 1425e6440

bool __thiscall SOverlay::HasSlotWithZOrder(SOverlay *this,int param_1)

{
  int iVar1;
  
  iVar1 = GetChildIndexByZOrder(this,param_1);
  return iVar1 != -1;
}

// OnArrangeChildren @ 1425eba60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SOverlay::OnArrangeChildren(SOverlay *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int *piVar1;
  FDeprecateSlateVector2D *pFVar2;
  byte bVar3;
  longlong lVar4;
  ForElementType<FArrangedWidget> FVar5;
  code *pcVar6;
  double dVar7;
  ulonglong uVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ForElementType<FArrangedWidget> FVar13;
  longlong lVar14;
  ForElementType<FArrangedWidget> FVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  uint uVar24;
  undefined1 auStackY_248 [32];
  undefined8 local_1f8;
  float local_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  FSlateLayoutTransform local_1d0;
  float local_1c4;
  float fStack_1c0;
  float local_1bc;
  undefined4 uStack_1b8;
  TTransform2<float> local_1b0;
  char local_198;
  FDeprecateVector2DParameter local_190;
  FSlateLayoutTransform local_188;
  FSlateLayoutTransform local_17c;
  float local_170 [2];
  float afStack_168 [2];
  TVector2<float>_u_0 local_160;
  FDeprecateSlateVector2D local_148;
  FDeprecateSlateVector2D FStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  TReferenceControllerBase<1> *local_108;
  undefined1 local_f8 [32];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  TVector2<float>_u_0 TStack_cc;
  undefined1 local_c0 [32];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  TVector2<float>_u_0 TStack_94;
  ulonglong local_88;
  
  fVar9 = __real_3f000000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar16 = 0;
  iVar12 = (this->Children).Children.ArrayNum;
  if (0 < iVar12) {
    lVar17 = 0;
    uVar24 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    do {
      uVar11 = 0;
      if ((int)uVar16 < iVar12) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar17);
      lVar4 = *(longlong *)(lVar14 + 0x10);
      bVar3 = *(byte *)(lVar4 + 0x39);
      if (((param_2->VisibilityFilter).Value.Value & bVar3) != 0) {
        local_1e8 = *(undefined8 *)(lVar14 + 0x28);
        uStack_1e0 = *(undefined8 *)(lVar14 + 0x30);
        fVar23 = (float)local_1e8;
        fVar18 = (float)uStack_1e0;
        local_1d0.Translation.field0_0x0._s_0.X = (float)local_1e8;
        if (GSlateFlowDirection == RightToLeft) {
          local_1e8._4_4_ = (float)((ulonglong)local_1e8 >> 0x20);
          local_1e8 = CONCAT44(local_1e8._4_4_,(float)uStack_1e0);
          uStack_1e0._4_4_ = (float)((ulonglong)uStack_1e0 >> 0x20);
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,fVar23);
          local_1d0.Translation.field0_0x0._s_0.X = fVar18;
          fVar18 = fVar23;
        }
        iVar12 = *(int *)(lVar14 + 0x38);
        local_1f8._0_4_ = SUB84(param_1->Size,0);
        if ((GSlateFlowDirection == LeftToRight) || (GSlateFlowDirection != RightToLeft)) {
LAB_1425ebbc4:
          if (iVar12 != 0) goto LAB_1425ebbcd;
LAB_1425ebc6a:
          local_1c4 = (float)local_1f8 - (local_1d0.Translation.field0_0x0._s_0.X + fVar18);
          if (local_1c4 <= 0.0) {
            local_1c4 = 0.0;
          }
        }
        else {
          if (iVar12 == 1) {
            iVar12 = 3;
          }
          else {
            if (iVar12 != 3) goto LAB_1425ebbc4;
            iVar12 = 1;
          }
LAB_1425ebbcd:
          local_1d8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
            local_1d8 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar4 + 0x170))->_s_0;
          }
          fVar23 = (float)local_1f8 - (local_1d0.Translation.field0_0x0._s_0.X + fVar18);
          local_1c4 = (float)local_1d8;
          if (fVar23 <= (float)local_1d8) {
            local_1c4 = fVar23;
          }
          if (local_1c4 <= 0.0) {
            local_1c4 = 0.0;
          }
          if (iVar12 != 1) {
            if (iVar12 == 2) {
              local_1d0.Translation.field0_0x0._s_0.X =
                   (((float)local_1f8 - local_1c4) * fVar9 + local_1d0.Translation.field0_0x0._s_0.X
                   ) - fVar18;
            }
            else {
              if (iVar12 != 3) goto LAB_1425ebc6a;
              local_1d0.Translation.field0_0x0._s_0.X = ((float)local_1f8 - local_1c4) - fVar18;
            }
          }
        }
        iVar12 = *(int *)(lVar14 + 0x3c);
        local_1f8._4_4_ = SUB84(param_1->Size,4);
        local_1d0.Translation.field0_0x0._s_0.Y = local_1e8._4_4_;
        if (iVar12 == 0) {
LAB_1425ebcf9:
          fStack_1c0 = local_1f8._4_4_ - (uStack_1e0._4_4_ + local_1e8._4_4_);
          if (fStack_1c0 <= 0.0) {
            fStack_1c0 = 0.0;
          }
        }
        else {
          local_1d8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
            local_1d8 = (TVector2<float>_u_0)
                        *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar4 + 0x170))->_s_0;
          }
          fVar23 = local_1f8._4_4_ - (uStack_1e0._4_4_ + local_1e8._4_4_);
          fStack_1c0 = local_1d8._4_4_;
          if (fVar23 <= local_1d8._4_4_) {
            fStack_1c0 = fVar23;
          }
          if (fStack_1c0 <= 0.0) {
            fStack_1c0 = 0.0;
          }
          if (iVar12 != 1) {
            if (iVar12 == 2) {
              local_1d0.Translation.field0_0x0._s_0.Y =
                   ((local_1f8._4_4_ - fStack_1c0) * fVar9 + local_1e8._4_4_) - uStack_1e0._4_4_;
            }
            else {
              if (iVar12 != 3) goto LAB_1425ebcf9;
              local_1d0.Translation.field0_0x0._s_0.Y =
                   (local_1f8._4_4_ - fStack_1c0) - uStack_1e0._4_4_;
            }
          }
        }
        local_198 = *(char *)(lVar4 + 0x1a0);
        local_1f8._4_4_ = fStack_1c0;
        local_1f8._0_4_ = local_1c4;
        local_1d0.Scale = 1.0;
        if (GSlateFlowDirection == LeftToRight) {
          if (local_198 == '\0') goto LAB_1425ebe9f;
          local_1b0.M.M[0] = *(float (*) [2])(lVar4 + 0x188);
          local_1b0.M.M[1] = *(float (*) [2])(lVar4 + 400);
          local_1b0.Trans.field0_0x0 = *(TVector2<float>_u_0 *)(lVar4 + 0x198);
LAB_1425ebdaa:
          if (local_198 == '\0') goto LAB_1425ebe9f;
          fStack_1ec = (float)*(double *)(lVar4 + 0x180);
          local_1f0 = (float)*(double *)(lVar4 + 0x178);
          if (GSlateFlowDirection != LeftToRight) {
            local_1f0 = (fVar9 - local_1f0) + fVar9;
          }
          local_190._4_4_ = fStack_1ec;
          local_190._0_4_ = local_1f0;
          local_188.Scale = param_1->Scale;
          local_188.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
          FGeometry::FGeometry
                    ((FGeometry *)local_f8,(FDeprecateVector2DParameter *)&local_1f8,&local_1d0,
                     &local_1b0,&local_190,&local_188,&param_1->AccumulatedRenderTransform);
          local_108 = *(TReferenceControllerBase<1> **)(lVar14 + 0x18);
          local_110 = *(undefined8 *)(lVar14 + 0x10);
          if (local_108 == (TReferenceControllerBase<1> *)0x0) {
            local_148 = (FDeprecateSlateVector2D)local_f8._0_8_;
            FStack_140 = (FDeprecateSlateVector2D)local_f8._8_8_;
            local_138 = local_f8._16_8_;
            uStack_130 = local_f8._24_8_;
            uVar21 = (undefined4)stack0xffffffffffffff38;
            uVar22 = SUB84(stack0xffffffffffffff38,4);
            fVar23 = local_d8;
            fVar18 = fStack_d4;
            fVar19 = fStack_d0;
            uVar20 = TStack_cc._s_0.X;
            goto LAB_1425ebf43;
          }
          LOCK();
          local_108->SharedReferenceCount = (atomic<int>)((int)local_108->SharedReferenceCount + 1);
          UNLOCK();
          local_148 = (FDeprecateSlateVector2D)local_f8._0_8_;
          FStack_140 = (FDeprecateSlateVector2D)local_f8._8_8_;
          local_128 = CONCAT44(fStack_d4,local_d8);
          uStack_120 = CONCAT44(TStack_cc._s_0.X,fStack_d0);
          local_138 = local_f8._16_8_;
          uStack_130 = local_f8._24_8_;
          local_118 = stack0xffffffffffffff38;
          LOCK();
          local_108->SharedReferenceCount = (atomic<int>)((int)local_108->SharedReferenceCount + 1);
          UNLOCK();
        }
        else {
          if (local_198 != '\0') {
            local_1b0.M.M[0] = *(float (*) [2])(lVar4 + 0x188);
            local_1b0.M.M[1] = *(float (*) [2])(lVar4 + 400);
            dVar7 = (double)(float)*(undefined8 *)(lVar4 + 0x198);
            uStack_1b8 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x198) >> 0x20);
            local_1bc = (float)(double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ (uint)uVar8,
                                                SUB84(dVar7,0) ^ uVar24);
            local_1b0.Trans.field0_0x0._s_0.Y = (float)uStack_1b8;
            local_1b0.Trans.field0_0x0._s_0.X = local_1bc;
            local_170 = local_1b0.M.M[0];
            afStack_168 = local_1b0.M.M[1];
            local_160 = local_1b0.Trans.field0_0x0;
            goto LAB_1425ebdaa;
          }
LAB_1425ebe9f:
          local_17c.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
          local_17c.Scale = param_1->Scale;
          FGeometry::FGeometry
                    ((FGeometry *)local_c0,(FDeprecateVector2DParameter *)&local_1f8,&local_1d0,
                     &local_17c,&param_1->AccumulatedRenderTransform,param_1->bHasRenderTransform);
          local_108 = *(TReferenceControllerBase<1> **)(lVar14 + 0x18);
          local_110 = *(undefined8 *)(lVar14 + 0x10);
          if (local_108 == (TReferenceControllerBase<1> *)0x0) {
            local_148 = (FDeprecateSlateVector2D)local_c0._0_8_;
            FStack_140 = (FDeprecateSlateVector2D)local_c0._8_8_;
            local_138 = local_c0._16_8_;
            uStack_130 = local_c0._24_8_;
            uVar21 = (undefined4)stack0xffffffffffffff70;
            uVar22 = SUB84(stack0xffffffffffffff70,4);
            fVar23 = local_a0;
            fVar18 = fStack_9c;
            fVar19 = fStack_98;
            uVar20 = TStack_94._s_0.X;
LAB_1425ebf43:
            local_118._4_4_ = uVar22;
            local_118._0_4_ = uVar21;
            local_128 = CONCAT44(fVar18,fVar23);
            uStack_120 = CONCAT44(uVar20,fVar19);
          }
          else {
            LOCK();
            local_108->SharedReferenceCount =
                 (atomic<int>)((int)local_108->SharedReferenceCount + 1);
            UNLOCK();
            local_148 = (FDeprecateSlateVector2D)local_c0._0_8_;
            FStack_140 = (FDeprecateSlateVector2D)local_c0._8_8_;
            local_128 = CONCAT44(fStack_9c,local_a0);
            uStack_120 = CONCAT44(TStack_94._s_0.X,fStack_98);
            local_138 = local_c0._16_8_;
            uStack_130 = local_c0._24_8_;
            local_118 = stack0xffffffffffffff70;
            LOCK();
            local_108->SharedReferenceCount =
                 (atomic<int>)((int)local_108->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108);
        if (((param_2->VisibilityFilter).Value.Value & bVar3) != 0) {
          FVar15 = (ForElementType<FArrangedWidget>)&param_2->Array;
          FVar5 = (param_2->Array).AllocatorInstance.SecondaryData;
          FVar13 = FVar15;
          if (FVar5 != (ForElementType<FArrangedWidget>)0x0) {
            FVar13 = FVar5;
          }
          if ((ulonglong)FVar13 <= &local_148) {
            FVar13 = FVar15;
            if (FVar5 != (ForElementType<FArrangedWidget>)0x0) {
              FVar13 = FVar5;
            }
            if ((&local_148 <
                 (ulonglong)((longlong)FVar13 + (longlong)(param_2->Array).ArrayMax * 0x48)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar12 = (param_2->Array).ArrayNum;
          piVar1 = &(param_2->Array).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                               (0x848,(ForElementType<FArrangedWidget> *)FVar15,piVar1);
          }
          (param_2->Array).ArrayNum = iVar12 + 1;
          FVar5 = (param_2->Array).AllocatorInstance.SecondaryData;
          lVar14 = (longlong)iVar12;
          if (FVar5 != (ForElementType<FArrangedWidget>)0x0) {
            FVar15 = FVar5;
          }
          pFVar2 = (FDeprecateSlateVector2D *)((longlong)FVar15 + lVar14 * 0x48);
          *pFVar2 = local_148;
          pFVar2[1] = FStack_140;
          *(undefined8 *)((uchar *)((longlong)FVar15 + 0x10) + lVar14 * 0x48) = local_138;
          *(undefined8 *)((uchar *)((longlong)FVar15 + 0x10) + lVar14 * 0x48 + 8) = uStack_130;
          *(undefined8 *)((uchar *)((longlong)FVar15 + 0x20) + lVar14 * 0x48) = local_128;
          *(undefined8 *)((uchar *)((longlong)FVar15 + 0x20) + lVar14 * 0x48 + 8) = uStack_120;
          *(undefined8 *)((uchar *)((longlong)FVar15 + 0x30) + lVar14 * 0x48) = local_118;
          *(undefined8 *)((uchar *)((longlong)FVar15 + 0x38) + lVar14 * 0x48) = local_110;
          *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar15 + 0x40) + lVar14 * 0x48) =
               local_108;
          if (local_108 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_108->SharedReferenceCount =
                 (atomic<int>)((int)local_108->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108);
      }
      iVar12 = (this->Children).Children.ArrayNum;
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 8;
    } while ((int)uVar16 < iVar12);
  }
  return;
}

// OnPaint @ 1425f0260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SOverlay::OnPaint(SOverlay *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                 FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FArrangedWidget *pFVar7;
  FGeometry *pFVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 auStackY_1f8 [32];
  FPaintArgs local_1b8;
  uchar local_188 [8];
  FArrangedWidget local_180 [4];
  FArrangedWidget *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_188[0] = (uchar)EVisibility::Visible.Value.Value;
  local_60 = (FArrangedWidget *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_54 = 4;
  (**(code **)(this->_padding_ + 0x240))(this,param_2,local_188);
  local_1b8.RootGrid = param_1->RootGrid;
  local_1b8.CurrentGrid = param_1->CurrentGrid;
  local_1b8.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
  local_1b8.CurrentTime = param_1->CurrentTime;
  local_1b8.DeltaTime = param_1->DeltaTime;
  local_1b8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  uVar9 = 0;
  local_1b8.PaintParentPtr = (SWidget *)this;
  if (0 < local_58) {
    lVar11 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar9 < local_58) {
        uVar3 = ~uVar9 >> 0x1f;
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
      pFVar7 = local_180;
      if (local_60 != (FArrangedWidget *)0x0) {
        pFVar7 = local_60;
      }
      pFVar8 = (FGeometry *)
               ((longlong)((pFVar7->Geometry).AccumulatedRenderTransform.M.M + -4) + 4 + lVar11);
      iVar4 = param_5 + 1;
      if ((int)uVar9 < 1) {
        iVar4 = param_5;
      }
      iVar5 = SWidget::Paint((SWidget *)pFVar8[1].Size,&local_1b8,pFVar8,param_3,param_4,iVar4,
                             param_6,bVar10);
      iVar4 = (iVar5 - iVar4) / 10;
      iVar6 = 1;
      if (1 < iVar4) {
        iVar6 = iVar4;
      }
      iVar4 = 100;
      if (iVar6 * 10 < 100) {
        iVar4 = iVar6 * 10;
      }
      uVar9 = uVar9 + 1;
      param_5 = iVar4 + iVar5;
      lVar11 = lVar11 + 0x48;
    } while ((int)uVar9 < local_58);
  }
  pFVar7 = local_180;
  if (local_60 != (FArrangedWidget *)0x0) {
    pFVar7 = local_60;
  }
  DestructItems<FArrangedWidget,int>(pFVar7,local_58);
  if (local_60 != (FArrangedWidget *)0x0) {
    FMemory::Free(local_60);
  }
  return param_5;
}

// PrivateRegisterAttributes @ 1425f4a80

void __cdecl SOverlay::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  FContainerInitializer local_68;
  EInvalidateWidgetReason local_58;
  ForAnyElementType local_50;
  ulonglong uStack_48;
  undefined1 local_40 [24];
  FAttributeEntry local_28;
  
  pFVar1 = ::FName::FName(local_res10,8,L"Children",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(param_1,&local_68,*pFVar1,0x218);
  local_58 = Layout;
  local_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  pFVar1 = ::FName::FName(local_res10,"Slot.Padding");
  local_40[0] = local_58;
  local_40._8_8_ = local_50.Data;
  local_40._16_4_ = (int)uStack_48;
  FSlateAttributeDescriptor::AddContainedAttribute
            (local_68.Descriptor,&local_28,local_68.ContainerName,*pFVar1,8,
             (FInvalidateWidgetReasonAttribute *)local_40);
  if ((int)uStack_48 != 0) {
    if (local_50.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// RemoveSlot @ 1425f89f0

void __thiscall SOverlay::RemoveSlot(SOverlay *this,int param_1)

{
  int iVar1;
  int local_res10 [2];
  int *local_res18 [2];
  
  local_res10[0] = param_1;
  if (param_1 == -1) {
    iVar1 = (this->Children).Children.ArrayNum;
    if (0 < iVar1) {
      TPanelChildren<SOverlay::FOverlaySlot>::RemoveAt(&this->Children,iVar1 + -1);
      return;
    }
    `SOverlay::RemoveSlot'::__l14::<lambda_2>::operator()(local_res18);
    return;
  }
  iVar1 = GetChildIndexByZOrder(this,param_1);
  if (iVar1 != -1) {
    TPanelChildren<SOverlay::FOverlaySlot>::RemoveAt(&this->Children,iVar1);
    return;
  }
  local_res18[0] = local_res10;
  `SOverlay::RemoveSlot'::__l5::<lambda_1>::operator()(local_res18);
  return;
}

// RemoveSlot @ 1425f8a70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall SOverlay::RemoveSlot(SOverlay *this,TSharedRef<SWidget,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Children).Children.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Children).Children.ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (param_1->Object ==
          *(SWidget **)
           (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar6) + 0x10)) {
        TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAt(&(this->Children).Children,uVar5,Default);
        goto LAB_1425f8b13;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Children).Children.ArrayNum);
  }
  uVar5 = 0xffffffff;
LAB_1425f8b13:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return uVar5 != 0xffffffff;
}

// Slot @ 1425ff640

FSlotArguments * __cdecl SOverlay::Slot(FSlotArguments *__return_storage_ptr__,int param_1)

{
  FOverlaySlot *this;
  FOverlaySlot *local_res8;
  
  this = ::operator_new(0x48);
  local_res8 = (FOverlaySlot *)0x0;
  if (this != (FOverlaySlot *)0x0) {
    local_res8 = FOverlaySlot::FOverlaySlot(this,param_1);
  }
  FOverlaySlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FOverlaySlot *)&local_res8);
  return __return_storage_ptr__;
}

// operator() @ 1504908d0

bool __thiscall `SOverlay::RemoveSlot'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6532182839562076459>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6532182839562076459>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150491720

bool __thiscall `SOverlay::RemoveSlot'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6532182839562076467>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6532182839562076467>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

