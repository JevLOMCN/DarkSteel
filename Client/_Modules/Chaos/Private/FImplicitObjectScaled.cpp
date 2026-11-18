// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FImplicitObjectScaled @ 14388b940

FImplicitObjectScaled * __thiscall
Chaos::FImplicitObjectScaled::FImplicitObjectScaled
          (FImplicitObjectScaled *this,int param_1,uchar param_2)

{
  FImplicitObject::FImplicitObject((FImplicitObject *)this,param_1,param_2 | 0x80);
  this->_padding_ = (longlong)&___7FImplicitObjectScaled_Chaos__6B_;
  *(undefined4 *)&this->MScale = 0x3f800000;
  *(undefined4 *)&(this->MScale).field_0x4 = 0x3f800000;
  *(undefined4 *)&(this->MScale).field_0x8 = 0x3f800000;
  *(undefined4 *)&this->MInvScale = 0x3f800000;
  *(undefined4 *)&(this->MInvScale).field_0x4 = 0x3f800000;
  *(undefined8 *)&(this->MInvScale).field_0x8 = 0x3f800000;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  return this;
}

// BoundingBox @ 14389e940

TAABB<double,3> * __thiscall
Chaos::FImplicitObjectScaled::BoundingBox
          (FImplicitObjectScaled *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// GetInnerObject @ 1438ba780

TSerializablePtr<Chaos::FImplicitObject> __thiscall
Chaos::FImplicitObjectScaled::GetInnerObject(FImplicitObjectScaled *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TSerializablePtr<Chaos::FImplicitObject>)in_RDX;
}

