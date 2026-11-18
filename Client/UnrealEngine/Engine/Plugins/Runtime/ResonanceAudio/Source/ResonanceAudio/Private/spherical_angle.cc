// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 10

// SphericalAngle @ 14f071920

SphericalAngle * __thiscall
vraudio::SphericalAngle::SphericalAngle(SphericalAngle *this,SphericalAngle *param_1)

{
  this->azimuth_ = param_1->azimuth_;
  this->elevation_ = param_1->elevation_;
  return this;
}

// SphericalAngle @ 14f071940

SphericalAngle * __thiscall
vraudio::SphericalAngle::SphericalAngle(SphericalAngle *this,float param_1,float param_2)

{
  this->azimuth_ = param_1;
  this->elevation_ = param_2;
  return this;
}

// SphericalAngle @ 14f071960

SphericalAngle * __thiscall vraudio::SphericalAngle::SphericalAngle(SphericalAngle *this)

{
  this->azimuth_ = 0.0;
  this->elevation_ = 0.0;
  return this;
}

// operator= @ 14f071970

SphericalAngle * __thiscall
vraudio::SphericalAngle::operator=(SphericalAngle *this,SphericalAngle param_1)

{
  if (param_1 != (SphericalAngle)this) {
    this->azimuth_ = *(float *)param_1;
    this->elevation_ = *(float *)((longlong)param_1 + 4);
  }
  return this;
}

// operator== @ 14f071990

bool __thiscall vraudio::SphericalAngle::operator==(SphericalAngle *this,SphericalAngle *param_1)

{
  if ((param_1->azimuth_ == this->azimuth_) && (param_1->elevation_ == this->elevation_)) {
    return true;
  }
  return false;
}

// FlipAzimuth @ 14f0719b0

SphericalAngle __thiscall vraudio::SphericalAngle::FlipAzimuth(SphericalAngle *this)

{
  SphericalAngle in_RDX;
  uint uVar1;
  
  uVar1 = (uint)this->azimuth_ ^ __xmm_80000000800000008000000080000000;
  *(float *)((longlong)in_RDX + 4) = this->elevation_;
  *(uint *)in_RDX = uVar1;
  return in_RDX;
}

// FromDegrees @ 14f0719d0

SphericalAngle __cdecl vraudio::SphericalAngle::FromDegrees(float param_1,float param_2)

{
  SphericalAngle in_RCX;
  float in_XMM2_Da;
  float fVar1;
  
  fVar1 = in_XMM2_Da * __real_3c8efa35;
  *(float *)in_RCX = param_2 * __real_3c8efa35;
  *(float *)((longlong)in_RCX + 4) = fVar1;
  return in_RCX;
}

// FromWorldPosition @ 14f071a00

SphericalAngle __cdecl vraudio::SphericalAngle::FromWorldPosition(WorldPosition *param_1)

{
  float fVar1;
  float *in_RDX;
  float fVar2;
  float fVar3;
  
  fVar3 = *in_RDX;
  fVar1 = in_RDX[2];
  fVar2 = atan2f((float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000),
                 (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
  *(float *)param_1 = fVar2;
  fVar3 = atan2f(in_RDX[1],SQRT(fVar1 * fVar1 + fVar3 * fVar3));
  *(float *)&param_1->field_0x4 = fVar3;
  return (SphericalAngle)param_1;
}

// GetWorldPositionOnUnitSphere @ 14f071a80

WorldPosition * __thiscall
vraudio::SphericalAngle::GetWorldPositionOnUnitSphere
          (SphericalAngle *this,WorldPosition *__return_storage_ptr__)

{
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  
  __libm_sse2_sincosf4_();
  *(uint *)__return_storage_ptr__ =
       (uint)(extraout_XMM0_Da * extraout_XMM0_Dd) ^ __xmm_80000000800000008000000080000000;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       (uint)(extraout_XMM0_Db * extraout_XMM0_Dd) ^ __xmm_80000000800000008000000080000000;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = extraout_XMM0_Dc;
  return __return_storage_ptr__;
}

// Rotate @ 14f071ae0

SphericalAngle __thiscall
vraudio::SphericalAngle::Rotate(SphericalAngle *this,WorldRotation *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_R8;
  float extraout_XMM0_Da;
  float fVar4;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  __libm_sse2_sincosf4_();
  fVar4 = in_R8[1];
  fVar1 = *in_R8;
  fVar2 = in_R8[2];
  fVar3 = in_R8[3];
  fVar5 = (float)((uint)(extraout_XMM0_Da * extraout_XMM0_Dd) ^
                 __xmm_80000000800000008000000080000000);
  fVar6 = (float)((uint)(extraout_XMM0_Db * extraout_XMM0_Dd) ^
                 __xmm_80000000800000008000000080000000);
  fVar9 = fVar1 * extraout_XMM0_Dc - fVar4 * fVar5;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar4 * fVar6 - fVar2 * extraout_XMM0_Dc;
  fVar8 = fVar2 * fVar5 - fVar1 * fVar6;
  fVar10 = fVar10 + fVar10;
  fVar8 = fVar8 + fVar8;
  fVar7 = (fVar4 * fVar9 - fVar8 * fVar2) + fVar10 * fVar3 + fVar5;
  fVar5 = (fVar8 * fVar1 - fVar10 * fVar4) + fVar3 * fVar9 + fVar6;
  fVar4 = atan2f((float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000),
                 (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000));
  *(float *)param_1 = fVar4;
  fVar4 = atan2f((fVar10 * fVar2 - fVar1 * fVar9) + fVar8 * fVar3 + extraout_XMM0_Dc,
                 SQRT(fVar5 * fVar5 + fVar7 * fVar7));
  *(float *)&param_1->field_0x4 = fVar4;
  return (SphericalAngle)param_1;
}

