// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 27

// StaticClass @ 1498560a0

UClass * __cdecl UPCGCollisionShapeData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCollisionShapeData",
               &Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton,
               StaticRegisterNativesUPCGCollisionShapeData,0x200,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGCollisionShapeData>,
               InternalVTableHelperCtorCaller<UPCGCollisionShapeData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton;
}

// operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_> @ 14985bb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  longlong lVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FImplicitObject *pFVar4;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar1 = *(longlong *)this;
  local_108._s_0.X = *(double *)(lVar1 + 0x130);
  local_108._s_0.Y = *(double *)(lVar1 + 0x138);
  local_108._s_0.Z = *(double *)(lVar1 + 0x140);
  pTVar3 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (*(FPhysicsShapeAdapter_Chaos **)(lVar1 + 0x180),&local_88,
                      (TVector<double> *)&local_108._s_0);
  local_e8 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_e0 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_d8 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_c8 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_c0 = (pTVar3->Translation).XY.m128d_f64[1];
  local_b8 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_b0 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_a8 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_98 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pFVar4 = FPhysicsShapeAdapter_Chaos::GetGeometry
                     (*(FPhysicsShapeAdapter_Chaos **)(*(longlong *)this + 0x180));
  bVar2 = Chaos::OverlapQuery<Chaos::TBox<double,3>_>
                    (pFVar4,(TRigidTransform<double,3> *)&local_e8,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 14985bdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  longlong lVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FImplicitObject *pFVar4;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar1 = *(longlong *)this;
  local_108._s_0.X = *(double *)(lVar1 + 0x130);
  local_108._s_0.Y = *(double *)(lVar1 + 0x138);
  local_108._s_0.Z = *(double *)(lVar1 + 0x140);
  pTVar3 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (*(FPhysicsShapeAdapter_Chaos **)(lVar1 + 0x180),&local_88,
                      (TVector<double> *)&local_108._s_0);
  local_e8 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_e0 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_d8 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_c8 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_c0 = (pTVar3->Translation).XY.m128d_f64[1];
  local_b8 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_b0 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_a8 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_98 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pFVar4 = FPhysicsShapeAdapter_Chaos::GetGeometry
                     (*(FPhysicsShapeAdapter_Chaos **)(*(longlong *)this + 0x180));
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                    (pFVar4,(TRigidTransform<double,3> *)&local_e8,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 14985c030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  longlong lVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FImplicitObject *pFVar4;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar1 = *(longlong *)this;
  local_108._s_0.X = *(double *)(lVar1 + 0x130);
  local_108._s_0.Y = *(double *)(lVar1 + 0x138);
  local_108._s_0.Z = *(double *)(lVar1 + 0x140);
  pTVar3 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (*(FPhysicsShapeAdapter_Chaos **)(lVar1 + 0x180),&local_88,
                      (TVector<double> *)&local_108._s_0);
  local_e8 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_e0 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_d8 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_c8 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_c0 = (pTVar3->Translation).XY.m128d_f64[1];
  local_b8 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_b0 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_a8 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_98 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pFVar4 = FPhysicsShapeAdapter_Chaos::GetGeometry
                     (*(FPhysicsShapeAdapter_Chaos **)(*(longlong *)this + 0x180));
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                    (pFVar4,(TRigidTransform<double,3> *)&local_e8,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_> @ 14985c2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  longlong lVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FImplicitObject *pFVar4;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar1 = *(longlong *)this;
  local_108._s_0.X = *(double *)(lVar1 + 0x130);
  local_108._s_0.Y = *(double *)(lVar1 + 0x138);
  local_108._s_0.Z = *(double *)(lVar1 + 0x140);
  pTVar3 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (*(FPhysicsShapeAdapter_Chaos **)(lVar1 + 0x180),&local_88,
                      (TVector<double> *)&local_108._s_0);
  local_e8 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_e0 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_d8 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_c8 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_c0 = (pTVar3->Translation).XY.m128d_f64[1];
  local_b8 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_b0 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_a8 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_98 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pFVar4 = FPhysicsShapeAdapter_Chaos::GetGeometry
                     (*(FPhysicsShapeAdapter_Chaos **)(*(longlong *)this + 0x180));
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                    (pFVar4,(TRigidTransform<double,3> *)&local_e8,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_> @ 14985c510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  longlong lVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FImplicitObject *pFVar4;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar1 = *(longlong *)this;
  local_108._s_0.X = *(double *)(lVar1 + 0x130);
  local_108._s_0.Y = *(double *)(lVar1 + 0x138);
  local_108._s_0.Z = *(double *)(lVar1 + 0x140);
  pTVar3 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (*(FPhysicsShapeAdapter_Chaos **)(lVar1 + 0x180),&local_88,
                      (TVector<double> *)&local_108._s_0);
  local_e8 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_e0 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_d8 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_c8 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_c0 = (pTVar3->Translation).XY.m128d_f64[1];
  local_b8 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_b0 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_a8 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_98 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pFVar4 = FPhysicsShapeAdapter_Chaos::GetGeometry
                     (*(FPhysicsShapeAdapter_Chaos **)(*(longlong *)this + 0x180));
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                    (pFVar4,(TRigidTransform<double,3> *)&local_e8,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar2;
}

// operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_> @ 14985c780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  longlong lVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FImplicitObject *pFVar4;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar1 = *(longlong *)this;
  local_108._s_0.X = *(double *)(lVar1 + 0x130);
  local_108._s_0.Y = *(double *)(lVar1 + 0x138);
  local_108._s_0.Z = *(double *)(lVar1 + 0x140);
  pTVar3 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (*(FPhysicsShapeAdapter_Chaos **)(lVar1 + 0x180),&local_88,
                      (TVector<double> *)&local_108._s_0);
  local_e8 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_e0 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_d8 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_c8 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_c0 = (pTVar3->Translation).XY.m128d_f64[1];
  local_b8 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_b0 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_a8 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_98 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pFVar4 = FPhysicsShapeAdapter_Chaos::GetGeometry
                     (*(FPhysicsShapeAdapter_Chaos **)(*(longlong *)this + 0x180));
  bVar2 = Chaos::OverlapQuery<Chaos::TSphere<double,3>_>
                    (pFVar4,(TRigidTransform<double,3> *)&local_e8,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar2;
}

// operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_> @ 14985c9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
          (void *this,FCapsule *param_1,TRigidTransform<double,3> *param_2)

{
  longlong lVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FImplicitObject *pFVar4;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar1 = *(longlong *)this;
  local_108._s_0.X = *(double *)(lVar1 + 0x130);
  local_108._s_0.Y = *(double *)(lVar1 + 0x138);
  local_108._s_0.Z = *(double *)(lVar1 + 0x140);
  pTVar3 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (*(FPhysicsShapeAdapter_Chaos **)(lVar1 + 0x180),&local_88,
                      (TVector<double> *)&local_108._s_0);
  local_e8 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_e0 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_d8 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_c8 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_c0 = (pTVar3->Translation).XY.m128d_f64[1];
  local_b8 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_b0 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_a8 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_98 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pFVar4 = FPhysicsShapeAdapter_Chaos::GetGeometry
                     (*(FPhysicsShapeAdapter_Chaos **)(*(longlong *)this + 0x180));
  bVar2 = Chaos::OverlapQuery<Chaos::FCapsule>
                    (pFVar4,(TRigidTransform<double,3> *)&local_e8,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar2;
}

// operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_> @ 14985cc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
          (void *this,FConvex *param_1,TRigidTransform<double,3> *param_2)

{
  longlong lVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  FImplicitObject *pFVar4;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar1 = *(longlong *)this;
  local_108._s_0.X = *(double *)(lVar1 + 0x130);
  local_108._s_0.Y = *(double *)(lVar1 + 0x138);
  local_108._s_0.Z = *(double *)(lVar1 + 0x140);
  pTVar3 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (*(FPhysicsShapeAdapter_Chaos **)(lVar1 + 0x180),&local_88,
                      (TVector<double> *)&local_108._s_0);
  local_e8 = (pTVar3->Rotation).XY.m128d_f64[0];
  dStack_e0 = (pTVar3->Rotation).XY.m128d_f64[1];
  local_d8 = (pTVar3->Rotation).ZW.m128d_f64[0];
  dStack_d0 = (pTVar3->Rotation).ZW.m128d_f64[1];
  local_c8 = (pTVar3->Translation).XY.m128d_f64[0];
  dStack_c0 = (pTVar3->Translation).XY.m128d_f64[1];
  local_b8 = (pTVar3->Translation).ZW.m128d_f64[0];
  dStack_b0 = (pTVar3->Translation).ZW.m128d_f64[1];
  local_a8 = (pTVar3->Scale3D).XY.m128d_f64[0];
  dStack_a0 = (pTVar3->Scale3D).XY.m128d_f64[1];
  local_98 = (pTVar3->Scale3D).ZW.m128d_f64[0];
  dStack_90 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  pFVar4 = FPhysicsShapeAdapter_Chaos::GetGeometry
                     (*(FPhysicsShapeAdapter_Chaos **)(*(longlong *)this + 0x180));
  bVar2 = Chaos::OverlapQuery<Chaos::FConvex>
                    (pFVar4,(TRigidTransform<double,3> *)&local_e8,param_1,param_2,0.0,
                     (FMTDInfo *)0x0);
  return bVar2;
}

// UPCGCollisionShapeData @ 14988d910

UPCGCollisionShapeData * __thiscall
UPCGCollisionShapeData::UPCGCollisionShapeData(UPCGCollisionShapeData *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGCollisionShapeData__6B_;
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
  (this->Shape).ShapeType = Line;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->ShapeAdapter).Ptr = (FPhysicsShapeAdapter_Chaos *)0x0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedStrictBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).IsValid = '\0';
  (this->CachedStrictBounds).Pad[0] = '\0';
  (this->CachedStrictBounds).Pad[1] = '\0';
  (this->CachedStrictBounds).Pad[2] = '\0';
  (this->CachedStrictBounds).Pad[3] = '\0';
  (this->CachedStrictBounds).Pad[4] = '\0';
  (this->CachedStrictBounds).Pad[5] = '\0';
  (this->CachedStrictBounds).Pad[6] = '\0';
  return this;
}

// UPCGCollisionShapeData @ 14988da30

UPCGCollisionShapeData * __thiscall
UPCGCollisionShapeData::UPCGCollisionShapeData
          (UPCGCollisionShapeData *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGCollisionShapeData__6B_;
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
  (this->Shape).ShapeType = Line;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->ShapeAdapter).Ptr = (FPhysicsShapeAdapter_Chaos *)0x0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedStrictBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).IsValid = '\0';
  (this->CachedStrictBounds).Pad[0] = '\0';
  (this->CachedStrictBounds).Pad[1] = '\0';
  (this->CachedStrictBounds).Pad[2] = '\0';
  (this->CachedStrictBounds).Pad[3] = '\0';
  (this->CachedStrictBounds).Pad[4] = '\0';
  (this->CachedStrictBounds).Pad[5] = '\0';
  (this->CachedStrictBounds).Pad[6] = '\0';
  return this;
}

// ~UPCGCollisionShapeData @ 149891420

void __thiscall UPCGCollisionShapeData::~UPCGCollisionShapeData(UPCGCollisionShapeData *this)

{
  FPhysicsShapeAdapter_Chaos *this_00;
  
  *(undefined ***)this = &___7UPCGCollisionShapeData__6B_;
  this_00 = (this->ShapeAdapter).Ptr;
  if (this_00 != (FPhysicsShapeAdapter_Chaos *)0x0) {
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(this_00);
    ::operator_delete(this_00,0x30);
  }
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989d870

void __thiscall
UPCGCollisionShapeData::AddToCrc(UPCGCollisionShapeData *this,FArchiveCrc32 *param_1,bool param_2)

{
  FCollisionShape_u_4 *pFVar1;
  Type TVar2;
  longlong *plVar3;
  UClass *this_00;
  float *pfVar4;
  Type local_res8 [2];
  undefined1 local_res10 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if (*(UPCGMetadata **)&this->field_0x38 != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone(*(UPCGMetadata **)&this->field_0x38);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res10);
  }
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  UE::Math::operator<<((FArchive *)param_1,&this->Transform);
  plVar3 = (longlong *)param_1->_padding_;
  local_res8[0] = (this->Shape).ShapeType;
  if ((Type *)plVar3[1] < (Type *)*plVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(Type *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  pFVar1 = &(this->Shape).field1_0x4;
  TVar2 = (this->Shape).ShapeType;
  if (TVar2 == Sphere) {
    pfVar4 = *(float **)param_1->_padding_;
    if ((float *)((undefined8 *)param_1->_padding_)[1] < pfVar4 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,pFVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&pFVar1->Sphere);
      }
    }
    else {
      (pFVar1->Box).HalfExtentX = *pfVar4;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
  }
  else {
    pfVar4 = &(this->Shape).field1_0x4.Box.HalfExtentY;
    if (TVar2 == Capsule) {
      ::operator<<((FArchive *)param_1,&(pFVar1->Sphere).Radius);
    }
    else {
      ::operator<<((FArchive *)param_1,&(pFVar1->Sphere).Radius);
      ::operator<<((FArchive *)param_1,pfVar4);
      pfVar4 = &(this->Shape).field1_0x4.Box.HalfExtentZ;
    }
    ::operator<<((FArchive *)param_1,pfVar4);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// CopyInternal @ 1498a3720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGCollisionShapeData::CopyInternal(UPCGCollisionShapeData *this,FPCGContext *param_1)

{
  TUniquePtr<FPhysicsShapeAdapter_Chaos,TDefaultDelete<FPhysicsShapeAdapter_Chaos>_> *pTVar1;
  FPhysicsShapeAdapter_Chaos *this_00;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  bool bVar12;
  UPCGSpatialData *pUVar13;
  UObject *pUVar14;
  UPCGCollisionShapeData *pUVar15;
  FPhysicsShapeAdapter_Chaos *pFVar16;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGCollisionShapeData *local_res18;
  undefined8 local_48 [2];
  TQuat<double> local_38;
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar12 = IsInGameThread();
    if (!bVar12) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4331830188552749225>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                          ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        pUVar13 = (UPCGSpatialData *)(*pcVar2)();
        return pUVar13;
      }
    }
LAB_1498a376d:
    pUVar14 = GetTransientPackageAsObject();
    pUVar15 = NewObject<UPCGCollisionShapeData>(pUVar14);
  }
  else {
    bVar12 = IsInGameThread();
    if (bVar12) goto LAB_1498a376d;
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4331830188552749348>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                          ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        pUVar13 = (UPCGSpatialData *)(*pcVar2)();
        return pUVar13;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar14 = GetTransientPackageAsObject();
    pUVar15 = NewObject<UPCGCollisionShapeData>(pUVar14);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar15 == (UPCGCollisionShapeData *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                          ,0x12a,L"");
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        pUVar13 = (UPCGSpatialData *)(*pcVar2)();
        return pUVar13;
      }
    }
    local_res18 = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UPCGCollisionShapeData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
  }
  dVar3 = (this->Transform).Rotation.XY.m128d_f64[1];
  (pUVar15->Transform).Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  (pUVar15->Transform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (this->Transform).Rotation.ZW.m128d_f64[1];
  (pUVar15->Transform).Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
  (pUVar15->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (this->Transform).Translation.XY.m128d_f64[1];
  (pUVar15->Transform).Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
  (pUVar15->Transform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (this->Transform).Translation.ZW.m128d_f64[1];
  (pUVar15->Transform).Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
  (pUVar15->Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (this->Transform).Scale3D.XY.m128d_f64[1];
  (pUVar15->Transform).Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
  (pUVar15->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  (pUVar15->Transform).Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
  (pUVar15->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  uVar4 = *(undefined8 *)((longlong)&(this->Shape).field1_0x4 + 4);
  *(undefined8 *)&pUVar15->Shape = *(undefined8 *)&this->Shape;
  *(undefined8 *)((longlong)&(pUVar15->Shape).field1_0x4 + 4) = uVar4;
  local_38.X = (pUVar15->Transform).Rotation.XY.m128d_f64[0];
  local_38.Y = (pUVar15->Transform).Rotation.XY.m128d_f64[1];
  local_38.Z = (pUVar15->Transform).Rotation.ZW.m128d_f64[0];
  local_38.W = (pUVar15->Transform).Rotation.ZW.m128d_f64[1];
  pFVar16 = ::operator_new(0x30);
  if (pFVar16 == (FPhysicsShapeAdapter_Chaos *)0x0) {
    pFVar16 = (FPhysicsShapeAdapter_Chaos *)0x0;
  }
  else {
    pFVar16 = FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
                        (pFVar16,&local_38,&pUVar15->Shape);
  }
  pTVar1 = &pUVar15->ShapeAdapter;
  if (pTVar1 == (TUniquePtr<FPhysicsShapeAdapter_Chaos,TDefaultDelete<FPhysicsShapeAdapter_Chaos>_>
                 *)local_48) {
    if (pFVar16 == (FPhysicsShapeAdapter_Chaos *)0x0) goto LAB_1498a394c;
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(pFVar16);
  }
  else {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar16;
    if (this_00 == (FPhysicsShapeAdapter_Chaos *)0x0) goto LAB_1498a394c;
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(this_00);
    pFVar16 = this_00;
  }
  ::operator_delete(pFVar16,0x30);
LAB_1498a394c:
  dVar3 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  (pUVar15->CachedBounds).Min.field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (pUVar15->CachedBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (pUVar15->CachedBounds).Min.field0_0x0._s_0.Z = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  (pUVar15->CachedBounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (pUVar15->CachedBounds).Max.field0_0x0._s_0.Y = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  (pUVar15->CachedBounds).Max.field0_0x0._s_0.Z = dVar3;
  uVar5 = (this->CachedBounds).Pad[0];
  uVar6 = (this->CachedBounds).Pad[1];
  uVar7 = (this->CachedBounds).Pad[2];
  uVar8 = (this->CachedBounds).Pad[3];
  uVar9 = (this->CachedBounds).Pad[4];
  uVar10 = (this->CachedBounds).Pad[5];
  uVar11 = (this->CachedBounds).Pad[6];
  (pUVar15->CachedBounds).IsValid = (this->CachedBounds).IsValid;
  (pUVar15->CachedBounds).Pad[0] = uVar5;
  (pUVar15->CachedBounds).Pad[1] = uVar6;
  (pUVar15->CachedBounds).Pad[2] = uVar7;
  (pUVar15->CachedBounds).Pad[3] = uVar8;
  (pUVar15->CachedBounds).Pad[4] = uVar9;
  (pUVar15->CachedBounds).Pad[5] = uVar10;
  (pUVar15->CachedBounds).Pad[6] = uVar11;
  dVar3 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  (pUVar15->CachedStrictBounds).Min.field0_0x0._s_0.X =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.X;
  (pUVar15->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (pUVar15->CachedStrictBounds).Min.field0_0x0._s_0.Z =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  (pUVar15->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (pUVar15->CachedStrictBounds).Max.field0_0x0._s_0.Y =
       (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  (pUVar15->CachedStrictBounds).Max.field0_0x0._s_0.Z = dVar3;
  uVar5 = (this->CachedStrictBounds).Pad[0];
  uVar6 = (this->CachedStrictBounds).Pad[1];
  uVar7 = (this->CachedStrictBounds).Pad[2];
  uVar8 = (this->CachedStrictBounds).Pad[3];
  uVar9 = (this->CachedStrictBounds).Pad[4];
  uVar10 = (this->CachedStrictBounds).Pad[5];
  uVar11 = (this->CachedStrictBounds).Pad[6];
  (pUVar15->CachedStrictBounds).IsValid = (this->CachedStrictBounds).IsValid;
  (pUVar15->CachedStrictBounds).Pad[0] = uVar5;
  (pUVar15->CachedStrictBounds).Pad[1] = uVar6;
  (pUVar15->CachedStrictBounds).Pad[2] = uVar7;
  (pUVar15->CachedStrictBounds).Pad[3] = uVar8;
  (pUVar15->CachedStrictBounds).Pad[4] = uVar9;
  (pUVar15->CachedStrictBounds).Pad[5] = uVar10;
  (pUVar15->CachedStrictBounds).Pad[6] = uVar11;
  return (UPCGSpatialData *)pUVar15;
}

// CreateBasePointData @ 1498a86f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGCollisionShapeData::CreateBasePointData
          (UPCGCollisionShapeData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2)

{
  UPCGBasePointData *pUVar1;
  undefined1 auStackY_b8 [32];
  UObject *local_88 [2];
  TVector<double>_u_0 local_78;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_60 = 0;
  local_88[0] = *(UObject **)param_2.Class.field0_0x0;
  local_78._s_0.X = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.X;
  local_78._s_0.Y = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Y;
  local_78._s_0.Z = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Z;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_27 = 0;
  local_23 = 0;
  local_21 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_88[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_88[0]);
  }
  pUVar1 = PCGVolumeSampler::SampleVolume
                     (param_1,(TSubclassOf<UPCGBasePointData>)local_88,
                      (FVolumeSamplerParams *)&local_78._s_0,(UPCGSpatialData *)this,
                      (UPCGSpatialData *)0x0);
  if ((pUVar1 != (UPCGBasePointData *)0x0) && (5 < (byte)LogPCG._0_1_)) {
    (**(code **)(pUVar1->_padding_ + 0x488))(pUVar1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return pUVar1;
}

// CreatePointArrayData @ 1498ad6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGCollisionShapeData::CreatePointArrayData
          (UPCGCollisionShapeData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  code *pcVar2;
  UPCGPointArrayData *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId107,"UPCGCollisionShapeData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionShapeData.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  }
  pcVar2 = *(code **)(*(longlong *)this + 0x498);
  local_res8 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = (UPCGPointArrayData *)(*pcVar2)(this,param_1,&local_res8);
  if (pUVar3 == (UPCGPointArrayData *)0x0) {
    pUVar3 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar4 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UPCGPointArrayData>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar3;
}

// CreatePointData @ 1498ae830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGCollisionShapeData::CreatePointData(UPCGCollisionShapeData *this,FPCGContext *param_1)

{
  int iVar1;
  code *pcVar2;
  UPCGPointData *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId100,"UPCGCollisionShapeData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionShapeData.cpp"
               ,100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId100);
  }
  pcVar2 = *(code **)(*(longlong *)this + 0x498);
  local_res8 = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = (UPCGPointData *)(*pcVar2)(this,param_1,&local_res8);
  if (pUVar3 == (UPCGPointData *)0x0) {
    pUVar3 = (UPCGPointData *)0x0;
  }
  else {
    pUVar4 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UPCGPointData>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar3;
}

// GetBounds @ 1498b5560

TBox<double> * __thiscall
UPCGCollisionShapeData::GetBounds(UPCGCollisionShapeData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->CachedBounds).IsValid;
  uVar6 = (this->CachedBounds).Pad[0];
  uVar7 = (this->CachedBounds).Pad[1];
  uVar8 = (this->CachedBounds).Pad[2];
  uVar9 = (this->CachedBounds).Pad[3];
  uVar10 = (this->CachedBounds).Pad[4];
  uVar11 = (this->CachedBounds).Pad[5];
  uVar12 = (this->CachedBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetDataType @ 1498b8390

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGCollisionShapeData::GetDataType(UPCGCollisionShapeData *this)

{
  return Primitive;
}

// GetDataTypeId @ 1498b8600

FPCGDataTypeBaseId * __thiscall UPCGCollisionShapeData::GetDataTypeId(UPCGCollisionShapeData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive,(UObject *)pUVar3,
                         L"PCGDataTypeInfoPrimitive");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14989f4f3;
  }
  else {
LAB_14989f4f3:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14989f54a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14989f54c;
  }
LAB_14989f54a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_14989f54c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
          ::__l2::Id;
}

// GetDimension @ 1498b9960

int __thiscall UPCGCollisionShapeData::GetDimension(UPCGCollisionShapeData *this)

{
  return 3;
}

// GetPrivateStaticClass @ 1498bc050

UClass * __cdecl UPCGCollisionShapeData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCollisionShapeData",
               &Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton,
               StaticRegisterNativesUPCGCollisionShapeData,0x200,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGCollisionShapeData>,
               InternalVTableHelperCtorCaller<UPCGCollisionShapeData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCollisionShapeData.InnerSingleton;
}

// GetStrictBounds @ 1498c7510

TBox<double> * __thiscall
UPCGCollisionShapeData::GetStrictBounds
          (UPCGCollisionShapeData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedStrictBounds).Min.field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->CachedStrictBounds).IsValid;
  uVar6 = (this->CachedStrictBounds).Pad[0];
  uVar7 = (this->CachedStrictBounds).Pad[1];
  uVar8 = (this->CachedStrictBounds).Pad[2];
  uVar9 = (this->CachedStrictBounds).Pad[3];
  uVar10 = (this->CachedStrictBounds).Pad[4];
  uVar11 = (this->CachedStrictBounds).Pad[5];
  uVar12 = (this->CachedStrictBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// Initialize @ 1498cb280

void __thiscall
UPCGCollisionShapeData::Initialize(UPCGCollisionShapeData *this,UShapeComponent *param_1)

{
  TUniquePtr<FPhysicsShapeAdapter_Chaos,TDefaultDelete<FPhysicsShapeAdapter_Chaos>_> *pTVar1;
  int iVar2;
  FPhysicsShapeAdapter_Chaos *this_00;
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  bool bVar18;
  UClass *pUVar19;
  undefined8 *puVar20;
  FPhysicsShapeAdapter_Chaos *pFVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  undefined8 local_68;
  undefined1 local_60 [24];
  TQuat<double> local_48;
  undefined7 uStack_17;
  
  if (param_1 == (UShapeComponent *)0x0) {
LAB_1498cb306:
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InComponent && IsSupported(InComponent)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionShapeData.cpp"
                        ,0x15,L"");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar19 = Z_Construct_UClass_UBoxComponent_NoRegister();
    iVar2 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar19->_padding_)) {
      pUVar19 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
      iVar2 = (int)pUVar19->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar19->_padding_)) {
        pUVar19 = Z_Construct_UClass_USphereComponent_NoRegister();
        iVar2 = (int)pUVar19->_padding_;
        if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar19->_padding_)) goto LAB_1498cb306;
      }
    }
  }
  puVar20 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x8b8))(param_1,local_60,0);
  uVar17 = puVar20[1];
  *(undefined8 *)&this->Shape = *puVar20;
  *(undefined8 *)((longlong)&(this->Shape).field1_0x4 + 4) = uVar17;
  dVar4 = *(double *)&param_1->field_0x1f8;
  (this->Transform).Rotation.XY.m128d_f64[0] = *(double *)&param_1->field_0x1f0;
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1->field_0x208;
  (this->Transform).Rotation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x200;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1->field_0x218;
  (this->Transform).Translation.XY.m128d_f64[0] = *(double *)&param_1->field_0x210;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1->field_0x228;
  (this->Transform).Translation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x220;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1->field_0x238;
  (this->Transform).Scale3D.XY.m128d_f64[0] = *(double *)&param_1->field_0x230;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1->field_0x248;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)&param_1->field_0x240;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar4;
  local_48.X = (this->Transform).Rotation.XY.m128d_f64[0];
  local_48.Y = (this->Transform).Rotation.XY.m128d_f64[1];
  local_48.Z = (this->Transform).Rotation.ZW.m128d_f64[0];
  local_48.W = (this->Transform).Rotation.ZW.m128d_f64[1];
  pFVar21 = ::operator_new(0x30);
  if (pFVar21 == (FPhysicsShapeAdapter_Chaos *)0x0) {
    pFVar21 = (FPhysicsShapeAdapter_Chaos *)0x0;
  }
  else {
    pFVar21 = FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos(pFVar21,&local_48,&this->Shape)
    ;
  }
  pTVar1 = &this->ShapeAdapter;
  if (pTVar1 == (TUniquePtr<FPhysicsShapeAdapter_Chaos,TDefaultDelete<FPhysicsShapeAdapter_Chaos>_>
                 *)&local_68) {
    if (pFVar21 == (FPhysicsShapeAdapter_Chaos *)0x0) goto LAB_1498cb42b;
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(pFVar21);
  }
  else {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar21;
    if (this_00 == (FPhysicsShapeAdapter_Chaos *)0x0) goto LAB_1498cb42b;
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(this_00);
    pFVar21 = this_00;
  }
  ::operator_delete(pFVar21,0x30);
LAB_1498cb42b:
  dVar10 = *(double *)&param_1->field_0x110 - *(double *)&param_1->field_0x128;
  dVar4 = *(double *)&param_1->field_0x118 - *(double *)&param_1->field_0x130;
  dVar13 = *(double *)&param_1->field_0x118;
  dVar14 = *(double *)&param_1->field_0x120;
  dVar7 = *(double *)&param_1->field_0x120 - *(double *)&param_1->field_0x138;
  dVar26 = *(double *)&param_1->field_0x110 + *(double *)&param_1->field_0x128;
  dVar15 = *(double *)&param_1->field_0x130;
  dVar16 = *(double *)&param_1->field_0x138;
  uVar22 = SUB84(dVar4,0);
  uVar23 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar8._8_4_ = uVar22;
  auVar8._0_8_ = dVar10;
  auVar8._12_4_ = uVar23;
  *(undefined1 (*) [16])&(this->CachedBounds).Min.field0_0x0 = auVar8;
  auVar9._8_4_ = uVar22;
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = uVar23;
  *(undefined1 (*) [16])&(this->CachedStrictBounds).Min.field0_0x0 = auVar9;
  dVar13 = dVar13 + dVar15;
  dVar14 = dVar14 + dVar16;
  uVar24 = SUB84(dVar14,0);
  uVar25 = (undefined4)((ulonglong)dVar14 >> 0x20);
  uVar22 = SUB84(dVar26,0);
  uVar23 = (undefined4)((ulonglong)dVar26 >> 0x20);
  auVar5._8_4_ = uVar22;
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = uVar23;
  *(undefined1 (*) [16])((longlong)&(this->CachedBounds).Min.field0_0x0 + 0x10) = auVar5;
  auVar6._8_4_ = uVar22;
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = uVar23;
  *(undefined1 (*) [16])((longlong)&(this->CachedStrictBounds).Min.field0_0x0 + 0x10) = auVar6;
  auVar11._8_4_ = uVar24;
  auVar11._0_8_ = dVar13;
  auVar11._12_4_ = uVar25;
  *(undefined1 (*) [16])((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) = auVar11;
  auVar12._8_4_ = uVar24;
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = uVar25;
  *(undefined1 (*) [16])((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 8) = auVar12;
  (this->CachedBounds).IsValid = 1;
  (this->CachedBounds).Pad[0] = (char)uStack_17;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_17 >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_17 >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_17 >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_17 >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_17 >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_17 >> 0x30);
  (this->CachedStrictBounds).IsValid = 1;
  (this->CachedStrictBounds).Pad[0] = (char)uStack_17;
  (this->CachedStrictBounds).Pad[1] = (char)((uint7)uStack_17 >> 8);
  (this->CachedStrictBounds).Pad[2] = (char)((uint7)uStack_17 >> 0x10);
  (this->CachedStrictBounds).Pad[3] = (char)((uint7)uStack_17 >> 0x18);
  (this->CachedStrictBounds).Pad[4] = (char)((uint7)uStack_17 >> 0x20);
  (this->CachedStrictBounds).Pad[5] = (char)((uint7)uStack_17 >> 0x28);
  (this->CachedStrictBounds).Pad[6] = (char)((uint7)uStack_17 >> 0x30);
  return;
}

// IsSupported @ 1498d0f90

bool __cdecl UPCGCollisionShapeData::IsSupported(UShapeComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 == (UShapeComponent *)0x0) {
    return false;
  }
  pUVar2 = Z_Construct_UClass_UBoxComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_USphereComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
        return false;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_) {
        return false;
      }
    }
  }
  return true;
}

// SamplePoint @ 1498d8030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGCollisionShapeData::SamplePoint
          (UPCGCollisionShapeData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  code *pcVar1;
  double dVar2;
  uchar uVar3;
  bool bVar4;
  undefined1 uVar5;
  TTransform<double> *pTVar6;
  FConvex *pFVar7;
  TBox<double,3> *pTVar8;
  FCapsule *pFVar9;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar10;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar11;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar12;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar13;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar14;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar15;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar16;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar17;
  TImplicitObjectTransformed<double,3,1> *pTVar18;
  undefined1 auStack_268 [32];
  <lambda_1> local_248;
  FCollisionShape local_240;
  TVector<double>_u_0 local_230;
  TQuat<double> local_218;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  FPhysicsShapeAdapter_Chaos local_1d8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_1f8 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_1f0 = (param_1->Scale3D).XY.m128d_f64[1];
  local_1e8 = (param_1->Scale3D).ZW.m128d_f64[0];
  local_240.ShapeType = Box;
  local_240.field1_0x4.Box.HalfExtentX =
       (float)(((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
               __real_3fe0000000000000 * local_1f8);
  local_240.field1_0x4.Box.HalfExtentY =
       (float)(((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
               __real_3fe0000000000000 * dStack_1f0);
  local_240.field1_0x4.Box.HalfExtentZ =
       (float)(((param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z) *
               __real_3fe0000000000000 * local_1e8);
  local_218.X = (param_1->Rotation).XY.m128d_f64[0];
  local_218.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_218.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_218.W = (param_1->Rotation).ZW.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos(&local_1d8,&local_218,&local_240);
  local_230._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_230._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_230._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  local_248.__this = this;
  pTVar6 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (&local_1d8,&local_88,(TVector<double> *)&local_230._s_0);
  local_1a8.Rotation.XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
  local_1a8.Rotation.XY.m128d_f64[1] = (pTVar6->Rotation).XY.m128d_f64[1];
  local_1a8.Rotation.ZW.m128d_f64[0] = (pTVar6->Rotation).ZW.m128d_f64[0];
  local_1a8.Rotation.ZW.m128d_f64[1] = (pTVar6->Rotation).ZW.m128d_f64[1];
  local_1a8.Translation.XY.m128d_f64[0] = (pTVar6->Translation).XY.m128d_f64[0];
  local_1a8.Translation.XY.m128d_f64[1] = (pTVar6->Translation).XY.m128d_f64[1];
  local_1a8.Translation.ZW.m128d_f64[0] = (pTVar6->Translation).ZW.m128d_f64[0];
  local_1a8.Translation.ZW.m128d_f64[1] = (pTVar6->Translation).ZW.m128d_f64[1];
  local_1a8.Scale3D.XY.m128d_f64[0] = (pTVar6->Scale3D).XY.m128d_f64[0];
  local_1a8.Scale3D.XY.m128d_f64[1] = (pTVar6->Scale3D).XY.m128d_f64[1];
  local_1a8.Scale3D.ZW.m128d_f64[0] = (pTVar6->Scale3D).ZW.m128d_f64[0];
  local_1a8.Scale3D.ZW.m128d_f64[1] = (pTVar6->Scale3D).ZW.m128d_f64[1];
  pFVar7 = (FConvex *)FPhysicsShapeAdapter_Chaos::GetGeometry(&local_1d8);
  uVar3 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar7);
  switch(uVar3) {
  case '\x01':
    goto LAB_1498d81ad;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  case '\0':
    if (((uchar)pFVar7->_padding_ != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    goto LAB_1498d83da;
  case '\x03':
    goto LAB_1498d81cb;
  case '\x04':
    pTVar18 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        ((FImplicitObject *)pFVar7);
    local_148.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_148.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_148.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_148.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_148.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_148,(TTransform<double> *)&pTVar18->MTransform,&local_1a8);
    local_e8 = local_148.Rotation.XY.m128d_f64[0];
    dStack_e0 = local_148.Rotation.XY.m128d_f64[1];
    local_d8 = local_148.Rotation.ZW.m128d_f64[0];
    dStack_d0 = local_148.Rotation.ZW.m128d_f64[1];
    local_c8 = local_148.Translation.XY.m128d_f64[0];
    dStack_c0 = local_148.Translation.XY.m128d_f64[1];
    local_b8 = local_148.Translation.ZW.m128d_f64[0];
    dStack_b0 = local_148.Translation.ZW.m128d_f64[1];
    local_a8 = local_148.Scale3D.XY.m128d_f64[0];
    dStack_a0 = local_148.Scale3D.XY.m128d_f64[1];
    local_98 = local_148.Scale3D.ZW.m128d_f64[0];
    dStack_90 = local_148.Scale3D.ZW.m128d_f64[1];
    bVar4 = Chaos::Utilities::CastHelper<_UPCGCollisionShapeData::SamplePoint_::__l3::<lambda_1>_>
                      ((pTVar18->MObject).Reference,(TRigidTransform<double,3> *)&local_e8,
                       &local_248);
    break;
  case '\b':
    goto LAB_1498d81e9;
  case '@':
    pTVar14 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                        ((FImplicitObject *)pFVar7);
    pFVar7 = (FConvex *)
             Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                       ((FImplicitObject *)(pTVar14->MObject).Reference);
LAB_1498d83da:
    bVar4 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                      (&local_248,(TSphere<double,3> *)pFVar7,
                       (TRigidTransform<double,3> *)&local_1a8);
    break;
  case 'A':
    pTVar15 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                        ((FImplicitObject *)pFVar7);
    pFVar7 = (FConvex *)(pTVar15->MObject).Reference;
LAB_1498d81ad:
    pTVar8 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                       ((FImplicitObject *)pFVar7);
    bVar4 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                      (&local_248,pTVar8,(TRigidTransform<double,3> *)&local_1a8);
    break;
  case 'C':
    pTVar16 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        ((FImplicitObject *)pFVar7);
    pFVar7 = (FConvex *)(pTVar16->MObject).Reference;
LAB_1498d81cb:
    pFVar9 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>((FImplicitObject *)pFVar7);
    bVar4 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                      (&local_248,pFVar9,(TRigidTransform<double,3> *)&local_1a8);
    break;
  case 'H':
    pTVar17 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        ((FImplicitObject *)pFVar7);
    pFVar7 = (pTVar17->MObject).Reference;
LAB_1498d81e9:
    pFVar7 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>((FImplicitObject *)pFVar7);
    bVar4 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                      (&local_248,pFVar7,(TRigidTransform<double,3> *)&local_1a8);
    break;
  case 0x80:
    pTVar10 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                        ((FImplicitObject *)pFVar7);
    bVar4 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_248,pTVar10,(TRigidTransform<double,3> *)&local_1a8);
    break;
  case 0x81:
    pTVar11 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                        ((FImplicitObject *)pFVar7);
    bVar4 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_248,pTVar11,(TRigidTransform<double,3> *)&local_1a8);
    break;
  case 0x83:
    pTVar12 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                        ((FImplicitObject *)pFVar7);
    bVar4 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_248,pTVar12,(TRigidTransform<double,3> *)&local_1a8);
    break;
  case 0x88:
    pTVar13 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        ((FImplicitObject *)pFVar7);
    bVar4 = `UPCGCollisionShapeData::SamplePoint'::__l3::<lambda_1>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_248,pTVar13,(TRigidTransform<double,3> *)&local_1a8);
  }
  if (bVar4 != false) {
    FPCGPoint::FPCGPoint(param_3,param_1,__real_3f800000,0);
    dVar2 = (param_2->Min).field0_0x0._s_0.Y;
    (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
    (param_3->BoundsMin).field0_0x0._s_0.Y = dVar2;
    (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
    dVar2 = (param_2->Max).field0_0x0._s_0.Y;
    (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
    (param_3->BoundsMax).field0_0x0._s_0.Y = dVar2;
    (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_1d8);
  return bVar4 != false;
}

// StaticRegisterNativesUPCGCollisionShapeData @ 1498f67f0

void __cdecl UPCGCollisionShapeData::StaticRegisterNativesUPCGCollisionShapeData(void)

{
  return;
}

