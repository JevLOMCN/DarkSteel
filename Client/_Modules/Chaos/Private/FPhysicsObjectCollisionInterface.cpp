// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 36

// <lambda_invoker_cdecl> @ 143d83900

bool __cdecl
`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlap'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FShapeOverlapData *param_1,FShapeOverlapData *param_2,FMTDInfo *param_3)

{
  return false;
}

// <lambda_invoker_cdecl> @ 143d83910

bool __cdecl
`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlap'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FShapeOverlapData *param_1,FShapeOverlapData *param_2,FMTDInfo *param_3)

{
  return false;
}

// operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_> @ 143d83cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TBox<double,3>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_> @ 143d83d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TBox<double,3>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 143d83e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 143d83ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 143d83f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_> @ 143d84020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_> @ 143d840d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_> @ 143d84180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_> @ 143d84230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_> @ 143d842e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
          (void *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_> @ 143d84390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TSphere<double,3>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_> @ 143d84440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
          (void *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::TSphere<double,3>_>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_> @ 143d844f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
          (void *this,FCapsule *param_1,TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::FCapsule>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_> @ 143d845a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
          (void *this,FCapsule *param_1,TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::FCapsule>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_> @ 143d84650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
          (void *this,FConvex *param_1,TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::FConvex>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_> @ 143d84700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19::<lambda_1>::
operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
          (void *this,FConvex *param_1,TRigidTransform<double,3> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FMTDInfo *pFVar3;
  undefined1 auStackY_a8 [32];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pFVar3 = (FMTDInfo *)0x0;
  }
  else {
    pFVar3 = *(FMTDInfo **)((longlong)this + 0x18);
  }
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_78._0_8_ = *puVar1;
  local_78._8_8_ = puVar1[1];
  local_78._16_8_ = puVar1[2];
  local_78._24_8_ = puVar1[3];
  local_78._32_8_ = puVar1[4];
  local_78._40_8_ = puVar1[5];
  local_78._48_8_ = puVar1[6];
  local_78._56_8_ = puVar1[7];
  local_78._64_8_ = puVar1[8];
  local_78._72_8_ = puVar1[9];
  local_78._80_8_ = puVar1[10];
  local_78._88_8_ = puVar1[0xb];
  bVar2 = Chaos::OverlapQuery<Chaos::FConvex>
                    (*(FImplicitObject **)(*(longlong *)this + 0x10),&local_78,param_1,param_2,0.0,
                     pFVar3);
  return bVar2;
}

// FPhysicsObjectCollisionInterface<1> @ 143d90fb0

FPhysicsObjectCollisionInterface<1> * __thiscall
Chaos::FPhysicsObjectCollisionInterface<1>::FPhysicsObjectCollisionInterface<1>
          (FPhysicsObjectCollisionInterface<1> *this,FReadPhysicsObjectInterface<1> *param_1)

{
  this->Interface = param_1;
  return this;
}

// FPhysicsObjectCollisionInterface<0> @ 143d90fc0

FPhysicsObjectCollisionInterface<0> * __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::FPhysicsObjectCollisionInterface<0>
          (FPhysicsObjectCollisionInterface<0> *this,FReadPhysicsObjectInterface<0> *param_1)

{
  this->Interface = param_1;
  return this;
}

// operator() @ 143d96150

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABB'::__l2::<lambda_1>::
operator()(void *this,FShapeOverlapData *param_1,FShapeOverlapData *param_2,FMTDInfo *param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined7 uStack_57;
  
  dVar10 = *(double *)&(param_1->BoundingBox).MMax.field_0x8;
  dVar12 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  if (dVar12 <= dVar10) {
    dVar10 = dVar12;
  }
  dVar12 = *(double *)&(param_1->BoundingBox).MMax.field_0x10;
  dVar9 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  dVar1 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  if (dVar1 <= dVar12) {
    dVar12 = dVar1;
  }
  dVar1 = *(double *)&(param_1->BoundingBox).MMin.field_0x10;
  if (dVar9 <= dVar1) {
    dVar9 = dVar1;
  }
  pdVar3 = *(double **)this;
  dVar1 = *(double *)&(param_2->BoundingBox).MMin;
  uVar6 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar11 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  dVar2 = *(double *)&(param_1->BoundingBox).MMin;
  if (dVar1 <= dVar2) {
    uVar6 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar1 = *(double *)&(param_1->BoundingBox).MMin.field_0x8;
  if (dVar11 <= dVar1) {
    dVar11 = dVar1;
  }
  dVar1 = *(double *)&(param_2->BoundingBox).MMax;
  uVar13 = SUB84(dVar1,0);
  uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)&(param_1->BoundingBox).MMax;
  if (dVar2 <= dVar1) {
    uVar13 = SUB84(dVar2,0);
    uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  uVar5 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (*(char *)(pdVar3 + 6) != '\0') {
    dVar1 = *pdVar3;
    if (pdVar3[2] <= dVar9) {
      dVar9 = pdVar3[2];
    }
    if (dVar10 <= pdVar3[4]) {
      dVar10 = pdVar3[4];
    }
    uVar4 = SUB84(dVar1,0);
    uVar7 = (int)((ulonglong)dVar1 >> 0x20);
    if ((double)CONCAT44(uVar8,uVar6) <= dVar1) {
      uVar4 = uVar6;
      uVar7 = uVar8;
    }
    dVar1 = pdVar3[1];
    uVar6 = SUB84(dVar1,0);
    uVar8 = (int)((ulonglong)dVar1 >> 0x20);
    if (dVar11 <= dVar1) {
      uVar6 = SUB84(dVar11,0);
      uVar8 = uVar5;
    }
    pdVar3[2] = dVar9;
    pdVar3[4] = dVar10;
    *pdVar3 = (double)CONCAT44(uVar7,uVar4);
    dVar10 = pdVar3[3];
    uVar5 = SUB84(dVar10,0);
    uVar4 = (int)((ulonglong)dVar10 >> 0x20);
    if (dVar10 <= (double)CONCAT44(uVar14,uVar13)) {
      uVar5 = uVar13;
      uVar4 = uVar14;
    }
    pdVar3[1] = (double)CONCAT44(uVar8,uVar6);
    pdVar3[3] = (double)CONCAT44(uVar4,uVar5);
    dVar10 = pdVar3[5];
    uVar6 = SUB84(dVar10,0);
    uVar8 = (undefined4)((ulonglong)dVar10 >> 0x20);
    if (dVar10 <= dVar12) {
      uVar6 = SUB84(dVar12,0);
      uVar8 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    pdVar3[5] = (double)CONCAT44(uVar8,uVar6);
    return true;
  }
  *(undefined4 *)pdVar3 = uVar6;
  *(undefined4 *)((longlong)pdVar3 + 4) = uVar8;
  *(int *)(pdVar3 + 1) = SUB84(dVar11,0);
  *(undefined4 *)((longlong)pdVar3 + 0xc) = uVar5;
  pdVar3[2] = dVar9;
  pdVar3[3] = (double)CONCAT44(uVar14,uVar13);
  pdVar3[4] = dVar10;
  pdVar3[5] = dVar12;
  pdVar3[6] = (double)CONCAT71(uStack_57,1);
  return true;
}

// operator() @ 143d96260

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABB'::__l2::<lambda_1>::
operator()(void *this,FShapeOverlapData *param_1,FShapeOverlapData *param_2,FMTDInfo *param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined7 uStack_57;
  
  dVar10 = *(double *)&(param_1->BoundingBox).MMax.field_0x8;
  dVar12 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  if (dVar12 <= dVar10) {
    dVar10 = dVar12;
  }
  dVar12 = *(double *)&(param_1->BoundingBox).MMax.field_0x10;
  dVar9 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  dVar1 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  if (dVar1 <= dVar12) {
    dVar12 = dVar1;
  }
  dVar1 = *(double *)&(param_1->BoundingBox).MMin.field_0x10;
  if (dVar9 <= dVar1) {
    dVar9 = dVar1;
  }
  pdVar3 = *(double **)this;
  dVar1 = *(double *)&(param_2->BoundingBox).MMin;
  uVar6 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar11 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  dVar2 = *(double *)&(param_1->BoundingBox).MMin;
  if (dVar1 <= dVar2) {
    uVar6 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar1 = *(double *)&(param_1->BoundingBox).MMin.field_0x8;
  if (dVar11 <= dVar1) {
    dVar11 = dVar1;
  }
  dVar1 = *(double *)&(param_2->BoundingBox).MMax;
  uVar13 = SUB84(dVar1,0);
  uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)&(param_1->BoundingBox).MMax;
  if (dVar2 <= dVar1) {
    uVar13 = SUB84(dVar2,0);
    uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  uVar5 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (*(char *)(pdVar3 + 6) != '\0') {
    dVar1 = *pdVar3;
    if (pdVar3[2] <= dVar9) {
      dVar9 = pdVar3[2];
    }
    if (dVar10 <= pdVar3[4]) {
      dVar10 = pdVar3[4];
    }
    uVar4 = SUB84(dVar1,0);
    uVar7 = (int)((ulonglong)dVar1 >> 0x20);
    if ((double)CONCAT44(uVar8,uVar6) <= dVar1) {
      uVar4 = uVar6;
      uVar7 = uVar8;
    }
    dVar1 = pdVar3[1];
    uVar6 = SUB84(dVar1,0);
    uVar8 = (int)((ulonglong)dVar1 >> 0x20);
    if (dVar11 <= dVar1) {
      uVar6 = SUB84(dVar11,0);
      uVar8 = uVar5;
    }
    pdVar3[2] = dVar9;
    pdVar3[4] = dVar10;
    *pdVar3 = (double)CONCAT44(uVar7,uVar4);
    dVar10 = pdVar3[3];
    uVar5 = SUB84(dVar10,0);
    uVar4 = (int)((ulonglong)dVar10 >> 0x20);
    if (dVar10 <= (double)CONCAT44(uVar14,uVar13)) {
      uVar5 = uVar13;
      uVar4 = uVar14;
    }
    pdVar3[1] = (double)CONCAT44(uVar8,uVar6);
    pdVar3[3] = (double)CONCAT44(uVar4,uVar5);
    dVar10 = pdVar3[5];
    uVar6 = SUB84(dVar10,0);
    uVar8 = (undefined4)((ulonglong)dVar10 >> 0x20);
    if (dVar10 <= dVar12) {
      uVar6 = SUB84(dVar12,0);
      uVar8 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    pdVar3[5] = (double)CONCAT44(uVar8,uVar6);
    return true;
  }
  *(undefined4 *)pdVar3 = uVar6;
  *(undefined4 *)((longlong)pdVar3 + 4) = uVar8;
  *(int *)(pdVar3 + 1) = SUB84(dVar11,0);
  *(undefined4 *)((longlong)pdVar3 + 0xc) = uVar5;
  pdVar3[2] = dVar9;
  pdVar3[3] = (double)CONCAT44(uVar14,uVar13);
  pdVar3[4] = dVar10;
  pdVar3[5] = dVar12;
  pdVar3[6] = (double)CONCAT71(uStack_57,1);
  return true;
}

// operator() @ 143d96370

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBIntersections'::__l2::
<lambda_1>::operator()
          (void *this,FShapeOverlapData *param_1,FShapeOverlapData *param_2,FMTDInfo *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  pFVar5 = *(ForAnyElementType **)this;
  dVar9 = *(double *)&(param_1->BoundingBox).MMax.field_0x10;
  dVar3 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  if (dVar3 <= dVar9) {
    dVar9 = dVar3;
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMin;
  uVar10 = SUB84(dVar3,0);
  uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_1->BoundingBox).MMin;
  if (dVar3 <= dVar4) {
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  uVar12 = SUB84(dVar3,0);
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_1->BoundingBox).MMin.field_0x8;
  if (dVar3 <= dVar4) {
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  uVar14 = SUB84(dVar3,0);
  uVar15 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_1->BoundingBox).MMin.field_0x10;
  if (dVar3 <= dVar4) {
    uVar14 = SUB84(dVar4,0);
    uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMax;
  uVar16 = SUB84(dVar3,0);
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_1->BoundingBox).MMax;
  if (dVar4 <= dVar3) {
    uVar16 = SUB84(dVar4,0);
    uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_1->BoundingBox).MMax.field_0x8;
  uVar18 = SUB84(dVar3,0);
  uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  if (dVar4 <= dVar3) {
    uVar18 = SUB84(dVar4,0);
    uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  iVar7 = *(int *)&pFVar5[1].Data;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  pFVar6 = pFVar5->Data;
  *(ulonglong *)(pFVar6 + lVar8) = CONCAT44(uVar11,uVar10);
  *(ulonglong *)(pFVar6 + lVar8 + 8) = CONCAT44(uVar13,uVar12);
  *(ulonglong *)(pFVar6 + lVar8 + 0x10) = CONCAT44(uVar15,uVar14);
  pFVar2 = pFVar6 + lVar8 + 0x18;
  *(undefined4 *)pFVar2 = uVar16;
  *(undefined4 *)(pFVar2 + 4) = uVar17;
  *(undefined4 *)(pFVar2 + 8) = uVar18;
  *(undefined4 *)(pFVar2 + 0xc) = uVar19;
  pFVar6[lVar8 + 0x30] = (FScriptContainerElement)0x1;
  *(double *)(pFVar6 + lVar8 + 0x28) = dVar9;
  return true;
}

// operator() @ 143d96470

bool __thiscall
`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBIntersections'::__l2::
<lambda_1>::operator()
          (void *this,FShapeOverlapData *param_1,FShapeOverlapData *param_2,FMTDInfo *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  pFVar5 = *(ForAnyElementType **)this;
  dVar9 = *(double *)&(param_1->BoundingBox).MMax.field_0x10;
  dVar3 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  if (dVar3 <= dVar9) {
    dVar9 = dVar3;
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMin;
  uVar10 = SUB84(dVar3,0);
  uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_1->BoundingBox).MMin;
  if (dVar3 <= dVar4) {
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  uVar12 = SUB84(dVar3,0);
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_1->BoundingBox).MMin.field_0x8;
  if (dVar3 <= dVar4) {
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  uVar14 = SUB84(dVar3,0);
  uVar15 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_1->BoundingBox).MMin.field_0x10;
  if (dVar3 <= dVar4) {
    uVar14 = SUB84(dVar4,0);
    uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMax;
  uVar16 = SUB84(dVar3,0);
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_1->BoundingBox).MMax;
  if (dVar4 <= dVar3) {
    uVar16 = SUB84(dVar4,0);
    uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_1->BoundingBox).MMax.field_0x8;
  uVar18 = SUB84(dVar3,0);
  uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  if (dVar4 <= dVar3) {
    uVar18 = SUB84(dVar4,0);
    uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  iVar7 = *(int *)&pFVar5[1].Data;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  pFVar6 = pFVar5->Data;
  *(ulonglong *)(pFVar6 + lVar8) = CONCAT44(uVar11,uVar10);
  *(ulonglong *)(pFVar6 + lVar8 + 8) = CONCAT44(uVar13,uVar12);
  *(ulonglong *)(pFVar6 + lVar8 + 0x10) = CONCAT44(uVar15,uVar14);
  pFVar2 = pFVar6 + lVar8 + 0x18;
  *(undefined4 *)pFVar2 = uVar16;
  *(undefined4 *)(pFVar2 + 4) = uVar17;
  *(undefined4 *)(pFVar2 + 8) = uVar18;
  *(undefined4 *)(pFVar2 + 0xc) = uVar19;
  pFVar6[lVar8 + 0x30] = (FScriptContainerElement)0x1;
  *(double *)(pFVar6 + lVar8 + 0x28) = dVar9;
  return true;
}

// PairwiseShapeOverlapHelper @ 143daff40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper
          (FPhysicsObjectCollisionInterface<1> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,bool param_6,TVector<double> *param_7,
          TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
          *param_8)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *pFVar2;
  longlong lVar3;
  FConvex *this_00;
  FShapeInstance *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FScriptContainerElement *pFVar12;
  uchar uVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  TVector<double,3> *pTVar17;
  TQuat<double> *pTVar18;
  TBox<double> *pTVar19;
  TMatrix<double> *pTVar20;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar21;
  double *pdVar22;
  FCollisionFilterData *pFVar23;
  longlong lVar24;
  TBox<double,3> *pTVar25;
  FCapsule *pFVar26;
  FConvex *pFVar27;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar28;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar29;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar30;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar31;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar32;
  TSphere<double,3> *pTVar33;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar34;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar35;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar36;
  TImplicitObjectTransformed<double,3,1> *pTVar37;
  undefined8 uVar38;
  ulonglong uVar39;
  FMTDInfo *pFVar40;
  longlong *plVar41;
  FScriptContainerElement *pFVar42;
  ForAnyElementType FVar43;
  ForAnyElementType FVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined1 auStackY_948 [32];
  bool local_918;
  undefined1 local_917;
  undefined1 local_916 [6];
  FPhysicsObject *local_910;
  FPhysicsObject *local_908;
  <lambda_1> local_900;
  uint local_8e0;
  uint local_8dc;
  TArray<Chaos::FShapeInstance_*,TSizedDefaultAllocator<32>_> local_8d8;
  TArray<Chaos::FShapeInstance_*,TSizedDefaultAllocator<32>_> local_8c8;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  double local_8a8;
  undefined4 local_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  double local_890;
  FScriptContainerElement *local_888;
  FScriptContainerElement *local_880;
  double local_878 [12];
  FPhysicsObject **local_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  FPhysicsObject **local_808;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  FPhysicsObject **local_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  FPhysicsObject **local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_7d8;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_7c8;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_7b8;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_7a8;
  longlong local_798;
  double local_790;
  double dStack_788;
  double local_780;
  double local_778;
  double dStack_770;
  double local_768;
  FShapeInstance *local_760;
  double local_758;
  double dStack_750;
  double local_748;
  double local_740;
  double dStack_738;
  double local_730;
  FMTDInfo local_728;
  TQuat<double> local_6e8;
  TQuat<double> local_6c8;
  undefined1 local_6a8 [48];
  undefined1 local_678 [48];
  TTransform<double> local_648;
  TTransform<double> local_5e8;
  TTransform<double> local_588;
  TTransform<double> local_528;
  TVector<double>_u_0 local_4c8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  TVector<double>_u_0 local_490;
  double local_478;
  double local_470;
  double local_468;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  TBox<double> local_218;
  TBox<double> local_1e0;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_948;
  local_818 = &local_910;
  uStack_810 = 1;
  local_7d8._12_4_ = uStack_80c;
  local_7d8.ArrayNum = 1;
  local_910 = param_1;
  local_908 = param_3;
  local_7d8.DataPtr = local_818;
  FReadPhysicsObjectInterface<1>::GetAllThreadShapes(this->Interface,&local_8c8,&local_7d8);
  if ((local_910 == (FPhysicsObject *)0x0) ||
     (pFVar2 = (FGeometryCollectionPhysicsProxy *)local_910->Proxy,
     pFVar2 == (FGeometryCollectionPhysicsProxy *)0x0)) {
LAB_143db0040:
    uVar45 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar46 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    local_458.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_458.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_458.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_458.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    iVar1 = *(int *)&pFVar2->field_0x1c;
    if (iVar1 == 2) {
      pTVar21 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                          (pFVar2,local_910->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar21 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(pFVar2->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143db0040;
      pTVar21 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                 &(pFVar2->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar21 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143db0040;
    pTVar17 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)pTVar21,*(int *)&pTVar21->field_0x8);
    uVar45 = (undefined4)*(undefined8 *)&pTVar17->field_0x10;
    uVar46 = (undefined4)((ulonglong)*(undefined8 *)&pTVar17->field_0x10 >> 0x20);
    local_458.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)pTVar17;
    local_458.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)&pTVar17->field_0x4;
    local_458.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar17->field_0x8;
    local_458.Translation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)&pTVar17->field_0xc;
  }
  local_8a8 = (double)CONCAT44(uVar46,uVar45);
  local_8b8 = local_458.Translation.XY.m128d_f64[0]._0_4_;
  uStack_8b4 = local_458.Translation.XY.m128d_f64[0]._4_4_;
  uStack_8b0 = local_458.Translation.XY.m128d_f64[1]._0_4_;
  uStack_8ac = local_458.Translation.XY.m128d_f64[1]._4_4_;
  pTVar18 = FReadPhysicsObjectInterface<1>::GetR(this->Interface,&local_6c8,local_910);
  dVar11 = _UNK_150689688;
  dVar10 = ___xmm_3ff00000000000003ff0000000000000;
  dVar9 = _UNK_150689518;
  dVar8 = ___xmm_00000000000000003ff0000000000000;
  local_458.Rotation.ZW.m128d_f64[0] = pTVar18->Z;
  local_458.Rotation.ZW.m128d_f64[1] = pTVar18->W;
  local_458.Rotation.XY.m128d_f64[0] = pTVar18->X;
  local_458.Rotation.XY.m128d_f64[1] = pTVar18->Y;
  local_458.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_458.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_458.Translation.ZW.m128d_f64[0] = local_8a8;
  local_458.Translation.ZW.m128d_f64[1] = 0.0;
  local_588.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_588.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_588.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_588.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_588.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_588.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_588.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_588.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_588.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_588.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_588.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_588.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_458.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_458.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_588.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_588.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_588.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_588.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_588.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_588.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_588,&local_458,param_2);
  local_808 = &local_910;
  uStack_800 = 1;
  local_7c8._12_4_ = uStack_7fc;
  local_7c8.ArrayNum = 1;
  local_7c8.DataPtr = local_808;
  pTVar19 = FReadPhysicsObjectInterface<1>::GetWorldBounds(this->Interface,&local_218,&local_7c8);
  pTVar20 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_1a8);
  UE::Math::TBox<double>::TransformBy(pTVar19,(TBox<double> *)&local_4c8._s_0,pTVar20);
  local_7f8 = &local_908;
  uStack_7f0 = 1;
  local_7b8._12_4_ = uStack_7ec;
  local_7b8.ArrayNum = 1;
  local_7b8.DataPtr = local_7f8;
  FReadPhysicsObjectInterface<1>::GetAllThreadShapes(this->Interface,&local_8d8,&local_7b8);
  if ((local_908 != (FPhysicsObject *)0x0) &&
     (pFVar2 = (FGeometryCollectionPhysicsProxy *)local_908->Proxy,
     pFVar2 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&pFVar2->field_0x1c;
    if (iVar1 == 2) {
      pTVar21 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                          (pFVar2,local_908->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar21 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(pFVar2->Parameters).Name.Data.ArrayNum
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143db0225;
      pTVar21 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                 &(pFVar2->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar21 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar17 = TParticles<double,3>::GetX
                          (*(TParticles<double,3> **)pTVar21,*(int *)&pTVar21->field_0x8);
      uVar45 = (undefined4)*(undefined8 *)&pTVar17->field_0x10;
      uVar46 = (undefined4)((ulonglong)*(undefined8 *)&pTVar17->field_0x10 >> 0x20);
      local_3f8.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)pTVar17;
      local_3f8.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)&pTVar17->field_0x4;
      local_3f8.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar17->field_0x8;
      local_3f8.Translation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)&pTVar17->field_0xc;
      goto LAB_143db0237;
    }
  }
LAB_143db0225:
  uVar45 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar46 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  local_3f8.Translation.XY.m128d_f64[0]._0_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_3f8.Translation.XY.m128d_f64[0]._4_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_3f8.Translation.XY.m128d_f64[1]._0_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_3f8.Translation.XY.m128d_f64[1]._4_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
LAB_143db0237:
  local_890 = (double)CONCAT44(uVar46,uVar45);
  local_8a0 = local_3f8.Translation.XY.m128d_f64[0]._0_4_;
  uStack_89c = local_3f8.Translation.XY.m128d_f64[0]._4_4_;
  uStack_898 = local_3f8.Translation.XY.m128d_f64[1]._0_4_;
  uStack_894 = local_3f8.Translation.XY.m128d_f64[1]._4_4_;
  pTVar18 = FReadPhysicsObjectInterface<1>::GetR(this->Interface,&local_6e8,local_908);
  local_3f8.Rotation.ZW.m128d_f64[0] = pTVar18->Z;
  local_3f8.Rotation.ZW.m128d_f64[1] = pTVar18->W;
  local_3f8.Rotation.XY.m128d_f64[0] = pTVar18->X;
  local_3f8.Rotation.XY.m128d_f64[1] = pTVar18->Y;
  local_5e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_5e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_5e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_3f8.Translation.ZW.m128d_f64[0] = local_890;
  local_3f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_5e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_5e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_5e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_5e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_5e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_5e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_5e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_5e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_5e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_3f8.Scale3D.XY.m128d_f64[0] = dVar10;
  local_3f8.Scale3D.XY.m128d_f64[1] = dVar11;
  local_5e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_5e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_5e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_3f8.Scale3D.ZW.m128d_f64[0] = dVar8;
  local_3f8.Scale3D.ZW.m128d_f64[1] = dVar9;
  local_5e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_5e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_5e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_5e8,&local_3f8,param_4);
  local_7e8 = &local_908;
  uStack_7e0 = 1;
  local_7a8._12_4_ = uStack_7dc;
  local_7a8.ArrayNum = 1;
  local_7a8.DataPtr = local_7e8;
  pTVar19 = FReadPhysicsObjectInterface<1>::GetWorldBounds(this->Interface,&local_1e0,&local_7a8);
  pTVar20 = UE::Math::TTransform<double>::ToMatrixWithScale(param_4,&local_128);
  UE::Math::TBox<double>::TransformBy(pTVar19,(TBox<double> *)&local_490._s_0,pTVar20);
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (((((local_478 < local_4c8._s_0.X) || (local_4b0 < local_490._s_0.X)) ||
       (local_470 < local_4c8._s_0.Y)) ||
      ((local_4a8 < local_490._s_0.Y || (local_468 < local_4c8._s_0.Z)))) ||
     (local_4a0 < local_490._s_0.Z)) {
    local_918 = false;
  }
  else {
    uVar39 = (ulonglong)local_8d8.ArrayNum;
    local_918 = false;
    local_8dc = local_8d8.ArrayNum;
    pFVar42 = local_8d8.AllocatorInstance.Data + uVar39 * 8;
    FVar43.Data = local_8d8.AllocatorInstance.Data;
    local_880 = pFVar42;
    while( true ) {
      if (local_8d8.ArrayNum != (uint)uVar39) {
        local_917 = 0;
        `TCheckedPointerIterator<Chaos::FShapeInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_917);
      }
      if (FVar43.Data == pFVar42) break;
      lVar3 = *(longlong *)FVar43.Data;
      if (((lVar3 != 0) && (this_00 = *(FConvex **)(lVar3 + 0x10), this_00 != (FConvex *)0x0)) &&
         (*(char *)((longlong)&this_00->_padding_ + 4) != '\0')) {
        local_398 = local_5e8.Rotation.XY.m128d_f64[0];
        dStack_390 = local_5e8.Rotation.XY.m128d_f64[1];
        local_388 = local_5e8.Rotation.ZW.m128d_f64[0];
        dStack_380 = local_5e8.Rotation.ZW.m128d_f64[1];
        local_378 = local_5e8.Translation.XY.m128d_f64[0];
        dStack_370 = local_5e8.Translation.XY.m128d_f64[1];
        local_368 = local_5e8.Translation.ZW.m128d_f64[0];
        dStack_360 = local_5e8.Translation.ZW.m128d_f64[1];
        local_358 = local_5e8.Scale3D.XY.m128d_f64[0]._0_4_;
        uStack_354 = local_5e8.Scale3D.XY.m128d_f64[0]._4_4_;
        uStack_350 = local_5e8.Scale3D.XY.m128d_f64[1]._0_4_;
        uStack_34c = local_5e8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_348 = local_5e8.Scale3D.ZW.m128d_f64[0]._0_4_;
        uStack_344 = local_5e8.Scale3D.ZW.m128d_f64[0]._4_4_;
        uStack_340 = local_5e8.Scale3D.ZW.m128d_f64[1]._0_4_;
        uStack_33c = local_5e8.Scale3D.ZW.m128d_f64[1]._4_4_;
        pdVar22 = (double *)(**(code **)(this_00->_padding_ + 0x98))(this_00,local_6a8,&local_398);
        local_900._16_8_ = *(undefined8 *)((longlong)&param_7->field0_0x0 + 0x10);
        uVar47 = *(uint *)&param_7->field0_0x0 & uVar6;
        uVar48 = *(uint *)((longlong)&param_7->field0_0x0 + 4) & uVar7;
        uVar49 = *(uint *)((longlong)&param_7->field0_0x0 + 8) & uVar6;
        uVar50 = *(uint *)((longlong)&param_7->field0_0x0 + 0xc) & uVar7;
        uVar51 = local_900._16_4_ & uVar6;
        uVar52 = local_900._20_4_ & uVar7;
        *pdVar22 = (double)CONCAT44(uVar48,uVar47) + *pdVar22;
        pdVar22[1] = (double)CONCAT44(uVar50,uVar49) + pdVar22[1];
        pdVar22[2] = (double)CONCAT44(uVar52,uVar51) + pdVar22[2];
        pdVar22[3] = pdVar22[3] - (double)CONCAT44(uVar48,uVar47);
        pdVar22[4] = pdVar22[4] - (double)CONCAT44(uVar50,uVar49);
        pdVar22[5] = pdVar22[5] - (double)CONCAT44(uVar52,uVar51);
        local_878[6] = *pdVar22;
        local_878[7] = pdVar22[1];
        uVar39 = (ulonglong)local_8c8.ArrayNum;
        local_878[8] = pdVar22[2];
        local_8e0 = local_8c8.ArrayNum;
        local_878[9] = pdVar22[3];
        local_878[10] = pdVar22[4];
        local_888 = local_8c8.AllocatorInstance.Data + uVar39 * 8;
        local_878[0xb] = pdVar22[5];
        FVar44.Data = local_8c8.AllocatorInstance.Data;
LAB_143db0592:
        while( true ) {
          pFVar12 = local_888;
          if (local_8c8.ArrayNum != (uint)uVar39) {
            local_916[0] = 0;
            `TCheckedPointerIterator<Chaos::FShapeInstance_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_916);
          }
          pFVar42 = local_880;
          if (FVar44.Data == pFVar12) break;
          pFVar4 = *(FShapeInstance **)FVar44.Data;
          if (pFVar4 == (FShapeInstance *)0x0) goto LAB_143db0bda;
          pFVar23 = FCollisionData::GetQueryData(&pFVar4->CollisionData);
          uVar39._0_4_ = pFVar23->Word2;
          uVar39._4_4_ = pFVar23->Word3;
          if (!param_5) {
            if ((uVar39 & 0x100000000) != 0) goto LAB_143db05f6;
            goto LAB_143db0bda;
          }
          if ((uVar39 & 0x200000000) == 0) goto code_r0x000143db05e0;
LAB_143db05f6:
          local_338 = local_588.Rotation.XY.m128d_f64[0];
          dStack_330 = local_588.Rotation.XY.m128d_f64[1];
          local_328 = local_588.Rotation.ZW.m128d_f64[0];
          dStack_320 = local_588.Rotation.ZW.m128d_f64[1];
          local_318 = local_588.Translation.XY.m128d_f64[0];
          dStack_310 = local_588.Translation.XY.m128d_f64[1];
          local_308 = local_588.Translation.ZW.m128d_f64[0];
          dStack_300 = local_588.Translation.ZW.m128d_f64[1];
          local_2f8 = local_588.Scale3D.XY.m128d_f64[0]._0_4_;
          uStack_2f4 = local_588.Scale3D.XY.m128d_f64[0]._4_4_;
          uStack_2f0 = local_588.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_2ec = local_588.Scale3D.XY.m128d_f64[1]._4_4_;
          local_2e8 = local_588.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_2e4 = local_588.Scale3D.ZW.m128d_f64[0]._4_4_;
          uStack_2e0 = local_588.Scale3D.ZW.m128d_f64[1]._0_4_;
          uStack_2dc = local_588.Scale3D.ZW.m128d_f64[1]._4_4_;
          pdVar22 = (double *)
                    (**(code **)(*(longlong *)pFVar4->_padding_ + 0x98))
                              ((longlong *)pFVar4->_padding_,local_678,&local_338);
          local_900._16_8_ = *(undefined8 *)((longlong)&param_7->field0_0x0 + 0x10);
          uVar47 = *(uint *)&param_7->field0_0x0 & uVar6;
          uVar48 = *(uint *)((longlong)&param_7->field0_0x0 + 4) & uVar7;
          uVar49 = *(uint *)((longlong)&param_7->field0_0x0 + 8) & uVar6;
          uVar50 = *(uint *)((longlong)&param_7->field0_0x0 + 0xc) & uVar7;
          uVar51 = local_900._16_4_ & uVar6;
          uVar52 = local_900._20_4_ & uVar7;
          *pdVar22 = (double)CONCAT44(uVar48,uVar47) + *pdVar22;
          pdVar22[1] = (double)CONCAT44(uVar50,uVar49) + pdVar22[1];
          pdVar22[2] = (double)CONCAT44(uVar52,uVar51) + pdVar22[2];
          pdVar22[3] = pdVar22[3] - (double)CONCAT44(uVar48,uVar47);
          pdVar22[4] = pdVar22[4] - (double)CONCAT44(uVar50,uVar49);
          pdVar22[5] = pdVar22[5] - (double)CONCAT44(uVar52,uVar51);
          local_878[0] = *pdVar22;
          local_878[1] = pdVar22[1];
          local_878[2] = pdVar22[2];
          lVar24 = 0;
          local_878[3] = pdVar22[3];
          local_878[4] = pdVar22[4];
          local_878[5] = pdVar22[5];
          do {
            pdVar22 = (double *)((longlong)local_878 + lVar24 + 0x48);
            if ((*pdVar22 <= *(double *)((longlong)local_878 + lVar24) &&
                 *(double *)((longlong)local_878 + lVar24) != *pdVar22) ||
               (*(double *)((longlong)local_878 + lVar24 + 0x18) <
                *(double *)((longlong)local_878 + lVar24 + 0x30))) goto LAB_143db0bda;
            lVar24 = lVar24 + 8;
          } while (lVar24 < 0x18);
          local_900.TransformA = &local_588;
          local_648.Rotation.XY.m128d_f64[0] = local_5e8.Rotation.XY.m128d_f64[0];
          local_648.Rotation.XY.m128d_f64[1] = local_5e8.Rotation.XY.m128d_f64[1];
          local_648.Rotation.ZW.m128d_f64[0] = local_5e8.Rotation.ZW.m128d_f64[0];
          local_648.Rotation.ZW.m128d_f64[1] = local_5e8.Rotation.ZW.m128d_f64[1];
          local_900.bComputeMTD = param_6;
          local_900.TmpMTDInfo = &local_728;
          local_648.Translation.XY.m128d_f64[0] = local_5e8.Translation.XY.m128d_f64[0];
          local_648.Translation.XY.m128d_f64[1] = local_5e8.Translation.XY.m128d_f64[1];
          local_648.Translation.ZW.m128d_f64[0] = local_5e8.Translation.ZW.m128d_f64[0];
          local_648.Translation.ZW.m128d_f64[1] = local_5e8.Translation.ZW.m128d_f64[1];
          local_648.Scale3D.XY.m128d_f64[0] = local_5e8.Scale3D.XY.m128d_f64[0];
          local_648.Scale3D.XY.m128d_f64[1] = local_5e8.Scale3D.XY.m128d_f64[1];
          local_648.Scale3D.ZW.m128d_f64[0] = local_5e8.Scale3D.ZW.m128d_f64[0];
          local_648.Scale3D.ZW.m128d_f64[1] = local_5e8.Scale3D.ZW.m128d_f64[1];
          local_900.A = pFVar4;
          uVar13 = FImplicitObject::GetType((FImplicitObject *)this_00);
          switch(uVar13) {
          case '\0':
            if (((char)this_00->_padding_ != '\0') &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("T_DERIVED::StaticType() == Type",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                    ,0xbb,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,(TSphere<double,3> *)this_00,
                                (TRigidTransform<double,3> *)&local_648);
            break;
          case '\x01':
            pFVar27 = this_00;
            goto LAB_143db0823;
          default:
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                                ,0x7a,L"");
            if (bVar14) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            if (((char)this_00->_padding_ != '\0') &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("T_DERIVED::StaticType() == Type",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                    ,0xbb,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            local_278 = ((local_900.TransformA)->Rotation).XY.m128d_f64[0];
            dStack_270 = ((local_900.TransformA)->Rotation).XY.m128d_f64[1];
            pFVar40 = (FMTDInfo *)0x0;
            if (local_900.bComputeMTD != false) {
              pFVar40 = local_900.TmpMTDInfo;
            }
            local_268 = ((local_900.TransformA)->Rotation).ZW.m128d_f64[0];
            dStack_260 = ((local_900.TransformA)->Rotation).ZW.m128d_f64[1];
            local_258 = ((local_900.TransformA)->Translation).XY.m128d_f64[0];
            dStack_250 = ((local_900.TransformA)->Translation).XY.m128d_f64[1];
            local_248 = ((local_900.TransformA)->Translation).ZW.m128d_f64[0];
            dStack_240 = ((local_900.TransformA)->Translation).ZW.m128d_f64[1];
            local_238 = ((local_900.TransformA)->Scale3D).XY.m128d_f64[0];
            dStack_230 = ((local_900.TransformA)->Scale3D).XY.m128d_f64[1];
            local_228 = ((local_900.TransformA)->Scale3D).ZW.m128d_f64[0];
            dStack_220 = ((local_900.TransformA)->Scale3D).ZW.m128d_f64[1];
            bVar14 = OverlapQuery<Chaos::TSphere<double,3>_>
                               ((FImplicitObject *)(local_900.A)->_padding_,
                                (TRigidTransform<double,3> *)&local_278,(TSphere<double,3> *)this_00
                                ,(TRigidTransform<double,3> *)&local_648,0.0,pFVar40);
            break;
          case '\x03':
            pFVar27 = this_00;
            goto LAB_143db0844;
          case '\x04':
            pTVar37 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                                ((FImplicitObject *)this_00);
            local_528.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_528.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_528.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_528.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_528.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_528.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_528.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_528.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_528.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_528.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_528.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_528.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_528.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_528.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_528.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_528.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_528.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_528.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_528,(TTransform<double> *)&pTVar37->MTransform,&local_648);
            local_2d8 = local_528.Rotation.XY.m128d_f64[0];
            dStack_2d0 = local_528.Rotation.XY.m128d_f64[1];
            local_2c8 = local_528.Rotation.ZW.m128d_f64[0];
            dStack_2c0 = local_528.Rotation.ZW.m128d_f64[1];
            local_2b8 = local_528.Translation.XY.m128d_f64[0];
            dStack_2b0 = local_528.Translation.XY.m128d_f64[1];
            local_2a8 = local_528.Translation.ZW.m128d_f64[0];
            dStack_2a0 = local_528.Translation.ZW.m128d_f64[1];
            local_298 = local_528.Scale3D.XY.m128d_f64[0];
            dStack_290 = local_528.Scale3D.XY.m128d_f64[1];
            local_288 = local_528.Scale3D.ZW.m128d_f64[0];
            dStack_280 = local_528.Scale3D.ZW.m128d_f64[1];
            bVar14 = Utilities::
                     CastHelper<_Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper_::__l19::<lambda_1>_>
                               ((pTVar37->MObject).Reference,(TRigidTransform<double,3> *)&local_2d8
                                ,&local_900);
            break;
          case '\b':
            pFVar27 = this_00;
            goto LAB_143db0865;
          case '@':
            pTVar32 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                                ((FImplicitObject *)this_00);
            pTVar33 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                                ((FImplicitObject *)(pTVar32->MObject).Reference);
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar33,(TRigidTransform<double,3> *)&local_648);
            break;
          case 'A':
            pTVar34 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                                ((FImplicitObject *)this_00);
            pFVar27 = (FConvex *)(pTVar34->MObject).Reference;
LAB_143db0823:
            pTVar25 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                                ((FImplicitObject *)pFVar27);
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar25,(TRigidTransform<double,3> *)&local_648);
            break;
          case 'C':
            pTVar35 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                                ((FImplicitObject *)this_00);
            pFVar27 = (FConvex *)(pTVar35->MObject).Reference;
LAB_143db0844:
            pFVar26 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>((FImplicitObject *)pFVar27)
            ;
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pFVar26,(TRigidTransform<double,3> *)&local_648);
            break;
          case 'H':
            pTVar36 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                                ((FImplicitObject *)this_00);
            pFVar27 = (pTVar36->MObject).Reference;
LAB_143db0865:
            pFVar27 = FImplicitObject::GetObjectChecked<Chaos::FConvex>((FImplicitObject *)pFVar27);
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pFVar27,(TRigidTransform<double,3> *)&local_648);
            break;
          case 0x80:
            pTVar28 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                                ((FImplicitObject *)this_00);
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar28,(TRigidTransform<double,3> *)&local_648);
            break;
          case 0x81:
            pTVar29 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                                ((FImplicitObject *)this_00);
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar29,(TRigidTransform<double,3> *)&local_648);
            break;
          case 0x83:
            pTVar30 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                                ((FImplicitObject *)this_00);
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar30,(TRigidTransform<double,3> *)&local_648);
            break;
          case 0x88:
            pTVar31 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                                ((FImplicitObject *)this_00);
            bVar14 = `Chaos::FPhysicsObjectCollisionInterface<1>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar31,(TRigidTransform<double,3> *)&local_648);
          }
          if (bVar14 != false) {
            local_758 = local_878[0];
            dStack_750 = local_878[1];
            local_918 = true;
            local_748 = local_878[2];
            local_740 = local_878[3];
            dStack_738 = local_878[4];
            local_730 = local_878[5];
            local_790 = local_878[6];
            dStack_788 = local_878[7];
            local_780 = local_878[8];
            local_778 = local_878[9];
            dStack_770 = local_878[10];
            local_768 = local_878[0xb];
            local_798 = lVar3;
            local_760 = pFVar4;
            UE::Core::Private::Function::CheckCallable(*(void **)param_8);
            pcVar5 = *(code **)param_8;
            plVar41 = *(longlong **)&param_8->field_0x28;
            if (*(longlong **)&param_8->field_0x28 == (longlong *)0x0) {
              plVar41 = (longlong *)&param_8->field_0x10;
            }
            uVar38 = (**(code **)(*plVar41 + 8))();
            cVar16 = (*pcVar5)(uVar38,&local_760,&local_798,&local_728);
            if (cVar16 == '\0') {
              local_918 = true;
              goto LAB_143db0c09;
            }
          }
LAB_143db0bda:
          uVar39 = (ulonglong)local_8e0;
          FVar44.Data = FVar44.Data + 8;
        }
      }
      uVar39 = (ulonglong)local_8dc;
      FVar43.Data = FVar43.Data + 8;
    }
  }
LAB_143db0c09:
  if (local_8d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.AllocatorInstance.Data);
  }
  if (local_8c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.AllocatorInstance.Data);
  }
  return local_918;
code_r0x000143db05e0:
  uVar39 = (ulonglong)local_8e0;
  FVar44.Data = FVar44.Data + 8;
  goto LAB_143db0592;
}

// PairwiseShapeOverlapHelper @ 143db0d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper
          (FPhysicsObjectCollisionInterface<0> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,bool param_6,TVector<double> *param_7,
          TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
          *param_8)

{
  int iVar1;
  FGeometryCollectionPhysicsProxy *pFVar2;
  longlong lVar3;
  FConvex *this_00;
  FShapeInstanceProxy *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FScriptContainerElement *pFVar16;
  uchar uVar17;
  bool bVar18;
  undefined1 uVar19;
  char cVar20;
  TBox<double> *pTVar21;
  TMatrix<double> *pTVar22;
  TPBDRigidParticle<double,3> *pTVar23;
  double *pdVar24;
  FCollisionFilterData *pFVar25;
  longlong lVar26;
  TBox<double,3> *pTVar27;
  FCapsule *pFVar28;
  FConvex *pFVar29;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar30;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar31;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar32;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar33;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar34;
  TSphere<double,3> *pTVar35;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar36;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar37;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar38;
  TImplicitObjectTransformed<double,3,1> *pTVar39;
  undefined8 uVar40;
  ulonglong uVar41;
  FMTDInfo *pFVar42;
  longlong *plVar43;
  FScriptContainerElement *pFVar44;
  ForAnyElementType FVar45;
  ForAnyElementType FVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 uVar55;
  undefined1 auStackY_938 [32];
  bool local_908;
  undefined1 local_907;
  undefined1 local_906 [6];
  <lambda_1> local_900;
  FPhysicsObject *local_8e0;
  FPhysicsObject *local_8d8;
  uint local_8d0;
  uint local_8cc;
  TArray<Chaos::FShapeInstanceProxy_*,TSizedDefaultAllocator<32>_> local_8c8;
  TArray<Chaos::FShapeInstanceProxy_*,TSizedDefaultAllocator<32>_> local_8b8;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double local_890;
  double dStack_888;
  double local_880;
  FScriptContainerElement *local_878;
  FScriptContainerElement *local_870;
  double local_868 [12];
  FPhysicsObject **local_808;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  FPhysicsObject **local_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  FPhysicsObject **local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  FPhysicsObject **local_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined1 local_7c8 [16];
  undefined1 local_7b8 [16];
  undefined1 local_7a8 [16];
  undefined1 local_798 [16];
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_788;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_778;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_768;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_758;
  longlong local_748;
  double local_740;
  double dStack_738;
  double local_730;
  double local_728;
  double dStack_720;
  double local_718;
  FShapeInstanceProxy *local_710;
  double local_708;
  double dStack_700;
  double local_6f8;
  double local_6f0;
  double dStack_6e8;
  double local_6e0;
  FMTDInfo local_6d8;
  undefined1 local_6a0 [48];
  undefined1 local_670 [56];
  TTransform<double> local_638;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  TVector<double>_u_0 local_4b8;
  double local_4a0;
  double local_498;
  double local_490;
  TVector<double>_u_0 local_480;
  double local_468;
  double local_460;
  double local_458;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TBox<double> local_208;
  TBox<double> local_1d0;
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_938;
  local_808 = &local_8e0;
  uStack_800 = 1;
  local_768._12_4_ = uStack_7fc;
  local_768.ArrayNum = 1;
  local_8e0 = param_1;
  local_8d8 = param_3;
  local_768.DataPtr = local_808;
  FReadPhysicsObjectInterface<0>::GetAllThreadShapes(this->Interface,&local_8b8,&local_768);
  if ((local_8e0 == (FPhysicsObject *)0x0) ||
     (pFVar2 = (FGeometryCollectionPhysicsProxy *)local_8e0->Proxy,
     pFVar2 == (FGeometryCollectionPhysicsProxy *)0x0)) {
LAB_143db0e3c:
    uVar47 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar48 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar55 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    iVar1 = *(int *)&pFVar2->field_0x1c;
    if (iVar1 == 2) {
      pTVar23 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                          (pFVar2,local_8e0->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar23 = (TPBDRigidParticle<double,3> *)(pFVar2->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143db0e3c;
      pTVar23 = (TPBDRigidParticle<double,3> *)
                (pFVar2->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar23 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143db0e3c;
    uVar47 = (undefined4)*(undefined8 *)&pTVar23->field_0x30;
    uVar48 = (undefined4)((ulonglong)*(undefined8 *)&pTVar23->field_0x30 >> 0x20);
    uVar40 = *(double *)&pTVar23->field_0x20;
    uVar55 = *(double *)&pTVar23->field_0x28;
  }
  local_880 = (double)CONCAT44(uVar48,uVar47);
  dVar6 = UE::Math::TQuat<double>::Identity.Z;
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  dVar8 = UE::Math::TQuat<double>::Identity.X;
  dVar9 = UE::Math::TQuat<double>::Identity.Y;
  local_890 = (double)uVar40;
  dStack_888 = (double)uVar55;
  if ((local_8e0 != (FPhysicsObject *)0x0) &&
     (pFVar2 = (FGeometryCollectionPhysicsProxy *)local_8e0->Proxy,
     pFVar2 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&pFVar2->field_0x1c;
    if (iVar1 == 2) {
      pTVar23 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                          (pFVar2,local_8e0->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar23 = (TPBDRigidParticle<double,3> *)(pFVar2->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143db0ebb;
      pTVar23 = (TPBDRigidParticle<double,3> *)
                (pFVar2->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    dVar6 = UE::Math::TQuat<double>::Identity.Z;
    dVar7 = UE::Math::TQuat<double>::Identity.W;
    dVar8 = UE::Math::TQuat<double>::Identity.X;
    dVar9 = UE::Math::TQuat<double>::Identity.Y;
    if (pTVar23 != (TPBDRigidParticle<double,3> *)0x0) {
      dVar6 = (double)(float)*(undefined8 *)&pTVar23->field_0x48;
      dVar7 = (double)(float)((ulonglong)*(undefined8 *)&pTVar23->field_0x48 >> 0x20);
      dVar8 = (double)*(float *)&pTVar23->field_0x40;
      dVar9 = (double)*(float *)&pTVar23->field_0x44;
    }
  }
LAB_143db0ebb:
  dVar15 = _UNK_150689688;
  dVar14 = ___xmm_3ff00000000000003ff0000000000000;
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  uVar47 = (undefined4)((ulonglong)dVar9 >> 0x20);
  uVar48 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_7c8._8_4_ = SUB84(dVar9,0);
  local_7c8._0_8_ = dVar8;
  local_7c8._12_4_ = uVar47;
  local_448.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_448.Rotation.XY.m128d_f64[0] = dVar8;
  local_448.Rotation.XY.m128d_f64[1]._4_4_ = uVar47;
  local_7b8._8_4_ = SUB84(dVar7,0);
  local_7b8._0_8_ = dVar6;
  local_7b8._12_4_ = uVar48;
  local_448.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
  local_448.Rotation.ZW.m128d_f64[0] = dVar6;
  local_448.Rotation.ZW.m128d_f64[1]._4_4_ = uVar48;
  local_448.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_448.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_448.Translation.ZW.m128d_f64[0] = local_880;
  local_448.Translation.ZW.m128d_f64[1] = 0.0;
  local_578.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_578.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_578.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_578.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_578.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_578.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_578.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_578.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_578.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_578.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_578.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_578.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_448.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_448.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_578.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_578.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_578.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_578.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_578.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_578.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_448.Translation.XY.m128d_f64[0] = (double)uVar40;
  local_448.Translation.XY.m128d_f64[1] = (double)uVar55;
  UE::Math::TTransform<double>::Multiply(&local_578,&local_448,param_2);
  local_7f8 = &local_8e0;
  uStack_7f0 = 1;
  local_758._12_4_ = uStack_7ec;
  local_758.ArrayNum = 1;
  local_758.DataPtr = local_7f8;
  pTVar21 = FReadPhysicsObjectInterface<0>::GetWorldBounds(this->Interface,&local_208,&local_758);
  pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_198);
  UE::Math::TBox<double>::TransformBy(pTVar21,(TBox<double> *)&local_480._s_0,pTVar22);
  local_7e8 = &local_8d8;
  uStack_7e0 = 1;
  local_788._12_4_ = uStack_7dc;
  local_788.ArrayNum = 1;
  local_788.DataPtr = local_7e8;
  FReadPhysicsObjectInterface<0>::GetAllThreadShapes(this->Interface,&local_8c8,&local_788);
  if ((local_8d8 == (FPhysicsObject *)0x0) ||
     (pFVar2 = (FGeometryCollectionPhysicsProxy *)local_8d8->Proxy,
     pFVar2 == (FGeometryCollectionPhysicsProxy *)0x0)) {
LAB_143db1066:
    uVar47 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar48 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar55 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    iVar1 = *(int *)&pFVar2->field_0x1c;
    if (iVar1 == 2) {
      pTVar23 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                          (pFVar2,local_8d8->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar23 = (TPBDRigidParticle<double,3> *)(pFVar2->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143db1066;
      pTVar23 = (TPBDRigidParticle<double,3> *)
                (pFVar2->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    if (pTVar23 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_143db1066;
    uVar47 = (undefined4)*(undefined8 *)&pTVar23->field_0x30;
    uVar48 = (undefined4)((ulonglong)*(undefined8 *)&pTVar23->field_0x30 >> 0x20);
    uVar40 = *(double *)&pTVar23->field_0x20;
    uVar55 = *(double *)&pTVar23->field_0x28;
  }
  local_898 = (double)CONCAT44(uVar48,uVar47);
  dVar6 = UE::Math::TQuat<double>::Identity.Z;
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  dVar8 = UE::Math::TQuat<double>::Identity.X;
  dVar9 = UE::Math::TQuat<double>::Identity.Y;
  local_8a8 = (double)uVar40;
  dStack_8a0 = (double)uVar55;
  if ((local_8d8 != (FPhysicsObject *)0x0) &&
     (pFVar2 = (FGeometryCollectionPhysicsProxy *)local_8d8->Proxy,
     pFVar2 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar1 = *(int *)&pFVar2->field_0x1c;
    if (iVar1 == 2) {
      pTVar23 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_External
                          (pFVar2,local_8d8->BodyIndex);
    }
    else if (iVar1 == 0xb) {
      pTVar23 = (TPBDRigidParticle<double,3> *)(pFVar2->Parameters).Name.Data.AllocatorInstance.Data
      ;
    }
    else {
      if (iVar1 != 0xc) goto LAB_143db10e5;
      pTVar23 = (TPBDRigidParticle<double,3> *)
                (pFVar2->Parameters).PrevWorldTransform.Scale3D.XY.m128d_f64[1];
    }
    dVar6 = UE::Math::TQuat<double>::Identity.Z;
    dVar7 = UE::Math::TQuat<double>::Identity.W;
    dVar8 = UE::Math::TQuat<double>::Identity.X;
    dVar9 = UE::Math::TQuat<double>::Identity.Y;
    if (pTVar23 != (TPBDRigidParticle<double,3> *)0x0) {
      dVar6 = (double)(float)*(undefined8 *)&pTVar23->field_0x48;
      dVar7 = (double)(float)((ulonglong)*(undefined8 *)&pTVar23->field_0x48 >> 0x20);
      dVar8 = (double)*(float *)&pTVar23->field_0x40;
      dVar9 = (double)*(float *)&pTVar23->field_0x44;
    }
  }
LAB_143db10e5:
  uVar47 = (undefined4)((ulonglong)dVar9 >> 0x20);
  uVar48 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_7a8._8_4_ = SUB84(dVar9,0);
  local_7a8._0_8_ = dVar8;
  local_7a8._12_4_ = uVar47;
  local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_3e8.Rotation.XY.m128d_f64[0] = dVar8;
  local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar47;
  local_798._8_4_ = SUB84(dVar7,0);
  local_798._0_8_ = dVar6;
  local_798._12_4_ = uVar48;
  local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
  local_3e8.Rotation.ZW.m128d_f64[0] = dVar6;
  local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar48;
  local_3e8.Translation.ZW.m128d_f64[0] = local_898;
  local_3e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_5d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_5d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_5d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_5d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_5d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_5d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_5d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_5d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_5d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_5d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_5d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_5d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_3e8.Scale3D.XY.m128d_f64[0] = dVar14;
  local_3e8.Scale3D.XY.m128d_f64[1] = dVar15;
  local_5d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_5d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_5d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_3e8.Scale3D.ZW.m128d_f64[0] = dVar12;
  local_3e8.Scale3D.ZW.m128d_f64[1] = dVar13;
  local_5d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_5d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_5d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_3e8.Translation.XY.m128d_f64[0] = (double)uVar40;
  local_3e8.Translation.XY.m128d_f64[1] = (double)uVar55;
  UE::Math::TTransform<double>::Multiply(&local_5d8,&local_3e8,param_4);
  local_7d8 = &local_8d8;
  uStack_7d0 = 1;
  local_778._12_4_ = uStack_7cc;
  local_778.ArrayNum = 1;
  local_778.DataPtr = local_7d8;
  pTVar21 = FReadPhysicsObjectInterface<0>::GetWorldBounds(this->Interface,&local_1d0,&local_778);
  pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(param_4,&local_118);
  UE::Math::TBox<double>::TransformBy(pTVar21,(TBox<double> *)&local_4b8._s_0,pTVar22);
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (((((local_4a0 < local_480._s_0.X) || (local_468 < local_4b8._s_0.X)) ||
       (local_498 < local_480._s_0.Y)) ||
      ((local_460 < local_4b8._s_0.Y || (local_490 < local_480._s_0.Z)))) ||
     (local_458 < local_4b8._s_0.Z)) {
    local_908 = false;
  }
  else {
    uVar41 = (ulonglong)local_8c8.ArrayNum;
    local_908 = false;
    local_8cc = local_8c8.ArrayNum;
    pFVar44 = local_8c8.AllocatorInstance.Data + uVar41 * 8;
    FVar45.Data = local_8c8.AllocatorInstance.Data;
    local_870 = pFVar44;
    while( true ) {
      if (local_8c8.ArrayNum != (uint)uVar41) {
        local_907 = 0;
        `TCheckedPointerIterator<Chaos::FShapeInstanceProxy_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_907);
      }
      if (FVar45.Data == pFVar44) break;
      lVar3 = *(longlong *)FVar45.Data;
      if (((lVar3 != 0) && (this_00 = *(FConvex **)(lVar3 + 0x10), this_00 != (FConvex *)0x0)) &&
         (*(char *)((longlong)&this_00->_padding_ + 4) != '\0')) {
        local_388 = local_5d8.Rotation.XY.m128d_f64[0];
        dStack_380 = local_5d8.Rotation.XY.m128d_f64[1];
        local_378 = local_5d8.Rotation.ZW.m128d_f64[0];
        dStack_370 = local_5d8.Rotation.ZW.m128d_f64[1];
        local_368 = local_5d8.Translation.XY.m128d_f64[0];
        dStack_360 = local_5d8.Translation.XY.m128d_f64[1];
        local_358 = local_5d8.Translation.ZW.m128d_f64[0];
        dStack_350 = local_5d8.Translation.ZW.m128d_f64[1];
        local_348 = local_5d8.Scale3D.XY.m128d_f64[0]._0_4_;
        uStack_344 = local_5d8.Scale3D.XY.m128d_f64[0]._4_4_;
        uStack_340 = local_5d8.Scale3D.XY.m128d_f64[1]._0_4_;
        uStack_33c = local_5d8.Scale3D.XY.m128d_f64[1]._4_4_;
        local_338 = local_5d8.Scale3D.ZW.m128d_f64[0]._0_4_;
        uStack_334 = local_5d8.Scale3D.ZW.m128d_f64[0]._4_4_;
        uStack_330 = local_5d8.Scale3D.ZW.m128d_f64[1]._0_4_;
        uStack_32c = local_5d8.Scale3D.ZW.m128d_f64[1]._4_4_;
        pdVar24 = (double *)(**(code **)(this_00->_padding_ + 0x98))(this_00,local_6a0,&local_388);
        local_900._16_8_ = *(undefined8 *)((longlong)&param_7->field0_0x0 + 0x10);
        uVar49 = *(uint *)&param_7->field0_0x0 & uVar10;
        uVar50 = *(uint *)((longlong)&param_7->field0_0x0 + 4) & uVar11;
        uVar51 = *(uint *)((longlong)&param_7->field0_0x0 + 8) & uVar10;
        uVar52 = *(uint *)((longlong)&param_7->field0_0x0 + 0xc) & uVar11;
        uVar53 = local_900._16_4_ & uVar10;
        uVar54 = local_900._20_4_ & uVar11;
        *pdVar24 = (double)CONCAT44(uVar50,uVar49) + *pdVar24;
        pdVar24[1] = (double)CONCAT44(uVar52,uVar51) + pdVar24[1];
        pdVar24[2] = (double)CONCAT44(uVar54,uVar53) + pdVar24[2];
        pdVar24[3] = pdVar24[3] - (double)CONCAT44(uVar50,uVar49);
        pdVar24[4] = pdVar24[4] - (double)CONCAT44(uVar52,uVar51);
        pdVar24[5] = pdVar24[5] - (double)CONCAT44(uVar54,uVar53);
        local_868[6] = *pdVar24;
        local_868[7] = pdVar24[1];
        uVar41 = (ulonglong)local_8b8.ArrayNum;
        local_868[8] = pdVar24[2];
        local_8d0 = local_8b8.ArrayNum;
        local_868[9] = pdVar24[3];
        local_868[10] = pdVar24[4];
        local_878 = local_8b8.AllocatorInstance.Data + uVar41 * 8;
        local_868[0xb] = pdVar24[5];
        FVar46.Data = local_8b8.AllocatorInstance.Data;
LAB_143db1430:
        while( true ) {
          pFVar16 = local_878;
          if (local_8b8.ArrayNum != (uint)uVar41) {
            local_906[0] = 0;
            `TCheckedPointerIterator<Chaos::FShapeInstanceProxy_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_906);
          }
          pFVar44 = local_870;
          if (FVar46.Data == pFVar16) break;
          pFVar4 = *(FShapeInstanceProxy **)FVar46.Data;
          if (pFVar4 == (FShapeInstanceProxy *)0x0) goto LAB_143db1a7a;
          pFVar25 = FCollisionData::GetQueryData(&(pFVar4->CollisionData).Property);
          uVar41._0_4_ = pFVar25->Word2;
          uVar41._4_4_ = pFVar25->Word3;
          if (!param_5) {
            if ((uVar41 & 0x100000000) != 0) goto LAB_143db1494;
            goto LAB_143db1a7a;
          }
          if ((uVar41 & 0x200000000) == 0) goto code_r0x000143db147e;
LAB_143db1494:
          local_328 = local_578.Rotation.XY.m128d_f64[0];
          dStack_320 = local_578.Rotation.XY.m128d_f64[1];
          local_318 = local_578.Rotation.ZW.m128d_f64[0];
          dStack_310 = local_578.Rotation.ZW.m128d_f64[1];
          local_308 = local_578.Translation.XY.m128d_f64[0];
          dStack_300 = local_578.Translation.XY.m128d_f64[1];
          local_2f8 = local_578.Translation.ZW.m128d_f64[0];
          dStack_2f0 = local_578.Translation.ZW.m128d_f64[1];
          local_2e8 = local_578.Scale3D.XY.m128d_f64[0]._0_4_;
          uStack_2e4 = local_578.Scale3D.XY.m128d_f64[0]._4_4_;
          uStack_2e0 = local_578.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_2dc = local_578.Scale3D.XY.m128d_f64[1]._4_4_;
          local_2d8 = local_578.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_2d4 = local_578.Scale3D.ZW.m128d_f64[0]._4_4_;
          uStack_2d0 = local_578.Scale3D.ZW.m128d_f64[1]._0_4_;
          uStack_2cc = local_578.Scale3D.ZW.m128d_f64[1]._4_4_;
          pdVar24 = (double *)
                    (**(code **)(*(longlong *)pFVar4->_padding_ + 0x98))
                              ((longlong *)pFVar4->_padding_,local_670,&local_328);
          local_900._16_8_ = *(undefined8 *)((longlong)&param_7->field0_0x0 + 0x10);
          uVar49 = *(uint *)&param_7->field0_0x0 & uVar10;
          uVar50 = *(uint *)((longlong)&param_7->field0_0x0 + 4) & uVar11;
          uVar51 = *(uint *)((longlong)&param_7->field0_0x0 + 8) & uVar10;
          uVar52 = *(uint *)((longlong)&param_7->field0_0x0 + 0xc) & uVar11;
          uVar53 = local_900._16_4_ & uVar10;
          uVar54 = local_900._20_4_ & uVar11;
          *pdVar24 = (double)CONCAT44(uVar50,uVar49) + *pdVar24;
          pdVar24[1] = (double)CONCAT44(uVar52,uVar51) + pdVar24[1];
          pdVar24[2] = (double)CONCAT44(uVar54,uVar53) + pdVar24[2];
          pdVar24[3] = pdVar24[3] - (double)CONCAT44(uVar50,uVar49);
          pdVar24[4] = pdVar24[4] - (double)CONCAT44(uVar52,uVar51);
          pdVar24[5] = pdVar24[5] - (double)CONCAT44(uVar54,uVar53);
          local_868[0] = *pdVar24;
          local_868[1] = pdVar24[1];
          local_868[2] = pdVar24[2];
          lVar26 = 0;
          local_868[3] = pdVar24[3];
          local_868[4] = pdVar24[4];
          local_868[5] = pdVar24[5];
          do {
            pdVar24 = (double *)((longlong)local_868 + lVar26 + 0x48);
            if ((*pdVar24 <= *(double *)((longlong)local_868 + lVar26) &&
                 *(double *)((longlong)local_868 + lVar26) != *pdVar24) ||
               (*(double *)((longlong)local_868 + lVar26 + 0x18) <
                *(double *)((longlong)local_868 + lVar26 + 0x30))) goto LAB_143db1a7a;
            lVar26 = lVar26 + 8;
          } while (lVar26 < 0x18);
          local_900.TransformA = &local_578;
          local_638.Rotation.XY.m128d_f64[0] = local_5d8.Rotation.XY.m128d_f64[0];
          local_638.Rotation.XY.m128d_f64[1] = local_5d8.Rotation.XY.m128d_f64[1];
          local_638.Rotation.ZW.m128d_f64[0] = local_5d8.Rotation.ZW.m128d_f64[0];
          local_638.Rotation.ZW.m128d_f64[1] = local_5d8.Rotation.ZW.m128d_f64[1];
          local_900.bComputeMTD = param_6;
          local_900.TmpMTDInfo = &local_6d8;
          local_638.Translation.XY.m128d_f64[0] = local_5d8.Translation.XY.m128d_f64[0];
          local_638.Translation.XY.m128d_f64[1] = local_5d8.Translation.XY.m128d_f64[1];
          local_638.Translation.ZW.m128d_f64[0] = local_5d8.Translation.ZW.m128d_f64[0];
          local_638.Translation.ZW.m128d_f64[1] = local_5d8.Translation.ZW.m128d_f64[1];
          local_638.Scale3D.XY.m128d_f64[0] = local_5d8.Scale3D.XY.m128d_f64[0];
          local_638.Scale3D.XY.m128d_f64[1] = local_5d8.Scale3D.XY.m128d_f64[1];
          local_638.Scale3D.ZW.m128d_f64[0] = local_5d8.Scale3D.ZW.m128d_f64[0];
          local_638.Scale3D.ZW.m128d_f64[1] = local_5d8.Scale3D.ZW.m128d_f64[1];
          local_900.A = pFVar4;
          uVar17 = FImplicitObject::GetType((FImplicitObject *)this_00);
          switch(uVar17) {
          case '\0':
            if (((char)this_00->_padding_ != '\0') &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("T_DERIVED::StaticType() == Type",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                    ,0xbb,L""), bVar18)) {
              pcVar5 = (code *)swi(3);
              uVar19 = (*pcVar5)();
              return (bool)uVar19;
            }
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,(TSphere<double,3> *)this_00,
                                (TRigidTransform<double,3> *)&local_638);
            break;
          case '\x01':
            pFVar29 = this_00;
            goto LAB_143db16c3;
          default:
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                                ,0x7a,L"");
            if (bVar18) {
              pcVar5 = (code *)swi(3);
              uVar19 = (*pcVar5)();
              return (bool)uVar19;
            }
            if (((char)this_00->_padding_ != '\0') &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("T_DERIVED::StaticType() == Type",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                    ,0xbb,L""), bVar18)) {
              pcVar5 = (code *)swi(3);
              uVar19 = (*pcVar5)();
              return (bool)uVar19;
            }
            local_268 = ((local_900.TransformA)->Rotation).XY.m128d_f64[0];
            dStack_260 = ((local_900.TransformA)->Rotation).XY.m128d_f64[1];
            pFVar42 = (FMTDInfo *)0x0;
            if (local_900.bComputeMTD != false) {
              pFVar42 = local_900.TmpMTDInfo;
            }
            local_258 = ((local_900.TransformA)->Rotation).ZW.m128d_f64[0];
            dStack_250 = ((local_900.TransformA)->Rotation).ZW.m128d_f64[1];
            local_248 = ((local_900.TransformA)->Translation).XY.m128d_f64[0];
            dStack_240 = ((local_900.TransformA)->Translation).XY.m128d_f64[1];
            local_238 = ((local_900.TransformA)->Translation).ZW.m128d_f64[0];
            dStack_230 = ((local_900.TransformA)->Translation).ZW.m128d_f64[1];
            local_228 = ((local_900.TransformA)->Scale3D).XY.m128d_f64[0];
            dStack_220 = ((local_900.TransformA)->Scale3D).XY.m128d_f64[1];
            local_218 = ((local_900.TransformA)->Scale3D).ZW.m128d_f64[0];
            dStack_210 = ((local_900.TransformA)->Scale3D).ZW.m128d_f64[1];
            bVar18 = OverlapQuery<Chaos::TSphere<double,3>_>
                               ((FImplicitObject *)(local_900.A)->_padding_,
                                (TRigidTransform<double,3> *)&local_268,(TSphere<double,3> *)this_00
                                ,(TRigidTransform<double,3> *)&local_638,0.0,pFVar42);
            break;
          case '\x03':
            pFVar29 = this_00;
            goto LAB_143db16e4;
          case '\x04':
            pTVar39 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                                ((FImplicitObject *)this_00);
            local_518.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_518.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_518.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_518.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_518.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_518.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_518.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_518.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_518.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_518.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_518.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_518.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_518.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_518.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_518.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_518.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_518.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_518.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_518,(TTransform<double> *)&pTVar39->MTransform,&local_638);
            local_2c8 = local_518.Rotation.XY.m128d_f64[0];
            dStack_2c0 = local_518.Rotation.XY.m128d_f64[1];
            local_2b8 = local_518.Rotation.ZW.m128d_f64[0];
            dStack_2b0 = local_518.Rotation.ZW.m128d_f64[1];
            local_2a8 = local_518.Translation.XY.m128d_f64[0];
            dStack_2a0 = local_518.Translation.XY.m128d_f64[1];
            local_298 = local_518.Translation.ZW.m128d_f64[0];
            dStack_290 = local_518.Translation.ZW.m128d_f64[1];
            local_288 = local_518.Scale3D.XY.m128d_f64[0];
            dStack_280 = local_518.Scale3D.XY.m128d_f64[1];
            local_278 = local_518.Scale3D.ZW.m128d_f64[0];
            dStack_270 = local_518.Scale3D.ZW.m128d_f64[1];
            bVar18 = Utilities::
                     CastHelper<_Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper_::__l19::<lambda_1>_>
                               ((pTVar39->MObject).Reference,(TRigidTransform<double,3> *)&local_2c8
                                ,&local_900);
            break;
          case '\b':
            pFVar29 = this_00;
            goto LAB_143db1705;
          case '@':
            pTVar34 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                                ((FImplicitObject *)this_00);
            pTVar35 = FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                                ((FImplicitObject *)(pTVar34->MObject).Reference);
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar35,(TRigidTransform<double,3> *)&local_638);
            break;
          case 'A':
            pTVar36 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                                ((FImplicitObject *)this_00);
            pFVar29 = (FConvex *)(pTVar36->MObject).Reference;
LAB_143db16c3:
            pTVar27 = FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                                ((FImplicitObject *)pFVar29);
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar27,(TRigidTransform<double,3> *)&local_638);
            break;
          case 'C':
            pTVar37 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                                ((FImplicitObject *)this_00);
            pFVar29 = (FConvex *)(pTVar37->MObject).Reference;
LAB_143db16e4:
            pFVar28 = FImplicitObject::GetObjectChecked<Chaos::FCapsule>((FImplicitObject *)pFVar29)
            ;
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pFVar28,(TRigidTransform<double,3> *)&local_638);
            break;
          case 'H':
            pTVar38 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                                ((FImplicitObject *)this_00);
            pFVar29 = (pTVar38->MObject).Reference;
LAB_143db1705:
            pFVar29 = FImplicitObject::GetObjectChecked<Chaos::FConvex>((FImplicitObject *)pFVar29);
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pFVar29,(TRigidTransform<double,3> *)&local_638);
            break;
          case 0x80:
            pTVar30 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                                ((FImplicitObject *)this_00);
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar30,(TRigidTransform<double,3> *)&local_638);
            break;
          case 0x81:
            pTVar31 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                                ((FImplicitObject *)this_00);
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar31,(TRigidTransform<double,3> *)&local_638);
            break;
          case 0x83:
            pTVar32 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                                ((FImplicitObject *)this_00);
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar32,(TRigidTransform<double,3> *)&local_638);
            break;
          case 0x88:
            pTVar33 = FImplicitObject::
                      GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                                ((FImplicitObject *)this_00);
            bVar18 = `Chaos::FPhysicsObjectCollisionInterface<0>::PairwiseShapeOverlapHelper'::__l19
                     ::<lambda_1>::
                     operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                               (&local_900,pTVar33,(TRigidTransform<double,3> *)&local_638);
          }
          if (bVar18 != false) {
            local_708 = local_868[0];
            dStack_700 = local_868[1];
            local_908 = true;
            local_6f8 = local_868[2];
            local_6f0 = local_868[3];
            dStack_6e8 = local_868[4];
            local_6e0 = local_868[5];
            local_740 = local_868[6];
            dStack_738 = local_868[7];
            local_730 = local_868[8];
            local_728 = local_868[9];
            dStack_720 = local_868[10];
            local_718 = local_868[0xb];
            local_748 = lVar3;
            local_710 = pFVar4;
            UE::Core::Private::Function::CheckCallable(*(void **)param_8);
            pcVar5 = *(code **)param_8;
            plVar43 = *(longlong **)&param_8->field_0x28;
            if (*(longlong **)&param_8->field_0x28 == (longlong *)0x0) {
              plVar43 = (longlong *)&param_8->field_0x10;
            }
            uVar40 = (**(code **)(*plVar43 + 8))();
            cVar20 = (*pcVar5)(uVar40,&local_710,&local_748,&local_6d8);
            if (cVar20 == '\0') {
              local_908 = true;
              goto LAB_143db1aa9;
            }
          }
LAB_143db1a7a:
          uVar41 = (ulonglong)local_8d0;
          FVar46.Data = FVar46.Data + 8;
        }
      }
      uVar41 = (ulonglong)local_8cc;
      FVar45.Data = FVar45.Data + 8;
    }
  }
LAB_143db1aa9:
  if (local_8c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.AllocatorInstance.Data);
  }
  if (local_8b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.AllocatorInstance.Data);
  }
  return local_908;
code_r0x000143db147e:
  uVar41 = (ulonglong)local_8d0;
  FVar46.Data = FVar46.Data + 8;
  goto LAB_143db1430;
}

// PhysicsObjectOverlap @ 143db1bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlap
          (FPhysicsObjectCollisionInterface<1> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5)

{
  bool bVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined1 auStackY_e8 [32];
  TVector<double>_u_0 local_98;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlap(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId9,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,9);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlap(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId9);
  }
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFShapeOverlapData___FPhysicsObjectCollisionInterface__00_Chaos__0AEBUFMTDInfo_3__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlap'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&),bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  local_98._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_98._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar1 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,false,
                     (TVector<double> *)&local_98._s_0,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// PhysicsObjectOverlap @ 143db1d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlap
          (FPhysicsObjectCollisionInterface<0> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5)

{
  bool bVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined1 auStackY_e8 [32];
  TVector<double>_u_0 local_98;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlap(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId9,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,9);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlap(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId9);
  }
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFShapeOverlapData___FPhysicsObjectCollisionInterface__0A__Chaos__0AEBUFMTDInfo_3__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlap'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&),bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  local_98._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_98._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar1 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,false,
                     (TVector<double> *)&local_98._s_0,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// PhysicsObjectOverlapWithAABB @ 143db1eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABB
          (FPhysicsObjectCollisionInterface<1> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,TVector<double> *param_6,TBox<double> *param_7)

{
  bool bVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined1 auStackY_d8 [32];
  code *local_88 [2];
  undefined **local_78;
  TBox<double> *local_70;
  TVector<double> *local_68;
  undefined ***local_60;
  undefined1 local_58;
  undefined4 uStack_57;
  undefined2 uStack_53;
  undefined1 uStack_51;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABB(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,UE::Math::TBox<double>&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId40,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlapWithAABB",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,0x28);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABB(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,UE::Math::TBox<double>&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId40);
  }
  local_58 = 0;
  uStack_57 = 0;
  uStack_53 = 0;
  uStack_51 = 0;
  (param_7->Min).field0_0x0._s_0.X = 0.0;
  (param_7->Min).field0_0x0._s_0.Y = 0.0;
  local_60 = (undefined ***)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABB'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__PhysicsObjectOverlapWithAABB___FPhysicsObjectCollisionInterface__00_Chaos__QEAA_NQEBUFPhysicsObject_4_AEBU__TTransform_N_Math_UE__01_NAEBU__TVector_N_78_AEAU__TBox_N_78__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  (param_7->Min).field0_0x0._s_0.Z = 0.0;
  (param_7->Max).field0_0x0._s_0.X = 0.0;
  local_68 = param_6;
  (param_7->Max).field0_0x0._s_0.Y = 0.0;
  (param_7->Max).field0_0x0._s_0.Z = 0.0;
  param_7->IsValid = '\0';
  param_7->Pad[0] = '\0';
  param_7->Pad[1] = '\0';
  param_7->Pad[2] = '\0';
  param_7->Pad[3] = '\0';
  param_7->Pad[4] = '\0';
  param_7->Pad[5] = '\0';
  param_7->Pad[6] = '\0';
  local_70 = param_7;
  bVar1 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,false,param_6,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar2 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar2 = local_60;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// PhysicsObjectOverlapWithAABB @ 143db2030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABB
          (FPhysicsObjectCollisionInterface<0> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,TVector<double> *param_6,TBox<double> *param_7)

{
  bool bVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined1 auStackY_d8 [32];
  code *local_88 [2];
  undefined **local_78;
  TBox<double> *local_70;
  TVector<double> *local_68;
  undefined ***local_60;
  undefined1 local_58;
  undefined4 uStack_57;
  undefined2 uStack_53;
  undefined1 uStack_51;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABB(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,UE::Math::TBox<double>&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId40,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlapWithAABB",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,0x28);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABB(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,UE::Math::TBox<double>&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId40);
  }
  local_58 = 0;
  uStack_57 = 0;
  uStack_53 = 0;
  uStack_51 = 0;
  (param_7->Min).field0_0x0._s_0.X = 0.0;
  (param_7->Min).field0_0x0._s_0.Y = 0.0;
  local_60 = (undefined ***)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABB'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__PhysicsObjectOverlapWithAABB___FPhysicsObjectCollisionInterface__0A__Chaos__QEAA_NQEBUFPhysicsObject_4_AEBU__TTransform_N_Math_UE__01_NAEBU__TVector_N_78_AEAU__TBox_N_78__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  (param_7->Min).field0_0x0._s_0.Z = 0.0;
  (param_7->Max).field0_0x0._s_0.X = 0.0;
  local_68 = param_6;
  (param_7->Max).field0_0x0._s_0.Y = 0.0;
  (param_7->Max).field0_0x0._s_0.Z = 0.0;
  param_7->IsValid = '\0';
  param_7->Pad[0] = '\0';
  param_7->Pad[1] = '\0';
  param_7->Pad[2] = '\0';
  param_7->Pad[3] = '\0';
  param_7->Pad[4] = '\0';
  param_7->Pad[5] = '\0';
  param_7->Pad[6] = '\0';
  local_70 = param_7;
  bVar1 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,false,param_6,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar2 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar2 = local_60;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// PhysicsObjectOverlapWithAABBIntersections @ 143db21b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBIntersections
          (FPhysicsObjectCollisionInterface<1> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,TVector<double> *param_6,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  bool bVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  code *local_78 [2];
  undefined **local_68;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *local_60;
  TVector<double> *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBIntersections(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId84,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlapWithAABBIntersections",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,0x54);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBIntersections(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId84);
  }
  param_7->ArrayNum = 0;
  if (param_7->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBIntersections'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__PhysicsObjectOverlapWithAABBIntersections___FPhysicsObjectCollisionInterface__00_Chaos__QEAA_NQEBUFPhysicsObject_4_AEBU__TTransform_N_Math_UE__01_NAEBU__TVector_N_78_AEAV__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58 = param_6;
  local_60 = param_7;
  bVar1 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,false,param_6,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// PhysicsObjectOverlapWithAABBIntersections @ 143db2330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBIntersections
          (FPhysicsObjectCollisionInterface<0> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,TVector<double> *param_6,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  bool bVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  code *local_78 [2];
  undefined **local_68;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *local_60;
  TVector<double> *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBIntersections(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId84,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlapWithAABBIntersections",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,0x54);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBIntersections(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId84);
  }
  param_7->ArrayNum = 0;
  if (param_7->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBIntersections'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__PhysicsObjectOverlapWithAABBIntersections___FPhysicsObjectCollisionInterface__0A__Chaos__QEAA_NQEBUFPhysicsObject_4_AEBU__TTransform_N_Math_UE__01_NAEBU__TVector_N_78_AEAV__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58 = param_6;
  local_60 = param_7;
  bVar1 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,false,param_6,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// PhysicsObjectOverlapWithAABBSize @ 143db24b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBSize
          (FPhysicsObjectCollisionInterface<1> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,TVector<double> *param_6,TVector<double> *param_7)

{
  undefined8 uVar1;
  bool bVar2;
  undefined ***pppuVar3;
  bool bVar4;
  undefined1 auStackY_c8 [32];
  code *local_78 [2];
  undefined **local_68;
  TVector<double> *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBSize(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId62,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlapWithAABBSize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,0x3e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBSize(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId62);
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__PhysicsObjectOverlapWithAABBSize___FPhysicsObjectCollisionInterface__00_Chaos__QEAA_NQEBUFPhysicsObject_4_AEBU__TTransform_N_Math_UE__01_NAEBU__TVector_N_78_AEAU978__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  (param_7->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_7->field0_0x0)._s_0.Y = (double)uVar1;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBSize'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  (param_7->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_60 = param_7;
  bVar2 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,false,param_6,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar3 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar3 = local_50;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// PhysicsObjectOverlapWithAABBSize @ 143db2610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBSize
          (FPhysicsObjectCollisionInterface<0> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,TVector<double> *param_6,TVector<double> *param_7)

{
  undefined8 uVar1;
  bool bVar2;
  undefined ***pppuVar3;
  bool bVar4;
  undefined1 auStackY_c8 [32];
  code *local_78 [2];
  undefined **local_68;
  TVector<double> *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBSize(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId62,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlapWithAABBSize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,0x3e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBSize(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,UE::Math::TVector<double>_const&___ptr64,UE::Math::TVector<double>&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId62);
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__PhysicsObjectOverlapWithAABBSize___FPhysicsObjectCollisionInterface__0A__Chaos__QEAA_NQEBUFPhysicsObject_4_AEBU__TTransform_N_Math_UE__01_NAEBU__TVector_N_78_AEAU978__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  (param_7->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_7->field0_0x0)._s_0.Y = (double)uVar1;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBSize'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  (param_7->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_60 = param_7;
  bVar2 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,false,param_6,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar3 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar3 = local_50;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// PhysicsObjectOverlapWithMTD @ 143db2770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithMTD
          (FPhysicsObjectCollisionInterface<1> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,FMTDInfo *param_6)

{
  bool bVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined1 auStackY_e8 [32];
  TVector<double>_u_0 local_98;
  code *local_78 [2];
  undefined **local_68;
  FMTDInfo *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithMTD(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,Chaos::FMTDInfo&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId16,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlapWithMTD",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,0x10);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithMTD(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,Chaos::FMTDInfo&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId16);
  }
  local_60 = param_6;
  param_6->Penetration = 0.0;
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__PhysicsObjectOverlapWithMTD___FPhysicsObjectCollisionInterface__00_Chaos__QEAA_NQEBUFPhysicsObject_4_AEBU__TTransform_N_Math_UE__01_NAEAUFMTDInfo_4__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithMTD'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  local_98._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_98._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar1 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,true,
                     (TVector<double> *)&local_98._s_0,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// PhysicsObjectOverlapWithMTD @ 143db28e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithMTD
          (FPhysicsObjectCollisionInterface<0> *this,FPhysicsObject *param_1,
          TTransform<double> *param_2,FPhysicsObject *param_3,TTransform<double> *param_4,
          bool param_5,FMTDInfo *param_6)

{
  bool bVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined1 auStackY_e8 [32];
  TVector<double>_u_0 local_98;
  code *local_78 [2];
  undefined **local_68;
  FMTDInfo *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithMTD(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,Chaos::FMTDInfo&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId16,
               "FPhysicsObjectCollisionInterface<Id>::PhysicsObjectOverlapWithMTD",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PhysicsObjectCollisionInterface.cpp"
               ,0x10);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithMTD(Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,Chaos::FPhysicsObject_const*___ptr64_const,UE::Math::TTransform<double>_const&___ptr64,bool,Chaos::FMTDInfo&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId16);
  }
  local_60 = param_6;
  param_6->Penetration = 0.0;
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__PhysicsObjectOverlapWithMTD___FPhysicsObjectCollisionInterface__0A__Chaos__QEAA_NQEBUFPhysicsObject_4_AEBU__TTransform_N_Math_UE__01_NAEAUFMTDInfo_4__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithMTD'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
                ::Call;
  local_98._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_98._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar1 = PairwiseShapeOverlapHelper
                    (this,param_1,param_2,param_3,param_4,param_5,true,
                     (TVector<double> *)&local_98._s_0,
                     (TFunction<bool___cdecl(Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&)>
                      *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar2 = local_50;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

