// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 3

// operator= @ 148d58be0

TAttribute<TSharedPtr<FVisualizerEvent,1>_> * __thiscall
TAttribute<TSharedPtr<FVisualizerEvent,1>_>::operator=
          (TAttribute<TSharedPtr<FVisualizerEvent,1>_> *this,
          TAttribute<TSharedPtr<FVisualizerEvent,1>_> *param_1)

{
  if (this != param_1) {
    (this->Value).Object = (param_1->Value).Object;
    (param_1->Value).Object = (FVisualizerEvent *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Value).SharedReferenceCount,&(param_1->Value).SharedReferenceCount);
  }
  this->bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// Create @ 148d6a870

TAttribute<EColumnSortMode::Type> * __cdecl
TAttribute<enum_EColumnSortMode::Type>::Create
          (TAttribute<EColumnSortMode::Type> *__return_storage_ptr__,
          TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  __return_storage_ptr__->Value = None;
  __return_storage_ptr__->bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// Get @ 148d7a530

TSharedPtr<FVisualizerEvent,1> * __thiscall
TAttribute<TSharedPtr<FVisualizerEvent,1>_>::Get(TAttribute<TSharedPtr<FVisualizerEvent,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<FVisualizerEvent,1>_> *)local_38) {
        (this->Value).Object = (FVisualizerEvent *)local_38._0_8_;
        local_38._0_8_ = (FVisualizerEvent *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

