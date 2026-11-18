// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a4d91b0

UScriptStruct * __cdecl FRigUnit_BinaryTransformOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_BinaryTransformOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_BinaryTransformOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp,(UObject *)pUVar1,
                         L"RigUnit_BinaryTransformOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_BinaryTransformOp.OuterSingleton;
}

// FRigUnit_BinaryTransformOp @ 14a50c340

FRigUnit_BinaryTransformOp * __thiscall
FRigUnit_BinaryTransformOp::FRigUnit_BinaryTransformOp(FRigUnit_BinaryTransformOp *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->_padding_ = (longlong)&___7FRigUnit_BinaryTransformOp__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Argument0).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Argument0).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Argument0).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Argument0).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Argument0).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Argument0).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Argument0).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Argument0).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Argument0).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Argument0).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Argument0).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Argument0).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Argument1).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Argument1).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Argument1).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Argument1).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Argument1).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Argument1).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Argument1).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Argument1).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Argument1).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Argument1).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Argument1).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Argument1).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Result).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Result).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Result).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Result).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Result).Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Result).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Result).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Result).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Result).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Result).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Result).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Result).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

