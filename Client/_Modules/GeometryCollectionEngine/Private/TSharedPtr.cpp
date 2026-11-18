// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 12

// TSharedPtr<FChaosBreakingEventFilter,1><FChaosBreakingEventFilter> @ 146349460

TSharedPtr<FChaosBreakingEventFilter,1> * __thiscall
TSharedPtr<FChaosBreakingEventFilter,1>::
TSharedPtr<FChaosBreakingEventFilter,1><FChaosBreakingEventFilter>
          (TSharedPtr<FChaosBreakingEventFilter,1> *this,
          TRawPtrProxy<FChaosBreakingEventFilter> *param_1)

{
  FChaosBreakingEventFilter *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFChaosBreakingEventFilter__U__DefaultDeleter_VFChaosBreakingEventFilter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FChaosCollisionEventFilter,1><FChaosCollisionEventFilter> @ 1463494d0

TSharedPtr<FChaosCollisionEventFilter,1> * __thiscall
TSharedPtr<FChaosCollisionEventFilter,1>::
TSharedPtr<FChaosCollisionEventFilter,1><FChaosCollisionEventFilter>
          (TSharedPtr<FChaosCollisionEventFilter,1> *this,
          TRawPtrProxy<FChaosCollisionEventFilter> *param_1)

{
  FChaosCollisionEventFilter *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFChaosCollisionEventFilter__U__DefaultDeleter_VFChaosCollisionEventFilter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FChaosRemovalEventFilter,1><FChaosRemovalEventFilter> @ 146349540

TSharedPtr<FChaosRemovalEventFilter,1> * __thiscall
TSharedPtr<FChaosRemovalEventFilter,1>::
TSharedPtr<FChaosRemovalEventFilter,1><FChaosRemovalEventFilter>
          (TSharedPtr<FChaosRemovalEventFilter,1> *this,
          TRawPtrProxy<FChaosRemovalEventFilter> *param_1)

{
  FChaosRemovalEventFilter *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFChaosRemovalEventFilter__U__DefaultDeleter_VFChaosRemovalEventFilter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FChaosTrailingEventFilter,1><FChaosTrailingEventFilter> @ 1463495b0

TSharedPtr<FChaosTrailingEventFilter,1> * __thiscall
TSharedPtr<FChaosTrailingEventFilter,1>::
TSharedPtr<FChaosTrailingEventFilter,1><FChaosTrailingEventFilter>
          (TSharedPtr<FChaosTrailingEventFilter,1> *this,
          TRawPtrProxy<FChaosTrailingEventFilter> *param_1)

{
  FChaosTrailingEventFilter *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFChaosTrailingEventFilter__U__DefaultDeleter_VFChaosTrailingEventFilter___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator*<FGeometryCollection> @ 146349630

FGeometryCollection * __thiscall
TSharedPtr<FGeometryCollection,1>::operator*<FGeometryCollection>
          (TSharedPtr<FGeometryCollection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCollection *pFVar3;
  
  if (this->Object != (FGeometryCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometryCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<FGeometryDynamicCollection> @ 146349680

FGeometryDynamicCollection * __thiscall
TSharedPtr<FGeometryDynamicCollection,1>::operator*<FGeometryDynamicCollection>
          (TSharedPtr<FGeometryDynamicCollection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryDynamicCollection *pFVar3;
  
  if (this->Object != (FGeometryDynamicCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometryDynamicCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14635f550

FChaosBreakingEventFilter * __thiscall
TSharedPtr<FChaosBreakingEventFilter,1>::operator->(TSharedPtr<FChaosBreakingEventFilter,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosBreakingEventFilter *pFVar3;
  
  if (this->Object != (FChaosBreakingEventFilter *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FChaosBreakingEventFilter *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14635f5a0

FChaosCollisionEventFilter * __thiscall
TSharedPtr<FChaosCollisionEventFilter,1>::operator->(TSharedPtr<FChaosCollisionEventFilter,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosCollisionEventFilter *pFVar3;
  
  if (this->Object != (FChaosCollisionEventFilter *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FChaosCollisionEventFilter *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14635f5f0

FChaosRemovalEventFilter * __thiscall
TSharedPtr<FChaosRemovalEventFilter,1>::operator->(TSharedPtr<FChaosRemovalEventFilter,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosRemovalEventFilter *pFVar3;
  
  if (this->Object != (FChaosRemovalEventFilter *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FChaosRemovalEventFilter *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14635f640

FChaosTrailingEventFilter * __thiscall
TSharedPtr<FChaosTrailingEventFilter,1>::operator->(TSharedPtr<FChaosTrailingEventFilter,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosTrailingEventFilter *pFVar3;
  
  if (this->Object != (FChaosTrailingEventFilter *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FChaosTrailingEventFilter *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14635f690

FGeometryCollection * __thiscall
TSharedPtr<FGeometryCollection,1>::operator->(TSharedPtr<FGeometryCollection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCollection *pFVar3;
  
  if (this->Object != (FGeometryCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometryCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14635f6e0

FGeometryDynamicCollection * __thiscall
TSharedPtr<FGeometryDynamicCollection,1>::operator->(TSharedPtr<FGeometryDynamicCollection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryDynamicCollection *pFVar3;
  
  if (this->Object != (FGeometryDynamicCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometryDynamicCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

