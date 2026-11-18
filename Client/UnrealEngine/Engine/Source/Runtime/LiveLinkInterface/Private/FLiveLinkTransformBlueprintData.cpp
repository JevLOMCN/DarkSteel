// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 2

// StaticStruct @ 14cfacf50

UScriptStruct * __cdecl FLiveLinkTransformBlueprintData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData,(UObject *)pUVar1
                         ,L"LiveLinkTransformBlueprintData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.OuterSingleton;
}

// FLiveLinkTransformBlueprintData @ 14cfb5640

/* WARNING: Type propagation algorithm not settling */

FLiveLinkTransformBlueprintData * __thiscall
FLiveLinkTransformBlueprintData::FLiveLinkTransformBlueprintData
          (FLiveLinkTransformBlueprintData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->StaticData).bIsLocationSupported = true;
  (this->StaticData).bIsRotationSupported = true;
  this->_padding_ = (longlong)&___7FLiveLinkTransformBlueprintData__6B_;
  (this->StaticData)._padding_ = 0;
  (this->StaticData)._padding_ = 0;
  (this->StaticData).bIsScaleSupported = false;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)&this->FrameData);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->FrameData).Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->FrameData).Transform.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->FrameData).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FrameData).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->FrameData).Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->FrameData).Transform.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->FrameData).Transform.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FrameData).Transform.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->FrameData).Transform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->FrameData).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->FrameData).Transform.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->FrameData).Transform.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

