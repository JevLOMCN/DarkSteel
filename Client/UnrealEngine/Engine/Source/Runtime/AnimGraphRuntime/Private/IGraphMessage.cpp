// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// ~IGraphMessage @ 146409610

void __thiscall UE::Anim::IGraphMessage::~IGraphMessage(IGraphMessage *this)

{
  return;
}

// MakeEventContextData @ 14645e200

TSharedPtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,1> * __thiscall
UE::Anim::IGraphMessage::MakeEventContextData
          (IGraphMessage *this,
          TSharedPtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,1>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IAnimNotifyEventContextDataInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MakeUniqueEventContextData @ 14645e220

TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
 __thiscall UE::Anim::IGraphMessage::MakeUniqueEventContextData(IGraphMessage *this)

{
  IAnimNotifyEventContextDataInterface *in_RDX;
  
  *in_RDX = (IAnimNotifyEventContextDataInterface)0x0;
  return (TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
          )in_RDX;
}

