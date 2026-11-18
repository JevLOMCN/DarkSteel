// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// operator()<Chaos::TBox<double,3>_> @ 147740730

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FPTSweepHit>'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
          (void *this,TBox<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TBox<double,3>_> @ 1477407a0

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FPTSweepHit>'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
          (void *this,TBox<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TBox<double,3>_> @ 147740810

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FSweepHit>'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
          (void *this,TBox<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TBox<double,3>_> @ 147740880

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FSweepHit>'::__l2::<lambda_1>::operator()<Chaos::TBox<double,3>_>
          (void *this,TBox<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 1477408f0

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Overlap<ChaosInterface::FOverlapHit>'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,
             *(FSQHitBuffer<ChaosInterface::FOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 147740930

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Overlap<ChaosInterface::FOverlapHit>'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,
             *(FSQHitBuffer<ChaosInterface::FOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 147740970

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Overlap<ChaosInterface::FPTOverlapHit>'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,
             *(FSQHitBuffer<ChaosInterface::FPTOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 1477409b0

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Overlap<ChaosInterface::FPTOverlapHit>'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTOverlapHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,
             *(FSQHitBuffer<ChaosInterface::FPTOverlapHit> **)((longlong)this + 8),
             *(FChaosQueryFilterData **)((longlong)this + 0x10),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x18),
             *(FQueryDebugParams **)((longlong)this + 0x20));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 1477409f0

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FPTSweepHit>'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 147740a60

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FPTSweepHit>'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 147740ad0

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FSweepHit>'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::TSphere<double,3>_> @ 147740b40

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FSweepHit>'::__l2::<lambda_1>::operator()<Chaos::TSphere<double,3>_>
          (void *this,TSphere<double,3> *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FCapsule> @ 147740bb0

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FPTSweepHit>'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
          (void *this,FCapsule *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FCapsule> @ 147740c20

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FPTSweepHit>'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
          (void *this,FCapsule *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FCapsule> @ 147740c90

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FSweepHit>'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
          (void *this,FCapsule *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FCapsule> @ 147740d00

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FSweepHit>'::__l2::<lambda_1>::operator()<Chaos::FCapsule>
          (void *this,FCapsule *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FConvex> @ 147740d70

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FPTSweepHit>'::__l2::<lambda_1>::operator()<Chaos::FConvex>
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FConvex> @ 147740de0

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FPTSweepHit>'::__l2::<lambda_1>::operator()<Chaos::FConvex>
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FPTSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FConvex> @ 147740e50

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FSweepHit>'::__l2::<lambda_1>::operator()<Chaos::FConvex>
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
            (param_1,(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// operator()<Chaos::FConvex> @ 147740ec0

void __thiscall
``anonymous_namespace'::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FSweepHit>'::__l2::<lambda_1>::operator()<Chaos::FConvex>
          (void *this,FConvex *param_1,TTransform<double> *param_2)

{
  SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,Chaos::FAccelerationStructureHandle>
            (param_1,(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                     **(undefined8 **)this,param_2,*(TVector<double> **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),
             *(FSQHitBuffer<ChaosInterface::FSweepHit> **)((longlong)this + 0x18),
             **(EHitFlags **)((longlong)this + 0x20),
             *(FChaosQueryFilterData **)((longlong)this + 0x28),
             *(ICollisionQueryFilterCallbackBase **)((longlong)this + 0x30),
             *(FQueryDebugParams **)((longlong)this + 0x38));
  return;
}

// Overlap<ChaosInterface::FOverlapHit> @ 147761fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Overlap<ChaosInterface::FOverlapHit>
          (FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload> *this,
          FImplicitObject *param_1,TTransform<double> *param_2,
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
    goto LAB_1477624f2;
  case '\x01':
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
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
    goto LAB_1477624f2;
  case '\x03':
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    OverlapHelper<Chaos::FCapsule,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
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
    Chaos::Utilities::
    CastHelper<__anonymous_namespace_::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::Overlap<ChaosInterface::FOverlapHit>_::__l2::<lambda_1>_>
              ((pTVar15->MObject).Reference,(TRigidTransform<double,3> *)&local_78,&local_168);
    break;
  case '\b':
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    OverlapHelper<Chaos::FConvex,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              (pFVar14,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case '@':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar8->MObject).Reference);
LAB_1477624f2:
    OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              ((TSphere<double,3> *)param_1,(local_168.__this)->SpatialAcceleration,&local_138,
               local_168.HitBuffer,local_168.QueryFilterData,local_168.QueryCallback,
               local_168.DebugParams);
    break;
  case 'A':
    pTVar9 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar9->MObject).Reference);
    OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar10,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 'C':
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    OverlapHelper<Chaos::FCapsule,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              (pFVar12,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 'H':
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    OverlapHelper<Chaos::FConvex,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              (pFVar14,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x80:
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar4,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x81:
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar5,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x83:
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar6,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x88:
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar7,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
  }
  return;
}

// Overlap<ChaosInterface::FOverlapHit> @ 147762600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Overlap<ChaosInterface::FOverlapHit>
          (FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle> *this,
          FImplicitObject *param_1,TTransform<double> *param_2,
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
    goto LAB_147762b12;
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
    goto LAB_147762b12;
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
    Chaos::Utilities::
    CastHelper<__anonymous_namespace_::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::Overlap<ChaosInterface::FOverlapHit>_::__l2::<lambda_1>_>
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
LAB_147762b12:
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

// Overlap<ChaosInterface::FPTOverlapHit> @ 147762c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Overlap<ChaosInterface::FPTOverlapHit>
          (FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload> *this,
          FImplicitObject *param_1,TTransform<double> *param_2,
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
    goto LAB_147763132;
  case '\x01':
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
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
    goto LAB_147763132;
  case '\x03':
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    OverlapHelper<Chaos::FCapsule,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
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
    Chaos::Utilities::
    CastHelper<__anonymous_namespace_::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::Overlap<ChaosInterface::FPTOverlapHit>_::__l2::<lambda_1>_>
              ((pTVar15->MObject).Reference,(TRigidTransform<double,3> *)&local_78,&local_168);
    break;
  case '\b':
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    OverlapHelper<Chaos::FConvex,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              (pFVar14,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case '@':
    pTVar8 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>(param_1);
    param_1 = (FImplicitObject *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar8->MObject).Reference);
LAB_147763132:
    OverlapHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              ((TSphere<double,3> *)param_1,(local_168.__this)->SpatialAcceleration,&local_138,
               local_168.HitBuffer,local_168.QueryFilterData,local_168.QueryCallback,
               local_168.DebugParams);
    break;
  case 'A':
    pTVar9 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar9->MObject).Reference);
    OverlapHelper<Chaos::TBox<double,3>,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar10,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 'C':
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    OverlapHelper<Chaos::FCapsule,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              (pFVar12,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 'H':
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    OverlapHelper<Chaos::FConvex,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              (pFVar14,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x80:
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar4,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x81:
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar5,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x83:
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar6,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
    break;
  case 0x88:
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
    OverlapHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTOverlapHit,FExternalSpatialAccelerationPayload>
              (pTVar7,(local_168.__this)->SpatialAcceleration,&local_138,local_168.HitBuffer,
               local_168.QueryFilterData,local_168.QueryCallback,local_168.DebugParams);
  }
  return;
}

// Overlap<ChaosInterface::FPTOverlapHit> @ 147763240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Overlap<ChaosInterface::FPTOverlapHit>
          (FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle> *this,
          FImplicitObject *param_1,TTransform<double> *param_2,
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
    goto LAB_147763752;
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
    goto LAB_147763752;
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
    Chaos::Utilities::
    CastHelper<__anonymous_namespace_::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::Overlap<ChaosInterface::FPTOverlapHit>_::__l2::<lambda_1>_>
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
LAB_147763752:
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

// Raycast<ChaosInterface::FPTRaycastHit> @ 147768b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Raycast<ChaosInterface::FPTRaycastHit>
          (FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle> *this,
          TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FSQHitBuffer<ChaosInterface::FPTRaycastHit> *param_4,EHitFlags param_5,
          FChaosQueryFilterData *param_6,ICollisionQueryFilterCallbackBase *param_7,
          FQueryDebugParams *param_8)

{
  int *piVar1;
  ushort uVar2;
  undefined1 auStack_1f8 [32];
  undefined ***local_1d8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  undefined **local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  EHitFlags local_150;
  byte local_14e;
  FQueryDebugParams local_14d;
  double local_148;
  double dStack_140;
  double local_138;
  FSQHitBuffer<ChaosInterface::FPTRaycastHit> *local_130;
  FChaosQueryFilterData *local_128;
  FCollisionFilterData local_120;
  undefined8 local_110;
  ICollisionQueryFilterCallbackBase *local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_180 = (param_1->field0_0x0)._s_0.X;
  dStack_178 = (param_1->field0_0x0)._s_0.Y;
  local_170 = (param_1->field0_0x0)._s_0.Z;
  local_188 = &
              ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFPTRaycastHit_ChaosInterface___0A___6B_
  ;
  local_168 = (param_2->field0_0x0)._s_0.X;
  dStack_160 = (param_2->field0_0x0)._s_0.Y;
  local_150 = param_5;
  local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_14d = *param_8;
  local_158 = (param_2->field0_0x0)._s_0.Z;
  local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_14e = 0;
  local_130 = param_4;
  local_128 = param_6;
  C2UFilterData(&local_120,&param_6->data);
  local_1d8 = &local_188;
  local_108 = param_7;
  local_110 = 0;
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_88 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_c8._0_8_ = local_88;
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  uVar2 = (local_128->flags).mBits;
  param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
  local_1c0 = (param_2->field0_0x0)._s_0.X;
  dStack_1b8 = (param_2->field0_0x0)._s_0.Y;
  local_1b0 = (param_2->field0_0x0)._s_0.Z;
  local_14e = (byte)uVar2 >> 4 & 1;
  local_1a8 = *(undefined4 *)&param_1->field0_0x0;
  uStack_1a4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_1a0 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_19c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_198 = (param_1->field0_0x0)._s_0.Z;
  local_98 = local_d8;
  dStack_90 = dStack_d0;
  local_80 = local_d8;
  dStack_78 = dStack_d0;
  local_70 = local_88;
  local_68 = local_d8;
  dStack_60 = dStack_d0;
  local_58 = local_88;
  (**(code **)(this->SpatialAcceleration->_padding_ + 0x50))
            (this->SpatialAcceleration,&local_1a8,&local_1c0,SUB84((double)param_3,0));
  piVar1 = &param_4->AcceleratorDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ChaosInterface::FinishQueryHelper<ChaosInterface::FPTRaycastHit>
              (&param_4->Hits,&param_4->CurrentBlockingHit,param_4->bHasBlockingHit);
  }
  return;
}

// Raycast<ChaosInterface::FRaycastHit> @ 147768d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Raycast<ChaosInterface::FRaycastHit>
          (FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle> *this,
          TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FSQHitBuffer<ChaosInterface::FRaycastHit> *param_4,EHitFlags param_5,
          FChaosQueryFilterData *param_6,ICollisionQueryFilterCallbackBase *param_7,
          FQueryDebugParams *param_8)

{
  int *piVar1;
  ushort uVar2;
  undefined1 auStack_1f8 [32];
  undefined ***local_1d8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  undefined **local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  EHitFlags local_150;
  byte local_14e;
  FQueryDebugParams local_14d;
  double local_148;
  double dStack_140;
  double local_138;
  FSQHitBuffer<ChaosInterface::FRaycastHit> *local_130;
  FChaosQueryFilterData *local_128;
  FCollisionFilterData local_120;
  undefined8 local_110;
  ICollisionQueryFilterCallbackBase *local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_180 = (param_1->field0_0x0)._s_0.X;
  dStack_178 = (param_1->field0_0x0)._s_0.Y;
  local_170 = (param_1->field0_0x0)._s_0.Z;
  local_188 = &
              ___7__TSQVisitor_V__TSphere_N_02_Chaos__VFAccelerationStructureHandle_2_UFRaycastHit_ChaosInterface___00__6B_
  ;
  local_168 = (param_2->field0_0x0)._s_0.X;
  dStack_160 = (param_2->field0_0x0)._s_0.Y;
  local_150 = param_5;
  local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_14d = *param_8;
  local_158 = (param_2->field0_0x0)._s_0.Z;
  local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_14e = 0;
  local_130 = param_4;
  local_128 = param_6;
  C2UFilterData(&local_120,&param_6->data);
  local_1d8 = &local_188;
  local_108 = param_7;
  local_110 = 0;
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_88 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_c8._0_8_ = local_88;
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  uVar2 = (local_128->flags).mBits;
  param_4->AcceleratorDepth = param_4->AcceleratorDepth + 1;
  local_1c0 = (param_2->field0_0x0)._s_0.X;
  dStack_1b8 = (param_2->field0_0x0)._s_0.Y;
  local_1b0 = (param_2->field0_0x0)._s_0.Z;
  local_14e = (byte)uVar2 >> 4 & 1;
  local_1a8 = *(undefined4 *)&param_1->field0_0x0;
  uStack_1a4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_1a0 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_19c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_198 = (param_1->field0_0x0)._s_0.Z;
  local_98 = local_d8;
  dStack_90 = dStack_d0;
  local_80 = local_d8;
  dStack_78 = dStack_d0;
  local_70 = local_88;
  local_68 = local_d8;
  dStack_60 = dStack_d0;
  local_58 = local_88;
  (**(code **)(this->SpatialAcceleration->_padding_ + 0x50))
            (this->SpatialAcceleration,&local_1a8,&local_1c0,SUB84((double)param_3,0));
  piVar1 = &param_4->AcceleratorDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ChaosInterface::FinishQueryHelper<ChaosInterface::FRaycastHit>
              (&param_4->Hits,&param_4->CurrentBlockingHit,param_4->bHasBlockingHit);
  }
  return;
}

// Sweep<ChaosInterface::FPTSweepHit> @ 14776b4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FPTSweepHit>
          (FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload> *this,
          FImplicitObject *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          float param_4,FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_5,EHitFlags param_6,
          FChaosQueryFilterData *param_7,ICollisionQueryFilterCallbackBase *param_8,
          FQueryDebugParams *param_9)

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
    goto LAB_14776bbd0;
  case '\x01':
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
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
    goto LAB_14776bbd0;
  case '\x03':
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
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
    Chaos::Utilities::
    CastHelper<__anonymous_namespace_::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::Sweep<ChaosInterface::FPTSweepHit>_::__l2::<lambda_1>_>
              ((pTVar15->MObject).Reference,(TRigidTransform<double,3> *)&local_78,&local_178);
    break;
  case '\b':
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
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
LAB_14776bbd0:
    SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
              ((TSphere<double,3> *)param_1,(local_178.__this)->SpatialAcceleration,&local_138,
               local_178.Dir,fVar16,local_178.HitBuffer,EVar17,local_178.QueryFilterData,
               local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'A':
    pTVar9 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar9->MObject).Reference);
    SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar10,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'C':
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    SweepHelper<Chaos::FCapsule,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
              (pFVar12,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'H':
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    SweepHelper<Chaos::FConvex,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
              (pFVar14,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x80:
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar4,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x81:
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar5,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x83:
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar6,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x88:
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FPTSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar7,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
  }
  return;
}

// Sweep<ChaosInterface::FPTSweepHit> @ 14776bce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FPTSweepHit>
          (FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle> *this,
          FImplicitObject *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          float param_4,FSQHitBuffer<ChaosInterface::FPTSweepHit> *param_5,EHitFlags param_6,
          FChaosQueryFilterData *param_7,ICollisionQueryFilterCallbackBase *param_8,
          FQueryDebugParams *param_9)

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
    goto LAB_14776c3d0;
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
    goto LAB_14776c3d0;
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
    Chaos::Utilities::
    CastHelper<__anonymous_namespace_::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::Sweep<ChaosInterface::FPTSweepHit>_::__l2::<lambda_1>_>
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
LAB_14776c3d0:
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

// Sweep<ChaosInterface::FSweepHit> @ 14776c4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::
Sweep<ChaosInterface::FSweepHit>
          (FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload> *this,
          FImplicitObject *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          float param_4,FSQHitBuffer<ChaosInterface::FSweepHit> *param_5,EHitFlags param_6,
          FChaosQueryFilterData *param_7,ICollisionQueryFilterCallbackBase *param_8,
          FQueryDebugParams *param_9)

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
    goto LAB_14776cbd0;
  case '\x01':
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>(param_1);
    SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
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
    goto LAB_14776cbd0;
  case '\x03':
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>(param_1);
    SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
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
    Chaos::Utilities::
    CastHelper<__anonymous_namespace_::FGenericChaosSQAccelerator<FExternalSpatialAccelerationPayload>::Sweep<ChaosInterface::FSweepHit>_::__l2::<lambda_1>_>
              ((pTVar15->MObject).Reference,(TRigidTransform<double,3> *)&local_78,&local_178);
    break;
  case '\b':
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>(param_1);
    SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
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
LAB_14776cbd0:
    SweepHelper<Chaos::TSphere<double,3>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
              ((TSphere<double,3> *)param_1,(local_178.__this)->SpatialAcceleration,&local_138,
               local_178.Dir,fVar16,local_178.HitBuffer,EVar17,local_178.QueryFilterData,
               local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'A':
    pTVar9 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>(param_1);
    pTVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)(pTVar9->MObject).Reference);
    SweepHelper<Chaos::TBox<double,3>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar10,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'C':
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>(param_1);
    pFVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                        ((FImplicitObject *)(pTVar11->MObject).Reference);
    SweepHelper<Chaos::FCapsule,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
              (pFVar12,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 'H':
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>(param_1);
    pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                        ((FImplicitObject *)(pTVar13->MObject).Reference);
    SweepHelper<Chaos::FConvex,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
              (pFVar14,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x80:
    pTVar4 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar4,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x81:
    pTVar5 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar5,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x83:
    pTVar6 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar6,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
    break;
  case 0x88:
    pTVar7 = Chaos::FImplicitObject::
             GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>(param_1);
    SweepHelper<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,ChaosInterface::FSweepHit,FExternalSpatialAccelerationPayload>
              (pTVar7,(local_178.__this)->SpatialAcceleration,&local_138,local_178.Dir,
               *local_178.DeltaMagnitude,local_178.HitBuffer,*local_178.OutputFlags,
               local_178.QueryFilterData,local_178.QueryCallback,local_178.DebugParams);
  }
  return;
}

// Sweep<ChaosInterface::FSweepHit> @ 14776cce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_4A888FDA::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::
Sweep<ChaosInterface::FSweepHit>
          (FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle> *this,
          FImplicitObject *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          float param_4,FSQHitBuffer<ChaosInterface::FSweepHit> *param_5,EHitFlags param_6,
          FChaosQueryFilterData *param_7,ICollisionQueryFilterCallbackBase *param_8,
          FQueryDebugParams *param_9)

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
    goto LAB_14776d3d0;
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
    goto LAB_14776d3d0;
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
    Chaos::Utilities::
    CastHelper<__anonymous_namespace_::FGenericChaosSQAccelerator<Chaos::FAccelerationStructureHandle>::Sweep<ChaosInterface::FSweepHit>_::__l2::<lambda_1>_>
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
LAB_14776d3d0:
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

