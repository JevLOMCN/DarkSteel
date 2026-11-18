// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// ~TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh,1>_> @ 14ac50ac0

void __thiscall
UE::Tasks::Private::TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh,1>_>::
~TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh,1>_>
          (TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh,1>_> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TTaskWithResult_V__TSharedPtr_VFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ResultStorage).Pad + 8));
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

