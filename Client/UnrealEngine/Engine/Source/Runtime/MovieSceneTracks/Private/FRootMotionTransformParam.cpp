// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FRootMotionTransformParam @ 14689c320

FRootMotionTransformParam * __thiscall
UMovieSceneSkeletalAnimationSection::FRootMotionTransformParam::FRootMotionTransformParam
          (FRootMotionTransformParam *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->FrameRate).Numerator = 60000;
  (this->CurrentTime).FrameNumber = 0;
  (this->CurrentTime).SubFrame = 0.0;
  (this->FrameRate).Denominator = 1;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OutTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OutTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OutTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OutTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OutTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OutTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OutTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OutTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OutTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OutParentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OutParentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OutParentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutParentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OutParentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OutParentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OutParentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutParentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OutParentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OutParentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OutParentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutParentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OutPoseTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OutPoseTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OutPoseTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutPoseTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OutPoseTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OutPoseTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OutPoseTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutPoseTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OutPoseTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OutPoseTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OutPoseTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutPoseTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OutRootStartTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OutRootStartTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OutRootStartTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutRootStartTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OutRootStartTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OutRootStartTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OutRootStartTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutRootStartTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OutRootStartTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OutRootStartTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OutRootStartTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OutRootStartTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

