// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// FNetObjectAttachment @ 1442294a0

FNetObjectAttachment * __thiscall
UE::Net::FNetObjectAttachment::FNetObjectAttachment
          (FNetObjectAttachment *this,FNetBlobCreationInfo *param_1)

{
  this->_padding_ = (longlong)&___7FNetBlob_Net_UE__6B_;
  this->_padding_ = (longlong)*param_1;
  this->_padding_ = (longlong)&___7FNetObjectAttachment_Net_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->NetObjectReference).RefHandle.field0_0x0.Value = 0;
  (this->NetObjectReference).PathToken = (FNetToken_u_0)0x0;
  (this->NetObjectReference).Traits = None;
  (this->TargetObjectReference).RefHandle.field0_0x0.Value = 0;
  (this->TargetObjectReference).PathToken = (FNetToken_u_0)0x0;
  (this->TargetObjectReference).Traits = None;
  return this;
}

// ~FNetObjectAttachment @ 14422b210

void __thiscall UE::Net::FNetObjectAttachment::~FNetObjectAttachment(FNetObjectAttachment *this)

{
  this->_padding_ = (longlong)&___7FNetObjectAttachment_Net_UE__6B_;
  FNetBlob::~FNetBlob((FNetBlob *)this);
  return;
}

// DeserializeObjectReference @ 144236790

void __thiscall
UE::Net::FNetObjectAttachment::DeserializeObjectReference
          (FNetObjectAttachment *this,FNetSerializationContext *param_1)

{
  ReadFullNetObjectReference(param_1,&this->NetObjectReference);
  ReadFullNetObjectReference(param_1,&this->TargetObjectReference);
  return;
}

// DeserializeSubObjectReference @ 1442367d0

void __thiscall
UE::Net::FNetObjectAttachment::DeserializeSubObjectReference
          (FNetObjectAttachment *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  (this->NetObjectReference).RefHandle.field0_0x0._s_0 = (FNetRefHandle_u_0_s_0)param_2.field0_0x0;
  (this->NetObjectReference).PathToken = (FNetToken_u_0)0x0;
  (this->NetObjectReference).Traits = None;
  ReadFullNetObjectReference(param_1,&this->TargetObjectReference);
  return;
}

// SerializeObjectReference @ 1442511d0

void __thiscall
UE::Net::FNetObjectAttachment::SerializeObjectReference
          (FNetObjectAttachment *this,FNetSerializationContext *param_1)

{
  WriteFullNetObjectReference(param_1,&this->NetObjectReference);
  WriteFullNetObjectReference(param_1,&this->TargetObjectReference);
  return;
}

// SerializeSubObjectReference @ 144251210

void __thiscall
UE::Net::FNetObjectAttachment::SerializeSubObjectReference
          (FNetObjectAttachment *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  WriteFullNetObjectReference(param_1,&this->TargetObjectReference);
  return;
}

