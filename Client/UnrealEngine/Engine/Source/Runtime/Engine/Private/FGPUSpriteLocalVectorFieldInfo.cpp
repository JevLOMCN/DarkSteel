// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147315d70

UScriptStruct * __cdecl FGPUSpriteLocalVectorFieldInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGPUSpriteLocalVectorFieldInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FGPUSpriteLocalVectorFieldInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo,(UObject *)pUVar1,
                         L"GPUSpriteLocalVectorFieldInfo");
  }
  return Z_Registration_Info_UScriptStruct_FGPUSpriteLocalVectorFieldInfo.OuterSingleton;
}

// operator= @ 147319da0

FGPUSpriteLocalVectorFieldInfo * __thiscall
FGPUSpriteLocalVectorFieldInfo::operator=
          (FGPUSpriteLocalVectorFieldInfo *this,FGPUSpriteLocalVectorFieldInfo *param_1)

{
  UVectorField *pUVar1;
  double dVar2;
  uint uVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Field).field0_0x0.DebugPtr, pUVar1 != (UVectorField *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Field).field0_0x0 = (param_1->Field).field0_0x0;
  dVar2 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->MinInitialRotation).Yaw;
  (this->MinInitialRotation).Pitch = (param_1->MinInitialRotation).Pitch;
  (this->MinInitialRotation).Yaw = dVar2;
  (this->MinInitialRotation).Roll = (param_1->MinInitialRotation).Roll;
  dVar2 = (param_1->MaxInitialRotation).Yaw;
  (this->MaxInitialRotation).Pitch = (param_1->MaxInitialRotation).Pitch;
  (this->MaxInitialRotation).Yaw = dVar2;
  (this->MaxInitialRotation).Roll = (param_1->MaxInitialRotation).Roll;
  dVar2 = (param_1->RotationRate).Yaw;
  (this->RotationRate).Pitch = (param_1->RotationRate).Pitch;
  (this->RotationRate).Yaw = dVar2;
  (this->RotationRate).Roll = (param_1->RotationRate).Roll;
  this->Intensity = param_1->Intensity;
  this->Tightness = param_1->Tightness;
  uVar3 = (ZPULL(*(undefined4 *)&this->field_0xc0,0,1) ^ param_1->bIgnoreComponentTransform) & 1 ^
          *(undefined4 *)&this->field_0xc0;
  *(uint *)&this->field_0xc0 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0xc0) & 2 ^ uVar3;
  *(uint *)&this->field_0xc0 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0xc0) & 4 ^ uVar3;
  *(uint *)&this->field_0xc0 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0xc0) & 8 ^ uVar3;
  *(uint *)&this->field_0xc0 = uVar3;
  *(uint *)&this->field_0xc0 = (uVar3 ^ *(uint *)&param_1->field_0xc0) & 0x10 ^ uVar3;
  return this;
}

