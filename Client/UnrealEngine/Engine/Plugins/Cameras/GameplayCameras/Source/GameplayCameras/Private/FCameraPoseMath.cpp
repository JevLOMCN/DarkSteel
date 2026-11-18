// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 16

// BuildProjectionMatrix @ 14d60d1e0

TMatrix<double> * __cdecl
UE::Cameras::FCameraPoseMath::BuildProjectionMatrix
          (TMatrix<double> *__return_storage_ptr__,FCameraPose *param_1,double param_2)

{
  double dVar1;
  float fVar2;
  
  fVar2 = param_1->NearClippingPlane;
  if (param_1->NearClippingPlane <= 0.0) {
    fVar2 = GNearClippingPlane;
  }
  dVar1 = FCameraPose::GetEffectiveFieldOfView(param_1,true);
  if (dVar1 <= __real_3f50624de0000000) {
    dVar1 = __real_3f50624de0000000;
  }
  dVar1 = tan(dVar1 * __real_3f81df46a2529d39);
  dVar1 = __real_3ff0000000000000 / dVar1;
  __return_storage_ptr__->M[0][0] = dVar1;
  __return_storage_ptr__->M[0][1] = 0.0;
  __return_storage_ptr__->M[0][2] = 0.0;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][1] = dVar1 * param_2;
  __return_storage_ptr__->M[1][2] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = 0.0;
  __return_storage_ptr__->M[2][1] = 0.0;
  __return_storage_ptr__->M[2][2] = 0.0;
  __return_storage_ptr__->M[2][3] = 1.0;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = (double)fVar2;
  __return_storage_ptr__->M[3][3] = 0.0;
  return __return_storage_ptr__;
}

// BuildViewProjectionMatrix @ 14d60d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
UE::Cameras::FCameraPoseMath::BuildViewProjectionMatrix
          (TMatrix<double> *__return_storage_ptr__,FCameraPose *param_1,double param_2)

{
  undefined8 uVar1;
  TInverseRotationMatrix<double> *pTVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_2e8 [32];
  TRotator<double> local_2c8;
  TMatrix<double> local_2a8;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  TInverseRotationMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  uVar1 = *(undefined8 *)((longlong)&(param_1->Location).field0_0x0 + 0x10);
  local_2a8.M[0][2] = 0.0;
  local_2a8.M[0][3] = 0.0;
  local_2a8.M[1][2] = 0.0;
  local_2a8.M[1][3] = 0.0;
  local_2a8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_2a8.M[1][1] = _UNK_15061cbc8;
  local_2a8.M[2][0] = 0.0;
  local_2a8.M[2][1] = 0.0;
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_2a8.M[3][0] =
       (double)CONCAT44(*(uint *)((longlong)&(param_1->Location).field0_0x0 + 4) ^ uVar4,
                        *(uint *)&(param_1->Location).field0_0x0 ^ uVar3);
  local_2a8.M[3][2] = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar4,(uint)uVar1 ^ uVar3)
  ;
  local_2a8.M[3][3] = __real_3ff0000000000000;
  local_2c8.Pitch = (param_1->Rotation).Pitch;
  local_2c8.Yaw = (param_1->Rotation).Yaw;
  local_2a8.M[3][1] =
       (double)CONCAT44(*(uint *)((longlong)&(param_1->Location).field0_0x0 + 0xc) ^ uVar4,
                        *(uint *)((longlong)&(param_1->Location).field0_0x0 + 8) ^ uVar3);
  local_2c8.Roll = (param_1->Rotation).Roll;
  local_2a8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_2a8.M[0][1] = _UNK_150689518;
  local_2a8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_2a8.M[2][3] = _UNK_150689518;
  pTVar2 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                     (&local_a8,&local_2c8);
  local_228.M[0][2] = ___xmm_00000000000000003ff0000000000000;
  local_228.M[0][3] = _UNK_150689518;
  local_228.M[1][0] = ___xmm_00000000000000003ff0000000000000;
  local_228.M[1][1] = _UNK_150689518;
  local_228.M[0][0] = 0.0;
  local_228.M[0][1] = 0.0;
  local_228.M[3][0] = 0.0;
  local_228.M[3][1] = 0.0;
  local_228.M[1][2] = 0.0;
  local_228.M[1][3] = 0.0;
  local_228.M[2][0] = ___xmm_3ff00000000000000000000000000000;
  local_228.M[2][1] = _UNK_15061cbc8;
  local_228.M[2][2] = 0.0;
  local_228.M[2][3] = 0.0;
  local_228.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_228.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_1a8,(TMatrix<double> *)pTVar2,&local_228);
  BuildProjectionMatrix(&local_128,param_1,param_2);
  VectorMatrixMultiply(&local_228,&local_2a8,&local_1a8);
  VectorMatrixMultiply(__return_storage_ptr__,&local_228,&local_128);
  return __return_storage_ptr__;
}

// GetEffectiveAspectRatio @ 14d61a000

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

double __cdecl
UE::Cameras::FCameraPoseMath::GetEffectiveAspectRatio
          (FCameraPose *param_1,TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_2)

{
  double dVar1;
  int local_res8;
  int iStackX_c;
  
  if ((param_1->ConstrainAspectRatio == false) &&
     (param_2->Object != (FCameraEvaluationContext *)0x0)) {
    FCameraEvaluationContext::GetViewportSize(param_2->Object);
    if ((0 < local_res8) && (0 < iStackX_c)) {
      dVar1 = (double)local_res8 / (double)iStackX_c;
      goto LAB_14d61a05f;
    }
  }
  dVar1 = FCameraPose::GetSensorAspectRatio(param_1);
LAB_14d61a05f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return dVar1;
}

// GetEffectiveFieldsOfView @ 14d61a090

FCameraFieldsOfView * __cdecl
UE::Cameras::FCameraPoseMath::GetEffectiveFieldsOfView
          (FCameraFieldsOfView *__return_storage_ptr__,FCameraPose *param_1)

{
  double dVar1;
  
  dVar1 = FCameraPose::GetSensorAspectRatio(param_1);
  GetEffectiveFieldsOfView(__return_storage_ptr__,param_1,dVar1);
  return __return_storage_ptr__;
}

// GetEffectiveFieldsOfView @ 14d61a0d0

FCameraFieldsOfView * __cdecl
UE::Cameras::FCameraPoseMath::GetEffectiveFieldsOfView
          (FCameraFieldsOfView *__return_storage_ptr__,FCameraPose *param_1,double param_2)

{
  uchar uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = FCameraPose::GetEffectiveFieldOfView(param_1,true);
  uVar1 = (param_1->AspectRatioAxisConstraint).Value;
  if ((uVar1 != '\0') && ((uVar1 != '\x02' || (__real_3ff0000000000000 <= param_2)))) {
    __return_storage_ptr__->HorizontalFieldOfView = dVar2;
    dVar2 = tan(dVar2 * __real_3f81df46a2529d39);
    dVar2 = atan(dVar2 / param_2);
    __return_storage_ptr__->VerticalFieldOfView = dVar2 * __real_405ca5dc1a63c1f8;
    return __return_storage_ptr__;
  }
  dVar2 = tan(dVar2 * __real_3f81df46a2529d39);
  dVar2 = atan(dVar2 / param_2);
  dVar3 = tan(dVar2);
  dVar3 = atan(dVar3 * param_2);
  dVar3 = dVar3 * __real_405ca5dc1a63c1f8;
  __return_storage_ptr__->VerticalFieldOfView = dVar2 * __real_405ca5dc1a63c1f8;
  __return_storage_ptr__->HorizontalFieldOfView = dVar3;
  return __return_storage_ptr__;
}

// GetEffectiveFieldsOfView @ 14d61a1b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraFieldsOfView * __cdecl
UE::Cameras::FCameraPoseMath::GetEffectiveFieldsOfView
          (FCameraFieldsOfView *__return_storage_ptr__,FCameraPose *param_1,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  FCameraFieldsOfView *pFVar3;
  FCameraFieldsOfView local_18;
  
  local_18.HorizontalFieldOfView = (double)param_2->Object;
  local_18.VerticalFieldOfView = (double)(param_2->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_18.VerticalFieldOfView !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_18.VerticalFieldOfView)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_18.VerticalFieldOfView)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  dVar2 = GetEffectiveAspectRatio
                    (param_1,(TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *)&local_18
                    );
  pFVar3 = GetEffectiveFieldsOfView(&local_18,param_1,dVar2);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  dVar2 = pFVar3->VerticalFieldOfView;
  __return_storage_ptr__->HorizontalFieldOfView = pFVar3->HorizontalFieldOfView;
  __return_storage_ptr__->VerticalFieldOfView = dVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// InverseProjectionMatrix @ 14d620b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
UE::Cameras::FCameraPoseMath::InverseProjectionMatrix
          (TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_148 [32];
  TPlane<double> local_118;
  TPlane<double> local_f8;
  TPlane<double> local_d8;
  TPlane<double> local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  dVar3 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  dVar1 = param_1->M[1][0];
  if (((((((dVar1 == 0.0) && (param_1->M[3][0] == 0.0)) && (param_1->M[0][1] == 0.0)) &&
        ((param_1->M[3][1] == 0.0 && (param_1->M[0][2] == 0.0)))) &&
       ((param_1->M[1][2] == 0.0 && ((param_1->M[0][3] == 0.0 && (param_1->M[1][3] == 0.0)))))) &&
      (__real_3ff0000000000000 == param_1->M[2][3])) && (param_1->M[3][3] == 0.0)) {
    local_118._padding_ = (longlong)__real_3ff0000000000000;
    local_b8._padding_ = (longlong)(__real_3ff0000000000000 / param_1->M[0][0]);
    local_f8._padding_ = 0;
    local_d8._padding_ = (longlong)(__real_3ff0000000000000 / param_1->M[1][1]);
    local_f8.W = __real_3ff0000000000000 / param_1->M[3][2];
    local_d8._padding_ = 0;
    dVar1 = (double)local_b8._padding_ * param_1->M[2][0];
    uVar4 = (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_b8._padding_ = 0;
    local_118._padding_ = CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar5,SUB84(dVar1,0) ^ uVar4);
    dVar1 = (double)local_d8._padding_ * param_1->M[2][1];
    local_118._padding_ = CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar5,SUB84(dVar1,0) ^ uVar4);
    dVar1 = local_f8.W * param_1->M[2][2];
    local_118.W = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar5,SUB84(dVar1,0) ^ uVar4);
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8.W = 0.0;
    local_b8._padding_ = 0;
    local_b8.W = 0.0;
    UE::Math::TMatrix<double>::TMatrix<double>
              (__return_storage_ptr__,&local_b8,&local_d8,&local_f8,&local_118);
  }
  else {
    dVar2 = param_1->M[0][0];
    uVar4 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((((__real_3e45798ee0000000 <= (double)CONCAT44(uVar5,uVar4) &&
            (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee0000000) ||
          (dVar2 = param_1->M[0][1],
          uVar4 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3e45798ee0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee0000000)) ||
         (dVar2 = param_1->M[0][2],
         uVar4 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar5 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3e45798ee0000000 <= (double)CONCAT44(uVar5,uVar4) &&
         (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee0000000)) ||
        (((__real_3e45798ee0000000 <
           (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
          (dVar1 = param_1->M[1][1],
          uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3e45798ee0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee0000000)) ||
         ((dVar1 = param_1->M[1][2],
          uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3e45798ee0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee0000000 ||
          ((dVar1 = param_1->M[2][0],
           uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3e45798ee0000000 <= (double)CONCAT44(uVar5,uVar4) &&
           (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee0000000 ||
           (dVar1 = param_1->M[2][1],
           uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3e45798ee0000000 <= (double)CONCAT44(uVar5,uVar4) &&
           (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee0000000)))))))) ||
       (dVar1 = param_1->M[2][2],
       uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3e45798ee0000000 <= (double)CONCAT44(uVar5,uVar4) &&
       (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee0000000)) {
      FMath::MatrixInverse(&local_98,param_1);
      __return_storage_ptr__->M[0][0] = local_98.M[0][0];
      __return_storage_ptr__->M[0][1] = local_98.M[0][1];
      __return_storage_ptr__->M[0][2] = local_98.M[0][2];
      __return_storage_ptr__->M[0][3] = local_98.M[0][3];
      __return_storage_ptr__->M[1][0] = local_98.M[1][0];
      __return_storage_ptr__->M[1][1] = local_98.M[1][1];
      __return_storage_ptr__->M[1][2] = local_98.M[1][2];
      __return_storage_ptr__->M[1][3] = local_98.M[1][3];
      __return_storage_ptr__->M[2][0] = local_98.M[2][0];
      __return_storage_ptr__->M[2][1] = local_98.M[2][1];
      __return_storage_ptr__->M[2][2] = local_98.M[2][2];
      __return_storage_ptr__->M[2][3] = local_98.M[2][3];
      __return_storage_ptr__->M[3][0] = local_98.M[3][0];
      __return_storage_ptr__->M[3][1] = local_98.M[3][1];
      __return_storage_ptr__->M[3][2] = local_98.M[3][2];
      __return_storage_ptr__->M[3][3] = local_98.M[3][3];
    }
    else {
      __return_storage_ptr__->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      __return_storage_ptr__->M[0][1] = dVar3;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
      __return_storage_ptr__->M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      __return_storage_ptr__->M[0][3] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
      __return_storage_ptr__->M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      __return_storage_ptr__->M[1][1] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
      __return_storage_ptr__->M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      __return_storage_ptr__->M[1][3] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
      __return_storage_ptr__->M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      __return_storage_ptr__->M[2][1] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
      __return_storage_ptr__->M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      __return_storage_ptr__->M[2][3] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
      __return_storage_ptr__->M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      __return_storage_ptr__->M[3][1] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
      __return_storage_ptr__->M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      __return_storage_ptr__->M[3][3] = dVar1;
    }
  }
  return __return_storage_ptr__;
}

// ProjectCameraToScreen @ 14d62e730

TOptional<UE::Math::TVector2<double>_> * __cdecl
UE::Cameras::FCameraPoseMath::ProjectCameraToScreen
          (TOptional<UE::Math::TVector2<double>_> *__return_storage_ptr__,FCameraPose *param_1,
          double param_2,TVector<double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TMatrix<double> local_a8;
  
  BuildProjectionMatrix(&local_a8,param_1,param_2);
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = dVar3 * local_a8.M[1][3] + dVar2 * local_a8.M[0][3] + dVar1 * local_a8.M[2][3] +
          __real_3ff0000000000000 * local_a8.M[3][3];
  if (dVar5 <= 0.0) {
    if (!param_4) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  dVar4 = __real_3fe0000000000000 -
          (__real_3ff0000000000000 / dVar5) *
          (dVar3 * local_a8.M[1][1] + dVar2 * local_a8.M[0][1] + dVar1 * local_a8.M[2][1] +
          __real_3ff0000000000000 * local_a8.M[3][1]) * __real_3fe0000000000000;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X =
       ((__real_3ff0000000000000 / dVar5) *
        (dVar3 * local_a8.M[1][0] + dVar2 * local_a8.M[0][0] + dVar1 * local_a8.M[2][0] +
        __real_3ff0000000000000 * local_a8.M[3][0]) + __real_3ff0000000000000) *
       __real_3fe0000000000000;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar4;
  __return_storage_ptr__->bIsSet = false;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// ProjectToScreen @ 14d62e870

TOptional<UE::Math::TVector2<double>_> * __cdecl
UE::Cameras::FCameraPoseMath::ProjectToScreen
          (TOptional<UE::Math::TVector2<double>_> *__return_storage_ptr__,TMatrix<double> *param_1,
          TVector<double> *param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = param_1->M[0][3] * dVar3 + param_1->M[1][3] * dVar4 + param_1->M[2][3] * dVar1 +
          param_1->M[3][3] * __real_3ff0000000000000;
  if (dVar2 <= 0.0) {
    if (!param_3) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  dVar5 = __real_3fe0000000000000 -
          (__real_3ff0000000000000 / dVar2) *
          (dVar4 * param_1->M[1][1] + dVar3 * param_1->M[0][1] + dVar1 * param_1->M[2][1] +
          __real_3ff0000000000000 * param_1->M[3][1]) * __real_3fe0000000000000;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X =
       ((__real_3ff0000000000000 / dVar2) *
        (dVar4 * param_1->M[1][0] + dVar3 * param_1->M[0][0] + dVar1 * param_1->M[2][0] +
        __real_3ff0000000000000 * param_1->M[3][0]) + __real_3ff0000000000000) *
       __real_3fe0000000000000;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar5;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// ProjectWorldToScreen @ 14d62e9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Math::TVector2<double>_> * __cdecl
UE::Cameras::FCameraPoseMath::ProjectWorldToScreen
          (TOptional<UE::Math::TVector2<double>_> *__return_storage_ptr__,FCameraPose *param_1,
          double param_2,TVector<double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_d8 [32];
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  BuildViewProjectionMatrix(&local_b8,param_1,param_2);
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = dVar3 * local_b8.M[1][3] + dVar2 * local_b8.M[0][3] + dVar1 * local_b8.M[2][3] +
          __real_3ff0000000000000 * local_b8.M[3][3];
  if (dVar5 <= 0.0) {
    if (!param_4) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  dVar4 = __real_3fe0000000000000 -
          (__real_3ff0000000000000 / dVar5) *
          (dVar3 * local_b8.M[1][1] + dVar2 * local_b8.M[0][1] + dVar1 * local_b8.M[2][1] +
          __real_3ff0000000000000 * local_b8.M[3][1]) * __real_3fe0000000000000;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X =
       ((__real_3ff0000000000000 / dVar5) *
        (dVar3 * local_b8.M[1][0] + dVar2 * local_b8.M[0][0] + dVar1 * local_b8.M[2][0] +
        __real_3ff0000000000000 * local_b8.M[3][0]) + __real_3ff0000000000000) *
       __real_3fe0000000000000;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar4;
  __return_storage_ptr__->bIsSet = false;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// UnprojectFromScreen @ 14d63aa50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRay<double> * __cdecl
UE::Cameras::FCameraPoseMath::UnprojectFromScreen
          (TRay<double> *__return_storage_ptr__,TMatrix<double> *param_1,TVector2<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dStack_e0;
  double dStack_c0;
  
  dVar31 = param_1->M[1][0];
  dVar28 = param_1->M[1][1];
  dVar11 = param_1->M[0][0];
  dVar12 = param_1->M[0][1];
  dVar13 = param_1->M[2][0];
  dVar14 = param_1->M[2][1];
  dVar15 = param_1->M[3][0];
  dVar16 = param_1->M[3][1];
  dVar17 = param_1->M[1][2];
  dVar18 = param_1->M[1][3];
  dVar30 = (((param_2->field0_0x0)._s_0.X - __real_3fe0000000000000) + (param_2->field0_0x0)._s_0.X)
           - __real_3fe0000000000000;
  dVar10 = __real_3fe0000000000000 - (param_2->field0_0x0)._s_0.Y;
  dVar19 = param_1->M[0][2];
  dVar20 = param_1->M[0][3];
  dVar21 = param_1->M[2][2];
  dVar22 = param_1->M[2][3];
  dVar23 = param_1->M[3][2];
  dVar24 = param_1->M[3][3];
  dVar10 = dVar10 + dVar10;
  auVar1._8_4_ = SUB84(dVar10,0);
  auVar1._0_8_ = dVar10;
  auVar1._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar9 = dVar10 * dVar31 + dVar30 * dVar11;
  dVar27 = dVar10 * dVar28 + dVar30 * dVar12;
  auVar6._8_4_ = SUB84(dVar27,0);
  auVar6._0_8_ = dVar9;
  auVar6._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  dStack_e0 = auVar6._8_8_;
  dVar9 = dVar9 + ___xmm_3ff00000000000003ff0000000000000 * dVar13;
  dStack_e0 = dStack_e0 + ___xmm_3ff00000000000003ff0000000000000 * dVar14;
  auVar2._8_4_ = SUB84(dStack_e0,0);
  auVar2._0_8_ = dVar9;
  auVar2._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  dStack_e0 = auVar2._8_8_;
  dVar9 = dVar9 + _UNK_150689688 * dVar15;
  dStack_e0 = dStack_e0 + _UNK_150689688 * dVar16;
  dStack_c0 = auVar1._8_8_;
  auVar7._8_4_ = SUB84(dStack_e0,0);
  auVar7._0_8_ = dVar9;
  auVar7._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  dVar27 = dVar10 * dVar17 + dVar30 * dVar19 + ___xmm_3ff00000000000003ff0000000000000 * dVar21 +
           _UNK_150689688 * dVar23;
  dVar5 = dStack_c0 * dVar18 + dVar30 * dVar20 + ___xmm_3ff00000000000003ff0000000000000 * dVar22 +
          _UNK_150689688 * dVar24;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar27;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar5 = dVar10 * dVar31 + dVar30 * dVar11 + ___xmm_3ff00000000000003f847ae147ae147b * dVar13 +
          _UNK_152b97928 * dVar15;
  dVar31 = dVar10 * dVar28 + dVar30 * dVar12 + ___xmm_3ff00000000000003f847ae147ae147b * dVar14 +
           _UNK_152b97928 * dVar16;
  dStack_e0 = auVar7._8_8_;
  dStack_c0 = auVar3._8_8_;
  dVar28 = dVar10 * dVar17 + dVar30 * dVar19 + ___xmm_3ff00000000000003f847ae147ae147b * dVar21 +
           _UNK_152b97928 * dVar23;
  dVar30 = dVar10 * dVar18 + dVar30 * dVar20 + ___xmm_3ff00000000000003f847ae147ae147b * dVar22 +
           _UNK_152b97928 * dVar24;
  if (dStack_c0 != 0.0) {
    dStack_c0 = __real_3ff0000000000000 / dStack_c0;
    dVar9 = dVar9 * dStack_c0;
    dStack_e0 = dStack_e0 * dStack_c0;
    dVar27 = dStack_c0 * dVar27;
  }
  if (dVar30 != 0.0) {
    dVar30 = __real_3ff0000000000000 / dVar30;
    dVar5 = dVar5 * dVar30;
    dVar31 = dVar31 * dVar30;
    dVar28 = dVar28 * dVar30;
  }
  dVar5 = dVar5 - dVar9;
  dVar31 = dVar31 - dStack_e0;
  uVar29 = dVar28 - dVar27;
  dVar30 = dVar31 * dVar31 + dVar5 * dVar5 + (double)uVar29 * (double)uVar29;
  if (dVar30 != __real_3ff0000000000000) {
    if (dVar30 < __real_3e45798ee0000000) {
      dVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14d63ace8;
    }
    dVar30 = __real_3ff0000000000000 / SQRT(dVar30);
    dVar5 = dVar5 * dVar30;
    dVar31 = dVar31 * dVar30;
    uVar29 = (double)uVar29 * dVar30;
  }
  uVar25 = SUB84(dVar31,0);
  uVar26 = (undefined4)((ulonglong)dVar31 >> 0x20);
LAB_14d63ace8:
  auVar4._8_4_ = SUB84(dStack_e0,0);
  auVar4._0_8_ = dVar9;
  auVar4._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar4;
  auVar8._8_4_ = uVar25;
  auVar8._0_8_ = dVar5;
  auVar8._12_4_ = uVar26;
  *(undefined1 (*) [16])&(__return_storage_ptr__->Direction).field0_0x0 = auVar8;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar27;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = (double)uVar29;
  return __return_storage_ptr__;
}

// UnprojectFromScreen @ 14d63ad50

TVector<double> * __cdecl
UE::Cameras::FCameraPoseMath::UnprojectFromScreen
          (TVector<double> *__return_storage_ptr__,TMatrix<double> *param_1,
          TVector2<double> *param_2,double param_3)

{
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  
  UnprojectFromScreen((TRay<double> *)&local_48._s_0,param_1,param_2);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_30 * param_3 + local_48._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28 * param_3 + local_48._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_20 * param_3 + local_48._s_0.Z;
  return __return_storage_ptr__;
}

// UnprojectScreenToCamera @ 14d63adc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRay<double> * __cdecl
UE::Cameras::FCameraPoseMath::UnprojectScreenToCamera
          (TRay<double> *__return_storage_ptr__,FCameraPose *param_1,double param_2,
          TVector2<double> *param_3)

{
  undefined1 auStack_138 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  BuildProjectionMatrix(&local_118,param_1,param_2);
  UE::Math::TMatrix<double>::InverseFast(&local_118,&local_98);
  UnprojectFromScreen(__return_storage_ptr__,&local_98,param_3);
  return __return_storage_ptr__;
}

// UnprojectScreenToCamera @ 14d63ae40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __cdecl
UE::Cameras::FCameraPoseMath::UnprojectScreenToCamera
          (TVector<double> *__return_storage_ptr__,FCameraPose *param_1,double param_2,
          TVector2<double> *param_3,double param_4)

{
  undefined1 auStack_168 [32];
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  BuildProjectionMatrix(&local_118,param_1,param_2);
  UE::Math::TMatrix<double>::InverseFast(&local_118,&local_98);
  UnprojectFromScreen((TRay<double> *)&local_148._s_0,&local_98,param_3);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_130 * param_4 + local_148._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_120 * param_4 + local_148._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_128 * param_4 + local_148._s_0.Y;
  return __return_storage_ptr__;
}

// UnprojectScreenToWorld @ 14d63af10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRay<double> * __cdecl
UE::Cameras::FCameraPoseMath::UnprojectScreenToWorld
          (TRay<double> *__return_storage_ptr__,FCameraPose *param_1,double param_2,
          TVector2<double> *param_3)

{
  undefined1 auStack_138 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  BuildViewProjectionMatrix(&local_118,param_1,param_2);
  UE::Math::TMatrix<double>::InverseFast(&local_118,&local_98);
  UnprojectFromScreen(__return_storage_ptr__,&local_98,param_3);
  return __return_storage_ptr__;
}

// UnprojectScreenToWorld @ 14d63af90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __cdecl
UE::Cameras::FCameraPoseMath::UnprojectScreenToWorld
          (TVector<double> *__return_storage_ptr__,FCameraPose *param_1,double param_2,
          TVector2<double> *param_3,double param_4)

{
  undefined1 auStack_168 [32];
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  BuildViewProjectionMatrix(&local_118,param_1,param_2);
  UE::Math::TMatrix<double>::InverseFast(&local_118,&local_98);
  UnprojectFromScreen((TRay<double> *)&local_148._s_0,&local_98,param_3);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_130 * param_4 + local_148._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_120 * param_4 + local_148._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_128 * param_4 + local_148._s_0.Y;
  return __return_storage_ptr__;
}

