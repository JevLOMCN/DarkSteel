// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 18

// FInputEventVisualizer @ 142e09ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInputEventVisualizer * __thiscall
FInputEventVisualizer::FInputEventVisualizer(FInputEventVisualizer *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  undefined1 local_48 [8];
  FDelegateAllocation FStack_40;
  
  this->bShowMouseEvent = false;
  (this->MouseEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MouseEvents).ArrayNum = 0;
  (this->MouseEvents).ArrayMax = 0;
  *(undefined8 *)&this->MouseKeyColorsMap = 0;
  *(undefined8 *)&(this->MouseKeyColorsMap).field_0x8 = 0;
  *(undefined8 *)&(this->MouseKeyColorsMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FInputEventVisualizer__6B_;
  this->ClickFadeTime = 0.5;
  *(undefined4 *)&(this->MouseKeyColorsMap).field_0x28 = 0;
  *(undefined4 *)&(this->MouseKeyColorsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MouseKeyColorsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MouseKeyColorsMap).field_0x34 = 0;
  *(undefined8 *)&(this->MouseKeyColorsMap).field_0x40 = 0;
  *(undefined4 *)&(this->MouseKeyColorsMap).field_0x48 = 0;
  this->bShowKeyEvent = false;
  this->KeyFadeTime = 2.0;
  this->KeyEventTime = -1.0;
  this->MaxNumberOfKeys = 10;
  (this->KeyEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyEvents).ArrayNum = 0;
  (this->KeyEvents).ArrayMax = 0;
  (this->WeakOwningNotification).Object = (SNotificationItem *)0x0;
  (this->WeakOwningNotification).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_48 = (undefined1  [8])0x0;
  FStack_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_68);
  local_50 = &FStack_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&FStack_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInputEventVisualizer____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[4] = HandleDemoModeEnabledChanged;
    puVar1[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->DemoModeMouseConsoleVariable,L"Slate.DemoMode.MouseEvent",&this->bShowMouseEvent
             ,L"Visualize the cursor events for demo-recording purposes.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_68);
  if ((FStack_40.DelegateSize != 0) &&
     (FStack_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_40,0,0,0x10);
    FStack_40.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  local_48 = (undefined1  [8])0x0;
  FStack_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_68);
  local_50 = &FStack_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&FStack_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInputEventVisualizer____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[4] = HandleDemoModeEnabledChanged;
    puVar1[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->DemoModeKeyConsoleVariable,L"Slate.DemoMode.KeyEvent",&this->bShowKeyEvent,
             L"Visualize any pressed keys for demo-recording purposes.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_68);
  if ((FStack_40.DelegateSize != 0) &&
     (FStack_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_40,0,0,0x10);
    FStack_40.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  local_68._0_8_ = &EKeys::LeftMouseButton;
  local_68.Accessor = (FMRSWRecursiveAccessDetector *)local_48;
  local_48 = (undefined1  [8])___xmm_3f8000003f800000000000003f800000;
  FStack_40.DelegateAllocator = _UNK_15090c6d8;
  TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FKey_const_&,FLinearColor_&&>_>
            ((TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->MouseKeyColorsMap,
             (TPairInitializer<FKey_const_&,FLinearColor_&&> *)&stack0x00000008,(bool *)&local_68);
  local_68._0_8_ = &EKeys::RightMouseButton;
  local_68.Accessor = (FMRSWRecursiveAccessDetector *)local_48;
  local_48 = (undefined1  [8])___xmm_3f800000000000003f8000003f800000;
  FStack_40.DelegateAllocator = _UNK_150a07f68;
  TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FKey_const_&,FLinearColor_&&>_>
            ((TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->MouseKeyColorsMap,
             (TPairInitializer<FKey_const_&,FLinearColor_&&> *)&stack0x00000008,(bool *)&local_68);
  local_68._0_8_ = &EKeys::MiddleMouseButton;
  local_68.Accessor = (FMRSWRecursiveAccessDetector *)local_48;
  local_48 = (undefined1  [8])___xmm_3f8000003f8000003f80000000000000;
  FStack_40.DelegateAllocator = _UNK_15090c6e8;
  TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FKey_const_&,FLinearColor_&&>_>
            ((TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->MouseKeyColorsMap,
             (TPairInitializer<FKey_const_&,FLinearColor_&&> *)&stack0x00000008,(bool *)&local_68);
  local_68._0_8_ = &EKeys::ThumbMouseButton;
  local_68.Accessor = (FMRSWRecursiveAccessDetector *)local_48;
  local_48 = (undefined1  [8])___xmm_3f8000003ea8f5c33ea8f5c33ea8f5c3;
  FStack_40.DelegateAllocator = _UNK_150a07f78;
  TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FKey_const_&,FLinearColor_&&>_>
            ((TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->MouseKeyColorsMap,
             (TPairInitializer<FKey_const_&,FLinearColor_&&> *)&stack0x00000008,(bool *)&local_68);
  local_68._0_8_ = &EKeys::ThumbMouseButton2;
  local_68.Accessor = (FMRSWRecursiveAccessDetector *)local_48;
  local_48 = (undefined1  [8])___xmm_3f8000003f28f5c33f28f5c33f28f5c3;
  FStack_40.DelegateAllocator = _UNK_150a07f88;
  TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FKey_const_&,FLinearColor_&&>_>
            ((TSet<TTuple<FKey,FLinearColor>,TDefaultMapHashableKeyFuncs<FKey,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->MouseKeyColorsMap,
             (TPairInitializer<FKey_const_&,FLinearColor_&&> *)&stack0x00000008,(bool *)&local_68);
  return this;
}

// ~FInputEventVisualizer @ 142e139e0

void __thiscall FInputEventVisualizer::~FInputEventVisualizer(FInputEventVisualizer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7FInputEventVisualizer__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
             this);
  FSlateDebugging::UnregisterWidgetInputRoutingEvent((IWidgetInputRoutingEvent *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  *(undefined ***)&(this->DemoModeKeyConsoleVariable).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DemoModeKeyConsoleVariable);
  *(undefined ***)&(this->DemoModeMouseConsoleVariable).field_0x0 =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DemoModeMouseConsoleVariable)
  ;
  pTVar3 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
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
  DestructItems<FInputEventVisualizer::FKeyEventInfo,int>
            ((FKeyEventInfo *)(this->KeyEvents).AllocatorInstance.Data,(this->KeyEvents).ArrayNum);
  pFVar4 = (this->KeyEvents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->MouseKeyColorsMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->MouseKeyColorsMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MouseKeyColorsMap);
  DestructItems<FInputEventVisualizer::FMouseEventInfo,int>
            ((FMouseEventInfo *)(this->MouseEvents).AllocatorInstance.Data,
             (this->MouseEvents).ArrayNum);
  pFVar4 = (this->MouseEvents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// HandleBeginFrameCallback @ 142eadc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInputEventVisualizer::HandleBeginFrameCallback(FInputEventVisualizer *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FKeyEventInfo *pFVar3;
  double dVar4;
  FSlateApplication *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  
  pFVar5 = FSlateApplication::Get();
  dVar14 = (double)(**(code **)(*(longlong *)pFVar5 + 0x60))(pFVar5);
  iVar10 = (this->MouseEvents).ArrayNum;
  lVar6 = (longlong)iVar10;
  if (0 < iVar10) {
    pFVar2 = (this->MouseEvents).AllocatorInstance.Data;
    lVar8 = 0;
    iVar13 = 0;
    dVar4 = (double)this->ClickFadeTime;
    bVar9 = dVar14 - *(double *)(pFVar2 + 0x18) <= dVar4;
    iVar10 = 0;
    do {
      iVar11 = iVar10 + 1;
      lVar8 = lVar8 + 1;
      if (lVar8 < lVar6) {
        if (3 < lVar6 - lVar8) {
          pFVar7 = pFVar2 + lVar8 * 0x38 + 0x50;
          do {
            if (bVar9 != dVar14 - *(double *)(pFVar7 + -0x38) <= dVar4) goto LAB_142eadde3;
            if (bVar9 != dVar14 - *(double *)pFVar7 <= dVar4) {
              lVar8 = lVar8 + 1;
              iVar11 = iVar11 + 1;
              goto LAB_142eadde3;
            }
            if (bVar9 != dVar14 - *(double *)(pFVar7 + 0x38) <= dVar4) {
              lVar8 = lVar8 + 2;
              iVar11 = iVar11 + 2;
              goto LAB_142eadde3;
            }
            if (bVar9 != dVar14 - *(double *)(pFVar7 + 0x70) <= dVar4) {
              lVar8 = lVar8 + 3;
              iVar11 = iVar11 + 3;
              goto LAB_142eadde3;
            }
            iVar11 = iVar11 + 4;
            lVar8 = lVar8 + 4;
            pFVar7 = pFVar7 + 0xe0;
          } while (lVar8 < lVar6 + -3);
          if (lVar6 <= lVar8) goto LAB_142eadde3;
        }
        pFVar7 = pFVar2 + lVar8 * 0x38 + 0x18;
        do {
          if (bVar9 != dVar14 - *(double *)pFVar7 <= dVar4) break;
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + 1;
          pFVar7 = pFVar7 + 0x38;
        } while (lVar8 < lVar6);
      }
LAB_142eadde3:
      iVar12 = iVar11 - iVar10;
      if (bVar9 == false) {
        DestructItems<FInputEventVisualizer::FMouseEventInfo,int>
                  ((FMouseEventInfo *)(pFVar2 + (longlong)iVar10 * 0x38),iVar12);
      }
      else {
        if (iVar13 != iVar10) {
          memmove(pFVar2 + (longlong)iVar13 * 0x38,pFVar2 + (longlong)iVar10 * 0x38,
                  (longlong)iVar12 * 0x38);
        }
        iVar13 = iVar13 + iVar12;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar10 = iVar11;
    } while (lVar8 < lVar6);
    (this->MouseEvents).ArrayNum = iVar13;
  }
  iVar10 = (this->KeyEvents).ArrayNum;
  if ((0 < iVar10) && ((double)this->KeyFadeTime < dVar14 - this->KeyEventTime)) {
    pFVar3 = (FKeyEventInfo *)(this->KeyEvents).AllocatorInstance.Data;
    piVar1 = &(this->KeyEvents).ArrayMax;
    if (*piVar1 < 0) {
      DestructItems<FInputEventVisualizer::FKeyEventInfo,int>(pFVar3,iVar10);
      (this->KeyEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->KeyEvents).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInputEventVisualizer::FKeyEventInfo,int>(pFVar3,iVar10);
      (this->KeyEvents).ArrayNum = 0;
    }
    UpdateKeyText(this);
  }
  return;
}

// HandleDemoModeEnabledChanged @ 142eaef30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInputEventVisualizer::HandleDemoModeEnabledChanged
          (FInputEventVisualizer *this,IConsoleVariable *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  FMouseEventInfo *pFVar5;
  code *pcVar6;
  FKeyEventInfo *pFVar7;
  SNotificationItem *pSVar8;
  atomic<int> aVar9;
  FText *pFVar10;
  ISlateStyle *pIVar11;
  FName *pFVar12;
  FSlateNotificationManager *this_00;
  TSharedPtr<SNotificationItem,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  FName FStackX_8;
  TSharedPtr<SNotificationItem,1> TStack_1a8;
  undefined8 auStack_198 [2];
  FNotificationInfo FStack_188;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
             this);
  FSlateDebugging::UnregisterWidgetInputRoutingEvent((IWidgetInputRoutingEvent *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  if ((this->bShowKeyEvent != false) || (this->bShowMouseEvent != false)) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FInputEventVisualizer>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnBeginFrame,(FInputEventVisualizer *)&FStackX_8,(pmf_8b7e28e6)this)
    ;
    FSlateDebugging::RegisterWidgetInputRoutingEvent((IWidgetInputRoutingEvent *)this);
  }
  if (this->bShowMouseEvent == false) {
    piVar1 = &(this->MouseEvents).ArrayMax;
    pFVar5 = (FMouseEventInfo *)(this->MouseEvents).AllocatorInstance.Data;
    iVar4 = (this->MouseEvents).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInputEventVisualizer::FMouseEventInfo,int>(pFVar5,iVar4);
      (this->MouseEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->MouseEvents).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInputEventVisualizer::FMouseEventInfo,int>(pFVar5,iVar4);
      (this->MouseEvents).ArrayNum = 0;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FInputEventVisualizer>
              ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::PaintDebugElements,(FInputEventVisualizer *)&FStackX_8,
               (pmf_76751382)this);
  }
  if (this->bShowKeyEvent == false) {
    piVar1 = &(this->KeyEvents).ArrayMax;
    pFVar7 = (FKeyEventInfo *)(this->KeyEvents).AllocatorInstance.Data;
    iVar4 = (this->KeyEvents).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInputEventVisualizer::FKeyEventInfo,int>(pFVar7,iVar4);
      (this->KeyEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->KeyEvents).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInputEventVisualizer::FKeyEventInfo,int>(pFVar7,iVar4);
      (this->KeyEvents).ArrayNum = 0;
    }
    pTVar15 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
    pTVar14 = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar15->SharedReferenceCount;
      do {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142f13786;
        LOCK();
        aVar9 = pTVar15->SharedReferenceCount;
        bVar16 = aVar3 == aVar9;
        if (bVar16) {
          pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar9 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar9;
      } while (!bVar16);
      pSVar8 = (this->WeakOwningNotification).Object;
      pTVar14 = pTVar15;
      if (pSVar8 != (SNotificationItem *)0x0) {
        (**(code **)(*(longlong *)pSVar8 + 0x290))();
      }
    }
LAB_142f13786:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    if (&this->WeakOwningNotification == (TWeakPtr<SNotificationItem,1> *)auStack_198) {
      return;
    }
    pTVar15 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
    (this->WeakOwningNotification).Object = (SNotificationItem *)0x0;
    (this->WeakOwningNotification).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &pTVar15->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<int>)0x1) {
      return;
    }
    (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
    return;
  }
  pTVar15 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
  pTVar14 = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar15->SharedReferenceCount;
    do {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142f1363d;
      LOCK();
      aVar9 = pTVar15->SharedReferenceCount;
      bVar16 = aVar3 == aVar9;
      if (bVar16) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar16);
    pTVar14 = pTVar15;
    if ((this->WeakOwningNotification).Object != (SNotificationItem *)0x0) goto LAB_142f136e2;
  }
LAB_142f1363d:
  pFVar10 = FText::GetEmpty();
  FNotificationInfo::FNotificationInfo(&FStack_188,pFVar10);
  pIVar11 = FAppStyle::Get();
  pcVar6 = *(code **)((longlong)*pIVar11 + 0x50);
  pFVar12 = ::FName::FName(&FStackX_8,"NotificationList.ItemBackground");
  FStack_188.Image = (FSlateBrush *)(*pcVar6)(pIVar11,*pFVar12,0,0);
  FStack_188.bUseThrobber = false;
  FStack_188.bUseSuccessFailIcons = false;
  FStack_188.bUseLargeFont = false;
  FStack_188.bFireAndForget = false;
  FStack_188.FadeOutDuration = 0.5;
  this_00 = FSlateNotificationManager::Get();
  pTVar13 = FSlateNotificationManager::AddNotification(this_00,&TStack_1a8,&FStack_188);
  TWeakPtr<SNotificationItem,1>::operator=<SNotificationItem>(&this->WeakOwningNotification,pTVar13)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_1a8.SharedReferenceCount.ReferenceController);
  FNotificationInfo::~FNotificationInfo(&FStack_188);
  pTVar15 = pTVar14;
LAB_142f136e2:
  UpdateKeyText(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// HandleGetKeyEventCheckState @ 142eb01d0

ECheckBoxState __thiscall
FInputEventVisualizer::HandleGetKeyEventCheckState(FInputEventVisualizer *this)

{
  return this->bShowKeyEvent != false;
}

// HandleGetMouseEventCheckState @ 142eb01e0

ECheckBoxState __thiscall
FInputEventVisualizer::HandleGetMouseEventCheckState(FInputEventVisualizer *this)

{
  return this->bShowMouseEvent != false;
}

// HandlePaint @ 142eb1360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FInputEventVisualizer::HandlePaint
          (FInputEventVisualizer *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateWindowElementList *param_3,int *param_4)

{
  int *piVar1;
  ICursor *pIVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float afVar8 [2];
  float afVar9 [2];
  float afVar10 [2];
  float afVar11 [2];
  TVector2<float> TVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  SWindow *pSVar17;
  FSlateApplication *pFVar18;
  undefined8 *puVar19;
  ISlateStyle *pIVar20;
  FSlateLayoutTransform *pFVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_2b8 [32];
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  float local_268;
  float fStack_264;
  float local_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  SWindow *local_240;
  undefined8 local_238;
  float local_230;
  float fStack_22c;
  float local_228;
  TVector2<float>_u_0 local_224;
  TTransform2<float> local_21c;
  byte local_204;
  TTransform2<float> local_200;
  FSlateBrush *local_1e8;
  FSlateWindowElementList *local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  undefined8 local_1cc;
  undefined8 local_1c0;
  TTransform2<float> local_1b8;
  undefined1 local_1a0 [16];
  TTransform2<float> local_190;
  undefined1 local_178 [8];
  TTransform2<float> local_170;
  TTransform2<float> local_158;
  TTransform2<float> local_140;
  FSlateLayoutTransform local_128;
  TVector2<float>_u_0 local_118;
  float local_110;
  undefined8 local_10c;
  undefined8 local_104;
  float local_fc [2];
  float afStack_f4 [2];
  TVector2<float>_u_0 local_ec;
  byte local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_278 = (TVector2<float>_u_0)param_4;
  local_1e0 = param_3;
  if ((this->bShowMouseEvent == false) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<9142739652279533782>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\InputEventVisualizer.cpp"
                          ,0xd6,"bShowMouseEvent"), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar17 = FSlateWindowElementList::GetPaintWindow(param_3);
  local_240 = pSVar17;
  FSlateApplication::Get();
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar22 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
            ReferenceController;
  pIVar2 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d8 = pTVar22;
  if (((pSVar17 != (SWindow *)0x0) && (pIVar2 != (ICursor *)0x0)) &&
     (iVar15 = (**(code **)((longlong)*pIVar2 + 0x38))(), iVar15 != 0)) {
    pFVar18 = FSlateApplication::Get();
    dVar29 = (double)(**(code **)(*(longlong *)pFVar18 + 0x60))(pFVar18);
    iVar15 = (this->MouseEvents).ArrayNum;
    if (0 < iVar15) {
      uVar25 = iVar15 - 1;
      if (-1 < (int)uVar25) {
        lVar26 = (longlong)(int)uVar25 * 0x38;
        do {
          uVar23 = ~uVar25 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar25 < (this->MouseEvents).ArrayNum) {
            uVar16 = uVar23;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((double)this->ClickFadeTime <
              dVar29 - *(double *)((this->MouseEvents).AllocatorInstance.Data + lVar26 + 0x18)) {
            uVar16 = 0;
            if ((int)uVar25 < (this->MouseEvents).ArrayNum) {
              uVar16 = uVar23;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar24 = (this->MouseEvents).AllocatorInstance.Data + lVar26;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar24 + 0x10));
            iVar15 = (this->MouseEvents).ArrayNum + ~uVar25;
            if (iVar15 != 0) {
              memmove(pFVar24,pFVar24 + 0x38,(longlong)iVar15 * 0x38);
            }
            piVar1 = &(this->MouseEvents).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,&(this->MouseEvents).AllocatorInstance,(this->MouseEvents).ArrayNum,
                       &(this->MouseEvents).ArrayMax);
          }
          lVar26 = lVar26 + -0x38;
          uVar25 = uVar25 - 1;
          param_4 = (int *)local_278;
        } while (-1 < (int)uVar25);
      }
      uVar25 = *param_4;
      *param_4 = uVar25 + 1;
      pFVar18 = FSlateApplication::Get();
      puVar19 = (undefined8 *)(**(code **)(*(longlong *)pFVar18 + 0x78))(pFVar18,local_178);
      local_270 = *puVar19;
      pIVar20 = FAppStyle::Get();
      local_1e8 = (FSlateBrush *)
                  (**(code **)((longlong)*pIVar20 + 0x50))
                            (pIVar20,InputEventVisualizer::CursorPingBrush,0,0);
      afVar10 = _UNK_15076b188;
      afVar8 = ___xmm_3f80000000000000000000003f800000;
      uVar16 = __xmm_80000000800000008000000080000000;
      fVar7 = __real_3f000000;
      fVar6 = __real_40400000;
      fVar5 = __real_3f800000;
      iVar15 = (this->MouseEvents).ArrayNum;
      pFVar24 = (this->MouseEvents).AllocatorInstance.Data;
      fVar13 = local_270._4_4_;
      pFVar27 = pFVar24 + (longlong)iVar15 * 0x38;
      while( true ) {
        if ((this->MouseEvents).ArrayNum != iVar15) {
          local_288[0] = 0;
          `TCheckedPointerIterator<FInputEventVisualizer::FMouseEventInfo,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_288);
        }
        pTVar22 = local_1d8;
        if (pFVar24 == pFVar27) break;
        local_280 = *(TVector2<float>_u_0 *)(pFVar24 + 0x20);
        fVar30 = (float)(dVar29 - *(double *)(pFVar24 + 0x18)) / this->ClickFadeTime;
        fVar28 = FCurveHandle::ApplyEasing(fVar30,QuadOut);
        local_1a0._0_8_ = *(undefined8 *)(pFVar24 + 0x28);
        local_1a0._8_8_ = *(undefined8 *)(pFVar24 + 0x30);
        fVar31 = (float)local_270 * fVar6 * fVar28;
        fVar28 = fVar13 * fVar6 * fVar28;
        local_268 = fVar31;
        fStack_264 = fVar28;
        fVar30 = FCurveHandle::ApplyEasing(fVar30,QuadIn);
        afVar11 = _UNK_15076b188;
        afVar9 = ___xmm_3f80000000000000000000003f800000;
        local_238 = CONCAT44(fStack_264,local_268);
        fVar31 = (float)local_280 - fVar31 * fVar7;
        local_190.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
        ___xmm_3f80000000000000000000003f800000 = afVar8[0];
        _UNK_15076b184 = afVar8[1];
        local_190.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_190.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar10[0];
        _UNK_15076b18c = afVar10[1];
        local_190.M.M[1][0] = _UNK_15076b188;
        local_190.M.M[1][1] = _UNK_15076b18c;
        local_230 = 1.0;
        fStack_22c = 0.0;
        local_1a0._12_4_ = fVar5 - fVar30;
        local_228 = 0.0;
        fVar28 = local_280._4_4_ - fVar28 * fVar7;
        local_224 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        ___xmm_3f80000000000000000000003f800000 = afVar8[0];
        _UNK_15076b184 = afVar8[1];
        local_170.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_170.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar10[0];
        _UNK_15076b18c = afVar10[1];
        local_170.M.M[1][0] = _UNK_15076b188;
        local_170.M.M[1][1] = _UNK_15076b18c;
        TVar4._s_0.Y = fVar28;
        TVar4._s_0.X = fVar31;
        ___xmm_3f80000000000000000000003f800000 = afVar9;
        _UNK_15076b188 = afVar11;
        local_260 = fVar31;
        fStack_25c = fVar28;
        local_170.Trans.field0_0x0 = TVar4;
        Concatenate<TTransform2<float>_>(&local_21c,&local_170,&local_190);
        local_204 = local_204 & 0xfe;
        local_230 = 1.0;
        local_280 = TVar4;
        local_258 = fVar31;
        fStack_254 = fVar28;
        fStack_22c = fVar31;
        local_228 = fVar28;
        local_224 = TVar4;
        pFVar21 = SWindow::GetLocalToScreenTransform(local_240,&local_128);
        fVar30 = fVar5 / pFVar21->Scale;
        local_250 = (float)((uint)(fVar30 * (pFVar21->Translation).field0_0x0._s_0.X) ^ uVar16);
        fStack_24c = (float)((uint)(fVar30 * (pFVar21->Translation).field0_0x0._s_0.Y) ^ uVar16);
        local_280 = (TVector2<float>_u_0)CONCAT44(fStack_24c,local_250);
        local_248 = fVar31 * fVar30 + local_250;
        fStack_244 = fVar28 * fVar30 + fStack_24c;
        local_200.M.M[0][1] = 0.0;
        local_200.M.M[1][0] = 0.0;
        local_200.M.M[0][0] = fVar30;
        local_200.M.M[1][1] = fVar30;
        local_200.Trans.field0_0x0._s_0.X = local_250;
        local_200.Trans.field0_0x0._s_0.Y = fStack_24c;
        local_1cc = local_280;
        Concatenate<TTransform2<float>_>(&local_158,&local_21c,&local_200);
        TVar12 = UE::Math::TVector2<float>::ZeroVector;
        local_21c.M.M[0][0] = local_158.M.M[0][0];
        local_21c.M.M[0][1] = local_158.M.M[0][1];
        local_21c.M.M[1][0] = local_158.M.M[1][0];
        local_21c.M.M[1][1] = local_158.M.M[1][1];
        fStack_22c = local_248;
        local_228 = fStack_244;
        local_21c.Trans.field0_0x0 = local_158.Trans.field0_0x0;
        local_230 = fVar30;
        if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentBaseApplication.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                              ,0x22a,L"");
          if (bVar14) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0)
             && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        fVar30 = (float)(**(code **)(*(longlong *)
                                      FSlateApplicationBase::CurrentBaseApplication.Object + 0x58))
                                  ();
        fVar31 = SWindow::GetDPIScaleFactor(local_240);
        fVar28 = local_230;
        local_280 = (TVector2<float>_u_0)CONCAT44(local_228,fStack_22c);
        fVar30 = fVar30 * fVar31;
        local_1c0 = TVar12.field0_0x0;
        TVar4._s_0 = local_1c0;
        local_1b8.M.M[0][1] = 0.0;
        local_1b8.M.M[1][0] = 0.0;
        local_1c0._0_4_ = TVar12.field0_0x0._0_4_;
        local_1c0._4_4_ = TVar12.field0_0x0._4_4_;
        local_1b8.Trans.field0_0x0._s_0 = TVar12.field0_0x0;
        local_278._4_4_ = local_228 * fVar30 + local_1c0._4_4_;
        local_278._0_4_ = fStack_22c * fVar30 + (float)local_1c0;
        local_1c0 = TVar4._s_0;
        local_1b8.M.M[0][0] = fVar30;
        local_1b8.M.M[1][1] = fVar30;
        Concatenate<TTransform2<float>_>(&local_140,&local_21c,&local_1b8);
        local_118 = local_278;
        local_104 = local_238;
        local_110 = fVar28 * fVar30;
        local_e4 = (local_204 & 1) * '\x02' | local_e4 & 0xfc;
        local_10c = 0;
        local_fc[0] = local_140.M.M[0][0];
        local_fc[1] = local_140.M.M[0][1];
        afStack_f4[0] = local_140.M.M[1][0];
        afStack_f4[1] = local_140.M.M[1][1];
        local_ec = local_140.Trans.field0_0x0;
        FSlateDrawElement::MakeBox
                  (local_1e0,uVar25,(FPaintGeometry *)&local_118._s_0,local_1e8,None,
                   (FLinearColor *)local_1a0);
        pFVar24 = pFVar24 + 0x38;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  return;
}

// HandleToggleKeyEvent @ 142eb68a0

void __thiscall FInputEventVisualizer::HandleToggleKeyEvent(FInputEventVisualizer *this)

{
  this->bShowKeyEvent = this->bShowKeyEvent == false;
  UpdateNotificationItem(this);
  return;
}

// HandleToggleMouseEvent @ 142eb68c0

void __thiscall FInputEventVisualizer::HandleToggleMouseEvent(FInputEventVisualizer *this)

{
  this->bShowMouseEvent = this->bShowMouseEvent == false;
  UpdateNotificationItem(this);
  return;
}

// OnInputEvent @ 142ecc4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInputEventVisualizer::OnInputEvent
          (FInputEventVisualizer *this,ESlateDebuggingInputEvent param_1,FReply *param_2,
          TSharedPtr<SWidget,1> *param_3)

{
  return;
}

// OnInputProcessed @ 142ecc4c0

void __thiscall
FInputEventVisualizer::OnInputProcessed
          (FInputEventVisualizer *this,ESlateDebuggingInputEvent param_1)

{
  return;
}

// OnInputRouted @ 142ecc4d0

void __thiscall
FInputEventVisualizer::OnInputRouted(FInputEventVisualizer *this,ESlateDebuggingInputEvent param_1)

{
  return;
}

// OnPreProcessInput @ 142ede4b0

void __thiscall
FInputEventVisualizer::OnPreProcessInput
          (FInputEventVisualizer *this,ESlateDebuggingInputEvent param_1,wchar_t *param_2,
          bool param_3)

{
  return;
}

// OnProcessInput @ 142ede580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInputEventVisualizer::OnProcessInput
          (FInputEventVisualizer *this,ESlateDebuggingInputEvent param_1,FInputEvent *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FSlateApplication *pFVar12;
  FName *pFVar13;
  FName *pFVar14;
  longlong lVar15;
  uint uVar16;
  FName *pFVar17;
  atomic<int> *paVar18;
  undefined1 *puVar19;
  FName FVar20;
  FName FVar21;
  double dVar22;
  FName FVar23;
  FKey local_38;
  
  if ((this->bShowMouseEvent == false) ||
     (cVar8 = (**(code **)(param_2->_padding_ + 0x10))(param_2), cVar8 == '\0')) {
    if ((this->bShowKeyEvent != false) &&
       ((cVar8 = (**(code **)(param_2->_padding_ + 0x18))(param_2), cVar8 != '\0' &&
        (param_1 == KeyDown)))) {
      iVar10 = (this->KeyEvents).ArrayNum;
      paVar18 = (atomic<int> *)&DAT_00000008;
      if (this->MaxNumberOfKeys <= iVar10) {
        uVar16 = (iVar10 - this->MaxNumberOfKeys) + 1;
        uVar11 = 0;
        if ((int)uVar16 <= iVar10) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar16 != 0) {
          TArray<FInputEventVisualizer::FKeyEventInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this->KeyEvents,0,uVar16);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&(this->KeyEvents).AllocatorInstance,(this->KeyEvents).ArrayNum,
                     &(this->KeyEvents).ArrayMax);
        }
      }
      pTVar2 = *(TReferenceControllerBase<1> **)&param_2[1].InputDeviceId;
      lVar3 = param_2[1]._padding_;
      uVar4 = *(undefined8 *)&param_2[1].ModifierKeys;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        paVar18 = &pTVar2->SharedReferenceCount;
        LOCK();
        *paVar18 = (atomic<int>)((int)*paVar18 + 1);
        UNLOCK();
      }
      iVar10 = (this->KeyEvents).ArrayNum;
      piVar1 = &(this->KeyEvents).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->KeyEvents).AllocatorInstance,piVar1);
      }
      pFVar5 = (this->KeyEvents).AllocatorInstance.Data;
      (this->KeyEvents).ArrayNum = iVar10 + 1;
      lVar15 = (longlong)iVar10 * 0x20;
      *(longlong *)(pFVar5 + lVar15) = lVar3;
      *(undefined8 *)(pFVar5 + lVar15 + 8) = uVar4;
      *(TReferenceControllerBase<1> **)(pFVar5 + lVar15 + 0x10) = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar18 = (atomic<int>)((int)*paVar18 + 1);
        UNLOCK();
      }
      *(FModifierKeysState *)(pFVar5 + lVar15 + 0x18) = param_2->ModifierKeys;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar12 = FSlateApplication::Get();
      dVar22 = (double)(**(code **)(*(longlong *)pFVar12 + 0x60))(pFVar12);
      this->KeyEventTime = dVar22;
      UpdateKeyText(this);
    }
    return;
  }
  local_38.KeyName = (FName)param_2[1].EventTimestamp;
  local_38.KeyDetails.Object = (FKeyDetails *)param_2[2]._padding_;
  local_38.KeyDetails.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_2[2].ModifierKeys;
  if ((FName)local_38.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_38.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
         (atomic<int>)
         ((int)*(atomic<int> *)
                ((longlong)local_38.KeyDetails.SharedReferenceCount.ReferenceController + 8) + 1);
    UNLOCK();
  }
  bVar9 = FKey::IsMouseButton(&local_38);
  if (bVar9) {
    if ((FName)local_38.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_38.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  ((longlong)local_38.KeyDetails.SharedReferenceCount.ReferenceController + 8) + 1);
      UNLOCK();
    }
    pFVar17 = (FName *)(this->MouseEvents).AllocatorInstance.Data;
    pFVar14 = pFVar17 + (longlong)(this->MouseEvents).ArrayNum * 7;
    for (; pFVar17 != pFVar14; pFVar17 = pFVar17 + 7) {
      if (*pFVar17 == local_38.KeyName) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
        if (pFVar17 == (FName *)0x0) goto LAB_142ede62a;
        goto LAB_142ede707;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
LAB_142ede62a:
    iVar10 = (this->MouseEvents).ArrayNum;
    piVar1 = &(this->MouseEvents).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&(this->MouseEvents).AllocatorInstance,piVar1);
    }
    (this->MouseEvents).ArrayNum = iVar10 + 1;
    pFVar17 = (FName *)((this->MouseEvents).AllocatorInstance.Data + (longlong)iVar10 * 0x38);
    DefaultConstructItems<FInputEventVisualizer::FMouseEventInfo,int>(pFVar17,1);
    *pFVar17 = local_38.KeyName;
    if ((FName)local_38.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_38.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  ((longlong)local_38.KeyDetails.SharedReferenceCount.ReferenceController + 8) + 1);
      UNLOCK();
    }
    FVar21 = pFVar17[2];
    pFVar17[1] = (FName)local_38.KeyDetails.Object;
    pFVar17[2] = (FName)local_38.KeyDetails.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar21);
    FVar21 = local_38.KeyName;
    uVar11 = ::GetTypeHash(local_38.KeyName.ComparisonIndex.Value);
    FVar20 = ___xmm_3f8000003f8000003f8000003f800000;
    FVar23 = _UNK_15076b1f8;
    if (*(int *)&(this->MouseKeyColorsMap).field_0x8 !=
        *(int *)&(this->MouseKeyColorsMap).field_0x34) {
      puVar19 = *(undefined1 **)&(this->MouseKeyColorsMap).field_0x40;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->MouseKeyColorsMap).field_0x38;
      }
      uVar11 = *(uint *)(puVar19 +
                        (ulonglong)
                        (*(int *)&(this->MouseKeyColorsMap).field_0x48 - 1U & uVar11 + FVar21.Number
                        ) * 4);
      if (uVar11 != 0xffffffff) {
        do {
          pFVar14 = (FName *)((longlong)(int)uVar11 * 0x30 + *(longlong *)&this->MouseKeyColorsMap);
          if (*pFVar14 == local_38.KeyName) {
            pFVar13 = pFVar14 + 3;
            if (pFVar14 == (FName *)0x0) {
              pFVar13 = (FName *)0x0;
            }
            if (pFVar13 != (FName *)0x0) {
              FVar20 = *pFVar13;
              FVar23 = pFVar13[1];
            }
            break;
          }
          uVar11 = pFVar14[5].ComparisonIndex.Value;
        } while (uVar11 != 0xffffffff);
      }
    }
    pFVar17[5] = FVar20;
    pFVar17[6] = FVar23;
LAB_142ede707:
    pFVar12 = FSlateApplication::Get();
    FVar21 = (FName)(**(code **)(*(longlong *)pFVar12 + 0x60))(pFVar12);
    pFVar17[3] = FVar21;
    uVar7 = *(undefined4 *)((longlong)&param_2[1]._padding_ + 4);
    pFVar17[4].ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_2[1]._padding_;
    pFVar17[4].Number = uVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// OnRouteInput @ 142ede920

void __thiscall
FInputEventVisualizer::OnRouteInput
          (FInputEventVisualizer *this,ESlateDebuggingInputEvent param_1,FName *param_2)

{
  return;
}

// PopulateMenu @ 142ee5680

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FInputEventVisualizer::PopulateMenu(FInputEventVisualizer *this,FMenuBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FUIAction *pFVar5;
  FSlateIcon *pFVar6;
  FText *pFVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_4b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4b0;
  ForAnyElementType FStack_4a8;
  ulonglong local_4a0;
  undefined1 local_498 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_490;
  ForAnyElementType FStack_488;
  ulonglong local_480;
  FName local_478;
  FName local_470;
  FName local_468;
  FName local_460;
  undefined1 local_458 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_440;
  ForAnyElementType FStack_438;
  ulonglong local_430;
  undefined1 local_428 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_410;
  ForAnyElementType FStack_408;
  ulonglong local_400;
  undefined1 local_3f8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e0;
  ForAnyElementType FStack_3d8;
  ulonglong local_3d0;
  undefined1 local_3c8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3b0;
  ForAnyElementType FStack_3a8;
  ulonglong local_3a0;
  undefined1 local_398 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_380;
  ForAnyElementType FStack_378;
  ulonglong local_370;
  undefined1 local_368 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_350;
  ForAnyElementType FStack_348;
  ulonglong local_340;
  undefined1 local_338 [8];
  FDelegateAllocation local_330;
  undefined1 local_320 [8];
  FDelegateAllocation local_318;
  undefined1 local_308 [8];
  FDelegateAllocation local_300;
  undefined1 local_2f0 [8];
  FDelegateAllocation local_2e8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2d8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2c0;
  FDestructionSentinel local_2a8;
  FDestructionSentinel local_290;
  FDestructionSentinel local_278;
  FDestructionSentinel local_260;
  FDestructionSentinel local_248;
  FDestructionSentinel local_230;
  FDestructionSentinel local_218;
  FDestructionSentinel local_200;
  FDestructionSentinel local_1e8;
  FDelegateAllocation *local_1d0;
  FDestructionSentinel local_1c8;
  FDelegateAllocation *local_1b0;
  FDestructionSentinel local_1a8;
  FDelegateAllocation *local_190;
  FDestructionSentinel local_188;
  FDelegateAllocation *local_170;
  FText local_168;
  FText local_158;
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [32];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [32];
  FSlateIcon local_78;
  FSlateIcon local_58;
  
  local_498[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_498[1] = false;
  local_480 = 0;
  local_490.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_488.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_3c8);
  local_3c8[0x10] = false;
  local_3a0 = 0;
  local_478.ComparisonIndex.Value = 0;
  local_478.Number = 0;
  local_3b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  local_470.ComparisonIndex.Value = 0;
  local_470.Number = 0;
  local_338 = (undefined1  [8])0x0;
  local_330.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_330.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_1e8);
  local_1d0 = &local_330;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_330);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = HandleGetMouseEventCheckState;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVFInputEventVisualizer____A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FInputEventVisualizer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  local_2d8._16_8_ = 0;
  local_2d8._0_8_ = 0;
  local_2d8._8_8_ = 0;
  local_320 = (undefined1  [8])0x0;
  local_318.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_318.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_320,
             (FWriteAccessScope *)&local_1c8);
  local_1b0 = &local_318;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_318);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    puVar3[4] = HandleToggleMouseEvent;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInputEventVisualizer____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this;
    if (this == (FInputEventVisualizer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_1c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
  }
  pFVar5 = FUIAction::FUIAction
                     ((FUIAction *)local_148,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_320,
                      &local_2d8,
                      (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                      local_338,RepeatDisabled);
  pFVar6 = FSlateIcon::FSlateIcon(&local_78);
  pFVar7 = FText::GetEmpty();
  local_458._0_8_ = (pFVar7->TextData).Reference;
  if ((ITextData *)local_458._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_458._0_8_ + 8))(local_458._0_8_,local_res18);
  }
  local_458._8_4_ = pFVar7->Flags;
  local_458[0x10] = true;
  local_430 = 0;
  local_440.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_438.Data = (FScriptContainerElement *)0x0;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_158,L"InputEventVisualizer",L"MouseButtonLabel",L"Mouse Click");
  FText::FText((FText *)local_3f8,pFVar7);
  local_3f8[0x10] = true;
  local_3d0 = 0;
  local_3e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3d8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_3f8,
             (TAttribute<FText> *)local_458,pFVar6,pFVar5,local_470,ToggleButton,local_478,
             (TAttribute<FText> *)local_3c8,(TAttribute<EVisibility> *)local_498);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3e0,(FWriteAccessScope *)&local_278);
  if (((int)local_3d0 != 0) && (FStack_3d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3d8,0,0,0x10);
    local_3d0 = local_3d0 & 0xffffffff00000000;
  }
  if (local_278.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
  }
  if (FStack_3d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e0.AccessDetector);
  if ((ITextData *)local_3f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3f8._0_8_ + 0x10))();
  }
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_440,(FWriteAccessScope *)&local_260);
  if (((int)local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_438.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_438,0,0,0x10);
    local_430 = local_430 & 0xffffffff00000000;
  }
  if (local_260.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_260.Accessor,&local_260);
  }
  if (FStack_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_440.AccessDetector);
  if ((ITextData *)local_458._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_458._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
  if ((void *)local_100._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_100._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
  if ((void *)local_118._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
  if ((void *)local_130._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_130._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_130);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
  if ((void *)local_148._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)&local_248);
  if (((int)local_3a0 != 0) && (FStack_3a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = local_3a0 & 0xffffffff00000000;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
  if ((ITextData *)local_3c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3c8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_490,(FWriteAccessScope *)&local_230);
  if (((int)local_480 != 0) && (FStack_488.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_488.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_488,0,0,0x10);
    local_480 = local_480 & 0xffffffff00000000;
  }
  if (local_230.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_230.Accessor,&local_230);
  }
  if (FStack_488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_488.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_490.AccessDetector);
  local_4b8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_4b8[1] = false;
  local_4a0 = 0;
  local_4b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4a8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_368);
  local_368[0x10] = false;
  local_340 = 0;
  local_468.ComparisonIndex.Value = 0;
  local_468.Number = 0;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_460.ComparisonIndex.Value = 0;
  local_460.Number = 0;
  local_308 = (undefined1  [8])0x0;
  local_300.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_300.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_308,
             (FWriteAccessScope *)&local_1a8);
  local_190 = &local_300;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_300);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVFInputEventVisualizer____A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = HandleGetKeyEventCheckState;
    puVar3[3] = this;
    if (this == (FInputEventVisualizer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  local_2c0._16_8_ = 0;
  local_2c0._0_8_ = 0;
  local_2c0._8_8_ = 0;
  local_2f0 = (undefined1  [8])0x0;
  local_2e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2e8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
             (FWriteAccessScope *)&local_188);
  local_170 = &local_2e8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_2e8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInputEventVisualizer____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = HandleToggleKeyEvent;
    puVar3[3] = this;
    if (this == (FInputEventVisualizer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_188.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
  }
  pFVar5 = FUIAction::FUIAction
                     ((FUIAction *)local_e0,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2f0,
                      &local_2c0,
                      (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                      local_308,RepeatDisabled);
  pFVar6 = FSlateIcon::FSlateIcon(&local_58);
  pFVar7 = FText::GetEmpty();
  local_428._0_8_ = (pFVar7->TextData).Reference;
  if ((ITextData *)local_428._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_428._0_8_ + 8))(local_428._0_8_,local_res20);
  }
  local_428._8_4_ = pFVar7->Flags;
  local_428[0x10] = true;
  local_400 = 0;
  local_410.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_408.Data = (FScriptContainerElement *)0x0;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_168,L"InputEventVisualizer",L"KeyLabel",L"Key");
  FText::FText((FText *)local_398,pFVar7);
  local_398[0x10] = true;
  local_370 = 0;
  local_380.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_378.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_398,
             (TAttribute<FText> *)local_428,pFVar6,pFVar5,local_460,ToggleButton,local_468,
             (TAttribute<FText> *)local_368,(TAttribute<EVisibility> *)local_4b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_380,(FWriteAccessScope *)&local_218);
  if (((int)local_370 != 0) && (FStack_378.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_378.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_378,0,0,0x10);
    local_370 = local_370 & 0xffffffff00000000;
  }
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  if (FStack_378.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_378.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_380.AccessDetector);
  if ((ITextData *)local_398._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_398._0_8_ + 0x10))();
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_410,(FWriteAccessScope *)&local_200);
  if (((int)local_400 != 0) && (FStack_408.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_408.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_408,0,0,0x10);
    local_400 = local_400 & 0xffffffff00000000;
  }
  if (local_200.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
  }
  if (FStack_408.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_408.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_410.AccessDetector);
  if ((ITextData *)local_428._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_428._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  if ((void *)local_c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  if ((void *)local_e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)&local_2a8);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_2a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  if ((ITextData *)local_368._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_368._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4b0,(FWriteAccessScope *)&local_290);
  if (((int)local_4a0 != 0) && (FStack_4a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4a8,0,0,0x10);
    local_4a0 = local_4a0 & 0xffffffff00000000;
  }
  if (local_290.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
  }
  if (FStack_4a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4b0.AccessDetector);
  return;
}

// UpdateKeyText @ 142f12cb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FInputEventVisualizer::UpdateKeyText(FInputEventVisualizer *this)

{
  uint uVar1;
  int iVar2;
  ITextData *pIVar3;
  code *pcVar4;
  atomic<int> aVar5;
  SNotificationItem *pSVar6;
  atomic<int> aVar7;
  int iVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  FKey *pFVar14;
  FKey *this_00;
  bool bVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  SNotificationItem *local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_1c8;
  FText local_1b8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1a8;
  FText local_198;
  FText local_188;
  undefined1 local_178;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_170;
  ForAnyElementType FStack_168;
  ulonglong local_160;
  TReferenceControllerBase<1> *local_158;
  FText local_150;
  FTextFormat local_140;
  FText local_130;
  FDestructionSentinel local_120;
  FFormatArgumentValue local_108;
  undefined4 local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  
  local_158 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
  pTVar13 = local_158;
  if (local_158 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = local_158->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142f12cf6;
      }
      LOCK();
      aVar7 = local_158->SharedReferenceCount;
      bVar15 = aVar5 == aVar7;
      if (bVar15) {
        local_158->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar15);
    local_res20 = (this->WeakOwningNotification).Object;
    if (local_res20 != (SNotificationItem *)0x0) {
      uVar1 = (this->KeyEvents).ArrayNum;
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      if (0 < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar1,&local_1c8.AllocatorInstance,0,&local_1c8.ArrayMax);
      }
      FText::AsLocalizable_Advanced_LocText
                (&local_130,L"InputEventVisualizer",L"KeySeparator",L"  ");
      iVar2 = (this->KeyEvents).ArrayNum;
      this_00 = (FKey *)(this->KeyEvents).AllocatorInstance.Data;
      pFVar14 = (FKey *)((longlong)this_00 + (longlong)iVar2 * 0x20);
      while( true ) {
        if ((this->KeyEvents).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FInputEventVisualizer::FKeyEventInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        pSVar6 = local_res20;
        if (this_00 == pFVar14) break;
        pFVar9 = FText::GetEmpty();
        local_1b8.TextData.Reference = (pFVar9->TextData).Reference;
        if (local_1b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1b8.TextData.Reference + 8))
                    (local_1b8.TextData.Reference,local_res10);
        }
        local_1b8.Flags = pFVar9->Flags;
        uVar1 = this_00[1].KeyName.ComparisonIndex.Value;
        if ((uVar1 & 0xc0) == 0) {
          if ((uVar1 & 0x30) != 0) {
            pFVar9 = FText::AsLocalizable_Advanced_LocText
                               (&local_b8,L"InputEventVisualizer",L"AltKey",L"Alt");
            FText::operator=(&local_1b8,pFVar9);
            TVar12.Reference = local_b8.TextData.Reference;
            goto LAB_142f12eb0;
          }
          if ((uVar1 & 3) != 0) {
            pFVar9 = FText::AsLocalizable_Advanced_LocText
                               (&local_c8,L"InputEventVisualizer",L"ShiftKey",L"Shift");
            FText::operator=(&local_1b8,pFVar9);
            TVar12.Reference = local_c8.TextData.Reference;
            goto LAB_142f12eb0;
          }
        }
        else {
          pFVar9 = FText::AsLocalizable_Advanced_LocText
                             (&local_a8,L"InputEventVisualizer",L"CommandKey",L"Ctrl");
          FText::operator=(&local_1b8,pFVar9);
          TVar12.Reference = local_a8.TextData.Reference;
LAB_142f12eb0:
          if (TVar12.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar12.Reference + 0x10))();
          }
        }
        bVar15 = FText::IsEmpty(&local_1b8);
        if (bVar15) {
          pFVar9 = FKey::GetDisplayName(this_00,&local_88,false);
          if (((local_1c8.AllocatorInstance.Data <= pFVar9) &&
              (pFVar9 < (FText *)(local_1c8.AllocatorInstance.Data +
                                 (longlong)local_1c8.ArrayMax * 0x10))) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = local_1c8.ArrayNum;
          if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
          }
          local_1c8.ArrayNum = iVar8 + 1;
          FText::FText((FText *)(local_1c8.AllocatorInstance.Data + (longlong)iVar8 * 0x10),pFVar9);
          TVar12.Reference = local_88.TextData.Reference;
        }
        else {
          pFVar9 = FKey::GetDisplayName(this_00,&local_68,false);
          local_150.TextData.Reference = local_1b8.TextData.Reference;
          if (local_1b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1b8.TextData.Reference + 8))
                      (local_1b8.TextData.Reference,local_res18);
          }
          local_150.Flags = local_1b8.Flags;
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_98,L"InputEventVisualizer",L"KeyStateFormat",L"{0}-{1}");
          pFVar11 = FTextFormat::FTextFormat(&local_58,pFVar10,Default);
          local_108.Type = Text;
          FText::FText((FText *)&local_108.TextValue,&local_150);
          if ((local_108.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_e8 = 4;
          FText::FText(&local_d8,pFVar9);
          if ((local_d8.TextData.Reference == (ITextData *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a8.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_1a8.AllocatorInstance,2,&local_1a8.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_1a8.AllocatorInstance.Data,&local_108,2);
          local_140.TextFormatData.Object = (pFVar11->TextFormatData).Object;
          local_140.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_140.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_140.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_140.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_198,&local_140,&local_1a8);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
          if ((FFormatArgumentValue *)local_1a8.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_1a8.AllocatorInstance.Data);
          }
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
          }
          if (local_108.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_108.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_150.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
          }
          pIVar3 = (pFVar9->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          if (((local_1c8.AllocatorInstance.Data <= &local_198) &&
              (&local_198 <
               (FText *)(local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayMax * 0x10)))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = local_1c8.ArrayNum;
          if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
          }
          local_1c8.ArrayNum = iVar8 + 1;
          FText::FText((FText *)(local_1c8.AllocatorInstance.Data + (longlong)iVar8 * 0x10),
                       &local_198);
          TVar12.Reference = local_98.TextData.Reference;
          if (local_198.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
            TVar12.Reference = local_98.TextData.Reference;
          }
        }
        if (TVar12.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar12.Reference + 0x10))();
        }
        if (local_1b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
        }
        this_00 = (FKey *)&this_00[1].KeyDetails;
      }
      pcVar4 = *(code **)(*(longlong *)local_res20 + 0x248);
      pFVar9 = FText::Join(&local_78,&local_130,&local_1c8);
      FText::FText(&local_188,pFVar9);
      local_178 = 1;
      local_160 = 0;
      local_170.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_168.Data = (FScriptContainerElement *)0x0;
      (*pcVar4)(pSVar6,&local_188);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_170,(FWriteAccessScope *)&local_120);
      if (((int)local_160 != 0) && (FStack_168.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_168.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_168,0,0,0x10);
        local_160 = local_160 & 0xffffffff00000000;
      }
      pTVar13 = local_158;
      if (local_120.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
      }
      if (FStack_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_168.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_170.AccessDetector);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_130.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      }
      DestructItems<FText,int>((FText *)0x0,0);
      DestructItems<FText,int>((FText *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
      if ((FText *)local_1c8.AllocatorInstance.Data != (FText *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
    }
  }
LAB_142f12cf6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

// UpdateNotificationItem @ 142f13500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInputEventVisualizer::UpdateNotificationItem(FInputEventVisualizer *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  FMouseEventInfo *pFVar5;
  code *pcVar6;
  FKeyEventInfo *pFVar7;
  SNotificationItem *pSVar8;
  atomic<int> aVar9;
  FText *pFVar10;
  ISlateStyle *pIVar11;
  FName *pFVar12;
  FSlateNotificationManager *this_00;
  TSharedPtr<SNotificationItem,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  FName local_res8;
  TSharedPtr<SNotificationItem,1> local_1a8;
  undefined8 local_198 [2];
  FNotificationInfo local_188;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
             this);
  FSlateDebugging::UnregisterWidgetInputRoutingEvent((IWidgetInputRoutingEvent *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  if ((this->bShowKeyEvent != false) || (this->bShowMouseEvent != false)) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FInputEventVisualizer>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnBeginFrame,(FInputEventVisualizer *)&local_res8,(pmf_8b7e28e6)this
              );
    FSlateDebugging::RegisterWidgetInputRoutingEvent((IWidgetInputRoutingEvent *)this);
  }
  if (this->bShowMouseEvent == false) {
    piVar1 = &(this->MouseEvents).ArrayMax;
    pFVar5 = (FMouseEventInfo *)(this->MouseEvents).AllocatorInstance.Data;
    iVar4 = (this->MouseEvents).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInputEventVisualizer::FMouseEventInfo,int>(pFVar5,iVar4);
      (this->MouseEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->MouseEvents).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInputEventVisualizer::FMouseEventInfo,int>(pFVar5,iVar4);
      (this->MouseEvents).ArrayNum = 0;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FInputEventVisualizer>
              ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::PaintDebugElements,(FInputEventVisualizer *)&local_res8,
               (pmf_76751382)this);
  }
  if (this->bShowKeyEvent == false) {
    piVar1 = &(this->KeyEvents).ArrayMax;
    pFVar7 = (FKeyEventInfo *)(this->KeyEvents).AllocatorInstance.Data;
    iVar4 = (this->KeyEvents).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FInputEventVisualizer::FKeyEventInfo,int>(pFVar7,iVar4);
      (this->KeyEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->KeyEvents).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FInputEventVisualizer::FKeyEventInfo,int>(pFVar7,iVar4);
      (this->KeyEvents).ArrayNum = 0;
    }
    pTVar15 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
    pTVar14 = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar15->SharedReferenceCount;
      do {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142f13786;
        LOCK();
        aVar9 = pTVar15->SharedReferenceCount;
        bVar16 = aVar3 == aVar9;
        if (bVar16) {
          pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar9 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar9;
      } while (!bVar16);
      pSVar8 = (this->WeakOwningNotification).Object;
      pTVar14 = pTVar15;
      if (pSVar8 != (SNotificationItem *)0x0) {
        (**(code **)(*(longlong *)pSVar8 + 0x290))();
      }
    }
LAB_142f13786:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    if (&this->WeakOwningNotification == (TWeakPtr<SNotificationItem,1> *)local_198) {
      return;
    }
    pTVar15 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
    (this->WeakOwningNotification).Object = (SNotificationItem *)0x0;
    (this->WeakOwningNotification).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &pTVar15->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<int>)0x1) {
      return;
    }
    (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
    return;
  }
  pTVar15 = (this->WeakOwningNotification).WeakReferenceCount.ReferenceController;
  pTVar14 = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar15->SharedReferenceCount;
    do {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142f1363d;
      LOCK();
      aVar9 = pTVar15->SharedReferenceCount;
      bVar16 = aVar3 == aVar9;
      if (bVar16) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar16);
    pTVar14 = pTVar15;
    if ((this->WeakOwningNotification).Object != (SNotificationItem *)0x0) goto LAB_142f136e2;
  }
LAB_142f1363d:
  pFVar10 = FText::GetEmpty();
  FNotificationInfo::FNotificationInfo(&local_188,pFVar10);
  pIVar11 = FAppStyle::Get();
  pcVar6 = *(code **)((longlong)*pIVar11 + 0x50);
  pFVar12 = ::FName::FName(&local_res8,"NotificationList.ItemBackground");
  local_188.Image = (FSlateBrush *)(*pcVar6)(pIVar11,*pFVar12,0,0);
  local_188.bUseThrobber = false;
  local_188.bUseSuccessFailIcons = false;
  local_188.bUseLargeFont = false;
  local_188.bFireAndForget = false;
  local_188.FadeOutDuration = 0.5;
  this_00 = FSlateNotificationManager::Get();
  pTVar13 = FSlateNotificationManager::AddNotification(this_00,&local_1a8,&local_188);
  TWeakPtr<SNotificationItem,1>::operator=<SNotificationItem>(&this->WeakOwningNotification,pTVar13)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  FNotificationInfo::~FNotificationInfo(&local_188);
  pTVar15 = pTVar14;
LAB_142f136e2:
  UpdateKeyText(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

