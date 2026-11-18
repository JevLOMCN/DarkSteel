// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FHeightfieldComponentDescription @ 1448ed260

FHeightfieldComponentDescription * __thiscall
FHeightfieldComponentDescription::FHeightfieldComponentDescription
          (FHeightfieldComponentDescription *this,TMatrix<double> *param_1,uint param_2)

{
  double dVar1;
  
  *(undefined8 *)&(this->HeightfieldScaleBias).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->HeightfieldScaleBias).field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->MinMaxUV).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->MinMaxUV).field0_0x0 + 8) = 0;
  dVar1 = param_1->M[0][1];
  (this->LocalToWorld).M[0][0] = param_1->M[0][0];
  (this->LocalToWorld).M[0][1] = dVar1;
  dVar1 = param_1->M[0][3];
  (this->LocalToWorld).M[0][2] = param_1->M[0][2];
  (this->LocalToWorld).M[0][3] = dVar1;
  dVar1 = param_1->M[1][1];
  (this->LocalToWorld).M[1][0] = param_1->M[1][0];
  (this->LocalToWorld).M[1][1] = dVar1;
  dVar1 = param_1->M[1][3];
  (this->LocalToWorld).M[1][2] = param_1->M[1][2];
  (this->LocalToWorld).M[1][3] = dVar1;
  dVar1 = param_1->M[2][1];
  (this->LocalToWorld).M[2][0] = param_1->M[2][0];
  (this->LocalToWorld).M[2][1] = dVar1;
  dVar1 = param_1->M[2][3];
  (this->LocalToWorld).M[2][2] = param_1->M[2][2];
  (this->LocalToWorld).M[2][3] = dVar1;
  dVar1 = param_1->M[3][1];
  (this->LocalToWorld).M[3][0] = param_1->M[3][0];
  (this->LocalToWorld).M[3][1] = dVar1;
  dVar1 = param_1->M[3][3];
  (this->LocalToWorld).M[3][2] = param_1->M[3][2];
  (this->LocalToWorld).M[3][3] = dVar1;
  (this->LightingAtlasLocation).field0_0x0._s_0.X = 0.0;
  (this->LightingAtlasLocation).field0_0x0._s_0.Y = 0.0;
  (this->HeightfieldRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->HeightfieldRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SubsectionScaleAndBias).field0_0x0._s_0.X = 0.0;
  (this->SubsectionScaleAndBias).field0_0x0._s_0.Y = 0.0;
  (this->SubsectionScaleAndBias).field0_0x0._s_0.Z = 0.0;
  (this->SubsectionScaleAndBias).field0_0x0._s_0.W = 0.0;
  this->NumSubsections = 0;
  this->GPUSceneInstanceIndex = param_2;
  this->VisibilityChannel = -1;
  return this;
}

// FHeightfieldComponentDescription @ 1448ed310

FHeightfieldComponentDescription * __thiscall
FHeightfieldComponentDescription::FHeightfieldComponentDescription
          (FHeightfieldComponentDescription *this,FHeightfieldComponentDescription *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->HeightfieldScaleBias).field0_0x0 + 8);
  *(undefined8 *)&(this->HeightfieldScaleBias).field0_0x0 =
       *(undefined8 *)&(param_1->HeightfieldScaleBias).field0_0x0;
  *(undefined8 *)((longlong)&(this->HeightfieldScaleBias).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MinMaxUV).field0_0x0 + 8);
  *(undefined8 *)&(this->MinMaxUV).field0_0x0 = *(undefined8 *)&(param_1->MinMaxUV).field0_0x0;
  *(undefined8 *)((longlong)&(this->MinMaxUV).field0_0x0 + 8) = uVar1;
  dVar2 = (param_1->LocalToWorld).M[0][1];
  (this->LocalToWorld).M[0][0] = (param_1->LocalToWorld).M[0][0];
  (this->LocalToWorld).M[0][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[0][3];
  (this->LocalToWorld).M[0][2] = (param_1->LocalToWorld).M[0][2];
  (this->LocalToWorld).M[0][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[1][1];
  (this->LocalToWorld).M[1][0] = (param_1->LocalToWorld).M[1][0];
  (this->LocalToWorld).M[1][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[1][3];
  (this->LocalToWorld).M[1][2] = (param_1->LocalToWorld).M[1][2];
  (this->LocalToWorld).M[1][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[2][1];
  (this->LocalToWorld).M[2][0] = (param_1->LocalToWorld).M[2][0];
  (this->LocalToWorld).M[2][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[2][3];
  (this->LocalToWorld).M[2][2] = (param_1->LocalToWorld).M[2][2];
  (this->LocalToWorld).M[2][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[3][1];
  (this->LocalToWorld).M[3][0] = (param_1->LocalToWorld).M[3][0];
  (this->LocalToWorld).M[3][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[3][3];
  (this->LocalToWorld).M[3][2] = (param_1->LocalToWorld).M[3][2];
  (this->LocalToWorld).M[3][3] = dVar2;
  dVar2 = (param_1->LightingAtlasLocation).field0_0x0._s_0.Y;
  (this->LightingAtlasLocation).field0_0x0._s_0.X =
       (param_1->LightingAtlasLocation).field0_0x0._s_0.X;
  (this->LightingAtlasLocation).field0_0x0._s_0.Y = dVar2;
  (this->HeightfieldRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->HeightfieldRect).field0_0x0._s_0.Min.field0_0x0;
  (this->HeightfieldRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->HeightfieldRect).field0_0x0._s_0.Max.field0_0x0;
  this->GPUSceneInstanceIndex = param_1->GPUSceneInstanceIndex;
  this->NumSubsections = param_1->NumSubsections;
  dVar2 = (param_1->SubsectionScaleAndBias).field0_0x0._s_0.Y;
  (this->SubsectionScaleAndBias).field0_0x0._s_0.X =
       (param_1->SubsectionScaleAndBias).field0_0x0._s_0.X;
  (this->SubsectionScaleAndBias).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->SubsectionScaleAndBias).field0_0x0._s_0.W;
  (this->SubsectionScaleAndBias).field0_0x0._s_0.Z =
       (param_1->SubsectionScaleAndBias).field0_0x0._s_0.Z;
  (this->SubsectionScaleAndBias).field0_0x0._s_0.W = dVar2;
  this->VisibilityChannel = param_1->VisibilityChannel;
  return this;
}

