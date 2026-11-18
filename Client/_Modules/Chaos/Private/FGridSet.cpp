// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FGridSet @ 14373d0b0

FGridSet * __thiscall
Chaos::TBoundingVolume<int,double,3>::FGridSet::FGridSet(FGridSet *this,TVector<int,3> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *_Dst;
  ulong64 _Size;
  
  iVar1 = (param_1->field0_0x0)._s_0.Z;
  iVar2 = (param_1->field0_0x0)._s_0.Y;
  iVar3 = (param_1->field0_0x0)._s_0.X;
  this->NumZ = iVar1;
  this->NumX = iVar3;
  this->NumY = iVar2;
  iVar3 = iVar1 * iVar2 * iVar3;
  _Size = (ulong64)(((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) + 1);
  _Dst = operator_new__(_Size);
  this->Data = _Dst;
  memset(_Dst,0,_Size);
  return this;
}

// FGridSet @ 14373d120

FGridSet * __thiscall
Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::FGridSet::FGridSet
          (FGridSet *this,TVector<int,3> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *_Dst;
  ulong64 _Size;
  
  iVar1 = (param_1->field0_0x0)._s_0.Z;
  iVar2 = (param_1->field0_0x0)._s_0.Y;
  iVar3 = (param_1->field0_0x0)._s_0.X;
  this->NumZ = iVar1;
  this->NumX = iVar3;
  this->NumY = iVar2;
  iVar3 = iVar1 * iVar2 * iVar3;
  _Size = (ulong64)(((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) + 1);
  _Dst = operator_new__(_Size);
  this->Data = _Dst;
  memset(_Dst,0,_Size);
  return this;
}

// ~FGridSet @ 14373f1f0

void __thiscall Chaos::TBoundingVolume<int,double,3>::FGridSet::~FGridSet(FGridSet *this)

{
  operator_delete__(this->Data);
  return;
}

// ~FGridSet @ 14373f200

void __thiscall
Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::FGridSet::~FGridSet
          (FGridSet *this)

{
  operator_delete__(this->Data);
  return;
}

// Add @ 143750340

void __thiscall
Chaos::TBoundingVolume<int,double,3>::FGridSet::Add(FGridSet *this,TVector<int,3> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (this->NumY * (param_1->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.Y) * this->NumZ +
          (param_1->field0_0x0)._s_0.Z;
  uVar3 = iVar1 >> 0x1f & 7;
  uVar2 = iVar1 + uVar3;
  iVar1 = (int)uVar2 >> 3;
  this->Data[iVar1] = this->Data[iVar1] | (byte)(1 << ((uVar2 & 7) - uVar3 & 0x1f));
  return;
}

// Add @ 143750380

void __thiscall
Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::FGridSet::Add
          (FGridSet *this,TVector<int,3> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (this->NumY * (param_1->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.Y) * this->NumZ +
          (param_1->field0_0x0)._s_0.Z;
  uVar3 = iVar1 >> 0x1f & 7;
  uVar2 = iVar1 + uVar3;
  iVar1 = (int)uVar2 >> 3;
  this->Data[iVar1] = this->Data[iVar1] | (byte)(1 << ((uVar2 & 7) - uVar3 & 0x1f));
  return;
}

// Contains @ 14375b4e0

bool __thiscall
Chaos::TBoundingVolume<int,double,3>::FGridSet::Contains(FGridSet *this,TVector<int,3> *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (this->NumY * (param_1->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.Y) * this->NumZ +
          (param_1->field0_0x0)._s_0.Z;
  uVar2 = iVar1 >> 0x1f & 7;
  iVar1 = iVar1 + uVar2;
  return (bool)(this->Data[iVar1 >> 3] >> (((byte)iVar1 & 7) - (char)uVar2 & 0x1f) & 1);
}

// Contains @ 14375b530

bool __thiscall
Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::FGridSet::Contains
          (FGridSet *this,TVector<int,3> *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (this->NumY * (param_1->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.Y) * this->NumZ +
          (param_1->field0_0x0)._s_0.Z;
  uVar2 = iVar1 >> 0x1f & 7;
  iVar1 = iVar1 + uVar2;
  return (bool)(this->Data[iVar1 >> 3] >> (((byte)iVar1 & 7) - (char)uVar2 & 0x1f) & 1);
}

