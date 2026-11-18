// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNiagaraOwnerParameters @ 1493cc430

FNiagaraOwnerParameters * __thiscall
FNiagaraOwnerParameters::FNiagaraOwnerParameters(FNiagaraOwnerParameters *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorld).M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorld).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorld).M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorld).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorld).M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorld).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorld).M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorld).M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocal).M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocal).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocal).M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocal).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocal).M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocal).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocal).M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocal).M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorldTransposed).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorldTransposed).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorldTransposed).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorldTransposed).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorldTransposed).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorldTransposed).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorldTransposed).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorldTransposed).M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocalTransposed).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocalTransposed).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocalTransposed).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocalTransposed).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocalTransposed).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocalTransposed).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocalTransposed).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocalTransposed).M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorldNoScale).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorldNoScale).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorldNoScale).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorldNoScale).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorldNoScale).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorldNoScale).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->EngineLocalToWorldNoScale).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->EngineLocalToWorldNoScale).M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocalNoScale).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocalNoScale).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocalNoScale).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocalNoScale).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocalNoScale).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocalNoScale).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->EngineWorldToLocalNoScale).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->EngineWorldToLocalNoScale).M[3] + 2) = uVar1;
  this->EngineRotation = UE::Math::TQuat<float>::Identity;
  *(undefined8 *)&(this->EnginePosition).field0_0x0 = 0;
  (this->EnginePosition).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->EngineVelocity).field0_0x0 = 0;
  (this->EngineVelocity).field0_0x0._s_0.Z = 0.0;
  (this->EngineXAxis).field0_0x0._s_0.Z = 0.0;
  (this->EngineYAxis).field0_0x0._s_0.X = 0.0;
  *(undefined8 *)&(this->EngineZAxis).field0_0x0 = 0;
  *(undefined8 *)&(this->EngineLWCTile).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->EngineLWCTile).field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->EngineXAxis).field0_0x0 = 0x3f800000;
  *(undefined8 *)((longlong)&(this->EngineYAxis).field0_0x0 + 4) = 0x3f800000;
  (this->EngineZAxis).field0_0x0._s_0.Z = 1.0;
  (this->EngineScale).field0_0x0._s_0.X = 1.0;
  (this->EngineScale).field0_0x0._s_0.Y = 1.0;
  (this->EngineScale).field0_0x0._s_0.Z = 1.0;
  return this;
}

