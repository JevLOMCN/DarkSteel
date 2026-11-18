// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 46

// TSharedRef<SWidget,1><SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_> @ 142de2250

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::
TSharedRef<SWidget,1><SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_> @ 142de2280

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::
TSharedRef<SWidget,1><SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SSpinBox<float>_> @ 142de22b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSpinBox<float>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_> @ 142de22e0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
          (TSharedRef<SWidget,1> *this,
          TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<TJsonReader<wchar_t>,1><TJsonReader<wchar_t>_> @ 142de2310

TSharedRef<TJsonReader<wchar_t>,1> * __thiscall
TSharedRef<TJsonReader<wchar_t>,1>::TSharedRef<TJsonReader<wchar_t>,1><TJsonReader<wchar_t>_>
          (TSharedRef<TJsonReader<wchar_t>,1> *this,TRawPtrProxy<TJsonReader<wchar_t>_> *param_1)

{
  TJsonReader<wchar_t> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonReader<wchar_t>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonReader__W__U__DefaultDeleter_V__TJsonReader__W___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonReader<wchar_t> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonReader<wchar_t>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_> @ 142de23b0

TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> * __thiscall
TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1>::
TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_>
          (TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> *this,
          TRawPtrProxy<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_> *param_1)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____U__DefaultDeleter_V__TJsonWriter__WU__TCondensedJsonPrintPolicy__W_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> *)(*pcVar2)()
      ;
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FJsonValue,1><FJsonValueArray> @ 142de2530

TSharedRef<FJsonValue,1> * __thiscall
TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueArray>
          (TSharedRef<FJsonValue,1> *this,TRawPtrProxy<FJsonValueArray> *param_1)

{
  FJsonValueArray *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FJsonValue,1> *pTVar5;
  
  this->Object = (FJsonValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonValueArray__U__DefaultDeleter_VFJsonValueArray___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FJsonValueArray *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FJsonValue,1><FJsonValueObject> @ 142de25d0

TSharedRef<FJsonValue,1> * __thiscall
TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueObject>
          (TSharedRef<FJsonValue,1> *this,TRawPtrProxy<FJsonValueObject> *param_1)

{
  FJsonValueObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FJsonValue,1> *pTVar5;
  
  this->Object = (FJsonValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonValueObject__U__DefaultDeleter_VFJsonValueObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FJsonValueObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FLiveWidgetReflectorNode,1><FLiveWidgetReflectorNode> @ 142de2670

TSharedRef<FLiveWidgetReflectorNode,1> * __thiscall
TSharedRef<FLiveWidgetReflectorNode,1>::
TSharedRef<FLiveWidgetReflectorNode,1><FLiveWidgetReflectorNode>
          (TSharedRef<FLiveWidgetReflectorNode,1> *this,
          TRawPtrProxy<FLiveWidgetReflectorNode> *param_1)

{
  FLiveWidgetReflectorNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FLiveWidgetReflectorNode,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLiveWidgetReflectorNode__U__DefaultDeleter_VFLiveWidgetReflectorNode___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FLiveWidgetReflectorNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FLiveWidgetReflectorNode,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateStyleSet,1><FSlateStyleSet> @ 142de2710

TSharedRef<FSlateStyleSet,1> * __thiscall
TSharedRef<FSlateStyleSet,1>::TSharedRef<FSlateStyleSet,1><FSlateStyleSet>
          (TSharedRef<FSlateStyleSet,1> *this,TRawPtrProxy<FSlateStyleSet> *param_1)

{
  FSlateStyleSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateStyleSet,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateStyleSet__U__DefaultDeleter_VFSlateStyleSet___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateStyleSet *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateStyleSet,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSnapshotWidgetReflectorNode,1><FSnapshotWidgetReflectorNode> @ 142de27b0

TSharedRef<FSnapshotWidgetReflectorNode,1> * __thiscall
TSharedRef<FSnapshotWidgetReflectorNode,1>::
TSharedRef<FSnapshotWidgetReflectorNode,1><FSnapshotWidgetReflectorNode>
          (TSharedRef<FSnapshotWidgetReflectorNode,1> *this,
          TRawPtrProxy<FSnapshotWidgetReflectorNode> *param_1)

{
  FSnapshotWidgetReflectorNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSnapshotWidgetReflectorNode,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSnapshotWidgetReflectorNode__U__DefaultDeleter_VFSnapshotWidgetReflectorNode___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSnapshotWidgetReflectorNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<ISlateViewport,1><SAtlasVisualizer> @ 142de2850

TSharedRef<ISlateViewport,1> * __thiscall
TSharedRef<ISlateViewport,1>::TSharedRef<ISlateViewport,1><SAtlasVisualizer>
          (TSharedRef<ISlateViewport,1> *this,TSharedRef<SAtlasVisualizer,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (ISlateViewport *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SAtlasVisualizerPanel> @ 142de2880

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SAtlasVisualizerPanel>
          (TSharedRef<SWidget,1> *this,TSharedRef<SAtlasVisualizerPanel,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  
  pSVar2 = (SWidget *)&param_1->Object->_padding_;
  if (param_1->Object == (SAtlasVisualizerPanel *)0x0) {
    pSVar2 = (SWidget *)0x0;
  }
  this->Object = pSVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SColorBlock> @ 142de28b0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorBlock>
          (TSharedRef<SWidget,1> *this,TSharedRef<SColorBlock,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SExpanderArrow> @ 142de28e0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SExpanderArrow>
          (TSharedRef<SWidget,1> *this,TSharedRef<SExpanderArrow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SGridPanel> @ 142de2910

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGridPanel>
          (TSharedRef<SWidget,1> *this,TSharedRef<SGridPanel,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SNavigationSimulationSnapshotList> @ 142de2940

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNavigationSimulationSnapshotList>
          (TSharedRef<SWidget,1> *this,TSharedRef<SNavigationSimulationSnapshotList,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SScrollableSnapshotImage> @ 142de2ab0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollableSnapshotImage>
          (TSharedRef<SWidget,1> *this,TSharedRef<SScrollableSnapshotImage,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SSeparator> @ 142de2ae0

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSeparator>
          (TSharedRef<SWidget,1> *this,TSharedRef<SSeparator,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SWidget,1><SViewport> @ 142de2b10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SViewport>
          (TSharedRef<SWidget,1> *this,TSharedRef<SViewport,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SAtlasVisualizer,1><SWidget> @ 142de2b40

TSharedRef<SAtlasVisualizer,1> * __thiscall
TSharedRef<SAtlasVisualizer,1>::TSharedRef<SAtlasVisualizer,1><SWidget>
          (TSharedRef<SAtlasVisualizer,1> *this,TSharedRef<SWidget,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SAtlasVisualizer *pSVar2;
  
  pSVar2 = (SAtlasVisualizer *)&param_1->Object[-1].StatID;
  if (param_1->Object == (SWidget *)0x0) {
    pSVar2 = (SAtlasVisualizer *)0x0;
  }
  this->Object = pSVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SReflectorTreeWidgetItem,1><SWidget> @ 142de2b70

TSharedRef<SReflectorTreeWidgetItem,1> * __thiscall
TSharedRef<SReflectorTreeWidgetItem,1>::TSharedRef<SReflectorTreeWidgetItem,1><SWidget>
          (TSharedRef<SReflectorTreeWidgetItem,1> *this,TSharedRef<SWidget,1> *param_1,
          FStaticCastTag param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SReflectorTreeWidgetItem *pSVar2;
  
  pSVar2 = (SReflectorTreeWidgetItem *)&param_1->Object[-1].StatID;
  if (param_1->Object == (SWidget *)0x0) {
    pSVar2 = (SReflectorTreeWidgetItem *)0x0;
  }
  this->Object = pSVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> @ 142e00bf0

TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> * __thiscall
TSharedRef<SComboRow<TSharedPtr<int,1>_>,1>::TSharedRef<SComboRow<TSharedPtr<int,1>_>,1>
          (TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *this,SComboRow<TSharedPtr<int,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SComboRow<TSharedPtr<int,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> @ 142e00d10

TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> * __thiscall
TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
          (TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *this,
          SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *
               )(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                  *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> @ 142e00e30

TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
          (TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this,
          SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((*(longlong *)&param_1->field_0x10 == 0) || (*(longlong *)&param_1->field_0x18 == 0)) ||
          (*(int *)(*(longlong *)&param_1->field_0x18 + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->field_0x8 == (undefined1 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    *(undefined1 **)&param_1->field_0x10 = &param_1->field_0x8;
    if (pTVar3 != *(TReferenceControllerBase<1> **)&param_1->field_0x18) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&param_1->field_0x18;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&param_1->field_0x18 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<int,1>_>,1> @ 142e00f50

TSharedRef<STableRow<TSharedPtr<int,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *this,STableRow<TSharedPtr<int,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<int,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> @ 142e01070

TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::
TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *this,
          STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *)
                 (*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> @ 142e01190

TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *this,
          STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *
               )(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                  *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> @ 142e012b0

TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
          (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this,
          STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1> @ 142e013d0

TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1> *
__thiscall
TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>::
TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
          (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
           *this,STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
                 *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1> *pTVar7
  ;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                  *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> @ 142e014f0

TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> * __thiscall
TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
          (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *this,
          STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SAtlasVisualizer,1> @ 142e01610

TSharedRef<SAtlasVisualizer,1> * __thiscall
TSharedRef<SAtlasVisualizer,1>::TSharedRef<SAtlasVisualizer,1>
          (TSharedRef<SAtlasVisualizer,1> *this,SAtlasVisualizer *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SAtlasVisualizer,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SAtlasVisualizer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAtlasVisualizer,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SAtlasVisualizer,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SAtlasVisualizerPanel,1> @ 142e01730

TSharedRef<SAtlasVisualizerPanel,1> * __thiscall
TSharedRef<SAtlasVisualizerPanel,1>::TSharedRef<SAtlasVisualizerPanel,1>
          (TSharedRef<SAtlasVisualizerPanel,1> *this,SAtlasVisualizerPanel *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SAtlasVisualizerPanel,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SAtlasVisualizerPanel *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SAtlasVisualizerPanel,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SAtlasVisualizerPanel,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> @ 142e01850

TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> * __thiscall
TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1>::
TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1>
          (TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *this,
          SIntermediateResultNode *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SIntermediateResultNode *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SNavigationSimulationListInternal::SListElement,1> @ 142e01970

TSharedRef<SNavigationSimulationListInternal::SListElement,1> * __thiscall
TSharedRef<SNavigationSimulationListInternal::SListElement,1>::
TSharedRef<SNavigationSimulationListInternal::SListElement,1>
          (TSharedRef<SNavigationSimulationListInternal::SListElement,1> *this,SListElement *param_1
          ,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SNavigationSimulationListInternal::SListElement,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SListElement *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNavigationSimulationListInternal::SListElement,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SNavigationSimulationListInternal::SListElement,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SReflectorTreeWidgetItem,1> @ 142e01a90

TSharedRef<SReflectorTreeWidgetItem,1> * __thiscall
TSharedRef<SReflectorTreeWidgetItem,1>::TSharedRef<SReflectorTreeWidgetItem,1>
          (TSharedRef<SReflectorTreeWidgetItem,1> *this,SReflectorTreeWidgetItem *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SReflectorTreeWidgetItem,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SReflectorTreeWidgetItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SReflectorTreeWidgetItem,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SReflectorTreeWidgetItem,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<SWidgetListRow,1> @ 142e01bb0

TSharedRef<SWidgetListRow,1> * __thiscall
TSharedRef<SWidgetListRow,1>::TSharedRef<SWidgetListRow,1>
          (TSharedRef<SWidgetListRow,1> *this,SWidgetListRow *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SWidgetListRow,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (SWidgetListRow *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetListRow,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidgetListRow,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// ~TSharedRef<SBox,1> @ 142e0fcb0

void __thiscall TSharedRef<SBox,1>::~TSharedRef<SBox,1>(TSharedRef<SBox,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SCheckBox,1> @ 142e0fcc0

void __thiscall TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(TSharedRef<SCheckBox,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SColorBlock,1> @ 142e0fcd0

void __thiscall
TSharedRef<SColorBlock,1>::~TSharedRef<SColorBlock,1>(TSharedRef<SColorBlock,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SExpanderArrow,1> @ 142e0fd00

void __thiscall
TSharedRef<SExpanderArrow,1>::~TSharedRef<SExpanderArrow,1>(TSharedRef<SExpanderArrow,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedRef<SHorizontalBox,1> @ 142e0fd30

void __thiscall
TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(TSharedRef<SHorizontalBox,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SHyperlink,1> @ 142e0fd40

void __thiscall TSharedRef<SHyperlink,1>::~TSharedRef<SHyperlink,1>(TSharedRef<SHyperlink,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<SReflectorTreeWidgetItem,1> @ 142e0fd50

void __thiscall
TSharedRef<SReflectorTreeWidgetItem,1>::~TSharedRef<SReflectorTreeWidgetItem,1>
          (TSharedRef<SReflectorTreeWidgetItem,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<STextBlock,1> @ 142e0fd60

void __thiscall TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(TSharedRef<STextBlock,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator-> @ 142e18b20

SHorizontalBox * __thiscall
TSharedRef<SHorizontalBox,1>::operator->(TSharedRef<SHorizontalBox,1> *this)

{
  return this->Object;
}

