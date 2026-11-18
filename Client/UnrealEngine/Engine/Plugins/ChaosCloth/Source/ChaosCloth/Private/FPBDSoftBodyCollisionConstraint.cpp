// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// FPBDSoftBodyCollisionConstraint @ 14db95890

FPBDSoftBodyCollisionConstraint * __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraint::FPBDSoftBodyCollisionConstraint
          (FPBDSoftBodyCollisionConstraint *this,
          TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          FCollectionPropertyConstFacade *param_2,float param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<float,TSizedDefaultAllocator<32>_> *param_7,
          TMap<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
          *param_8)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool local_res20;
  
  this_00 = &param_2->KeyNameIndices;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UsePlanarConstraintForComplexCollidersName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    local_res20 = true;
  }
  else {
    local_res20 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                            (param_2,*piVar6,&param_2->LowValueArray);
  }
  pTVar7 = &param_2->LowValueArray;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UsePlanarConstraintForSimpleCollidersName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_2,*piVar6,pTVar7);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,EnableComplexCollidersName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    bVar2 = true;
  }
  else {
    bVar2 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_2,*piVar6,pTVar7);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,EnableSimpleCollidersName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    bVar3 = true;
  }
  else {
    bVar3 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_2,*piVar6,pTVar7);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SoftBodyCollisionThicknessName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_2,*piVar6,pTVar7);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,ProximityStiffnessName);
  fVar9 = __real_42c80000;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    fVar9 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_2,*piVar6,pTVar7);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UseCCDName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    bVar4 = false;
  }
  else {
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_2,*piVar6,pTVar7);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,FrictionCoefficientName);
  fVar10 = __real_3f4ccccd;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,*piVar6,pTVar7);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,CollisionThicknessName);
  fVar11 = __real_3f800000;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,*piVar6,pTVar7);
  }
  *(float *)&this->_padding_ = fVar10;
  this->_padding_ = (longlong)param_1;
  *(bool *)((longlong)&this->_padding_ + 7) = local_res20;
  *(float *)((longlong)&this->_padding_ + 4) = fVar8;
  *(float *)&this->_padding_ = fVar9;
  *(bool *)((longlong)&this->_padding_ + 4) = bVar4;
  *(bool *)((longlong)&this->_padding_ + 4) = bVar3;
  *(bool *)((longlong)&this->_padding_ + 5) = bVar2;
  *(bool *)((longlong)&this->_padding_ + 6) = bVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(float *)&this->_padding_ = fVar11 * param_3;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
               *)&this->_padding_,
              (TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
               *)param_8);
  this->_padding_ = (longlong)param_4;
  this->_padding_ = (longlong)param_5;
  this->_padding_ = (longlong)param_6;
  this->_padding_ = (longlong)param_7;
  *(undefined1 *)&this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  *(int *)&this->_padding_ = (int)this->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7FPBDSoftBodyCollisionPlanarConstraint_FPBDSoftBodyCollisionConstraintBase_Softs_Chaos__6B_
  ;
  this->MeshScale = param_3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,CollisionThicknessName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->CollisionThicknessIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SoftBodyCollisionThicknessName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->SoftBodyCollisionThicknessIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,FrictionCoefficientName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->FrictionCoefficientIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UseCCDName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->UseCCDIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,ProximityStiffnessName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->ProximityStiffnessIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,EnableSimpleCollidersName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->EnableSimpleCollidersIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UsePlanarConstraintForSimpleCollidersName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->UsePlanarConstraintForSimpleCollidersIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,EnableComplexCollidersName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->EnableComplexCollidersIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UsePlanarConstraintForComplexCollidersName);
  if (piVar6 == (int *)0x0) {
    (this->UsePlanarConstraintForComplexCollidersIndex).Index = -1;
    return this;
  }
  (this->UsePlanarConstraintForComplexCollidersIndex).Index = *piVar6;
  return this;
}

