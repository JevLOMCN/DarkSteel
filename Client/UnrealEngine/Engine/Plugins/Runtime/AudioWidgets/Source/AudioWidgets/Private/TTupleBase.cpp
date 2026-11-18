// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// ApplyAfter<TSharedRef<SWidget,1>_(__cdecl*const_&)(TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>)> @ 14d898370

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
::
ApplyAfter<TSharedRef<SWidget,1>_(__cdecl*const_&)(TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>)>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
           *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          _func___cdecl_TSharedRef<SWidget,1>_TSharedRef<FUICommandList,1>_TWeakPtr<FWorkspaceItem,1>_TWeakPtr<FTabManager,1>
          **param_1)

{
  _func___cdecl_TSharedRef<SWidget,1>_TSharedRef<FUICommandList,1>_TWeakPtr<FWorkspaceItem,1>_TWeakPtr<FTabManager,1>
  *p_Var1;
  TWeakPtr<FTabManager,1> local_38;
  TWeakPtr<FWorkspaceItem,1> local_28;
  TSharedRef<FUICommandList,1> local_18;
  
  local_38.Object = *(FTabManager **)&this->field_0x20;
  p_Var1 = *param_1;
  local_38.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x28;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = *(FWorkspaceItem **)&this->field_0x10;
  local_28.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x18;
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = *(FUICommandList **)this;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,&local_18,&local_28,&local_38);
  return __return_storage_ptr__;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_> @ 14d8bbfc0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x28;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)&this->field_0x18;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x8);
  return;
}

