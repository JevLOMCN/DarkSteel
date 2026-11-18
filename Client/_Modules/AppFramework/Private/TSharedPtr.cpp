// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 234

// TSharedPtr<int,1><int> @ 142f197f0

TSharedPtr<int,1> * __thiscall
TSharedPtr<int,1>::TSharedPtr<int,1><int>(TSharedPtr<int,1> *this,TSharedRef<int,1> *param_1)

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

// TSharedPtr<INumericTypeInterface<int>,1><TDefaultNumericTypeInterface<int>_> @ 142f19880

TSharedPtr<INumericTypeInterface<int>,1> * __thiscall
TSharedPtr<INumericTypeInterface<int>,1>::
TSharedPtr<INumericTypeInterface<int>,1><TDefaultNumericTypeInterface<int>_>
          (TSharedPtr<INumericTypeInterface<int>,1> *this,
          TRawPtrProxy<TDefaultNumericTypeInterface<int>_> *param_1)

{
  TDefaultNumericTypeInterface<int> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (INumericTypeInterface<int> *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TDefaultNumericTypeInterface_H__U__DefaultDeleter_U__TDefaultNumericTypeInterface_H___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<INumericTypeInterface<float>,1><TDefaultNumericTypeInterface<float>_> @ 142f198f0

TSharedPtr<INumericTypeInterface<float>,1> * __thiscall
TSharedPtr<INumericTypeInterface<float>,1>::
TSharedPtr<INumericTypeInterface<float>,1><TDefaultNumericTypeInterface<float>_>
          (TSharedPtr<INumericTypeInterface<float>,1> *this,
          TRawPtrProxy<TDefaultNumericTypeInterface<float>_> *param_1)

{
  TDefaultNumericTypeInterface<float> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (INumericTypeInterface<float> *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TDefaultNumericTypeInterface_M__U__DefaultDeleter_U__TDefaultNumericTypeInterface_M___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<INumericTypeInterface<double>,1><TDefaultNumericTypeInterface<double>_> @ 142f19960

TSharedPtr<INumericTypeInterface<double>,1> * __thiscall
TSharedPtr<INumericTypeInterface<double>,1>::
TSharedPtr<INumericTypeInterface<double>,1><TDefaultNumericTypeInterface<double>_>
          (TSharedPtr<INumericTypeInterface<double>,1> *this,
          TRawPtrProxy<TDefaultNumericTypeInterface<double>_> *param_1)

{
  TDefaultNumericTypeInterface<double> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (INumericTypeInterface<double> *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TDefaultNumericTypeInterface_N__U__DefaultDeleter_U__TDefaultNumericTypeInterface_N___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1><UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>_> @ 142f199d0

TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1><UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>_>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *this,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *param_1)

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

// TSharedPtr<SGridPanel,1><SGridPanel> @ 142f1a3d0

TSharedPtr<SGridPanel,1> * __thiscall
TSharedPtr<SGridPanel,1>::TSharedPtr<SGridPanel,1><SGridPanel>
          (TSharedPtr<SGridPanel,1> *this,TSharedRef<SGridPanel,1> *param_1)

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

// TSharedPtr<SHorizontalBox,1><SHorizontalBox> @ 142f1a430

TSharedPtr<SHorizontalBox,1> * __thiscall
TSharedPtr<SHorizontalBox,1>::TSharedPtr<SHorizontalBox,1><SHorizontalBox>
          (TSharedPtr<SHorizontalBox,1> *this,TSharedRef<SHorizontalBox,1> *param_1)

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

// TSharedPtr<SWidget,1><SOverlay> @ 142f1a550

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SOverlay>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SOverlay,1> *param_1)

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

// TSharedPtr<SUniformWrapPanel,1><SUniformWrapPanel> @ 142f1a790

TSharedPtr<SUniformWrapPanel,1> * __thiscall
TSharedPtr<SUniformWrapPanel,1>::TSharedPtr<SUniformWrapPanel,1><SUniformWrapPanel>
          (TSharedPtr<SUniformWrapPanel,1> *this,TSharedRef<SUniformWrapPanel,1> *param_1)

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

// TSharedPtr<enum_ESelectionMode::Type,1><enum_ESelectionMode::Type> @ 142f1a8b0

TSharedPtr<ESelectionMode::Type,1> * __thiscall
TSharedPtr<enum_ESelectionMode::Type,1>::
TSharedPtr<enum_ESelectionMode::Type,1><enum_ESelectionMode::Type>
          (void *this,TRawPtrProxy<ESelectionMode::Type> *param_1)

{
  Type *pTVar1;
  undefined8 *puVar2;
  
  *(Type **)this = param_1->Object;
  pTVar1 = param_1->Object;
  puVar2 = ::operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &
              ___7__TReferenceControllerWithDeleter_W4Type_ESelectionMode__U__DefaultDeleter_W4Type_ESelectionMode___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = pTVar1;
    *(undefined8 **)((longlong)this + 8) = puVar2;
    return this;
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  return this;
}

// operator=<FString> @ 142f1a920

TSharedPtr<FString,1> * __thiscall
TSharedPtr<FString,1>::operator=<FString>
          (TSharedPtr<FString,1> *this,TRawPtrProxy<FString> *param_1)

{
  FString *pFVar1;
  TSharedPtr<FString,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFString__U__DefaultDeleter_VFString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = local_18.Object;
    local_18.Object = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  ~TSharedPtr<FString,1>(&local_18);
  return this;
}

// UEOpEquals<FString> @ 142f29fa0

bool __thiscall
TSharedPtr<FString,1>::UEOpEquals<FString>
          (TSharedPtr<FString,1> *this,TSharedPtr<FString,1> *param_1)

{
  return this->Object == param_1->Object;
}

// TSharedPtr<FUICommandList_const_,1> @ 142f2c480

TSharedPtr<FUICommandList_const_,1> * __thiscall
TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
          (TSharedPtr<FUICommandList_const_,1> *this,FNullTag *param_1)

{
  this->Object = (FUICommandList *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<int,1> @ 142f2c4a0

TSharedPtr<int,1> * __thiscall
TSharedPtr<int,1>::TSharedPtr<int,1>(TSharedPtr<int,1> *this,TSharedPtr<int,1> *param_1)

{
  this->Object = param_1->Object;
  (this->SharedReferenceCount).ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  return this;
}

// TSharedPtr<INumericTypeInterface<int>,1> @ 142f2c4d0

TSharedPtr<INumericTypeInterface<int>,1> * __thiscall
TSharedPtr<INumericTypeInterface<int>,1>::TSharedPtr<INumericTypeInterface<int>,1>
          (TSharedPtr<INumericTypeInterface<int>,1> *this,
          TSharedPtr<INumericTypeInterface<int>,1> *param_1)

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

// TSharedPtr<INumericTypeInterface<float>,1> @ 142f2c500

TSharedPtr<INumericTypeInterface<float>,1> * __thiscall
TSharedPtr<INumericTypeInterface<float>,1>::TSharedPtr<INumericTypeInterface<float>,1>
          (TSharedPtr<INumericTypeInterface<float>,1> *this,
          TSharedPtr<INumericTypeInterface<float>,1> *param_1)

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

// TSharedPtr<INumericTypeInterface<double>,1> @ 142f2c530

TSharedPtr<INumericTypeInterface<double>,1> * __thiscall
TSharedPtr<INumericTypeInterface<double>,1>::TSharedPtr<INumericTypeInterface<double>,1>
          (TSharedPtr<INumericTypeInterface<double>,1> *this,
          TSharedPtr<INumericTypeInterface<double>,1> *param_1)

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

// TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> @ 142f2c560

TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *this,
          TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *param_1)

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

// TSharedPtr<SListView<TSharedPtr<int,1>_>,1> @ 142f2c590

TSharedPtr<SListView<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::TSharedPtr<SListView<TSharedPtr<int,1>_>,1>
          (TSharedPtr<SListView<TSharedPtr<int,1>_>,1> *this,FNullTag *param_1)

{
  this->Object = (SListView<TSharedPtr<int,1>_> *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<STileView<TSharedPtr<int,1>_>,1> @ 142f2c5b0

TSharedPtr<STileView<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::TSharedPtr<STileView<TSharedPtr<int,1>_>,1>
          (TSharedPtr<STileView<TSharedPtr<int,1>_>,1> *this,FNullTag *param_1)

{
  this->Object = (STileView<TSharedPtr<int,1>_> *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> @ 142f2c5d0

TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>
          (TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> *this,FNullTag *param_1)

{
  this->Object = (STreeView<TSharedPtr<int,1>_> *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FExtender,1> @ 142f2c5f0

TSharedPtr<FExtender,1> * __thiscall
TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(TSharedPtr<FExtender,1> *this,FNullTag *param_1)

{
  this->Object = (FExtender *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FString,1> @ 142f2c610

TSharedPtr<FString,1> * __thiscall
TSharedPtr<FString,1>::TSharedPtr<FString,1>
          (TSharedPtr<FString,1> *this,TSharedPtr<FString,1> *param_1)

{
  this->Object = param_1->Object;
  (this->SharedReferenceCount).ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  return this;
}

// TSharedPtr<FString,1> @ 142f2c640

TSharedPtr<FString,1> * __thiscall
TSharedPtr<FString,1>::TSharedPtr<FString,1>
          (TSharedPtr<FString,1> *this,TSharedPtr<FString,1> *param_1)

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

// TSharedPtr<SGridPanel,1> @ 142f2c670

TSharedPtr<SGridPanel,1> * __thiscall
TSharedPtr<SGridPanel,1>::TSharedPtr<SGridPanel,1>
          (TSharedPtr<SGridPanel,1> *this,TSharedPtr<SGridPanel,1> *param_1)

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

// TSharedPtr<SMenuAnchor,1> @ 142f2c6a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SMenuAnchor,1> * __thiscall
TSharedPtr<SMenuAnchor,1>::TSharedPtr<SMenuAnchor,1>
          (TSharedPtr<SMenuAnchor,1> *this,TSharedPtr<SMenuAnchor,1> *param_1)

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

// TSharedPtr<SMenuAnchor,1> @ 142f2c6d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SMenuAnchor,1> * __thiscall
TSharedPtr<SMenuAnchor,1>::TSharedPtr<SMenuAnchor,1>
          (TSharedPtr<SMenuAnchor,1> *this,FNullTag *param_1)

{
  this->Object = (SMenuAnchor *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SWindow,1> @ 142f2c6f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
TSharedPtr<SWindow,1>::TSharedPtr<SWindow,1>(TSharedPtr<SWindow,1> *this,FNullTag *param_1)

{
  this->Object = (SWindow *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<enum_ESelectionMode::Type,1> @ 142f2c710

TSharedPtr<ESelectionMode::Type,1> * __thiscall
TSharedPtr<enum_ESelectionMode::Type,1>::TSharedPtr<enum_ESelectionMode::Type,1>
          (void *this,TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  *(Type **)this = param_1->Object;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (Type *)0x0;
  return this;
}

// TSharedPtr<enum_ESelectionMode::Type,1> @ 142f2c740

TSharedPtr<ESelectionMode::Type,1> * __thiscall
TSharedPtr<enum_ESelectionMode::Type,1>::TSharedPtr<enum_ESelectionMode::Type,1>
          (void *this,TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(Type **)this = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TSharedPtr<int,1> @ 142f39960

void __thiscall TSharedPtr<int,1>::~TSharedPtr<int,1>(TSharedPtr<int,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<INumericTypeInterface<float>,1> @ 142f39970

void __thiscall
TSharedPtr<INumericTypeInterface<float>,1>::~TSharedPtr<INumericTypeInterface<float>,1>
          (TSharedPtr<INumericTypeInterface<float>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> @ 142f399a0

void __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> @ 142f399d0

void __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1>::
~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SBreadcrumbTrail<int>,1> @ 142f39a00

void __thiscall
TSharedPtr<SBreadcrumbTrail<int>,1>::~TSharedPtr<SBreadcrumbTrail<int>,1>
          (TSharedPtr<SBreadcrumbTrail<int>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> @ 142f39a30

void __thiscall
TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::~TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>
          (TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SListView<TSharedPtr<int,1>_>,1> @ 142f39a60

void __thiscall
TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::~TSharedPtr<SListView<TSharedPtr<int,1>_>,1>
          (TSharedPtr<SListView<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SNumericEntryBox<float>,1> @ 142f39a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TSharedPtr<SNumericEntryBox<float>,1>::~TSharedPtr<SNumericEntryBox<float>,1>
          (TSharedPtr<SNumericEntryBox<float>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSegmentedControl<int>,1> @ 142f39ac0

void __thiscall
TSharedPtr<SSegmentedControl<int>,1>::~TSharedPtr<SSegmentedControl<int>,1>
          (TSharedPtr<SSegmentedControl<int>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSpinBox<float>,1> @ 142f39af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SSpinBox<float>,1>::~TSharedPtr<SSpinBox<float>,1>(TSharedPtr<SSpinBox<float>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STableRow<TSharedPtr<int,1>_>,1> @ 142f39b20

void __thiscall
TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>::~TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>
          (TSharedPtr<STableRow<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STileView<TSharedPtr<int,1>_>,1> @ 142f39b50

void __thiscall
TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::~TSharedPtr<STileView<TSharedPtr<int,1>_>,1>
          (TSharedPtr<STileView<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> @ 142f39b80

void __thiscall
TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::~TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>
          (TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<FString,1> @ 142f39bb0

void __thiscall TSharedPtr<FString,1>::~TSharedPtr<FString,1>(TSharedPtr<FString,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<IBreakIterator,1> @ 142f39be0

void __thiscall
TSharedPtr<IBreakIterator,1>::~TSharedPtr<IBreakIterator,1>(TSharedPtr<IBreakIterator,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<IErrorReportingWidget,1> @ 142f39bf0

void __thiscall
TSharedPtr<IErrorReportingWidget,1>::~TSharedPtr<IErrorReportingWidget,1>
          (TSharedPtr<IErrorReportingWidget,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<IMenu,1> @ 142f39c00

void __thiscall TSharedPtr<IMenu,1>::~TSharedPtr<IMenu,1>(TSharedPtr<IMenu,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<ITextLayoutMarshaller,1> @ 142f39c10

void __thiscall
TSharedPtr<ITextLayoutMarshaller,1>::~TSharedPtr<ITextLayoutMarshaller,1>
          (TSharedPtr<ITextLayoutMarshaller,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SCircularThrobber,1> @ 142f39c20

void __thiscall
TSharedPtr<SCircularThrobber,1>::~TSharedPtr<SCircularThrobber,1>
          (TSharedPtr<SCircularThrobber,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SColorSlider,1> @ 142f39c50

void __thiscall
TSharedPtr<SColorSlider,1>::~TSharedPtr<SColorSlider,1>(TSharedPtr<SColorSlider,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SColorSpectrum,1> @ 142f39c80

void __thiscall
TSharedPtr<SColorSpectrum,1>::~TSharedPtr<SColorSpectrum,1>(TSharedPtr<SColorSpectrum,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SColorWheel,1> @ 142f39cb0

void __thiscall
TSharedPtr<SColorWheel,1>::~TSharedPtr<SColorWheel,1>(TSharedPtr<SColorWheel,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SComboButton,1> @ 142f39cc0

void __thiscall
TSharedPtr<SComboButton,1>::~TSharedPtr<SComboButton,1>(TSharedPtr<SComboButton,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SDockTab,1> @ 142f39cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(TSharedPtr<SDockTab,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SEditableTextBox,1> @ 142f39d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>
          (TSharedPtr<SEditableTextBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SEyeDropperButton,1> @ 142f39d30

void __thiscall
TSharedPtr<SEyeDropperButton,1>::~TSharedPtr<SEyeDropperButton,1>
          (TSharedPtr<SEyeDropperButton,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SFxWidget,1> @ 142f39d60

void __thiscall TSharedPtr<SFxWidget,1>::~TSharedPtr<SFxWidget,1>(TSharedPtr<SFxWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SGridPanel,1> @ 142f39d90

void __thiscall TSharedPtr<SGridPanel,1>::~TSharedPtr<SGridPanel,1>(TSharedPtr<SGridPanel,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SHeader,1> @ 142f39da0

void __thiscall TSharedPtr<SHeader,1>::~TSharedPtr<SHeader,1>(TSharedPtr<SHeader,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SHorizontalBox,1> @ 142f39dd0

void __thiscall
TSharedPtr<SHorizontalBox,1>::~TSharedPtr<SHorizontalBox,1>(TSharedPtr<SHorizontalBox,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SHyperlink,1> @ 142f39de0

void __thiscall TSharedPtr<SHyperlink,1>::~TSharedPtr<SHyperlink,1>(TSharedPtr<SHyperlink,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SInlineEditableTextBlock,1> @ 142f39e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SInlineEditableTextBlock,1>::~TSharedPtr<SInlineEditableTextBlock,1>
          (TSharedPtr<SInlineEditableTextBlock,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SStarshipGallery::SListGalleryWidget,1> @ 142f39e40

void __thiscall
TSharedPtr<SStarshipGallery::SListGalleryWidget,1>::
~TSharedPtr<SStarshipGallery::SListGalleryWidget,1>
          (TSharedPtr<SStarshipGallery::SListGalleryWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SMenuAnchor,1> @ 142f39e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SMenuAnchor,1>::~TSharedPtr<SMenuAnchor,1>(TSharedPtr<SMenuAnchor,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SMultiLineEditableText,1> @ 142f39e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SMultiLineEditableText,1>::~TSharedPtr<SMultiLineEditableText,1>
          (TSharedPtr<SMultiLineEditableText,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SMultiLineEditableTextBox,1> @ 142f39e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SMultiLineEditableTextBox,1>::~TSharedPtr<SMultiLineEditableTextBox,1>
          (TSharedPtr<SMultiLineEditableTextBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SProgressBar,1> @ 142f39ec0

void __thiscall
TSharedPtr<SProgressBar,1>::~TSharedPtr<SProgressBar,1>(TSharedPtr<SProgressBar,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSearchBox,1> @ 142f39ef0

void __thiscall TSharedPtr<SSearchBox,1>::~TSharedPtr<SSearchBox,1>(TSharedPtr<SSearchBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSeparator,1> @ 142f39f20

void __thiscall TSharedPtr<SSeparator,1>::~TSharedPtr<SSeparator,1>(TSharedPtr<SSeparator,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSlider,1> @ 142f39f50

void __thiscall TSharedPtr<SSlider,1>::~TSharedPtr<SSlider,1>(TSharedPtr<SSlider,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSpinningImage,1> @ 142f39f80

void __thiscall
TSharedPtr<SSpinningImage,1>::~TSharedPtr<SSpinningImage,1>(TSharedPtr<SSpinningImage,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SStarshipGallery,1> @ 142f39fb0

void __thiscall
TSharedPtr<SStarshipGallery,1>::~TSharedPtr<SStarshipGallery,1>
          (TSharedPtr<SStarshipGallery,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STextComboBox,1> @ 142f39fe0

void __thiscall
TSharedPtr<STextComboBox,1>::~TSharedPtr<STextComboBox,1>(TSharedPtr<STextComboBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STextComboPopup,1> @ 142f3a010

void __thiscall
TSharedPtr<STextComboPopup,1>::~TSharedPtr<STextComboPopup,1>(TSharedPtr<STextComboPopup,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SThemeColorBlocksBar,1> @ 142f3a040

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SThemeColorBlocksBar,1>::~TSharedPtr<SThemeColorBlocksBar,1>
          (TSharedPtr<SThemeColorBlocksBar,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SThrobber,1> @ 142f3a050

void __thiscall TSharedPtr<SThrobber,1>::~TSharedPtr<SThrobber,1>(TSharedPtr<SThrobber,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SUniformWrapPanel,1> @ 142f3a080

void __thiscall
TSharedPtr<SUniformWrapPanel,1>::~TSharedPtr<SUniformWrapPanel,1>
          (TSharedPtr<SUniformWrapPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SUserWidgetExample,1> @ 142f3a0b0

void __thiscall
TSharedPtr<SUserWidgetExample,1>::~TSharedPtr<SUserWidgetExample,1>
          (TSharedPtr<SUserWidgetExample,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SVolumeControl,1> @ 142f3a0e0

void __thiscall
TSharedPtr<SVolumeControl,1>::~TSharedPtr<SVolumeControl,1>(TSharedPtr<SVolumeControl,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SWidget,1> @ 142f3a110

void __thiscall TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(TSharedPtr<SWidget,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SWidgetGallery,1> @ 142f3a120

void __thiscall
TSharedPtr<SWidgetGallery,1>::~TSharedPtr<SWidgetGallery,1>(TSharedPtr<SWidgetGallery,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SWindow,1> @ 142f3a150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TSharedPtr<SWindow,1>::~TSharedPtr<SWindow,1>(TSharedPtr<SWindow,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator= @ 142f419b0

TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::operator=
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *this,
          TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 142f419f0

TSharedPtr<SListView<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator=
          (TSharedPtr<SListView<TSharedPtr<int,1>_>,1> *this,
          TSharedPtr<SListView<TSharedPtr<int,1>_>,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SListView<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 142f41a30

TSharedPtr<STileView<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::operator=
          (TSharedPtr<STileView<TSharedPtr<int,1>_>,1> *this,
          TSharedPtr<STileView<TSharedPtr<int,1>_>,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (STileView<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 142f41a70

TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::operator=
          (TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> *this,
          TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (STreeView<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 142f41ab0

TSharedPtr<FTestData,1> * __thiscall
TSharedPtr<FTestData,1>::operator=(TSharedPtr<FTestData,1> *this,TSharedPtr<FTestData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTestData *pFVar2;
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

// operator= @ 142f41b00

TSharedPtr<ESelectionMode::Type,1> * __thiscall
TSharedPtr<enum_ESelectionMode::Type,1>::operator=
          (void *this,TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  Type *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  *(Type **)this = pTVar2;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 142f420b0

INumericTypeInterface<int> * __thiscall
TSharedPtr<INumericTypeInterface<int>,1>::operator->(TSharedPtr<INumericTypeInterface<int>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  INumericTypeInterface<int> *pIVar3;
  
  if (this->Object != (INumericTypeInterface<int> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (INumericTypeInterface<int> *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 142f42100

INumericTypeInterface<float> * __thiscall
TSharedPtr<INumericTypeInterface<float>,1>::operator->
          (TSharedPtr<INumericTypeInterface<float>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  INumericTypeInterface<float> *pIVar3;
  
  if (this->Object != (INumericTypeInterface<float> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (INumericTypeInterface<float> *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 142f42150

INumericTypeInterface<double> * __thiscall
TSharedPtr<INumericTypeInterface<double>,1>::operator->
          (TSharedPtr<INumericTypeInterface<double>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  INumericTypeInterface<double> *pIVar3;
  
  if (this->Object != (INumericTypeInterface<double> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (INumericTypeInterface<double> *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 142f421a0

TObservableArray<TSharedPtr<int,1>_> * __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::operator->
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TObservableArray<TSharedPtr<int,1>_> *pTVar3;
  
  if (this->Object != (TObservableArray<TSharedPtr<int,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TObservableArray<TSharedPtr<int,1>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 142f421f0

SBreadcrumbTrail<int> * __thiscall
TSharedPtr<SBreadcrumbTrail<int>,1>::operator->(TSharedPtr<SBreadcrumbTrail<int>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SBreadcrumbTrail<int> *pSVar3;
  
  if (this->Object != (SBreadcrumbTrail<int> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SBreadcrumbTrail<int> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142f42240

SComboBox<TSharedPtr<ESelectionMode::Type,1>_> * __thiscall
TSharedPtr<SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->(void *this)

{
  code *pcVar1;
  bool bVar2;
  SComboBox<TSharedPtr<ESelectionMode::Type,1>_> *pSVar3;
  
  if (*(longlong *)this != 0) {
    return *(SComboBox<TSharedPtr<ESelectionMode::Type,1>_> **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SComboBox<TSharedPtr<ESelectionMode::Type,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return *(SComboBox<TSharedPtr<ESelectionMode::Type,1>_> **)this;
}

// operator-> @ 142f42290

SListView<TSharedPtr<ESelectionMode::Type,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->(void *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<ESelectionMode::Type,1>_> *pSVar3;
  
  if (*(longlong *)this != 0) {
    return *(SListView<TSharedPtr<ESelectionMode::Type,1>_> **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<ESelectionMode::Type,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return *(SListView<TSharedPtr<ESelectionMode::Type,1>_> **)this;
}

// operator-> @ 142f422e0

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<int> * __thiscall
TSharedPtr<SSpinBox<int>,1>::operator->(TSharedPtr<SSpinBox<int>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSpinBox<int> *pSVar3;
  
  if (this->Object != (SSpinBox<int> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSpinBox<int> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142f42330

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<float> * __thiscall
TSharedPtr<SSpinBox<float>,1>::operator->(TSharedPtr<SSpinBox<float>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSpinBox<float> *pSVar3;
  
  if (this->Object != (SSpinBox<float> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSpinBox<float> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142f42380

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<double> * __thiscall
TSharedPtr<SSpinBox<double>,1>::operator->(TSharedPtr<SSpinBox<double>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSpinBox<double> *pSVar3;
  
  if (this->Object != (SSpinBox<double> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSpinBox<double> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142f423d0

STileView<TSharedPtr<int,1>_> * __thiscall
TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::operator->
          (TSharedPtr<STileView<TSharedPtr<int,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  STileView<TSharedPtr<int,1>_> *pSVar3;
  
  if (this->Object != (STileView<TSharedPtr<int,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STileView<TSharedPtr<int,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142f42420

STreeView<TSharedPtr<int,1>_> * __thiscall
TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::operator->
          (TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  STreeView<TSharedPtr<int,1>_> *pSVar3;
  
  if (this->Object != (STreeView<TSharedPtr<int,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STreeView<TSharedPtr<int,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142f42470

FTestData * __thiscall TSharedPtr<FTestData,1>::operator->(TSharedPtr<FTestData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTestData *pFVar3;
  
  if (this->Object != (FTestData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTestData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142f424c0

SGridPanel * __thiscall TSharedPtr<SGridPanel,1>::operator->(TSharedPtr<SGridPanel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SGridPanel *pSVar3;
  
  if (this->Object != (SGridPanel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SGridPanel *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 143013210

TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> * __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::ToSharedRef
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *this,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar4;
  
  if (this->Object == (TObservableArray<TSharedPtr<int,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *)
               (*pcVar2)();
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
  if (__return_storage_ptr__->Object == (TObservableArray<TSharedPtr<int,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1430132b0

TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> * __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1>::ToSharedRef
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *this,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *pTVar4;
  
  if (this->Object == (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *)
               (*pcVar2)();
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
  if (__return_storage_ptr__->Object == (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 143013350

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSpinBox<int>,1> * __thiscall
TSharedPtr<SSpinBox<int>,1>::ToSharedRef
          (TSharedPtr<SSpinBox<int>,1> *this,TSharedRef<SSpinBox<int>,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SSpinBox<int>,1> *pTVar4;
  
  if (this->Object == (SSpinBox<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSpinBox<int>,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SSpinBox<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSpinBox<int>,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1430133f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSpinBox<float>,1> * __thiscall
TSharedPtr<SSpinBox<float>,1>::ToSharedRef
          (TSharedPtr<SSpinBox<float>,1> *this,TSharedRef<SSpinBox<float>,1> *__return_storage_ptr__
          )

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SSpinBox<float>,1> *pTVar4;
  
  if (this->Object == (SSpinBox<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSpinBox<float>,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SSpinBox<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSpinBox<float>,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 143013490

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSpinBox<double>,1> * __thiscall
TSharedPtr<SSpinBox<double>,1>::ToSharedRef
          (TSharedPtr<SSpinBox<double>,1> *this,
          TSharedRef<SSpinBox<double>,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SSpinBox<double>,1> *pTVar4;
  
  if (this->Object == (SSpinBox<double> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSpinBox<double>,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SSpinBox<double> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSpinBox<double>,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 143013530

TSharedRef<SGridPanel,1> * __thiscall
TSharedPtr<SGridPanel,1>::ToSharedRef
          (TSharedPtr<SGridPanel,1> *this,TSharedRef<SGridPanel,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SGridPanel,1> *pTVar4;
  
  if (this->Object == (SGridPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SGridPanel,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SGridPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SGridPanel,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1430135d0

TSharedRef<SUniformWrapPanel,1> * __thiscall
TSharedPtr<SUniformWrapPanel,1>::ToSharedRef
          (TSharedPtr<SUniformWrapPanel,1> *this,
          TSharedRef<SUniformWrapPanel,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SUniformWrapPanel,1> *pTVar4;
  
  if (this->Object == (SUniformWrapPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SUniformWrapPanel,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SUniformWrapPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SUniformWrapPanel,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<FColorInfo,1><FColorInfo> @ 143017840

TSharedPtr<FColorInfo,1> * __thiscall
TSharedPtr<FColorInfo,1>::TSharedPtr<FColorInfo,1><FColorInfo>
          (TSharedPtr<FColorInfo,1> *this,TRawPtrProxy<FColorInfo> *param_1)

{
  FColorInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFColorInfo__U__DefaultDeleter_UFColorInfo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FLinearColor,1><FLinearColor> @ 1430178b0

TSharedPtr<FLinearColor,1> * __thiscall
TSharedPtr<FLinearColor,1>::TSharedPtr<FLinearColor,1><FLinearColor>
          (TSharedPtr<FLinearColor,1> *this,TRawPtrProxy<FLinearColor> *param_1)

{
  FLinearColor *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFLinearColor__U__DefaultDeleter_UFLinearColor___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FColorTheme,1><FColorTheme> @ 143017a70

TSharedPtr<FColorTheme,1> * __thiscall
TSharedPtr<FColorTheme,1>::TSharedPtr<FColorTheme,1><FColorTheme>
          (TSharedPtr<FColorTheme,1> *this,TRawPtrProxy<FColorTheme> *param_1)

{
  FColorTheme *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFColorTheme__U__DefaultDeleter_VFColorTheme___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FColorTheme,1><FColorTheme> @ 143017ae0

TSharedPtr<FColorTheme,1> * __thiscall
TSharedPtr<FColorTheme,1>::TSharedPtr<FColorTheme,1><FColorTheme>
          (TSharedPtr<FColorTheme,1> *this,TSharedRef<FColorTheme,1> *param_1)

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

// TSharedPtr<SMultiBoxWidget,1><SMultiBoxWidget> @ 143017b10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<SMultiBoxWidget,1> * __thiscall
TSharedPtr<SMultiBoxWidget,1>::TSharedPtr<SMultiBoxWidget,1><SMultiBoxWidget>
          (TSharedPtr<SMultiBoxWidget,1> *this,TSharedRef<SMultiBoxWidget,1> *param_1)

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

// ~TSharedPtr<FColorTheme,1> @ 14301ae00

void __thiscall
TSharedPtr<FColorTheme,1>::~TSharedPtr<FColorTheme,1>(TSharedPtr<FColorTheme,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SMultiBoxWidget,1> @ 14301ae10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TSharedPtr<SMultiBoxWidget,1>::~TSharedPtr<SMultiBoxWidget,1>(TSharedPtr<SMultiBoxWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 14301b440

TSharedPtr<FColorTheme,1> * __thiscall
TSharedPtr<FColorTheme,1>::operator=
          (TSharedPtr<FColorTheme,1> *this,TSharedPtr<FColorTheme,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FColorTheme *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14301b480

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<SMultiBoxWidget,1> * __thiscall
TSharedPtr<SMultiBoxWidget,1>::operator=
          (TSharedPtr<SMultiBoxWidget,1> *this,TSharedPtr<SMultiBoxWidget,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SMultiBoxWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14301b4c0

SToolTip * __thiscall TSharedPtr<SToolTip,1>::operator->(TSharedPtr<SToolTip,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SToolTip *pSVar3;
  
  if (this->Object != (SToolTip *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SToolTip *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14301b510

SUniformGridPanel * __thiscall
TSharedPtr<SUniformGridPanel,1>::operator->(TSharedPtr<SUniformGridPanel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SUniformGridPanel *pSVar3;
  
  if (this->Object != (SUniformGridPanel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SUniformGridPanel *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14301b560

SWidgetSwitcher * __thiscall
TSharedPtr<SWidgetSwitcher,1>::operator->(TSharedPtr<SWidgetSwitcher,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidgetSwitcher *pSVar3;
  
  if (this->Object != (SWidgetSwitcher *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidgetSwitcher *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14303f3f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SMultiBoxWidget,1> * __thiscall
TSharedPtr<SMultiBoxWidget,1>::ToSharedRef
          (TSharedPtr<SMultiBoxWidget,1> *this,TSharedRef<SMultiBoxWidget,1> *__return_storage_ptr__
          )

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SMultiBoxWidget,1> *pTVar4;
  
  if (this->Object == (SMultiBoxWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SMultiBoxWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SMultiBoxWidget,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14303f490

TSharedRef<SSlider,1> * __thiscall
TSharedPtr<SSlider,1>::ToSharedRef
          (TSharedPtr<SSlider,1> *this,TSharedRef<SSlider,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SSlider,1> *pTVar4;
  
  if (this->Object == (SSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSlider,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SSlider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSlider,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<FCompositeFont_const_,1><FCompositeFont_const_> @ 14303ff00

TSharedPtr<FCompositeFont_const_,1> * __thiscall
TSharedPtr<FCompositeFont_const_,1>::TSharedPtr<FCompositeFont_const_,1><FCompositeFont_const_>
          (TSharedPtr<FCompositeFont_const_,1> *this,TSharedRef<FCompositeFont_const_,1> *param_1)

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

// TSharedPtr<INumericTypeInterface<unsigned_short>,1><TDefaultNumericTypeInterface<unsigned_short>_> @ 14303ffa0

TSharedPtr<INumericTypeInterface<unsigned_short>,1> * __thiscall
TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
TSharedPtr<INumericTypeInterface<unsigned_short>,1><TDefaultNumericTypeInterface<unsigned_short>_>
          (TSharedPtr<INumericTypeInterface<unsigned_short>,1> *this,
          TRawPtrProxy<TDefaultNumericTypeInterface<unsigned_short>_> *param_1)

{
  TDefaultNumericTypeInterface<unsigned_short> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (INumericTypeInterface<unsigned_short> *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TDefaultNumericTypeInterface_G__U__DefaultDeleter_U__TDefaultNumericTypeInterface_G___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FTextStyles::FFontFamily,1><FTextStyles::FFontFamily> @ 143040130

TSharedPtr<FTextStyles::FFontFamily,1> * __thiscall
TSharedPtr<FTextStyles::FFontFamily,1>::
TSharedPtr<FTextStyles::FFontFamily,1><FTextStyles::FFontFamily>
          (TSharedPtr<FTextStyles::FFontFamily,1> *this,
          TRawPtrProxy<FTextStyles::FFontFamily> *param_1)

{
  FFontFamily *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFFontFamily_FTextStyles__U__DefaultDeleter_UFFontFamily_FTextStyles___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<ITextLayoutMarshaller,1><FRichTextLayoutMarshaller> @ 143040580

TSharedPtr<ITextLayoutMarshaller,1> * __thiscall
TSharedPtr<ITextLayoutMarshaller,1>::TSharedPtr<ITextLayoutMarshaller,1><FRichTextLayoutMarshaller>
          (TSharedPtr<ITextLayoutMarshaller,1> *this,
          TSharedRef<FRichTextLayoutMarshaller,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (ITextLayoutMarshaller *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1><FRichTextSyntaxHighlighterTextLayoutMarshaller> @ 1430405b0

TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> * __thiscall
TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::
TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1><FRichTextSyntaxHighlighterTextLayoutMarshaller>
          (TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> *this,
          TSharedRef<FRichTextSyntaxHighlighterTextLayoutMarshaller,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (FSyntaxHighlighterTextLayoutMarshaller *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<ITextLayoutMarshaller,1><FSyntaxHighlighterTextLayoutMarshaller> @ 143040740

TSharedPtr<ITextLayoutMarshaller,1> * __thiscall
TSharedPtr<ITextLayoutMarshaller,1>::
TSharedPtr<ITextLayoutMarshaller,1><FSyntaxHighlighterTextLayoutMarshaller>
          (TSharedPtr<ITextLayoutMarshaller,1> *this,
          TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (ITextLayoutMarshaller *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<FTabManager,1><FTabManager> @ 143040770

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager,1> * __thiscall
TSharedPtr<FTabManager,1>::TSharedPtr<FTabManager,1><FTabManager>
          (TSharedPtr<FTabManager,1> *this,TSharedRef<FTabManager,1> *param_1)

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

// TSharedPtr<FUICommandList_const_,1><FUICommandList> @ 143040870

TSharedPtr<FUICommandList_const_,1> * __thiscall
TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1><FUICommandList>
          (TSharedPtr<FUICommandList_const_,1> *this,TSharedPtr<FUICommandList,1> *param_1)

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

// TSharedPtr<FUICommandList_const_,1><FUICommandList> @ 1430408a0

TSharedPtr<FUICommandList_const_,1> * __thiscall
TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1><FUICommandList>
          (TSharedPtr<FUICommandList_const_,1> *this,TSharedRef<FUICommandList,1> *param_1)

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

// TSharedPtr<IMenu,1><IMenu> @ 143040a00

TSharedPtr<IMenu,1> * __thiscall
TSharedPtr<IMenu,1>::TSharedPtr<IMenu,1><IMenu>
          (TSharedPtr<IMenu,1> *this,TWeakPtr<IMenu,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  this->Object = (IMenu *)0x0;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((this->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this->Object = param_1->Object;
  }
  return this;
}

// TSharedPtr<SWidget,1><SBorder> @ 143040a80

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SBorder>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SBorder,1> *param_1)

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

// TSharedPtr<SColorPicker,1><SColorPicker> @ 143040ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<SColorPicker,1> * __thiscall
TSharedPtr<SColorPicker,1>::TSharedPtr<SColorPicker,1><SColorPicker>
          (TSharedPtr<SColorPicker,1> *this,TSharedRef<SColorPicker,1> *param_1)

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

// TSharedPtr<SWidget,1><SMultiLineEditableTextBox> @ 143040e10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SMultiLineEditableTextBox>
          (TSharedPtr<SWidget,1> *this,TSharedPtr<SMultiLineEditableTextBox,1> *param_1)

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

// TSharedPtr<SNotificationItem,1><SNotificationItem> @ 143040e70

TSharedPtr<SNotificationItem,1> * __thiscall
TSharedPtr<SNotificationItem,1>::TSharedPtr<SNotificationItem,1><SNotificationItem>
          (TSharedPtr<SNotificationItem,1> *this,TWeakPtr<SNotificationItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  this->Object = (SNotificationItem *)0x0;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((this->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this->Object = param_1->Object;
  }
  return this;
}

// TSharedPtr<INotificationWidget,1><STestNotificationWidget> @ 143041410

TSharedPtr<INotificationWidget,1> * __thiscall
TSharedPtr<INotificationWidget,1>::TSharedPtr<INotificationWidget,1><STestNotificationWidget>
          (TSharedPtr<INotificationWidget,1> *this,TSharedRef<STestNotificationWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  INotificationWidget *pIVar2;
  
  pIVar2 = (INotificationWidget *)&param_1->Object->field_0x2a8;
  if (param_1->Object == (STestNotificationWidget *)0x0) {
    pIVar2 = (INotificationWidget *)0x0;
  }
  this->Object = pIVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<INumericTypeInterface<unsigned_short>,1> @ 143055600

TSharedPtr<INumericTypeInterface<unsigned_short>,1> * __thiscall
TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
TSharedPtr<INumericTypeInterface<unsigned_short>,1>
          (TSharedPtr<INumericTypeInterface<unsigned_short>,1> *this,
          TSharedPtr<INumericTypeInterface<unsigned_short>,1> *param_1)

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

// TSharedPtr<FTextStyles::FFontFamily,1> @ 143055630

TSharedPtr<FTextStyles::FFontFamily,1> * __thiscall
TSharedPtr<FTextStyles::FFontFamily,1>::TSharedPtr<FTextStyles::FFontFamily,1>
          (TSharedPtr<FTextStyles::FFontFamily,1> *this,
          TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

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

// TSharedPtr<FTextStyles::FFontFamily,1> @ 143055660

TSharedPtr<FTextStyles::FFontFamily,1> * __thiscall
TSharedPtr<FTextStyles::FFontFamily,1>::TSharedPtr<FTextStyles::FFontFamily,1>
          (TSharedPtr<FTextStyles::FFontFamily,1> *this,FNullTag *param_1)

{
  this->Object = (FFontFamily *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FSlateDynamicImageBrush,1> @ 143055680

TSharedPtr<FSlateDynamicImageBrush,1> * __thiscall
TSharedPtr<FSlateDynamicImageBrush,1>::TSharedPtr<FSlateDynamicImageBrush,1>
          (TSharedPtr<FSlateDynamicImageBrush,1> *this,FNullTag *param_1)

{
  this->Object = (FSlateDynamicImageBrush *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FSlateSharedHandleData,1> @ 1430556a0

TSharedPtr<FSlateSharedHandleData,1> * __thiscall
TSharedPtr<FSlateSharedHandleData,1>::TSharedPtr<FSlateSharedHandleData,1>
          (TSharedPtr<FSlateSharedHandleData,1> *this,TSharedPtr<FSlateSharedHandleData,1> *param_1)

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

// TSharedPtr<FTabManager,1> @ 1430556d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager,1> * __thiscall
TSharedPtr<FTabManager,1>::TSharedPtr<FTabManager,1>
          (TSharedPtr<FTabManager,1> *this,FNullTag *param_1)

{
  this->Object = (FTabManager *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FUICommandInfo,1> @ 1430556f0

TSharedPtr<FUICommandInfo,1> * __thiscall
TSharedPtr<FUICommandInfo,1>::TSharedPtr<FUICommandInfo,1>
          (TSharedPtr<FUICommandInfo,1> *this,FNullTag *param_1)

{
  this->Object = (FUICommandInfo *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FUICommandList,1> @ 143055710

TSharedPtr<FUICommandList,1> * __thiscall
TSharedPtr<FUICommandList,1>::TSharedPtr<FUICommandList,1>
          (TSharedPtr<FUICommandList,1> *this,FNullTag *param_1)

{
  this->Object = (FUICommandList *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SImage,1> @ 143055730

TSharedPtr<SImage,1> * __thiscall
TSharedPtr<SImage,1>::TSharedPtr<SImage,1>(TSharedPtr<SImage,1> *this,FNullTag *param_1)

{
  this->Object = (SImage *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SResponsiveGridPanel,1> @ 143055750

TSharedPtr<SResponsiveGridPanel,1> * __thiscall
TSharedPtr<SResponsiveGridPanel,1>::TSharedPtr<SResponsiveGridPanel,1>
          (TSharedPtr<SResponsiveGridPanel,1> *this,FNullTag *param_1)

{
  this->Object = (SResponsiveGridPanel *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SSplitter,1> @ 143055770

TSharedPtr<SSplitter,1> * __thiscall
TSharedPtr<SSplitter,1>::TSharedPtr<SSplitter,1>(TSharedPtr<SSplitter,1> *this,FNullTag *param_1)

{
  this->Object = (SSplitter *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SVerticalBox,1> @ 143055790

TSharedPtr<SVerticalBox,1> * __thiscall
TSharedPtr<SVerticalBox,1>::TSharedPtr<SVerticalBox,1>
          (TSharedPtr<SVerticalBox,1> *this,FNullTag *param_1)

{
  this->Object = (SVerticalBox *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SWidget,1> @ 1430557b0

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1>(TSharedPtr<SWidget,1> *this,FNullTag *param_1)

{
  this->Object = (SWidget *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~TSharedPtr<FCompositeFont_const_,1> @ 14305eaa0

void __thiscall
TSharedPtr<FCompositeFont_const_,1>::~TSharedPtr<FCompositeFont_const_,1>
          (TSharedPtr<FCompositeFont_const_,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<INumericTypeInterface<unsigned_short>,1> @ 14305eab0

void __thiscall
TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
~TSharedPtr<INumericTypeInterface<unsigned_short>,1>
          (TSharedPtr<INumericTypeInterface<unsigned_short>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> @ 14305eae0

void __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
           *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> @ 14305eb10

void __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
::
~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
           *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<FTextStyles::FFontFamily,1> @ 14305eb40

void __thiscall
TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>
          (TSharedPtr<FTextStyles::FFontFamily,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<FSlateDynamicImageBrush,1> @ 14305eb70

void __thiscall
TSharedPtr<FSlateDynamicImageBrush,1>::~TSharedPtr<FSlateDynamicImageBrush,1>
          (TSharedPtr<FSlateDynamicImageBrush,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> @ 14305eb80

void __thiscall
TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
          (TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> @ 14305ebb0

void __thiscall
TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
~TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
          (TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SNumericEntryBox<unsigned_short>,1> @ 14305ebe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TSharedPtr<SNumericEntryBox<unsigned_short>,1>::~TSharedPtr<SNumericEntryBox<unsigned_short>,1>
          (TSharedPtr<SNumericEntryBox<unsigned_short>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSpinBox<int>,1> @ 14305ec10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SSpinBox<int>,1>::~TSharedPtr<SSpinBox<int>,1>(TSharedPtr<SSpinBox<int>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> @ 14305ec40

void __thiscall
TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
~TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
          (TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<FRichTextLayoutMarshaller,1> @ 14305ec70

void __thiscall
TSharedPtr<FRichTextLayoutMarshaller,1>::~TSharedPtr<FRichTextLayoutMarshaller,1>
          (TSharedPtr<FRichTextLayoutMarshaller,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> @ 14305ec80

void __thiscall
TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::
~TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>
          (TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<FTabManager,1> @ 14305ecb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<FTabManager,1>::~TSharedPtr<FTabManager,1>(TSharedPtr<FTabManager,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FUICommandInfo,1> @ 14305ecc0

void __thiscall
TSharedPtr<FUICommandInfo,1>::~TSharedPtr<FUICommandInfo,1>(TSharedPtr<FUICommandInfo,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<INotificationWidget,1> @ 14305ecd0

void __thiscall
TSharedPtr<INotificationWidget,1>::~TSharedPtr<INotificationWidget,1>
          (TSharedPtr<INotificationWidget,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<IRichTextMarkupParser,1> @ 14305ece0

void __thiscall
TSharedPtr<IRichTextMarkupParser,1>::~TSharedPtr<IRichTextMarkupParser,1>
          (TSharedPtr<IRichTextMarkupParser,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SAnimTest,1> @ 14305ecf0

void __thiscall TSharedPtr<SAnimTest,1>::~TSharedPtr<SAnimTest,1>(TSharedPtr<SAnimTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SButton,1> @ 14305ed20

void __thiscall TSharedPtr<SButton,1>::~TSharedPtr<SButton,1>(TSharedPtr<SButton,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SColorPicker,1> @ 14305ed50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TSharedPtr<SColorPicker,1>::~TSharedPtr<SColorPicker,1>(TSharedPtr<SColorPicker,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SColorPickerTest,1> @ 14305ed80

void __thiscall
TSharedPtr<SColorPickerTest,1>::~TSharedPtr<SColorPickerTest,1>
          (TSharedPtr<SColorPickerTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SCustomPaintWidget,1> @ 14305edb0

void __thiscall
TSharedPtr<SCustomPaintWidget,1>::~TSharedPtr<SCustomPaintWidget,1>
          (TSharedPtr<SCustomPaintWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SDPIScaler,1> @ 14305ede0

void __thiscall TSharedPtr<SDPIScaler,1>::~TSharedPtr<SDPIScaler,1>(TSharedPtr<SDPIScaler,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SDPIScalingTest,1> @ 14305ee10

void __thiscall
TSharedPtr<SDPIScalingTest,1>::~TSharedPtr<SDPIScalingTest,1>(TSharedPtr<SDPIScalingTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SDocumentsTest,1> @ 14305ee40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SDocumentsTest,1>::~TSharedPtr<SDocumentsTest,1>(TSharedPtr<SDocumentsTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SDynamicBrushTest,1> @ 14305ee70

void __thiscall
TSharedPtr<SDynamicBrushTest,1>::~TSharedPtr<SDynamicBrushTest,1>
          (TSharedPtr<SDynamicBrushTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SElementTesting,1> @ 14305eea0

void __thiscall
TSharedPtr<SElementTesting,1>::~TSharedPtr<SElementTesting,1>(TSharedPtr<SElementTesting,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SErrorText,1> @ 14305eed0

void __thiscall TSharedPtr<SErrorText,1>::~TSharedPtr<SErrorText,1>(TSharedPtr<SErrorText,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SFxTest,1> @ 14305ef00

void __thiscall TSharedPtr<SFxTest,1>::~TSharedPtr<SFxTest,1>(TSharedPtr<SFxTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SGammaTest,1> @ 14305ef30

void __thiscall TSharedPtr<SGammaTest,1>::~TSharedPtr<SGammaTest,1>(TSharedPtr<SGammaTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SGlobalInvalidationTest,1> @ 14305ef60

void __thiscall
TSharedPtr<SGlobalInvalidationTest,1>::~TSharedPtr<SGlobalInvalidationTest,1>
          (TSharedPtr<SGlobalInvalidationTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SGridPanelTest,1> @ 14305ef90

void __thiscall
TSharedPtr<SGridPanelTest,1>::~TSharedPtr<SGridPanelTest,1>(TSharedPtr<SGridPanelTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SImage,1> @ 14305efc0

void __thiscall TSharedPtr<SImage,1>::~TSharedPtr<SImage,1>(TSharedPtr<SImage,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SInvalidationPanel,1> @ 14305efd0

void __thiscall
TSharedPtr<SInvalidationPanel,1>::~TSharedPtr<SInvalidationPanel,1>
          (TSharedPtr<SInvalidationPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SInvalidationTest,1> @ 14305f000

void __thiscall
TSharedPtr<SInvalidationTest,1>::~TSharedPtr<SInvalidationTest,1>
          (TSharedPtr<SInvalidationTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SLayoutRoundingTest,1> @ 14305f030

void __thiscall
TSharedPtr<SLayoutRoundingTest,1>::~TSharedPtr<SLayoutRoundingTest,1>
          (TSharedPtr<SLayoutRoundingTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SMultiBoxTest,1> @ 14305f060

void __thiscall
TSharedPtr<SMultiBoxTest,1>::~TSharedPtr<SMultiBoxTest,1>(TSharedPtr<SMultiBoxTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SMultiLineEditingTest,1> @ 14305f090

void __thiscall
TSharedPtr<SMultiLineEditingTest,1>::~TSharedPtr<SMultiLineEditingTest,1>
          (TSharedPtr<SMultiLineEditingTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SNotificationItem,1> @ 14305f0c0

void __thiscall
TSharedPtr<SNotificationItem,1>::~TSharedPtr<SNotificationItem,1>
          (TSharedPtr<SNotificationItem,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SNotificationList,1> @ 14305f0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SNotificationList,1>::~TSharedPtr<SNotificationList,1>
          (TSharedPtr<SNotificationList,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SNotificationListTest,1> @ 14305f120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SNotificationListTest,1>::~TSharedPtr<SNotificationListTest,1>
          (TSharedPtr<SNotificationListTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SRenderTransformManipulatorWidget,1> @ 14305f150

void __thiscall
TSharedPtr<SRenderTransformManipulatorWidget,1>::~TSharedPtr<SRenderTransformManipulatorWidget,1>
          (TSharedPtr<SRenderTransformManipulatorWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SResponsiveGridPanel,1> @ 14305f180

void __thiscall
TSharedPtr<SResponsiveGridPanel,1>::~TSharedPtr<SResponsiveGridPanel,1>
          (TSharedPtr<SResponsiveGridPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SResponsiveGridPanelTestWidget,1> @ 14305f1b0

void __thiscall
TSharedPtr<SResponsiveGridPanelTestWidget,1>::~TSharedPtr<SResponsiveGridPanelTestWidget,1>
          (TSharedPtr<SResponsiveGridPanelTestWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SRichTextBlock,1> @ 14305f1e0

void __thiscall
TSharedPtr<SRichTextBlock,1>::~TSharedPtr<SRichTextBlock,1>(TSharedPtr<SRichTextBlock,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SRichTextEditTest,1> @ 14305f210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>
          (TSharedPtr<SRichTextEditTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SRichTextTest,1> @ 14305f240

void __thiscall
TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>(TSharedPtr<SRichTextTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SScrollBox,1> @ 14305f270

void __thiscall TSharedPtr<SScrollBox,1>::~TSharedPtr<SScrollBox,1>(TSharedPtr<SScrollBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSpacer,1> @ 14305f2a0

void __thiscall TSharedPtr<SSpacer,1>::~TSharedPtr<SSpacer,1>(TSharedPtr<SSpacer,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSplineTest,1> @ 14305f2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SSplineTest,1>::~TSharedPtr<SSplineTest,1>(TSharedPtr<SSplineTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSplineWithHandles,1> @ 14305f300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<SSplineWithHandles,1>::~TSharedPtr<SSplineWithHandles,1>
          (TSharedPtr<SSplineWithHandles,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SSplitterTest,1> @ 14305f330

void __thiscall
TSharedPtr<SSplitterTest,1>::~TSharedPtr<SSplitterTest,1>(TSharedPtr<SSplitterTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STestNotificationWidget,1> @ 14305f360

void __thiscall
TSharedPtr<STestNotificationWidget,1>::~TSharedPtr<STestNotificationWidget,1>
          (TSharedPtr<STestNotificationWidget,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STextEditTest,1> @ 14305f390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPtr<STextEditTest,1>::~TSharedPtr<STextEditTest,1>(TSharedPtr<STextEditTest,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<STextEntryPopup,1> @ 14305f3c0

void __thiscall
TSharedPtr<STextEntryPopup,1>::~TSharedPtr<STextEntryPopup,1>(TSharedPtr<STextEntryPopup,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SToolTip,1> @ 14305f3f0

void __thiscall TSharedPtr<SToolTip,1>::~TSharedPtr<SToolTip,1>(TSharedPtr<SToolTip,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SUniformGridPanel,1> @ 14305f420

void __thiscall
TSharedPtr<SUniformGridPanel,1>::~TSharedPtr<SUniformGridPanel,1>
          (TSharedPtr<SUniformGridPanel,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SVerticalBox,1> @ 14305f450

void __thiscall
TSharedPtr<SVerticalBox,1>::~TSharedPtr<SVerticalBox,1>(TSharedPtr<SVerticalBox,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 1430630f0

TSharedPtr<FCompositeFont_const_,1> * __thiscall
TSharedPtr<FCompositeFont_const_,1>::operator=
          (TSharedPtr<FCompositeFont_const_,1> *this,TSharedPtr<FCompositeFont_const_,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FCompositeFont *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 143063130

TSharedPtr<SDocumentsTest::FDocumentInfo,1> * __thiscall
TSharedPtr<SDocumentsTest::FDocumentInfo,1>::operator=
          (TSharedPtr<SDocumentsTest::FDocumentInfo,1> *this,
          TSharedPtr<SDocumentsTest::FDocumentInfo,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDocumentInfo *pFVar2;
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

// operator= @ 143063180

TSharedPtr<FTextStyles::FFontFamily,1> * __thiscall
TSharedPtr<FTextStyles::FFontFamily,1>::operator=
          (TSharedPtr<FTextStyles::FFontFamily,1> *this,
          TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FFontFamily *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 1430631c0

TSharedPtr<FTextStyles::FFontFamily,1> * __thiscall
TSharedPtr<FTextStyles::FFontFamily,1>::operator=
          (TSharedPtr<FTextStyles::FFontFamily,1> *this,
          TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  FFontFamily *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FTextStyles::FFontFamily,1> local_18;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = this->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar1;
  (this->SharedReferenceCount).ReferenceController = pTVar2;
  ~TSharedPtr<FTextStyles::FFontFamily,1>(&local_18);
  return this;
}

// operator= @ 143063210

TSharedPtr<FSlateDynamicImageBrush,1> * __thiscall
TSharedPtr<FSlateDynamicImageBrush,1>::operator=
          (TSharedPtr<FSlateDynamicImageBrush,1> *this,
          TSharedPtr<FSlateDynamicImageBrush,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FSlateDynamicImageBrush *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 143063250

TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> * __thiscall
TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::operator=
          (TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> *this,
          TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FSyntaxHighlighterTextLayoutMarshaller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 143063290

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager,1> * __thiscall
TSharedPtr<FTabManager,1>::operator=
          (TSharedPtr<FTabManager,1> *this,TSharedPtr<FTabManager,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FTabManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 143063770

IRun * __thiscall TSharedPtr<IRun_const_,1>::operator->(TSharedPtr<IRun_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IRun *pIVar3;
  
  if (this->Object != (IRun *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IRun *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1430637c0

INumericTypeInterface<unsigned_short> * __thiscall
TSharedPtr<INumericTypeInterface<unsigned_short>,1>::operator->
          (TSharedPtr<INumericTypeInterface<unsigned_short>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  INumericTypeInterface<unsigned_short> *pIVar3;
  
  if (this->Object != (INumericTypeInterface<unsigned_short> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (INumericTypeInterface<unsigned_short> *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 143063810

FFontFamily * __thiscall
TSharedPtr<FTextStyles::FFontFamily,1>::operator->(TSharedPtr<FTextStyles::FFontFamily,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FFontFamily *pFVar3;
  
  if (this->Object != (FFontFamily *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFontFamily *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 143063860

SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1430638b0

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<unsigned_short> * __thiscall
TSharedPtr<SSpinBox<unsigned_short>,1>::operator->(TSharedPtr<SSpinBox<unsigned_short>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSpinBox<unsigned_short> *pSVar3;
  
  if (this->Object != (SSpinBox<unsigned_short> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSpinBox<unsigned_short> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 143063900

FSyntaxHighlighterTextLayoutMarshaller * __thiscall
TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1>::operator->
          (TSharedPtr<FSyntaxHighlighterTextLayoutMarshaller,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSyntaxHighlighterTextLayoutMarshaller *pFVar3;
  
  if (this->Object != (FSyntaxHighlighterTextLayoutMarshaller *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSyntaxHighlighterTextLayoutMarshaller *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 143063950

SErrorText * __thiscall TSharedPtr<SErrorText,1>::operator->(TSharedPtr<SErrorText,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SErrorText *pSVar3;
  
  if (this->Object != (SErrorText *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SErrorText *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1430639a0

/* WARNING: Enum "Type": Some values do not have unique names */

SInlineEditableTextBlock * __thiscall
TSharedPtr<SInlineEditableTextBlock,1>::operator->(TSharedPtr<SInlineEditableTextBlock,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SInlineEditableTextBlock *pSVar3;
  
  if (this->Object != (SInlineEditableTextBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SInlineEditableTextBlock *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 1430639f0

SInvalidationPanel * __thiscall
TSharedPtr<SInvalidationPanel,1>::operator->(TSharedPtr<SInvalidationPanel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SInvalidationPanel *pSVar3;
  
  if (this->Object != (SInvalidationPanel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SInvalidationPanel *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 143063a40

SNotificationItem * __thiscall
TSharedPtr<SNotificationItem,1>::operator->(TSharedPtr<SNotificationItem,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SNotificationItem *pSVar3;
  
  if (this->Object != (SNotificationItem *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SNotificationItem *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 143063a90

/* WARNING: Enum "Type": Some values do not have unique names */

SNotificationList * __thiscall
TSharedPtr<SNotificationList,1>::operator->(TSharedPtr<SNotificationList,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SNotificationList *pSVar3;
  
  if (this->Object != (SNotificationList *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SNotificationList *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 143063ae0

SResponsiveGridPanel * __thiscall
TSharedPtr<SResponsiveGridPanel,1>::operator->(TSharedPtr<SResponsiveGridPanel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SResponsiveGridPanel *pSVar3;
  
  if (this->Object != (SResponsiveGridPanel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SResponsiveGridPanel *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 143063b30

SRichTextBlock * __thiscall
TSharedPtr<SRichTextBlock,1>::operator->(TSharedPtr<SRichTextBlock,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SRichTextBlock *pSVar3;
  
  if (this->Object != (SRichTextBlock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SRichTextBlock *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 143063b80

/* WARNING: Enum "Type": Some values do not have unique names */

SSplineWithHandles * __thiscall
TSharedPtr<SSplineWithHandles,1>::operator->(TSharedPtr<SSplineWithHandles,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSplineWithHandles *pSVar3;
  
  if (this->Object != (SSplineWithHandles *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSplineWithHandles *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 143063bd0

STextEntryPopup * __thiscall
TSharedPtr<STextEntryPopup,1>::operator->(TSharedPtr<STextEntryPopup,1> *this)

{
  code *pcVar1;
  bool bVar2;
  STextEntryPopup *pSVar3;
  
  if (this->Object != (STextEntryPopup *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (STextEntryPopup *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 143105610

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SSpinBox<unsigned_short>,1> * __thiscall
TSharedPtr<SSpinBox<unsigned_short>,1>::ToSharedRef
          (TSharedPtr<SSpinBox<unsigned_short>,1> *this,
          TSharedRef<SSpinBox<unsigned_short>,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SSpinBox<unsigned_short>,1> *pTVar4;
  
  if (this->Object == (SSpinBox<unsigned_short> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSpinBox<unsigned_short>,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SSpinBox<unsigned_short> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSpinBox<unsigned_short>,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1431056b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager,1> * __thiscall
TSharedPtr<FTabManager,1>::ToSharedRef
          (TSharedPtr<FTabManager,1> *this,TSharedRef<FTabManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FTabManager,1> *pTVar4;
  
  if (this->Object == (FTabManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTabManager,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FTabManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTabManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 143105750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SColorPicker,1> * __thiscall
TSharedPtr<SColorPicker,1>::ToSharedRef
          (TSharedPtr<SColorPicker,1> *this,TSharedRef<SColorPicker,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SColorPicker,1> *pTVar4;
  
  if (this->Object == (SColorPicker *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SColorPicker,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SColorPicker *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SColorPicker,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

