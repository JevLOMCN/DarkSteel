// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// ~TTaskWithResult<UE::Mutable::Private::FExtendedImageDesc> @ 14ab5fe60

void __thiscall
UE::Tasks::Private::TTaskWithResult<UE::Mutable::Private::FExtendedImageDesc>::
~TTaskWithResult<UE::Mutable::Private::FExtendedImageDesc>
          (TTaskWithResult<UE::Mutable::Private::FExtendedImageDesc> *this)

{
  void *pvVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TTaskWithResult_UFExtendedImageDesc_Private_Mutable_UE___Private_Tasks_UE__6B_;
  pvVar1 = *(void **)((this->ResultStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// ~TTaskWithResult<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> @ 14ab5fea0

void __thiscall
UE::Tasks::Private::TTaskWithResult<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::
~TTaskWithResult<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>
          (TTaskWithResult<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ResultStorage).Pad + 8));
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// ~TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_> @ 14ab5fee0

void __thiscall
UE::Tasks::Private::TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>::
~TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>
          (TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ResultStorage).Pad + 8));
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// ~TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_> @ 14ab5ff20

void __thiscall
UE::Tasks::Private::TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>::
~TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>
          (TTaskWithResult<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TTaskWithResult_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ResultStorage).Pad + 8));
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

