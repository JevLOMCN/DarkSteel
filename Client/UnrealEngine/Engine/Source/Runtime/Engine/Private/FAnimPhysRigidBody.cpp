// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimPhysRigidBody @ 1474b1ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FAnimPhysRigidBody * __thiscall
FAnimPhysRigidBody::FAnimPhysRigidBody
          (FAnimPhysRigidBody *this,TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2)

{
  int *piVar1;
  TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> *pTVar2;
  TVector<double> *pTVar3;
  TMatrix<double> *pTVar4;
  double *pdVar5;
  int iVar6;
  FAnimPhysShape *pFVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  FScriptContainerElement *pFVar29;
  bool bVar30;
  ulonglong uVar31;
  TMatrix<double> *pTVar32;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar33;
  double *pdVar34;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar35;
  FScriptContainerElement *pFVar36;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar37;
  float fVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  double dVar43;
  float fVar44;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6 [6];
  FScriptContainerElement **local_1c0;
  FScriptContainerElement *local_1b8;
  wchar_t *local_1b0;
  wchar_t **local_1a8;
  TVector<double>_u_0 local_1a0;
  TMatrix<double> local_188;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar28;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  this->_padding_ = (longlong)UE::Math::TQuat<double>::Identity.X;
  this->_padding_ = (longlong)dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.W;
  this->_padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
  this->_padding_ = (longlong)dVar13;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Mass = 1.0;
  this->InverseMass = 1.0;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->InverseTensorWithoutMass).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->InverseTensorWithoutMass).M[0][1] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->InverseTensorWithoutMass).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->InverseTensorWithoutMass).M[0][3] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->InverseTensorWithoutMass).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->InverseTensorWithoutMass).M[1][1] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->InverseTensorWithoutMass).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->InverseTensorWithoutMass).M[1][3] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->InverseTensorWithoutMass).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->InverseTensorWithoutMass).M[2][1] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->InverseTensorWithoutMass).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->InverseTensorWithoutMass).M[2][3] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->InverseTensorWithoutMass).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->InverseTensorWithoutMass).M[3][1] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->InverseTensorWithoutMass).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->InverseTensorWithoutMass).M[3][3] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->InverseWorldSpaceTensor).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->InverseWorldSpaceTensor).M[0][1] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->InverseWorldSpaceTensor).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->InverseWorldSpaceTensor).M[0][3] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->InverseWorldSpaceTensor).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->InverseWorldSpaceTensor).M[1][1] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->InverseWorldSpaceTensor).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->InverseWorldSpaceTensor).M[1][3] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->InverseWorldSpaceTensor).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->InverseWorldSpaceTensor).M[2][1] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->InverseWorldSpaceTensor).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->InverseWorldSpaceTensor).M[2][3] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->InverseWorldSpaceTensor).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->InverseWorldSpaceTensor).M[3][1] = dVar13;
  dVar13 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->InverseWorldSpaceTensor).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->InverseWorldSpaceTensor).M[3][3] = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  (this->NextOrientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->NextOrientation).Y = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.W;
  (this->NextOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->NextOrientation).W = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  (this->PreviousOrientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->PreviousOrientation).Y = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.W;
  (this->PreviousOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->PreviousOrientation).W = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  (this->StartOrientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->StartOrientation).Y = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.W;
  (this->StartOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->StartOrientation).W = dVar13;
  this->bAngularDampingOverriden = false;
  this->AngularDamping = 0.0;
  this->bLinearDampingOverriden = false;
  this->LinearDamping = 0.0;
  this->GravityScale = 1.0;
  this->bUseGravityOverride = false;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GravityOverride).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GravityOverride).field0_0x0._s_0.Y = (double)uVar28;
  (this->GravityOverride).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreviousState).Pose.Position.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviousState).Pose.Position.field0_0x0._s_0.Y = (double)uVar28;
  (this->PreviousState).Pose.Position.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  (this->PreviousState).Pose.Orientation.X = UE::Math::TQuat<double>::Identity.X;
  (this->PreviousState).Pose.Orientation.Y = dVar13;
  dVar13 = UE::Math::TQuat<double>::Identity.W;
  (this->PreviousState).Pose.Orientation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->PreviousState).Pose.Orientation.W = dVar13;
  (this->PreviousState).Pose.Scale = 1.0;
  pTVar2 = &this->Shapes;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Shapes).ArrayMax;
  (this->PreviousState).LinearMomentum.field0_0x0._s_0.X = 0.0;
  (this->PreviousState).LinearMomentum.field0_0x0._s_0.Y = 0.0;
  (this->PreviousState).LinearMomentum.field0_0x0._s_0.Z = 0.0;
  (this->PreviousState).AngularMomentum.field0_0x0._s_0.X = 0.0;
  (this->PreviousState).AngularMomentum.field0_0x0._s_0.Y = 0.0;
  (this->PreviousState).AngularMomentum.field0_0x0._s_0.Z = 0.0;
  iVar6 = param_1->ArrayNum;
  pFVar7 = (FAnimPhysShape *)(param_1->AllocatorInstance).Data;
  (this->Shapes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FAnimPhysShape,FAnimPhysShape,int>((pTVar2->AllocatorInstance).Data,pFVar7,iVar6)
    ;
  }
  dVar18 = (param_2->field0_0x0)._s_0.Y;
  dVar13 = 0.0;
  dVar16 = 0.0;
  (this->StartPosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->StartPosition).field0_0x0._s_0.Y = dVar18;
  dVar18 = 0.0;
  (this->StartPosition).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  fVar44 = 0.0;
  dVar43 = (param_2->field0_0x0)._s_0.Y;
  (this->PreviousPosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->PreviousPosition).field0_0x0._s_0.Y = dVar43;
  (this->PreviousPosition).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar43 = (param_2->field0_0x0)._s_0.Y;
  (this->NextPosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->NextPosition).field0_0x0._s_0.Y = dVar43;
  (this->NextPosition).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar43 = (param_2->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_2->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar43;
  this->_padding_ = (longlong)(param_2->field0_0x0)._s_0.Z;
  pTVar33 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
            (pTVar2->AllocatorInstance).Data;
  iVar6 = (this->Shapes).ArrayNum;
  pTVar37 = pTVar33 + (longlong)iVar6 * 4;
  pTVar35 = pTVar33 + 1;
  while( true ) {
    if ((this->Shapes).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FAnimPhysShape_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1c8);
    }
    if (pTVar33 == pTVar37) break;
    FAnimPhys::CalculateCenterOfMass
              ((TVector<double> *)&local_1a0._s_0,pTVar33,
               (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)pTVar35);
    fVar38 = FAnimPhys::CalculateVolume
                       (pTVar33,(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                                pTVar35);
    fVar44 = fVar44 + fVar38;
    dVar43 = (double)fVar38;
    pTVar33 = pTVar33 + 4;
    pTVar35 = pTVar35 + 4;
    dVar13 = dVar13 + dVar43 * local_1a0._s_0.X;
    dVar16 = dVar16 + dVar43 * local_1a0._s_0.Y;
    dVar18 = dVar18 + dVar43 * local_1a0._s_0.Z;
  }
  pTVar3 = &this->CenterOfMass;
  dVar43 = __real_3ff0000000000000 / (double)fVar44;
  (pTVar3->field0_0x0)._s_0.X = dVar13 * dVar43;
  (this->CenterOfMass).field0_0x0._s_0.Y = dVar16 * dVar43;
  (this->CenterOfMass).field0_0x0._s_0.Z = dVar18 * dVar43;
  this->_padding_ = (longlong)((pTVar3->field0_0x0)._s_0.X + (double)this->_padding_);
  this->_padding_ = (longlong)((double)this->_padding_ + (this->CenterOfMass).field0_0x0._s_0.Y);
  this->_padding_ = (longlong)((this->CenterOfMass).field0_0x0._s_0.Z + (double)this->_padding_);
  dVar16 = (double)this->_padding_;
  dVar18 = (double)this->_padding_;
  dVar13 = (double)this->_padding_;
  (this->StartPosition).field0_0x0._s_0.X = dVar16;
  (this->StartPosition).field0_0x0._s_0.Y = dVar18;
  (this->PreviousPosition).field0_0x0._s_0.X = dVar16;
  (this->PreviousPosition).field0_0x0._s_0.Y = dVar18;
  (this->NextPosition).field0_0x0._s_0.X = dVar16;
  (this->NextPosition).field0_0x0._s_0.Y = dVar18;
  (this->StartPosition).field0_0x0._s_0.Z = dVar13;
  (this->PreviousPosition).field0_0x0._s_0.Z = dVar13;
  (this->NextPosition).field0_0x0._s_0.Z = dVar13;
  iVar6 = (this->Shapes).ArrayNum;
  uVar31 = (ulonglong)iVar6;
  pFVar36 = (pTVar2->AllocatorInstance).Data;
  local_1b8 = pFVar36 + uVar31 * 0x40;
  local_1c0 = (FScriptContainerElement **)CONCAT44(local_1c0._4_4_,iVar6);
  while( true ) {
    pFVar29 = local_1b8;
    if ((this->Shapes).ArrayNum != (int)uVar31) {
      `TCheckedPointerIterator<FAnimPhysShape,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1c7);
    }
    if (pFVar36 == pFVar29) break;
    iVar6 = *(int *)(pFVar36 + 8);
    pdVar34 = *(double **)pFVar36;
    pdVar5 = pdVar34 + (longlong)iVar6 * 3;
    while( true ) {
      if (*(int *)(pFVar36 + 8) != iVar6) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1c6);
      }
      if (pdVar34 == pdVar5) break;
      *pdVar34 = *pdVar34 - (pTVar3->field0_0x0)._s_0.X;
      pdVar34[1] = pdVar34[1] - (this->CenterOfMass).field0_0x0._s_0.Y;
      pdVar34[2] = pdVar34[2] - (this->CenterOfMass).field0_0x0._s_0.Z;
      pdVar34 = pdVar34 + 3;
    }
    pFVar36 = pFVar36 + 0x40;
    uVar31 = (ulonglong)local_1c0 & 0xffffffff;
  }
  pTVar32 = FAnimPhys::CalculateInertia(&local_188,pTVar2,pTVar3);
  uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar39 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar16 = __real_3e45798ee0000000;
  pTVar4 = &this->InertiaTensor;
  dVar13 = pTVar32->M[0][1];
  pTVar4->M[0][0] = pTVar32->M[0][0];
  (this->InertiaTensor).M[0][1] = dVar13;
  dVar13 = pTVar32->M[0][3];
  (this->InertiaTensor).M[0][2] = pTVar32->M[0][2];
  (this->InertiaTensor).M[0][3] = dVar13;
  dVar13 = pTVar32->M[1][1];
  (this->InertiaTensor).M[1][0] = pTVar32->M[1][0];
  (this->InertiaTensor).M[1][1] = dVar13;
  dVar13 = pTVar32->M[1][3];
  (this->InertiaTensor).M[1][2] = pTVar32->M[1][2];
  (this->InertiaTensor).M[1][3] = dVar13;
  dVar13 = pTVar32->M[2][1];
  (this->InertiaTensor).M[2][0] = pTVar32->M[2][0];
  (this->InertiaTensor).M[2][1] = dVar13;
  dVar13 = pTVar32->M[2][3];
  (this->InertiaTensor).M[2][2] = pTVar32->M[2][2];
  (this->InertiaTensor).M[2][3] = dVar13;
  dVar13 = pTVar32->M[3][1];
  (this->InertiaTensor).M[3][0] = pTVar32->M[3][0];
  (this->InertiaTensor).M[3][1] = dVar13;
  dVar13 = pTVar32->M[3][3];
  fVar44 = __real_3f800000 / this->Mass;
  (this->InertiaTensor).M[3][2] = pTVar32->M[3][2];
  (this->InertiaTensor).M[3][3] = dVar13;
  this->InverseMass = fVar44;
  dVar13 = pTVar4->M[0][0];
  uVar41 = SUB84(dVar13,0) & uVar39;
  uVar42 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40;
  if (((((((double)CONCAT44(uVar42,uVar41) < dVar16 || (double)CONCAT44(uVar42,uVar41) == dVar16) &&
         (dVar13 = (this->InertiaTensor).M[0][1], uVar41 = SUB84(dVar13,0) & uVar39,
         uVar42 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40,
         (double)CONCAT44(uVar42,uVar41) < dVar16 || (double)CONCAT44(uVar42,uVar41) == dVar16)) &&
        (dVar13 = (this->InertiaTensor).M[0][2], uVar41 = SUB84(dVar13,0) & uVar39,
        uVar42 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40,
        (double)CONCAT44(uVar42,uVar41) < dVar16 || (double)CONCAT44(uVar42,uVar41) == dVar16)) &&
       ((dVar13 = (this->InertiaTensor).M[1][0], uVar41 = SUB84(dVar13,0) & uVar39,
        uVar42 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40,
        (double)CONCAT44(uVar42,uVar41) < dVar16 || (double)CONCAT44(uVar42,uVar41) == dVar16 &&
        (dVar13 = (this->InertiaTensor).M[1][1], uVar41 = SUB84(dVar13,0) & uVar39,
        uVar42 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40,
        (double)CONCAT44(uVar42,uVar41) < dVar16 || (double)CONCAT44(uVar42,uVar41) == dVar16)))) &&
      ((dVar13 = (this->InertiaTensor).M[1][2], uVar41 = SUB84(dVar13,0) & uVar39,
       uVar42 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40,
       (double)CONCAT44(uVar42,uVar41) < dVar16 || (double)CONCAT44(uVar42,uVar41) == dVar16 &&
       ((dVar13 = (this->InertiaTensor).M[2][0], uVar41 = SUB84(dVar13,0) & uVar39,
        uVar42 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40,
        (double)CONCAT44(uVar42,uVar41) < dVar16 || (double)CONCAT44(uVar42,uVar41) == dVar16 &&
        (dVar13 = (this->InertiaTensor).M[2][1], uVar41 = SUB84(dVar13,0) & uVar39,
        uVar42 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40,
        (double)CONCAT44(uVar42,uVar41) < dVar16 || (double)CONCAT44(uVar42,uVar41) == dVar16))))))
     && (dVar13 = (this->InertiaTensor).M[2][2], uVar39 = SUB84(dVar13,0) & uVar39,
        uVar40 = (uint)((ulonglong)dVar13 >> 0x20) & uVar40,
        (double)CONCAT44(uVar40,uVar39) < dVar16 || (double)CONCAT44(uVar40,uVar39) == dVar16)) {
    local_1b8 = (FScriptContainerElement *)0x150687b30;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_1c0 = &local_1b8;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_1c0);
  }
  bVar30 = FMath::MatrixInverse(&local_108,pTVar4);
  if (!bVar30) {
    local_1b0 = 
    L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
    ;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_1a8 = &local_1b0;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_1a8);
  }
  (this->InverseTensorWithoutMass).M[0][0] = local_108.M[0][0];
  (this->InverseTensorWithoutMass).M[0][1] = local_108.M[0][1];
  (this->InverseTensorWithoutMass).M[0][2] = local_108.M[0][2];
  (this->InverseTensorWithoutMass).M[0][3] = local_108.M[0][3];
  (this->InverseTensorWithoutMass).M[1][0] = local_108.M[1][0];
  (this->InverseTensorWithoutMass).M[1][1] = local_108.M[1][1];
  (this->InverseTensorWithoutMass).M[1][2] = local_108.M[1][2];
  (this->InverseTensorWithoutMass).M[1][3] = local_108.M[1][3];
  (this->InverseTensorWithoutMass).M[2][0] = local_108.M[2][0];
  (this->InverseTensorWithoutMass).M[2][1] = local_108.M[2][1];
  (this->InverseTensorWithoutMass).M[2][2] = local_108.M[2][2];
  (this->InverseTensorWithoutMass).M[2][3] = local_108.M[2][3];
  (this->InverseTensorWithoutMass).M[3][0] = local_108.M[3][0];
  (this->InverseTensorWithoutMass).M[3][1] = local_108.M[3][1];
  fVar44 = this->InverseMass;
  (this->InverseTensorWithoutMass).M[3][2] = local_108.M[3][2];
  (this->InverseTensorWithoutMass).M[3][3] = local_108.M[3][3];
  dVar21 = (this->InverseTensorWithoutMass).M[0][2];
  dVar22 = (this->InverseTensorWithoutMass).M[1][0];
  dVar23 = (this->InverseTensorWithoutMass).M[1][2];
  dVar24 = (this->InverseTensorWithoutMass).M[2][0];
  dVar25 = (this->InverseTensorWithoutMass).M[2][2];
  dVar26 = (this->InverseTensorWithoutMass).M[3][0];
  dVar27 = (this->InverseTensorWithoutMass).M[3][1];
  dVar13 = (double)fVar44;
  dVar19 = dVar13 * (this->InverseTensorWithoutMass).M[0][1];
  dVar17 = (this->InverseTensorWithoutMass).M[0][3] * dVar13;
  dVar14 = (this->InverseTensorWithoutMass).M[1][1] * dVar13;
  dVar43 = (this->InverseTensorWithoutMass).M[1][3] * dVar13;
  dVar18 = (this->InverseTensorWithoutMass).M[2][1] * dVar13;
  dVar16 = (this->InverseTensorWithoutMass).M[2][3] * dVar13;
  auVar20._8_4_ = SUB84(dVar19,0);
  auVar20._0_8_ = dVar13 * (this->InverseTensorWithoutMass).M[0][0];
  auVar20._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(this->InverseWorldSpaceTensor).M[0] = auVar20;
  auVar15._8_4_ = SUB84(dVar17,0);
  auVar15._0_8_ = dVar21 * dVar13;
  auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])((this->InverseWorldSpaceTensor).M[0] + 2) = auVar15;
  auVar12._8_4_ = SUB84(dVar14,0);
  auVar12._0_8_ = dVar22 * dVar13;
  auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(this->InverseWorldSpaceTensor).M[1] = auVar12;
  auVar11._8_4_ = SUB84(dVar43,0);
  auVar11._0_8_ = dVar23 * dVar13;
  auVar11._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  *(undefined1 (*) [16])((this->InverseWorldSpaceTensor).M[1] + 2) = auVar11;
  auVar10._8_4_ = SUB84(dVar18,0);
  auVar10._0_8_ = dVar24 * dVar13;
  auVar10._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(this->InverseWorldSpaceTensor).M[2] = auVar10;
  auVar9._8_4_ = SUB84(dVar16,0);
  auVar9._0_8_ = dVar25 * dVar13;
  auVar9._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])((this->InverseWorldSpaceTensor).M[2] + 2) = auVar9;
  (this->InverseWorldSpaceTensor).M[3][0] = dVar26 * dVar13;
  (this->InverseWorldSpaceTensor).M[3][1] = dVar27 * dVar13;
  auVar8._8_4_ = SUB84(local_108.M[3][3] * dVar13,0);
  auVar8._0_8_ = local_108.M[3][2] * dVar13;
  auVar8._12_4_ = (int)((ulonglong)(local_108.M[3][3] * dVar13) >> 0x20);
  *(undefined1 (*) [16])((this->InverseWorldSpaceTensor).M[3] + 2) = auVar8;
  return this;
}

// Spin @ 1474fabc0

TVector<double> * __thiscall
FAnimPhysRigidBody::Spin(FAnimPhysRigidBody *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar2 = (double)this->_padding_;
  dVar3 = (double)this->_padding_;
  dVar4 = (this->InverseWorldSpaceTensor).M[1][1];
  dVar5 = (this->InverseWorldSpaceTensor).M[0][1];
  dVar6 = (this->InverseWorldSpaceTensor).M[1][2];
  dVar1 = (double)this->_padding_;
  dVar7 = (this->InverseWorldSpaceTensor).M[2][1];
  dVar8 = (this->InverseWorldSpaceTensor).M[3][1];
  dVar9 = (this->InverseWorldSpaceTensor).M[0][2];
  dVar10 = (this->InverseWorldSpaceTensor).M[2][2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar3 * (this->InverseWorldSpaceTensor).M[1][0] +
       dVar2 * (this->InverseWorldSpaceTensor).M[0][0] +
       dVar1 * (this->InverseWorldSpaceTensor).M[2][0] +
       (this->InverseWorldSpaceTensor).M[3][0] * 0.0;
  dVar11 = (this->InverseWorldSpaceTensor).M[3][2];
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar3 * dVar4 + dVar2 * dVar5 + dVar1 * dVar7 + dVar8 * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar6 * dVar3 + dVar9 * dVar2 + dVar10 * dVar1 + dVar11 * 0.0;
  return __return_storage_ptr__;
}

