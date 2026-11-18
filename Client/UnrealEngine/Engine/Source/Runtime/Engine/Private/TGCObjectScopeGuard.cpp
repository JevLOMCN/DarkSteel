// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~TGCObjectScopeGuard<UObject_const_> @ 14890c8f0

void __thiscall
TGCObjectScopeGuard<UObject_const_>::~TGCObjectScopeGuard<UObject_const_>
          (TGCObjectScopeGuard<UObject_const_> *this)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddReferencedObjects @ 148917940

void __thiscall
TGCObjectScopeGuard<UObject_const_>::AddReferencedObjects
          (TGCObjectScopeGuard<UObject_const_> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148917953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 14895c1e0

FString * __thiscall
TGCObjectScopeGuard<UObject_const_>::GetReferencerName
          (TGCObjectScopeGuard<UObject_const_> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TGCObjectScopeGuard");
  return __return_storage_ptr__;
}

