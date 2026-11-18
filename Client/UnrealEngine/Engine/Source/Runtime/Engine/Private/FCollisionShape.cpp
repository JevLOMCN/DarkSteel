// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Inflate @ 14783fde0

FCollisionShape * __thiscall
FCollisionShape::Inflate
          (FCollisionShape *this,FCollisionShape *__return_storage_ptr__,float param_1)

{
  Type TVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  if ((param_1 != 0.0) && (TVar1 = this->ShapeType, TVar1 != Line)) {
    if (TVar1 == Box) {
      __return_storage_ptr__->ShapeType = Box;
      uVar4 = param_1 + (this->field1_0x4).Box.HalfExtentX;
      uVar5 = param_1 + (this->field1_0x4).Box.HalfExtentY;
      uVar7 = param_1 + (this->field1_0x4).Box.HalfExtentZ;
      if ((float)uVar4 <= UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X) {
        uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      }
      if ((float)uVar5 <= UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y) {
        uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      }
      if ((float)uVar7 <= UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z) {
        uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = (float)uVar4;
      (__return_storage_ptr__->field1_0x4).Box.HalfExtentY = (float)uVar5;
      (__return_storage_ptr__->field1_0x4).Box.HalfExtentZ = (float)uVar7;
      return __return_storage_ptr__;
    }
    if (TVar1 == Sphere) {
      fVar3 = param_1 + (this->field1_0x4).Box.HalfExtentX;
      __return_storage_ptr__->ShapeType = Sphere;
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = fVar3;
      return __return_storage_ptr__;
    }
    if (TVar1 == Capsule) {
      __return_storage_ptr__->ShapeType = Capsule;
      fVar3 = param_1 + (this->field1_0x4).Box.HalfExtentX;
      fVar6 = param_1 + (this->field1_0x4).Box.HalfExtentY;
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = fVar3;
      (__return_storage_ptr__->field1_0x4).Box.HalfExtentY = fVar6;
      return __return_storage_ptr__;
    }
  }
  uVar2 = *(undefined8 *)((longlong)&this->field1_0x4 + 4);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)this;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field1_0x4 + 4) = uVar2;
  return __return_storage_ptr__;
}

