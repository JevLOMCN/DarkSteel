// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 2

// StaticStruct @ 14a838400

UScriptStruct * __cdecl FWN_ISKM_CharacterPartInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_ISKM_CharacterPartInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_ISKM();
    Z_Registration_Info_UScriptStruct_FWN_ISKM_CharacterPartInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_ISKM_CharacterPartInfo,(UObject *)pUVar1,
                         L"WN_ISKM_CharacterPartInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_ISKM_CharacterPartInfo.OuterSingleton;
}

// FWN_ISKM_CharacterPartInfo @ 14a83e810

FWN_ISKM_CharacterPartInfo * __thiscall
FWN_ISKM_CharacterPartInfo::FWN_ISKM_CharacterPartInfo(FWN_ISKM_CharacterPartInfo *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 *this_00;
  
  this->bActive = true;
  (this->PartName).ComparisonIndex = 0;
  (this->PartName).Number = 0;
  (this->BoneOrSocketName).ComparisonIndex = 0;
  (this->BoneOrSocketName).Number = 0;
  this->AnimInfoIndex = -1;
  this_00 = &(this->SkeletalMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SkeletalMesh).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SkeletalMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SkeletalMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SkeletalMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->SKMComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->InstanceKey).Value = 0xffffffff;
  return this;
}

