// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FAbstractNavigationPath @ 146d72680

FAbstractNavigationPath * __thiscall
FAbstractNavigationPath::FAbstractNavigationPath(FAbstractNavigationPath *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FNavPathType *pFVar3;
  FNavPathType FVar4;
  FNavPathType FVar5;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FNavigationPath__6B_;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  FVar4 = FNavigationPath::Type;
  *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 & 0xfffff34f | 0x340;
  FVar5 = FNavigationPath::Type;
  FNavigationPath::Type.Id = FVar4.Id;
  FNavigationPath::Type._4_4_ = FVar4._4_4_;
  uVar2 = FNavigationPath::Type._4_4_;
  FNavigationPath::Type.ParentType = FVar4.ParentType;
  pFVar3 = FNavigationPath::Type.ParentType;
  *(uint *)&this->field_0x70 = FNavigationPath::Type.Id;
  FNavigationPath::Type = FVar5;
  *(undefined4 *)&this->field_0x74 = uVar2;
  *(FNavPathType **)&this->field_0x78 = pFVar3;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0xa4 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0x98 = 2;
  uVar1 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)&this->field_0xb8 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xc0 = uVar1;
  *(double *)&this->field_0xc8 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar1 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)&this->field_0xd0 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xd8 = uVar1;
  uVar1 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  *(uint *)&this->field_0x104 = *(uint *)&this->field_0x104 | 3;
  *(undefined8 *)&this->field_0xe0 = uVar1;
  *(undefined8 *)&this->field_0xf8 = 0x7fefffffffffffff;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined4 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0xbff0000000000000;
  *(undefined4 *)&this->field_0x110 = 0xbf800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x120 = uVar1;
  *(double *)&this->field_0x128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FNavigationPath::InternalResetNavigationPath((FNavigationPath *)this);
  *(undefined ***)this = &___7FAbstractNavigationPath__6B_;
  uVar2 = Type._4_4_;
  pFVar3 = Type.ParentType;
  *(uint *)&this->field_0x70 = Type.Id;
  *(undefined4 *)&this->field_0x74 = uVar2;
  *(FNavPathType **)&this->field_0x78 = pFVar3;
  return this;
}

