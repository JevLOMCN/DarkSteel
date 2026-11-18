// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Serialize @ 143ecc050

void __thiscall Chaos::FTrimeshBVH::FChildData::Serialize(FChildData *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  __m128 _Var4;
  __m128 _Var5;
  __m128 _Var6;
  __m128 _Var7;
  TAABB<float,3> local_38 [2];
  
  local_38[0].MMin._0_4_ = this->Bounds[0].Min.m128_i32[0];
  local_38[0].MMin._4_4_ = this->Bounds[0].Min.m128_i32[1];
  local_38[0].MMin._8_4_ = this->Bounds[0].Min.m128_i32[2];
  local_38[0].MMax._0_4_ = this->Bounds[0].Max.m128_i32[0];
  local_38[0].MMax._4_4_ = this->Bounds[0].Max.m128_i32[1];
  local_38[0].MMax._8_4_ = this->Bounds[0].Max.m128_i32[2];
  TBox<float,3>::SerializeAsAABB(param_1,local_38);
  piVar1 = this->ChildOrFaceIndex;
  _Var6.m128_f32[1] = (float)local_38[0].MMax._4_4_;
  _Var6.m128_f32[0] = (float)local_38[0].MMax._0_4_;
  _Var6.m128_f32[2] = (float)local_38[0].MMax._8_4_;
  _Var4.m128_f32[1] = (float)local_38[0].MMin._4_4_;
  _Var4.m128_f32[0] = (float)local_38[0].MMin._0_4_;
  _Var4.m128_f32[2] = (float)local_38[0].MMin._8_4_;
  _Var4.m128_f32[3] = 0.0;
  this->Bounds[0].Min = _Var4;
  _Var6.m128_f32[3] = 0.0;
  this->Bounds[0].Max = _Var6;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = this->FaceCount;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_38[0].MMin._0_4_ = this->Bounds[1].Min.m128_i32[0];
  local_38[0].MMin._4_4_ = this->Bounds[1].Min.m128_i32[1];
  local_38[0].MMin._8_4_ = this->Bounds[1].Min.m128_i32[2];
  local_38[0].MMax._0_4_ = this->Bounds[1].Max.m128_i32[0];
  local_38[0].MMax._4_4_ = this->Bounds[1].Max.m128_i32[1];
  local_38[0].MMax._8_4_ = this->Bounds[1].Max.m128_i32[2];
  TBox<float,3>::SerializeAsAABB(param_1,local_38);
  piVar1 = this->ChildOrFaceIndex + 1;
  _Var7.m128_f32[1] = (float)local_38[0].MMax._4_4_;
  _Var7.m128_f32[0] = (float)local_38[0].MMax._0_4_;
  _Var7.m128_f32[2] = (float)local_38[0].MMax._8_4_;
  _Var5.m128_f32[1] = (float)local_38[0].MMin._4_4_;
  _Var5.m128_f32[0] = (float)local_38[0].MMin._0_4_;
  _Var5.m128_f32[2] = (float)local_38[0].MMin._8_4_;
  _Var5.m128_f32[3] = 0.0;
  this->Bounds[1].Min = _Var5;
  _Var7.m128_f32[3] = 0.0;
  this->Bounds[1].Max = _Var7;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = this->FaceCount + 1;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return;
}

