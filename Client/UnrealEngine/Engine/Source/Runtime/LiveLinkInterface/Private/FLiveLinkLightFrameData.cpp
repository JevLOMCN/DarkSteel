// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 3

// StaticStruct @ 14cfafb90

UScriptStruct * __cdecl FLiveLinkLightFrameData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightFrameData,(UObject *)pUVar1,
                         L"LiveLinkLightFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.OuterSingleton;
}

// FLiveLinkLightFrameData @ 14cfb5550

FLiveLinkLightFrameData * __thiscall
FLiveLinkLightFrameData::FLiveLinkLightFrameData(FLiveLinkLightFrameData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)this);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->field_0xa0 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&this->field_0xa8 = (double)fVar1;
  *(double *)&this->field_0xb0 = (double)fVar2;
  *(double *)&this->field_0xb8 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&this->field_0xc0 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&this->field_0xc8 = (double)fVar1;
  *(double *)&this->field_0xd0 = (double)fVar2;
  *(double *)&this->field_0xd8 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&this->field_0xe0 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&this->field_0xe8 = (double)fVar1;
  *(double *)&this->field_0xf0 = (double)fVar2;
  *(double *)&this->field_0xf8 = (double)fVar3;
  this->Temperature = 6500.0;
  this->Intensity = 3.1415927;
  (this->LightColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  this->InnerConeAngle = 0.0;
  this->SoftSourceRadius = 0.0;
  this->SourceLength = 0.0;
  this->OuterConeAngle = 44.0;
  this->AttenuationRadius = 1000.0;
  this->SourceRadius = 0.0;
  return this;
}

// operator= @ 14cfb6ef0

FLiveLinkLightFrameData * __thiscall
FLiveLinkLightFrameData::operator=(FLiveLinkLightFrameData *this,FLiveLinkLightFrameData *param_1)

{
  undefined8 uVar1;
  
  FLiveLinkBaseFrameData::operator=
            ((FLiveLinkBaseFrameData *)this,(FLiveLinkBaseFrameData *)param_1);
  uVar1 = *(undefined8 *)&param_1->field_0xa8;
  *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_1->field_0xa0;
  *(undefined8 *)&this->field_0xa8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xb8;
  *(undefined8 *)&this->field_0xb0 = *(undefined8 *)&param_1->field_0xb0;
  *(undefined8 *)&this->field_0xb8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xc8;
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)&param_1->field_0xc0;
  *(undefined8 *)&this->field_0xc8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xd8;
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&param_1->field_0xd0;
  *(undefined8 *)&this->field_0xd8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xe8;
  *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&param_1->field_0xe0;
  *(undefined8 *)&this->field_0xe8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xf8;
  *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&param_1->field_0xf0;
  *(undefined8 *)&this->field_0xf8 = uVar1;
  this->Temperature = param_1->Temperature;
  this->Intensity = param_1->Intensity;
  (this->LightColor).field0_0x0 = (param_1->LightColor).field0_0x0;
  this->InnerConeAngle = param_1->InnerConeAngle;
  this->OuterConeAngle = param_1->OuterConeAngle;
  this->AttenuationRadius = param_1->AttenuationRadius;
  this->SourceRadius = param_1->SourceRadius;
  this->SoftSourceRadius = param_1->SoftSourceRadius;
  this->SourceLength = param_1->SourceLength;
  return this;
}

