// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// HyperlinkDecorator<SRichTextTest> @ 143048b50

TSharedRef<ITextDecorator,1> * __cdecl
SRichTextBlock::HyperlinkDecorator<SRichTextTest>
          (TSharedRef<ITextDecorator,1> *__return_storage_ptr__,FString *param_1,
          SRichTextTest *param_2,pmf_4eea8cf8 *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  FString *pFVar11;
  TSharedRef<FHyperlinkDecorator,1> *pTVar12;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  FDestructionSentinel local_e0;
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [8];
  ForAnyElementType local_a8;
  ulonglong local_a0;
  TSharedRef<SRichTextTest,1> local_98;
  TSharedPtr<SRichTextTest,1> local_88;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  TSharedRef<FHyperlinkDecorator,1> local_58;
  FString local_48 [2];
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  uVar3 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)&param_3->field_0x8;
  local_a0 = 0;
  local_b0 = (undefined1  [8])0x0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_c8 = (undefined1  [8])0x0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_f0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_f0);
  if (puVar8 != (undefined8 *)0x0) {
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_2->_padding_,
                        (TSharedRef<SWidget,1> *)&local_e0);
    local_98.Object = (SRichTextTest *)pTVar9->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_88.Object = local_98.Object;
    local_88.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextTest___00__A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = local_88.Object;
    puVar8[4] = local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar8[5] = uVar3;
    puVar8[6] = uVar4;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
  }
  if (bVar5) {
    TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>(&local_88);
  }
  if (bVar6) {
    TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>(&local_98);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e0.Accessor);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  pFVar11 = ::FString::FString(local_48,param_1);
  pTVar12 = FHyperlinkDecorator::Create
                      (&local_58,pFVar11,
                       (TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                        *)local_f8,
                       (TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                        *)local_c8,
                       (TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                        *)local_b0);
  __return_storage_ptr__->Object = (ITextDecorator *)pTVar12->Object;
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_e0);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_e0);
  if (((int)local_b8 != 0) && (local_c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = local_b8 & 0xffffffff00000000;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b0,
             (FWriteAccessScope *)&local_e0);
  if (((int)local_a0 != 0) && (local_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,0x10);
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// WidgetDecorator<SRichTextTest> @ 143054160

TSharedRef<ITextDecorator,1> * __cdecl
SRichTextBlock::WidgetDecorator<SRichTextTest>
          (TSharedRef<ITextDecorator,1> *__return_storage_ptr__,FString *param_1,
          SRichTextTest *param_2,pmf_86299bec *param_3)

{
  SWidget *pSVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget_const_,1> *pTVar7;
  ulong64 uVar8;
  FString *pFVar9;
  TSharedRef<FWidgetDecorator,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedRef<FWidgetDecorator,1> local_48;
  FString local_38;
  
  local_58 = *(undefined8 *)param_3;
  uStack_50 = *(undefined8 *)&param_3->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_a8 = (undefined1  [8])0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_a0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_2->_padding_,
                        (TSharedRef<SWidget_const_,1> *)&local_90);
    pTVar11 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar7->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFWidgetRunInfo_FSlateWidgetRun__AEBUFTextRunInfo__PEBVISlateStyle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextTest___00__A6A_AUFWidgetRunInfo_FSlateWidgetRun__AEBUFTextRunInfo__PEBVISlateStyle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = pSVar1;
    puVar6[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    puVar6[5] = local_58;
    puVar6[6] = uStack_50;
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90.Accessor);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  pFVar9 = ::FString::FString(&local_38,param_1);
  pTVar10 = FWidgetDecorator::Create
                      (&local_48,pFVar9,
                       (TDelegate<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
                        *)local_a8);
  __return_storage_ptr__->Object = (ITextDecorator *)pTVar10->Object;
  pTVar11 = (pTVar10->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_90);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// HyperlinkDecorator @ 1430d2ba0

TSharedRef<ITextDecorator,1> * __cdecl
SRichTextBlock::HyperlinkDecorator
          (TSharedRef<ITextDecorator,1> *__return_storage_ptr__,FString *param_1,
          TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  TSharedRef<FHyperlinkDecorator,1> *pTVar4;
  TSharedRef<FHyperlinkDecorator,1> local_78;
  FString local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  ulonglong local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  ulonglong local_30;
  FDestructionSentinel local_28;
  
  local_30 = 0;
  local_40 = (undefined1  [8])0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  local_58 = (undefined1  [8])0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  pFVar3 = ::FString::FString(&local_68,param_1);
  pTVar4 = FHyperlinkDecorator::Create
                     (&local_78,pFVar3,param_2,
                      (TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                       *)local_58,
                      (TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                       *)local_40);
  __return_storage_ptr__->Object = (ITextDecorator *)pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  if (((int)local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_28);
  if (((int)local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = local_30 & 0xffffffff00000000;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// ImageDecorator @ 1430d2d30

TSharedRef<ITextDecorator,1> * __cdecl
SRichTextBlock::ImageDecorator
          (TSharedRef<ITextDecorator,1> *__return_storage_ptr__,FString *param_1,
          ISlateStyle *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  TSharedRef<FImageDecorator,1> *pTVar4;
  TSharedRef<FImageDecorator,1> local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,param_1);
  pTVar4 = FImageDecorator::Create(&local_28,pFVar3,param_2);
  __return_storage_ptr__->Object = (ITextDecorator *)pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

