// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 4

// ~TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0> @ 14daafea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
::
~TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
          (TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFContextCacheElementBase_Dataflow_UE__AEAVFArchive__PEAU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14dab18e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFContextCacheElementBase_Dataflow_UE__AEAVFArchive__PEAU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FContextCacheElementBase_ptr_FArchive_ptr_FContextCacheElementBase_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14dab3ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
::Destroy(TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dab3ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 14dab4190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
::GetAddress(TFunction_OwnedObject<UE::Dataflow::FContextCacheElementBase_*_(__cdecl*)(FArchive_&,UE::Dataflow::FContextCacheElementBase_*),0,0>
             *this)

{
  return &this->Obj;
}

