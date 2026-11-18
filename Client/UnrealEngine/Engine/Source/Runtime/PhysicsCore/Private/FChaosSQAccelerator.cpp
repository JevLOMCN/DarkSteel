// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 26

// operator()<Chaos::TBox<double,3>_> @ 144135990

void __thiscall
`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
          (void *this,TBox<double,3> *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,
             *(FSQHitBuffer<ChaosInterface::FOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::TBox<double,3>_> @ 1441359d0

void __thiscall
`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
          (void *this,TBox<double,3> *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,
             *(FSQHitBuffer<ChaosInterface::FPTOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::TBox<double,3>_> @ 144135a10

void __thiscall
`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
          (void *this,TBox<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TBox<double,3>_> @ 144135a80

void __thiscall
`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
          (void *this,TBox<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 144136150

void __thiscall
`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,
             *(FSQHitBuffer<ChaosInterface::FOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 144136190

void __thiscall
`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,
             *(FSQHitBuffer<ChaosInterface::FPTOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 1441361d0

void __thiscall
`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 144136240

void __thiscall
`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FCapsule> @ 1441362b0

void __thiscall
`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
          (void *this,FCapsule *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::FCapsule,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,
             *(FSQHitBuffer<ChaosInterface::FOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::FCapsule> @ 1441362f0

void __thiscall
`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
          (void *this,FCapsule *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::FCapsule,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,
             *(FSQHitBuffer<ChaosInterface::FPTOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::FCapsule> @ 144136330

void __thiscall
`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
          (void *this,FCapsule *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FCapsule> @ 1441363a0

void __thiscall
`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
          (void *this,FCapsule *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FConvex> @ 144136410

void __thiscall
`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::FConvex>
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::FConvex,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,
             *(FSQHitBuffer<ChaosInterface::FOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::FConvex> @ 144136450

void __thiscall
`FChaosSQAccelerator::Overlap'::__l2::<lambda_1>::operator()<Chaos::FConvex>
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::FConvex,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,
             *(FSQHitBuffer<ChaosInterface::FPTOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::FConvex> @ 144136490

void __thiscall
`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::FConvex>
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FConvex> @ 144136500

void __thiscall
`FChaosSQAccelerator::Sweep'::__l2::<lambda_1>::operator()<Chaos::FConvex>
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,*(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> **)
                      (*(longlong *)this + 8),param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// RaycastImp<ChaosInterface::FPTRaycastHit> @ 144144e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSQAccelerator::RaycastImp<ChaosInterface::FPTRaycastHit>
          (FChaosSQAccelerator *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,FSQHitBuffer<ChaosInterface::FPTRaycastHit> *param_4,EHitFlags param_5,
          FChaosQueryFilterData *param_6,ICollisionQueryFilterCallbackBase *param_7,
          FQueryDebugParams *param_8)

{
  int *piVar1;
  undefined1 auStack_1d8 [32];
  undefined ***local_1b8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined **local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  EHitFlags local_130;
  byte local_12e;
  FQueryDebugParams local_12d;
  double local_128;
  double dStack_120;
  double local_118;
  FSQHitBuffer<ChaosInterface::FPTRaycastHit> *local_110;
  FChaosQueryFilterData *local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  ICollisionQueryFilterCallbackBase *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_160 = (param_1->field0_0x0)._s_0.X;
  dStack_158 = (param_1->field0_0x0)._s_0.Y;
  local_150 = (param_1->field0_0x0)._s_0.Z;
  local_168 = &
              ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTRaycastHit_ChaosInterface___0A___6B_
  ;
  local_148 = (param_2->field0_0x0)._s_0.X;
  dStack_140 = (param_2->field0_0x0)._s_0.Y;
  local_138 = (param_2->field0_0x0)._s_0.Z;
  local_130 = param_5;
  local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_12d = *param_8;
  local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108 = param_6;
  local_110 = param_4;
  local_100 = (param_6->data).word0;
  local_fc = (param_6->data).word1;
  local_f8 = (param_6->data).word2;
  local_f4 = (param_6->data).word3;
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8 = param_7;
  local_f0 = 0;
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8._0_8_ = local_68;
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_12e = (byte)(param_6->flags).mBits >> 4 & 1;
  param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
  local_1a0 = (param_2->field0_0x0)._s_0.X;
  dStack_198 = (param_2->field0_0x0)._s_0.Y;
  local_190 = (param_2->field0_0x0)._s_0.Z;
  local_188 = *(undefined4 *)&param_1->field0_0x0;
  uStack_184 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_180 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_17c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_178 = (param_1->field0_0x0)._s_0.Z;
  local_1b8 = &local_168;
  local_78 = local_b8;
  dStack_70 = dStack_b0;
  local_60 = local_b8;
  dStack_58 = dStack_b0;
  local_50 = local_68;
  local_48 = local_b8;
  dStack_40 = dStack_b0;
  local_38 = local_68;
  (**(code **)(this->SpatialAcceleration->_padding_ + 0x50))
            (this->SpatialAcceleration,&local_188,&local_1a0,SUB84((double)param_3,0));
  piVar1 = &param_4->AcceleratorDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTRaycastHit>
              (&param_4->Hits,&param_4->CurrentBlockingHit,param_4->bHasBlockingHit);
  }
  return;
}

// RaycastImp<ChaosInterface::FRaycastHit> @ 144145050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSQAccelerator::RaycastImp<ChaosInterface::FRaycastHit>
          (FChaosSQAccelerator *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,FSQHitBuffer<ChaosInterface::FRaycastHit> *param_4,EHitFlags param_5,
          FChaosQueryFilterData *param_6,ICollisionQueryFilterCallbackBase *param_7,
          FQueryDebugParams *param_8)

{
  int *piVar1;
  undefined1 auStack_1d8 [32];
  undefined ***local_1b8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined **local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  EHitFlags local_130;
  byte local_12e;
  FQueryDebugParams local_12d;
  double local_128;
  double dStack_120;
  double local_118;
  FSQHitBuffer<ChaosInterface::FRaycastHit> *local_110;
  FChaosQueryFilterData *local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  ICollisionQueryFilterCallbackBase *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_160 = (param_1->field0_0x0)._s_0.X;
  dStack_158 = (param_1->field0_0x0)._s_0.Y;
  local_150 = (param_1->field0_0x0)._s_0.Z;
  local_168 = &
              ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFRaycastHit_ChaosInterface___00__6B_
  ;
  local_148 = (param_2->field0_0x0)._s_0.X;
  dStack_140 = (param_2->field0_0x0)._s_0.Y;
  local_138 = (param_2->field0_0x0)._s_0.Z;
  local_130 = param_5;
  local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_12d = *param_8;
  local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108 = param_6;
  local_110 = param_4;
  local_100 = (param_6->data).word0;
  local_fc = (param_6->data).word1;
  local_f8 = (param_6->data).word2;
  local_f4 = (param_6->data).word3;
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8 = param_7;
  local_f0 = 0;
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8._0_8_ = local_68;
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_12e = (byte)(param_6->flags).mBits >> 4 & 1;
  param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
  local_1a0 = (param_2->field0_0x0)._s_0.X;
  dStack_198 = (param_2->field0_0x0)._s_0.Y;
  local_190 = (param_2->field0_0x0)._s_0.Z;
  local_188 = *(undefined4 *)&param_1->field0_0x0;
  uStack_184 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_180 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_17c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_178 = (param_1->field0_0x0)._s_0.Z;
  local_1b8 = &local_168;
  local_78 = local_b8;
  dStack_70 = dStack_b0;
  local_60 = local_b8;
  dStack_58 = dStack_b0;
  local_50 = local_68;
  local_48 = local_b8;
  dStack_40 = dStack_b0;
  local_38 = local_68;
  (**(code **)(this->SpatialAcceleration->_padding_ + 0x50))
            (this->SpatialAcceleration,&local_188,&local_1a0,SUB84((double)param_3,0));
  piVar1 = &param_4->AcceleratorDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ChaosInterface::FinishQueryHelper<ChaosInterface::FRaycastHit>
              (&param_4->Hits,&param_4->CurrentBlockingHit,param_4->bHasBlockingHit);
  }
  return;
}

// FChaosSQAccelerator @ 14419ff40

FChaosSQAccelerator * __thiscall
FChaosSQAccelerator::FChaosSQAccelerator
          (FChaosSQAccelerator *this,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  this->SpatialAcceleration = param_1;
  this->_padding_ = (longlong)&___7FChaosSQAccelerator__6B_;
  return this;
}

// ~FChaosSQAccelerator @ 1441a1780

void __thiscall FChaosSQAccelerator::~FChaosSQAccelerator(FChaosSQAccelerator *this)

{
  this->_padding_ = (longlong)&___7FChaosSQAccelerator__6B_;
  return;
}

// Overlap @ 1441b2450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSQAccelerator::Overlap
          (FChaosSQAccelerator *this,FImplicitObject *param_1,TTransform<double> *param_2,
          FSQHitBuffer<ChaosInterface::FOverlapHit> *param_3,FChaosQueryFilterData *param_4,
          ICollisionQueryFilterCallbackBase *param_5,FQueryDebugParams *param_6)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar4;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar5;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar6;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar7;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar8;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar9;
  TBox<double,3> *pTVar10;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar11;
  FCapsule *pFVar12;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar13;
  FConvex *pFVar14;
  TImplicitObjectTransformed<double,3,1> *pTVar15;
  undefined1 auStackY_1a8 [32];
  <lambda_1> local_168;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_138.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_138.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_138.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_138.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_168.QueryFilterData = param_4;
  local_138.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_138.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_138.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_138.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_168.QueryCallback = param_5;
  local_138.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_138.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_138.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  local_168.DebugParams = param_6;
  local_168.__this = this;
  local_168.HitBuffer = param_3;
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    goto LAB_1441b296c;
  case '\x01':
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_1441b296c;
  case '\x03':
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    OverlapHelper<Chaos::FCapsule,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pFVar12,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case '\x04':
    pTVar15 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_d8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_d8,(TTransform<double> *)&pTVar15->MTransform,&local_138);
    local_78 = local_d8.Rotation.XY.m128d_f64[0];
    dStack_70 = local_d8.Rotation.XY.m128d_f64[1];
    local_68 = local_d8.Rotation.ZW.m128d_f64[0];
    dStack_60 = local_d8.Rotation.ZW.m128d_f64[1];
    local_58 = local_d8.Translation.XY.m128d_f64[0];
    dStack_50 = local_d8.Translation.XY.m128d_f64[1];
    local_48 = local_d8.Translation.ZW.m128d_f64[0];
    dStack_40 = local_d8.Translation.ZW.m128d_f64[1];
    local_38 = local_d8.Scale3D.XY.m128d_f64[0];
    dStack_30 = local_d8.Scale3D.XY.m128d_f64[1];
    local_28 = local_d8.Scale3D.ZW.m128d_f64[0];
    dStack_20 = local_d8.Scale3D.ZW.m128d_f64[1];
    Chaos::Utilities::CastHelper<_FChaosSQAccelerator::Overlap_::__l2::<lambda_1>_>
              ((pTVar15->MObject).Reference,(TRigidTransform<double,3> *)&local_78,&local_168);
    break;
  case '\b':
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    OverlapHelper<Chaos::FConvex,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pFVar14,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case '@':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar8->MObject).Reference);
LAB_1441b296c:
    OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              ((TSphere<double,3> *)param_1,(local_168.__this)->SpatialAcceleration,&local_138,
               local_168.HitBuffer,local_168.QueryFilterData,local_168.QueryCallback,
               local_168.DebugParams);
    break;
  case 'A':
    pTVar9 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar9->MObject).Reference);
    OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 'C':
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    OverlapHelper<Chaos::FCapsule,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pFVar12,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 'H':
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    OverlapHelper<Chaos::FConvex,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pFVar14,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x80:
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar4,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x81:
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar5,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x83:
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar6,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x88:
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar7,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
  }
  return;
}

// Overlap @ 1441b2a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSQAccelerator::Overlap
          (FChaosSQAccelerator *this,FImplicitObject *param_1,TTransform<double> *param_2,
          FSQHitBuffer<ChaosInterface::FPTOverlapHit> *param_3,FChaosQueryFilterData *param_4,
          ICollisionQueryFilterCallbackBase *param_5,FQueryDebugParams *param_6)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar4;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar5;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar6;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar7;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar8;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar9;
  TBox<double,3> *pTVar10;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar11;
  FCapsule *pFVar12;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar13;
  FConvex *pFVar14;
  TImplicitObjectTransformed<double,3,1> *pTVar15;
  undefined1 auStackY_1a8 [32];
  <lambda_1>_conflict local_168;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_138.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_138.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_138.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_138.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_168.QueryFilterData = param_4;
  local_138.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_138.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_138.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_138.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_168.QueryCallback = param_5;
  local_138.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_138.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_138.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  local_168.DebugParams = param_6;
  local_168.__this = this;
  local_168.HitBuffer = param_3;
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    goto LAB_1441b2f8c;
  case '\x01':
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_1441b2f8c;
  case '\x03':
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    OverlapHelper<Chaos::FCapsule,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pFVar12,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case '\x04':
    pTVar15 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_d8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_d8,(TTransform<double> *)&pTVar15->MTransform,&local_138);
    local_78 = local_d8.Rotation.XY.m128d_f64[0];
    dStack_70 = local_d8.Rotation.XY.m128d_f64[1];
    local_68 = local_d8.Rotation.ZW.m128d_f64[0];
    dStack_60 = local_d8.Rotation.ZW.m128d_f64[1];
    local_58 = local_d8.Translation.XY.m128d_f64[0];
    dStack_50 = local_d8.Translation.XY.m128d_f64[1];
    local_48 = local_d8.Translation.ZW.m128d_f64[0];
    dStack_40 = local_d8.Translation.ZW.m128d_f64[1];
    local_38 = local_d8.Scale3D.XY.m128d_f64[0];
    dStack_30 = local_d8.Scale3D.XY.m128d_f64[1];
    local_28 = local_d8.Scale3D.ZW.m128d_f64[0];
    dStack_20 = local_d8.Scale3D.ZW.m128d_f64[1];
    Chaos::Utilities::CastHelper<_FChaosSQAccelerator::Overlap_::__l2::<lambda_1>_>
              ((pTVar15->MObject).Reference,(TRigidTransform<double,3> *)&local_78,&local_168);
    break;
  case '\b':
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    OverlapHelper<Chaos::FConvex,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pFVar14,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case '@':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar8->MObject).Reference);
LAB_1441b2f8c:
    OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              ((TSphere<double,3> *)param_1,(local_168.__this)->SpatialAcceleration,&local_138,
               local_168.HitBuffer,local_168.QueryFilterData,local_168.QueryCallback,
               local_168.DebugParams);
    break;
  case 'A':
    pTVar9 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar9->MObject).Reference);
    OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 'C':
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    OverlapHelper<Chaos::FCapsule,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pFVar12,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 'H':
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    OverlapHelper<Chaos::FConvex,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pFVar14,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x80:
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar4,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x81:
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar5,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x83:
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar6,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x88:
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
              (pTVar7,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
  }
  return;
}

// Raycast @ 1441b3a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSQAccelerator::Raycast
          (FChaosSQAccelerator *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,FSQHitBuffer<ChaosInterface::FPTRaycastHit> *param_4,EHitFlags param_5,
          FChaosQueryFilterData *param_6,ICollisionQueryFilterCallbackBase *param_7,
          FQueryDebugParams *param_8)

{
  int *piVar1;
  undefined1 auStack_1d8 [32];
  undefined ***local_1b8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined **local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  EHitFlags local_130;
  byte local_12e;
  FQueryDebugParams local_12d;
  double local_128;
  double dStack_120;
  double local_118;
  FSQHitBuffer<ChaosInterface::FPTRaycastHit> *local_110;
  FChaosQueryFilterData *local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  ICollisionQueryFilterCallbackBase *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_160 = (param_1->field0_0x0)._s_0.X;
  dStack_158 = (param_1->field0_0x0)._s_0.Y;
  local_150 = (param_1->field0_0x0)._s_0.Z;
  local_168 = &
              ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTRaycastHit_ChaosInterface___0A___6B_
  ;
  local_148 = (param_2->field0_0x0)._s_0.X;
  dStack_140 = (param_2->field0_0x0)._s_0.Y;
  local_138 = (param_2->field0_0x0)._s_0.Z;
  local_130 = param_5;
  local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_12d = *param_8;
  local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108 = param_6;
  local_110 = param_4;
  local_100 = (param_6->data).word0;
  local_fc = (param_6->data).word1;
  local_f8 = (param_6->data).word2;
  local_f4 = (param_6->data).word3;
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8 = param_7;
  local_f0 = 0;
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8._0_8_ = local_68;
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_12e = (byte)(param_6->flags).mBits >> 4 & 1;
  param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
  local_1a0 = (param_2->field0_0x0)._s_0.X;
  dStack_198 = (param_2->field0_0x0)._s_0.Y;
  local_190 = (param_2->field0_0x0)._s_0.Z;
  local_188 = *(undefined4 *)&param_1->field0_0x0;
  uStack_184 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_180 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_17c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_178 = (param_1->field0_0x0)._s_0.Z;
  local_1b8 = &local_168;
  local_78 = local_b8;
  dStack_70 = dStack_b0;
  local_60 = local_b8;
  dStack_58 = dStack_b0;
  local_50 = local_68;
  local_48 = local_b8;
  dStack_40 = dStack_b0;
  local_38 = local_68;
  (**(code **)(this->SpatialAcceleration->_padding_ + 0x50))
            (this->SpatialAcceleration,&local_188,&local_1a0,SUB84((double)param_3,0));
  piVar1 = &param_4->AcceleratorDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTRaycastHit>
              (&param_4->Hits,&param_4->CurrentBlockingHit,param_4->bHasBlockingHit);
  }
  return;
}

// Raycast @ 1441b3c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSQAccelerator::Raycast
          (FChaosSQAccelerator *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,FSQHitBuffer<ChaosInterface::FRaycastHit> *param_4,EHitFlags param_5,
          FChaosQueryFilterData *param_6,ICollisionQueryFilterCallbackBase *param_7,
          FQueryDebugParams *param_8)

{
  int *piVar1;
  undefined1 auStack_1d8 [32];
  undefined ***local_1b8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined **local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  EHitFlags local_130;
  byte local_12e;
  FQueryDebugParams local_12d;
  double local_128;
  double dStack_120;
  double local_118;
  FSQHitBuffer<ChaosInterface::FRaycastHit> *local_110;
  FChaosQueryFilterData *local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  ICollisionQueryFilterCallbackBase *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_160 = (param_1->field0_0x0)._s_0.X;
  dStack_158 = (param_1->field0_0x0)._s_0.Y;
  local_150 = (param_1->field0_0x0)._s_0.Z;
  local_168 = &
              ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFRaycastHit_ChaosInterface___00__6B_
  ;
  local_148 = (param_2->field0_0x0)._s_0.X;
  dStack_140 = (param_2->field0_0x0)._s_0.Y;
  local_138 = (param_2->field0_0x0)._s_0.Z;
  local_130 = param_5;
  local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_12d = *param_8;
  local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108 = param_6;
  local_110 = param_4;
  local_100 = (param_6->data).word0;
  local_fc = (param_6->data).word1;
  local_f8 = (param_6->data).word2;
  local_f4 = (param_6->data).word3;
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8 = param_7;
  local_f0 = 0;
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8._0_8_ = local_68;
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_12e = (byte)(param_6->flags).mBits >> 4 & 1;
  param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
  local_1a0 = (param_2->field0_0x0)._s_0.X;
  dStack_198 = (param_2->field0_0x0)._s_0.Y;
  local_190 = (param_2->field0_0x0)._s_0.Z;
  local_188 = *(undefined4 *)&param_1->field0_0x0;
  uStack_184 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_180 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_17c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_178 = (param_1->field0_0x0)._s_0.Z;
  local_1b8 = &local_168;
  local_78 = local_b8;
  dStack_70 = dStack_b0;
  local_60 = local_b8;
  dStack_58 = dStack_b0;
  local_50 = local_68;
  local_48 = local_b8;
  dStack_40 = dStack_b0;
  local_38 = local_68;
  (**(code **)(this->SpatialAcceleration->_padding_ + 0x50))
            (this->SpatialAcceleration,&local_188,&local_1a0,SUB84((double)param_3,0));
  piVar1 = &param_4->AcceleratorDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ChaosInterface::FinishQueryHelper<ChaosInterface::FRaycastHit>
              (&param_4->Hits,&param_4->CurrentBlockingHit,param_4->bHasBlockingHit);
  }
  return;
}

// Sweep @ 1441bb030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSQAccelerator::Sweep
          (FChaosSQAccelerator *this,FImplicitObject *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,float param_4,FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_5,
          EHitFlags param_6,FChaosQueryFilterData *param_7,
          ICollisionQueryFilterCallbackBase *param_8,FQueryDebugParams *param_9)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar4;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar5;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar6;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar7;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar8;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar9;
  TBox<double,3> *pTVar10;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar11;
  FCapsule *pFVar12;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar13;
  FConvex *pFVar14;
  TImplicitObjectTransformed<double,3,1> *pTVar15;
  float fVar16;
  undefined1 auStackY_1c8 [32];
  EHitFlags EVar17;
  <lambda_1> local_178;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_138.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_138.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_178.DeltaMagnitude = &param_4;
  local_138.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_138.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_178.HitBuffer = param_5;
  local_178.OutputFlags = &param_6;
  local_178.QueryFilterData = param_7;
  local_138.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_138.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_138.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_138.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_178.QueryCallback = param_8;
  local_138.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_138.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_138.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  local_178.DebugParams = param_9;
  local_178.__this = this;
  local_178.Dir = param_3;
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    EVar17 = *local_178.OutputFlags;
    fVar16 = *local_178.DeltaMagnitude;
    goto LAB_1441bb72a;
  case '\x01':
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EVar17 = *local_178.OutputFlags;
    fVar16 = *local_178.DeltaMagnitude;
    goto LAB_1441bb72a;
  case '\x03':
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pFVar12,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case '\x04':
    pTVar15 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_d8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_d8,(TTransform<double> *)&pTVar15->MTransform,&local_138);
    local_78 = local_d8.Rotation.XY.m128d_f64[0];
    dStack_70 = local_d8.Rotation.XY.m128d_f64[1];
    local_68 = local_d8.Rotation.ZW.m128d_f64[0];
    dStack_60 = local_d8.Rotation.ZW.m128d_f64[1];
    local_58 = local_d8.Translation.XY.m128d_f64[0];
    dStack_50 = local_d8.Translation.XY.m128d_f64[1];
    local_48 = local_d8.Translation.ZW.m128d_f64[0];
    dStack_40 = local_d8.Translation.ZW.m128d_f64[1];
    local_38 = local_d8.Scale3D.XY.m128d_f64[0];
    dStack_30 = local_d8.Scale3D.XY.m128d_f64[1];
    local_28 = local_d8.Scale3D.ZW.m128d_f64[0];
    dStack_20 = local_d8.Scale3D.ZW.m128d_f64[1];
    Chaos::Utilities::CastHelper<_FChaosSQAccelerator::Sweep_::__l2::<lambda_1>_>
              ((pTVar15->MObject).Reference,(TRigidTransform<double,3> *)&local_78,&local_178);
    break;
  case '\b':
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pFVar14,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case '@':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar8->MObject).Reference);
    EVar17 = *local_178.OutputFlags;
    fVar16 = *local_178.DeltaMagnitude;
LAB_1441bb72a:
    SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              ((TSphere<double,3> *)param_1,(local_178.__this)->SpatialAcceleration,&local_138,
               local_178.Dir,fVar16,local_178.HitBuffer,EVar17,local_178.QueryFilterData,
               local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'A':
    pTVar9 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar9->MObject).Reference);
    SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'C':
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pFVar12,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'H':
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pFVar14,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x80:
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar4,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x81:
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar5,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x83:
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar6,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x88:
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar7,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
  }
  return;
}

// Sweep @ 1441bb830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosSQAccelerator::Sweep
          (FChaosSQAccelerator *this,FImplicitObject *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,float param_4,FSQHitBuffer<ChaosInterface::FSweepHit> *param_5,
          EHitFlags param_6,FChaosQueryFilterData *param_7,
          ICollisionQueryFilterCallbackBase *param_8,FQueryDebugParams *param_9)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar4;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar5;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar6;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar7;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar8;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar9;
  TBox<double,3> *pTVar10;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar11;
  FCapsule *pFVar12;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar13;
  FConvex *pFVar14;
  TImplicitObjectTransformed<double,3,1> *pTVar15;
  float fVar16;
  undefined1 auStackY_1c8 [32];
  EHitFlags EVar17;
  <lambda_1>_conflict local_178;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_138.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_138.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_178.DeltaMagnitude = &param_4;
  local_138.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_138.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_178.HitBuffer = param_5;
  local_178.OutputFlags = &param_6;
  local_178.QueryFilterData = param_7;
  local_138.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_138.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_138.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_138.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_178.QueryCallback = param_8;
  local_138.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_138.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_138.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  local_178.DebugParams = param_9;
  local_178.__this = this;
  local_178.Dir = param_3;
  uVar2 = Chaos::FImplicitObject::GetType(param_1);
  switch(uVar2) {
  case '\0':
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>(param_1);
    EVar17 = *local_178.OutputFlags;
    fVar16 = *local_178.DeltaMagnitude;
    goto LAB_1441bbf2a;
  case '\x01':
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Type != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EVar17 = *local_178.OutputFlags;
    fVar16 = *local_178.DeltaMagnitude;
    goto LAB_1441bbf2a;
  case '\x03':
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pFVar12,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case '\x04':
    pTVar15 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>(param_1);
    local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_d8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_d8,(TTransform<double> *)&pTVar15->MTransform,&local_138);
    local_78 = local_d8.Rotation.XY.m128d_f64[0];
    dStack_70 = local_d8.Rotation.XY.m128d_f64[1];
    local_68 = local_d8.Rotation.ZW.m128d_f64[0];
    dStack_60 = local_d8.Rotation.ZW.m128d_f64[1];
    local_58 = local_d8.Translation.XY.m128d_f64[0];
    dStack_50 = local_d8.Translation.XY.m128d_f64[1];
    local_48 = local_d8.Translation.ZW.m128d_f64[0];
    dStack_40 = local_d8.Translation.ZW.m128d_f64[1];
    local_38 = local_d8.Scale3D.XY.m128d_f64[0];
    dStack_30 = local_d8.Scale3D.XY.m128d_f64[1];
    local_28 = local_d8.Scale3D.ZW.m128d_f64[0];
    dStack_20 = local_d8.Scale3D.ZW.m128d_f64[1];
    Chaos::Utilities::CastHelper<_FChaosSQAccelerator::Sweep_::__l2::<lambda_1>_>
              ((pTVar15->MObject).Reference,(TRigidTransform<double,3> *)&local_78,&local_178);
    break;
  case '\b':
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pFVar14,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case '@':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar8->MObject).Reference);
    EVar17 = *local_178.OutputFlags;
    fVar16 = *local_178.DeltaMagnitude;
LAB_1441bbf2a:
    SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              ((TSphere<double,3> *)param_1,(local_178.__this)->SpatialAcceleration,&local_138,
               local_178.Dir,fVar16,local_178.HitBuffer,EVar17,local_178.QueryFilterData,
               local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'A':
    pTVar9 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar9->MObject).Reference);
    SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar10,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'C':
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pFVar12,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'H':
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pFVar14,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x80:
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar4,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x81:
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar5,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x83:
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar6,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x88:
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
              (pTVar7,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
  }
  return;
}

