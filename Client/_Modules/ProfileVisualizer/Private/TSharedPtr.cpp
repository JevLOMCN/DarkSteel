// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 22

// TSharedPtr<SGraphBar,1><SGraphBar> @ 148d4c170

TSharedPtr<SGraphBar,1> * __thiscall
TSharedPtr<SGraphBar,1>::TSharedPtr<SGraphBar,1><SGraphBar>
          (TSharedPtr<SGraphBar,1> *this,TSharedRef<SGraphBar,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator=<FVisualizerEvent> @ 148d4c230

TSharedPtr<FVisualizerEvent,1> * __thiscall
TSharedPtr<FVisualizerEvent,1>::operator=<FVisualizerEvent>
          (TSharedPtr<FVisualizerEvent,1> *this,TRawPtrProxy<FVisualizerEvent> *param_1)

{
  FVisualizerEvent *pFVar1;
  TSharedPtr<FVisualizerEvent,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFVisualizerEvent__U__DefaultDeleter_UFVisualizerEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FVisualizerEvent *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FDelayedVisualizerSpawner> @ 148d4c2c0

TSharedPtr<FDelayedVisualizerSpawner,1> * __thiscall
TSharedPtr<FDelayedVisualizerSpawner,1>::operator=<FDelayedVisualizerSpawner>
          (TSharedPtr<FDelayedVisualizerSpawner,1> *this,
          TRawPtrProxy<FDelayedVisualizerSpawner> *param_1)

{
  FDelayedVisualizerSpawner *pFVar1;
  TSharedPtr<FDelayedVisualizerSpawner,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDelayedVisualizerSpawner__U__DefaultDeleter_VFDelayedVisualizerSpawner___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FDelayedVisualizerSpawner *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FProfileVisualizerStyle::FStyle> @ 148d4c350

TSharedPtr<FProfileVisualizerStyle::FStyle,1> * __thiscall
TSharedPtr<FProfileVisualizerStyle::FStyle,1>::operator=<FProfileVisualizerStyle::FStyle>
          (TSharedPtr<FProfileVisualizerStyle::FStyle,1> *this,
          TRawPtrProxy<FProfileVisualizerStyle::FStyle> *param_1)

{
  FStyle *pFVar1;
  TSharedPtr<FProfileVisualizerStyle::FStyle,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFStyle_FProfileVisualizerStyle__U__DefaultDeleter_VFStyle_FProfileVisualizerStyle___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FStyle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// TSharedPtr<FVisualizerEvent,1> @ 148d54930

TSharedPtr<FVisualizerEvent,1> * __thiscall
TSharedPtr<FVisualizerEvent,1>::TSharedPtr<FVisualizerEvent,1>
          (TSharedPtr<FVisualizerEvent,1> *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SGraphBar,1> @ 148d54960

TSharedPtr<SGraphBar,1> * __thiscall
TSharedPtr<SGraphBar,1>::TSharedPtr<SGraphBar,1>
          (TSharedPtr<SGraphBar,1> *this,TSharedPtr<SGraphBar,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> @ 148d578f0

void __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>::
~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
           *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<FVisualizerEvent,1> @ 148d57920

void __thiscall
TSharedPtr<FVisualizerEvent,1>::~TSharedPtr<FVisualizerEvent,1>
          (TSharedPtr<FVisualizerEvent,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> @ 148d57930

void __thiscall
TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
~TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>
          (TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> @ 148d57960

void __thiscall
TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
          (TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> @ 148d57990

void __thiscall
TSharedPtr<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>::
~TSharedPtr<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>
          (TSharedPtr<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<ISlateStyle,1> @ 148d579c0

void __thiscall
TSharedPtr<ISlateStyle,1>::~TSharedPtr<ISlateStyle,1>(TSharedPtr<ISlateStyle,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SGraphBar,1> @ 148d579d0

void __thiscall TSharedPtr<SGraphBar,1>::~TSharedPtr<SGraphBar,1>(TSharedPtr<SGraphBar,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STimeline,1> @ 148d57a00

void __thiscall TSharedPtr<STimeline,1>::~TSharedPtr<STimeline,1>(TSharedPtr<STimeline,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 148d59540

TSharedPtr<FVisualizerEvent,1> * __thiscall
TSharedPtr<FVisualizerEvent,1>::operator=
          (TSharedPtr<FVisualizerEvent,1> *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FVisualizerEvent *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 148d596b0

FVisualizerEvent * __thiscall
TSharedPtr<FVisualizerEvent,1>::operator->(TSharedPtr<FVisualizerEvent,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FVisualizerEvent *pFVar3;
  
  if (this->Object != (FVisualizerEvent *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVisualizerEvent *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 148d59700

ISlateStyle * __thiscall TSharedPtr<ISlateStyle,1>::operator->(TSharedPtr<ISlateStyle,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  
  if (this->Object != (ISlateStyle *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISlateStyle *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 148d59750

SBarVisualizer * __thiscall
TSharedPtr<SBarVisualizer,1>::operator->(TSharedPtr<SBarVisualizer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SBarVisualizer *pSVar3;
  
  if (this->Object != (SBarVisualizer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SBarVisualizer *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 148d597a0

SEventsTree * __thiscall TSharedPtr<SEventsTree,1>::operator->(TSharedPtr<SEventsTree,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SEventsTree *pSVar3;
  
  if (this->Object != (SEventsTree *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SEventsTree *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 148d597f0

SGraphBar * __thiscall TSharedPtr<SGraphBar,1>::operator->(TSharedPtr<SGraphBar,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SGraphBar *pSVar3;
  
  if (this->Object != (SGraphBar *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SGraphBar *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 148d92970

TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> * __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>::ToSharedRef
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
           *this,TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
                 *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> *pTVar4;
  
  if (this->Object == (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 148d92a10

TSharedRef<SGraphBar,1> * __thiscall
TSharedPtr<SGraphBar,1>::ToSharedRef
          (TSharedPtr<SGraphBar,1> *this,TSharedRef<SGraphBar,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SGraphBar,1> *pTVar4;
  
  if (this->Object == (SGraphBar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SGraphBar,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SGraphBar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SGraphBar,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

