// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// DebugDraw @ 1441a88f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FAccelerationStructureHandle::DebugDraw
          (FAccelerationStructureHandle *this,bool param_1,bool param_2)

{
  FColor *pFVar1;
  FColor_u_0 *pFVar2;
  undefined1 auStack_b8 [32];
  FColor_u_0 local_98;
  FColor_u_0 local_94 [3];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->ExternalGeometryParticle != (TGeometryParticle<double,3> *)0x0) && (param_1)) {
    pFVar1 = &FColor::Green;
    local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    if (param_2) {
      pFVar1 = &FColor::Red;
    }
    local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_58 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_50 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_38 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_30 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    Chaos::DebugDraw::DrawParticleShapes
              ((TRigidTransform<double,3> *)&local_88,this->ExternalGeometryParticle,pFVar1,
               (FChaosDebugDrawSettings *)0x0);
  }
  if ((this->GeometryParticleHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (!param_1))
  {
    if (param_2) {
      local_98.Bits = 0xffc86464;
      pFVar2 = &local_98;
    }
    else {
      local_94[0].Bits = 0xff64c864;
      pFVar2 = local_94;
    }
    local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_58 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_50 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_38 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_30 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    Chaos::DebugDraw::DrawParticleShapes
              ((TRigidTransform<double,3> *)&local_88,this->GeometryParticleHandle,
               (FColor *)&pFVar2->_s_0,(FChaosDebugDrawSettings *)0x0);
  }
  return;
}

