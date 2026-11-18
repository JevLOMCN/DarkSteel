// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// TVolumeLightingSample<2> @ 148348950

TVolumeLightingSample<2> * __thiscall
TVolumeLightingSample<2>::TVolumeLightingSample<2>
          (TVolumeLightingSample<2> *this,TVolumeLightingSample<2> *param_1)

{
  undefined8 uVar1;
  
  (this->Lighting).R.V[0] = 0.0;
  (this->Lighting).R.V[1] = 0.0;
  (this->Lighting).R.V[2] = 0.0;
  (this->Lighting).R.V[3] = 0.0;
  (this->Lighting).G.V[0] = 0.0;
  (this->Lighting).G.V[1] = 0.0;
  (this->Lighting).G.V[2] = 0.0;
  (this->Lighting).G.V[3] = 0.0;
  (this->Lighting).B.V[0] = 0.0;
  (this->Lighting).B.V[1] = 0.0;
  (this->Lighting).B.V[2] = 0.0;
  (this->Lighting).B.V[3] = 0.0;
  *(undefined8 *)&(this->Position).field0_0x0 = *(undefined8 *)&(param_1->Position).field0_0x0;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  this->Radius = param_1->Radius;
  uVar1 = *(undefined8 *)((param_1->Lighting).R.V + 2);
  *(undefined8 *)(this->Lighting).R.V = *(undefined8 *)(param_1->Lighting).R.V;
  *(undefined8 *)((this->Lighting).R.V + 2) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).G.V + 2);
  *(undefined8 *)(this->Lighting).G.V = *(undefined8 *)(param_1->Lighting).G.V;
  *(undefined8 *)((this->Lighting).G.V + 2) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).B.V + 2);
  *(undefined8 *)(this->Lighting).B.V = *(undefined8 *)(param_1->Lighting).B.V;
  *(undefined8 *)((this->Lighting).B.V + 2) = uVar1;
  (this->PackedSkyBentNormal).field0_0x0 = (param_1->PackedSkyBentNormal).field0_0x0;
  this->DirectionalLightShadowing = param_1->DirectionalLightShadowing;
  return this;
}

// TVolumeLightingSample<2> @ 1483489b0

TVolumeLightingSample<2> * __thiscall
TVolumeLightingSample<2>::TVolumeLightingSample<2>
          (TVolumeLightingSample<2> *this,TVolumeLightingSample<3> *param_1)

{
  (this->Lighting).R.V[0] = 0.0;
  (this->Lighting).R.V[1] = 0.0;
  (this->Lighting).R.V[2] = 0.0;
  (this->Lighting).R.V[3] = 0.0;
  (this->Lighting).G.V[0] = 0.0;
  (this->Lighting).G.V[1] = 0.0;
  (this->Lighting).G.V[2] = 0.0;
  (this->Lighting).G.V[3] = 0.0;
  (this->Lighting).B.V[0] = 0.0;
  (this->Lighting).B.V[1] = 0.0;
  (this->Lighting).B.V[2] = 0.0;
  (this->Lighting).B.V[3] = 0.0;
  *(undefined8 *)&(this->Position).field0_0x0 = *(undefined8 *)&(param_1->Position).field0_0x0;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  this->Radius = param_1->Radius;
  (this->PackedSkyBentNormal).field0_0x0 = (param_1->PackedSkyBentNormal).field0_0x0;
  this->DirectionalLightShadowing = param_1->DirectionalLightShadowing;
  (this->Lighting).R.V[0] = (param_1->Lighting).R.V[0];
  (this->Lighting).G.V[0] = (param_1->Lighting).G.V[0];
  (this->Lighting).B.V[0] = (param_1->Lighting).B.V[0];
  (this->Lighting).R.V[1] = (param_1->Lighting).R.V[1];
  (this->Lighting).G.V[1] = (param_1->Lighting).G.V[1];
  (this->Lighting).B.V[1] = (param_1->Lighting).B.V[1];
  (this->Lighting).R.V[2] = (param_1->Lighting).R.V[2];
  (this->Lighting).G.V[2] = (param_1->Lighting).G.V[2];
  (this->Lighting).B.V[2] = (param_1->Lighting).B.V[2];
  (this->Lighting).R.V[3] = (param_1->Lighting).R.V[3];
  (this->Lighting).G.V[3] = (param_1->Lighting).G.V[3];
  (this->Lighting).B.V[3] = (param_1->Lighting).B.V[3];
  return this;
}

// TVolumeLightingSample<3> @ 148348a40

TVolumeLightingSample<3> * __thiscall
TVolumeLightingSample<3>::TVolumeLightingSample<3>
          (TVolumeLightingSample<3> *this,TVolumeLightingSample<3> *param_1)

{
  undefined8 uVar1;
  
  (this->Lighting).R.V[0] = 0.0;
  (this->Lighting).R.V[1] = 0.0;
  (this->Lighting).R.V[2] = 0.0;
  (this->Lighting).R.V[3] = 0.0;
  (this->Lighting).R.V[4] = 0.0;
  (this->Lighting).R.V[5] = 0.0;
  (this->Lighting).R.V[6] = 0.0;
  (this->Lighting).R.V[7] = 0.0;
  (this->Lighting).R.V[8] = 0.0;
  (this->Lighting).R.V[9] = 0.0;
  (this->Lighting).R.V[10] = 0.0;
  (this->Lighting).R.V[0xb] = 0.0;
  (this->Lighting).G.V[0] = 0.0;
  (this->Lighting).G.V[1] = 0.0;
  (this->Lighting).G.V[2] = 0.0;
  (this->Lighting).G.V[3] = 0.0;
  (this->Lighting).G.V[4] = 0.0;
  (this->Lighting).G.V[5] = 0.0;
  (this->Lighting).G.V[6] = 0.0;
  (this->Lighting).G.V[7] = 0.0;
  (this->Lighting).G.V[8] = 0.0;
  (this->Lighting).G.V[9] = 0.0;
  (this->Lighting).G.V[10] = 0.0;
  (this->Lighting).G.V[0xb] = 0.0;
  (this->Lighting).B.V[0] = 0.0;
  (this->Lighting).B.V[1] = 0.0;
  (this->Lighting).B.V[2] = 0.0;
  (this->Lighting).B.V[3] = 0.0;
  (this->Lighting).B.V[4] = 0.0;
  (this->Lighting).B.V[5] = 0.0;
  (this->Lighting).B.V[6] = 0.0;
  (this->Lighting).B.V[7] = 0.0;
  (this->Lighting).B.V[8] = 0.0;
  (this->Lighting).B.V[9] = 0.0;
  (this->Lighting).B.V[10] = 0.0;
  (this->Lighting).B.V[0xb] = 0.0;
  *(undefined8 *)&(this->Position).field0_0x0 = *(undefined8 *)&(param_1->Position).field0_0x0;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  this->Radius = param_1->Radius;
  uVar1 = *(undefined8 *)((param_1->Lighting).R.V + 2);
  *(undefined8 *)(this->Lighting).R.V = *(undefined8 *)(param_1->Lighting).R.V;
  *(undefined8 *)((this->Lighting).R.V + 2) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).R.V + 6);
  *(undefined8 *)((this->Lighting).R.V + 4) = *(undefined8 *)((param_1->Lighting).R.V + 4);
  *(undefined8 *)((this->Lighting).R.V + 6) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).R.V + 10);
  *(undefined8 *)((this->Lighting).R.V + 8) = *(undefined8 *)((param_1->Lighting).R.V + 8);
  *(undefined8 *)((this->Lighting).R.V + 10) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).G.V + 2);
  *(undefined8 *)(this->Lighting).G.V = *(undefined8 *)(param_1->Lighting).G.V;
  *(undefined8 *)((this->Lighting).G.V + 2) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).G.V + 6);
  *(undefined8 *)((this->Lighting).G.V + 4) = *(undefined8 *)((param_1->Lighting).G.V + 4);
  *(undefined8 *)((this->Lighting).G.V + 6) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).G.V + 10);
  *(undefined8 *)((this->Lighting).G.V + 8) = *(undefined8 *)((param_1->Lighting).G.V + 8);
  *(undefined8 *)((this->Lighting).G.V + 10) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).B.V + 2);
  *(undefined8 *)(this->Lighting).B.V = *(undefined8 *)(param_1->Lighting).B.V;
  *(undefined8 *)((this->Lighting).B.V + 2) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).B.V + 6);
  *(undefined8 *)((this->Lighting).B.V + 4) = *(undefined8 *)((param_1->Lighting).B.V + 4);
  *(undefined8 *)((this->Lighting).B.V + 6) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Lighting).B.V + 10);
  *(undefined8 *)((this->Lighting).B.V + 8) = *(undefined8 *)((param_1->Lighting).B.V + 8);
  *(undefined8 *)((this->Lighting).B.V + 10) = uVar1;
  (this->PackedSkyBentNormal).field0_0x0 = (param_1->PackedSkyBentNormal).field0_0x0;
  this->DirectionalLightShadowing = param_1->DirectionalLightShadowing;
  return this;
}

// TVolumeLightingSample<3> @ 148348b00

TVolumeLightingSample<3> * __thiscall
TVolumeLightingSample<3>::TVolumeLightingSample<3>
          (TVolumeLightingSample<3> *this,TVolumeLightingSample<2> *param_1)

{
  (this->Lighting).R.V[0] = 0.0;
  (this->Lighting).R.V[1] = 0.0;
  (this->Lighting).R.V[2] = 0.0;
  (this->Lighting).R.V[3] = 0.0;
  (this->Lighting).R.V[4] = 0.0;
  (this->Lighting).R.V[5] = 0.0;
  (this->Lighting).R.V[6] = 0.0;
  (this->Lighting).R.V[7] = 0.0;
  (this->Lighting).R.V[8] = 0.0;
  (this->Lighting).R.V[9] = 0.0;
  (this->Lighting).R.V[10] = 0.0;
  (this->Lighting).R.V[0xb] = 0.0;
  (this->Lighting).G.V[0] = 0.0;
  (this->Lighting).G.V[1] = 0.0;
  (this->Lighting).G.V[2] = 0.0;
  (this->Lighting).G.V[3] = 0.0;
  (this->Lighting).G.V[4] = 0.0;
  (this->Lighting).G.V[5] = 0.0;
  (this->Lighting).G.V[6] = 0.0;
  (this->Lighting).G.V[7] = 0.0;
  (this->Lighting).G.V[8] = 0.0;
  (this->Lighting).G.V[9] = 0.0;
  (this->Lighting).G.V[10] = 0.0;
  (this->Lighting).G.V[0xb] = 0.0;
  (this->Lighting).B.V[0] = 0.0;
  (this->Lighting).B.V[1] = 0.0;
  (this->Lighting).B.V[2] = 0.0;
  (this->Lighting).B.V[3] = 0.0;
  (this->Lighting).B.V[4] = 0.0;
  (this->Lighting).B.V[5] = 0.0;
  (this->Lighting).B.V[6] = 0.0;
  (this->Lighting).B.V[7] = 0.0;
  (this->Lighting).B.V[8] = 0.0;
  (this->Lighting).B.V[9] = 0.0;
  (this->Lighting).B.V[10] = 0.0;
  (this->Lighting).B.V[0xb] = 0.0;
  *(undefined8 *)&(this->Position).field0_0x0 = *(undefined8 *)&(param_1->Position).field0_0x0;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  this->Radius = param_1->Radius;
  (this->PackedSkyBentNormal).field0_0x0 = (param_1->PackedSkyBentNormal).field0_0x0;
  this->DirectionalLightShadowing = param_1->DirectionalLightShadowing;
  (this->Lighting).R.V[0] = (param_1->Lighting).R.V[0];
  (this->Lighting).G.V[0] = (param_1->Lighting).G.V[0];
  (this->Lighting).B.V[0] = (param_1->Lighting).B.V[0];
  (this->Lighting).R.V[1] = (param_1->Lighting).R.V[1];
  (this->Lighting).G.V[1] = (param_1->Lighting).G.V[1];
  (this->Lighting).B.V[1] = (param_1->Lighting).B.V[1];
  (this->Lighting).R.V[2] = (param_1->Lighting).R.V[2];
  (this->Lighting).G.V[2] = (param_1->Lighting).G.V[2];
  (this->Lighting).B.V[2] = (param_1->Lighting).B.V[2];
  (this->Lighting).R.V[3] = (param_1->Lighting).R.V[3];
  (this->Lighting).G.V[3] = (param_1->Lighting).G.V[3];
  (this->Lighting).B.V[3] = (param_1->Lighting).B.V[3];
  (this->Lighting).R.V[4] = 0.0;
  (this->Lighting).R.V[5] = 0.0;
  (this->Lighting).G.V[4] = 0.0;
  (this->Lighting).G.V[5] = 0.0;
  (this->Lighting).B.V[4] = 0.0;
  (this->Lighting).B.V[5] = 0.0;
  (this->Lighting).R.V[6] = 0.0;
  (this->Lighting).R.V[7] = 0.0;
  (this->Lighting).G.V[6] = 0.0;
  (this->Lighting).G.V[7] = 0.0;
  (this->Lighting).B.V[6] = 0.0;
  (this->Lighting).B.V[7] = 0.0;
  (this->Lighting).R.V[8] = 0.0;
  (this->Lighting).G.V[8] = 0.0;
  (this->Lighting).B.V[8] = 0.0;
  return this;
}

