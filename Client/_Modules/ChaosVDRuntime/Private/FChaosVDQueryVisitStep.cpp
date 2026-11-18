// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c9570

UScriptStruct * __cdecl FChaosVDQueryVisitStep::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryVisitStep.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDQueryVisitStep.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDQueryVisitStep,(UObject *)pUVar1,
                         L"ChaosVDQueryVisitStep");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDQueryVisitStep.OuterSingleton;
}

// FChaosVDQueryVisitStep @ 1436d5280

FChaosVDQueryVisitStep * __thiscall
FChaosVDQueryVisitStep::FChaosVDQueryVisitStep(FChaosVDQueryVisitStep *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FChaosVDQueryVisitStep__6B_;
  this->Type = Invalid;
  this->ShapeIndex = 0;
  this->OwningQueryID = -1;
  this->ParticleIndex = -1;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ParticleTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ParticleTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ParticleTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ParticleTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ParticleTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ParticleTransform).Scale3D.ZW.m128d_f64 = auVar9;
  (this->QueryFastData)._padding_ = (longlong)&___7FChaosVDQueryFastData__6B_;
  *(undefined1 *)&(this->QueryFastData)._padding_ = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->QueryFastData).Dir.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->QueryFastData).Dir.field0_0x0._s_0.Y = (double)uVar10;
  (this->QueryFastData).Dir.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->QueryFastData).InvDir.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->QueryFastData).InvDir.field0_0x0._s_0.Y = (double)uVar10;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->QueryFastData).bParallel0 = '\0';
  (this->QueryFastData).bParallel2 = '\0';
  (this->QueryFastData).bParallel1 = '\0';
  (this->QueryFastData).InvDir.field0_0x0._s_0.Z = (double)uVar10;
  (this->QueryFastData).CurrentLength = 0.0;
  (this->QueryFastData).InvCurrentLength = 0.0;
  this->HitType = None;
  (this->HitData)._padding_ = (longlong)&___7FChaosVDQueryHitData__6B_;
  *(undefined1 *)&(this->HitData)._padding_ = 0;
  (this->HitData).Distance = 0.0;
  (this->HitData).FaceIdx = -1;
  (this->HitData).Flags = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HitData).WorldPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HitData).WorldPosition.field0_0x0._s_0.Y = (double)uVar10;
  (this->HitData).WorldPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HitData).WorldNormal.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HitData).WorldNormal.field0_0x0._s_0.Y = (double)uVar10;
  (this->HitData).WorldNormal.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HitData).FaceNormal.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HitData).FaceNormal.field0_0x0._s_0.Y = (double)uVar10;
  (this->HitData).FaceNormal.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->RejectReason = None;
  this->SolverID_Editor = -1;
  return this;
}

// Serialize @ 1436e0420

bool __thiscall FChaosVDQueryVisitStep::Serialize(FChaosVDQueryVisitStep *this,FArchive *param_1)

{
  int *piVar1;
  EChaosVDSceneQueryVisitorType *pEVar2;
  uint *puVar3;
  EChaosVDCollisionQueryHitType *pEVar4;
  EChaosVDSQVisitRejectReason *pEVar5;
  undefined1 *puVar6;
  int *piVar7;
  EChaosVDSceneQueryVisitorType *pEVar8;
  uint *puVar9;
  EChaosVDCollisionQueryHitType *pEVar10;
  EChaosVDSQVisitRejectReason *pEVar11;
  int iVar12;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    piVar1 = &this->OwningQueryID;
    piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pEVar2 = &this->Type;
    puVar6 = &param_1->field_0x2a;
    pEVar8 = (EChaosVDSceneQueryVisitorType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDSceneQueryVisitorType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
      if ((*puVar6 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
      }
    }
    else {
      *pEVar2 = *pEVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar3 = &this->ShapeIndex;
    puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
      if ((*puVar6 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar9;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->ParticleIndex;
    piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
      if ((*puVar6 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&this->ParticleTransform);
    pEVar4 = &this->HitType;
    pEVar10 = (EChaosVDCollisionQueryHitType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDCollisionQueryHitType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar10 + 1) {
      if ((*puVar6 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar4);
      }
    }
    else {
      *pEVar4 = *pEVar10;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    FChaosVDQueryHitData::Serialize(&this->HitData,param_1);
    FChaosVDQueryFastData::Serialize(&this->QueryFastData,param_1);
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
    iVar12 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (199 < iVar12) {
      pEVar5 = &this->RejectReason;
      pEVar11 = (EChaosVDSQVisitRejectReason *)**(undefined8 **)&param_1->field_0x8;
      if ((EChaosVDSQVisitRejectReason *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar11 + 1) {
        if ((*puVar6 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar5,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,pEVar5);
        }
      }
      else {
        *pEVar5 = *pEVar11;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

