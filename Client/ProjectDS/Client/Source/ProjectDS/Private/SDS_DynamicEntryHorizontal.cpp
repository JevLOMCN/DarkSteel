// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// Construct @ 14bc8ce80

void __thiscall
SDS_DynamicEntryHorizontal::Construct(SDS_DynamicEntryHorizontal *this,FArguments *param_1)

{
  FArguments *pFVar1;
  FArguments local_218;
  
  (this->WidgetObject).WeakPtr = (param_1->_WidgetObject).WeakPtr;
  pFVar1 = SHorizontalBox::FArguments::FArguments(&local_218);
  SHorizontalBox::Construct((SHorizontalBox *)this,pFVar1);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_218._Slots.AllocatorInstance.Data,local_218._Slots.ArrayNum);
  if ((FSlotArguments *)local_218._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_218._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_218);
  return;
}

// OnFocusLost @ 14bcb53b0

void __thiscall
SDS_DynamicEntryHorizontal::OnFocusLost(SDS_DynamicEntryHorizontal *this,FFocusEvent *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WidgetObject).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WidgetObject).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x328))(pUVar2,param_1);
  }
  return;
}

// OnFocusReceived @ 14bcb59c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_DynamicEntryHorizontal::OnFocusReceived
          (SDS_DynamicEntryHorizontal *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FReply *pFVar3;
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  bVar1 = FWeakObjectPtr::IsValid(&(this->WidgetObject).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WidgetObject).WeakPtr);
    pFVar3 = (FReply *)(**(code **)(*(longlong *)pUVar2 + 800))(pUVar2,&local_c8,param_1,param_2);
    FReply::operator=(__return_storage_ptr__,pFVar3);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// OnNavigation @ 14bcb74a0

FNavigationReply * __thiscall
SDS_DynamicEntryHorizontal::OnNavigation
          (SDS_DynamicEntryHorizontal *this,FNavigationReply *__return_storage_ptr__,
          FGeometry *param_1,FNavigationEvent *param_2)

{
  SWidget **ppSVar1;
  bool bVar2;
  UObject *pUVar3;
  SWidget **ppSVar4;
  SWidget *local_b8;
  FSharedReferencer<1> FStack_b0;
  SWidget *local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined1 local_98 [8];
  ForAnyElementType FStack_90;
  ulonglong local_88;
  EUINavigationRule local_80;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  undefined1 local_40 [40];
  
  local_80 = Escape;
  local_88 = 0;
  local_b8 = (SWidget *)0x0;
  FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a8 = (SWidget *)0x0;
  FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_98 = (undefined1  [8])0x0;
  FStack_90.Data = (FScriptContainerElement *)0x0;
  bVar2 = FWeakObjectPtr::IsValid(&(this->WidgetObject).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->WidgetObject).WeakPtr);
    ppSVar4 = (SWidget **)
              (**(code **)(*(longlong *)pUVar3 + 0x318))(pUVar3,local_60,param_1,param_2);
    if (&local_b8 != ppSVar4) {
      local_b8 = *ppSVar4;
      *ppSVar4 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_b0,(FSharedReferencer<1> *)(ppSVar4 + 1));
    }
    ppSVar1 = ppSVar4 + 2;
    if (&local_a8 != ppSVar1) {
      local_a8 = *ppSVar1;
      *ppSVar1 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_a0,(FSharedReferencer<1> *)(ppSVar4 + 3));
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)(ppSVar4 + 4));
    local_80 = *(EUINavigationRule *)(ppSVar4 + 7);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    if ((void *)local_40._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_40._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    if (local_80 == Explicit) {
      (__return_storage_ptr__->EventHandler).Object = local_b8;
      (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
           FStack_b0.ReferenceController;
      (__return_storage_ptr__->FocusRecipient).Object = local_a8;
      (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
           FStack_a0.ReferenceController;
      FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_b8 = (SWidget *)0x0;
      FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_a8 = (SWidget *)0x0;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->FocusDelegate
                 ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      __return_storage_ptr__->BoundaryRule = local_80;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                 (FWriteAccessScope *)&local_78);
      goto joined_r0x00014bcb7641;
    }
  }
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_78);
joined_r0x00014bcb7641:
  if (((int)local_88 != 0) && (FStack_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_90,0,0,0x10);
    local_88 = local_88 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b0.ReferenceController);
  return __return_storage_ptr__;
}

// SupportsKeyboardFocus @ 14bcca280

bool __thiscall SDS_DynamicEntryHorizontal::SupportsKeyboardFocus(SDS_DynamicEntryHorizontal *this)

{
  return true;
}

