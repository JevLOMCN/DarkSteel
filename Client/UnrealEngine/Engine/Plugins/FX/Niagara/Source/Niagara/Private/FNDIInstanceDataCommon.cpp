// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNDIInstanceDataCommon @ 148ea33e0

FNDIInstanceDataCommon * __thiscall
NDISceneCapture2DLocal::FNDIInstanceDataCommon::FNDIInstanceDataCommon(FNDIInstanceDataCommon *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)&(this->TextureSize).field0_0x0 = 0;
  (this->TextureSize).field0_0x0._s_0.Z = 0;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->TextureViewMatrix).M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->TextureViewMatrix).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->TextureViewMatrix).M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->TextureViewMatrix).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->TextureViewMatrix).M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->TextureViewMatrix).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->TextureViewMatrix).M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->TextureViewMatrix).M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->TextureProjMatrix).M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->TextureProjMatrix).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->TextureProjMatrix).M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->TextureProjMatrix).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->TextureProjMatrix).M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->TextureProjMatrix).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->TextureProjMatrix).M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->TextureProjMatrix).M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->InvTextureProjMatrix).M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->InvTextureProjMatrix).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->InvTextureProjMatrix).M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->InvTextureProjMatrix).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->InvTextureProjMatrix).M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->InvTextureProjMatrix).M[2] + 2) = uVar1;
  uVar2 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  this->ProjectType = Perspective;
  *(undefined8 *)(this->InvTextureProjMatrix).M[3] = uVar1;
  *(undefined8 *)((this->InvTextureProjMatrix).M[3] + 2) = uVar2;
  return this;
}

