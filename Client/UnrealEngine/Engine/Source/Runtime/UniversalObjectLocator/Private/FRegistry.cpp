// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 4

// AddReferencedObjects @ 144346c20

void __thiscall
UE::UniversalObjectLocator::FRegistry::AddReferencedObjects
          (FRegistry *this,FReferenceCollector *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ParameterTypes).AllocatorInstance.Data,(this->ParameterTypes).ArrayNum,0
             ,0);
  iVar1 = (this->FragmentTypes).ArrayNum;
  pFVar2 = (this->FragmentTypes).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->FragmentTypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::UniversalObjectLocator::FFragmentType,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2 + 0x30,0,0);
    pFVar2 = pFVar2 + 0x60;
  }
  return;
}

// FindFragmentType @ 144347ab0

FFragmentType * __thiscall
UE::UniversalObjectLocator::FRegistry::FindFragmentType(FRegistry *this,FName param_1)

{
  int iVar1;
  FFragmentType *pFVar2;
  FFragmentType *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FragmentTypes).ArrayNum;
  pFVar3 = (FFragmentType *)(this->FragmentTypes).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->FragmentTypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::UniversalObjectLocator::FFragmentType_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->FragmentTypeID == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FFragmentType *)0x0;
}

// Get @ 144347ce0

FRegistry * __cdecl UE::UniversalObjectLocator::FRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Registry._padding_._0_2_ = 0;
      ::Registry._padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::RegisterGCObject((FGCObject *)&::Registry);
      ::Registry._padding_ = (longlong)&___7FRegistry_UniversalObjectLocator_UE__6B_;
      ::Registry.ParameterTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Registry.ParameterTypes.ArrayNum = 0;
      ::Registry.ParameterTypes.ArrayMax = 0;
      ::Registry.FragmentTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Registry.FragmentTypes.ArrayNum = 0;
      ::Registry.FragmentTypes.ArrayMax = 0;
      atexit(`UE::UniversalObjectLocator::FRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
      return &::Registry;
    }
  }
  return &::Registry;
}

// GetReferencerName @ 1443482a0

FString * __thiscall
UE::UniversalObjectLocator::FRegistry::GetReferencerName
          (FRegistry *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UE::UniversalObjectLocator::FRegistry");
  return __return_storage_ptr__;
}

