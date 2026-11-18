// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ApplyHelperISPC @ 143d9ba20

void __thiscall
Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelperISPC
          (FPBDSphericalBackstopConstraint *this,FSolverParticlesRange *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  float *pfVar7;
  float *pfVar8;
  code *pcVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  bool bVar12;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar13;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar17;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_e8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_a8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_98;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_88;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_78 [7];
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  pTVar6 = this->AnimationPositions;
  if (this->bMeshUseGlobalIndexation == false) {
    iVar4 = pTVar6->ArrayNum;
    local_e8.DataPtr = (TVector<float,3> *)(pTVar6->AllocatorInstance).Data;
    if ((iVar4 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_e8.ArrayNum = iVar4;
    pTVar13 = &local_e8;
  }
  else {
    pTVar13 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
              GetConstArrayView<Chaos::TVector<float,3>_>
                        ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_c8,
                         pTVar6);
  }
  pTVar10 = pTVar13->DataPtr;
  pTVar6 = this->AnimationNormals;
  if (this->bMeshUseGlobalIndexation == false) {
    iVar4 = pTVar6->ArrayNum;
    local_d8.DataPtr = (TVector<float,3> *)(pTVar6->AllocatorInstance).Data;
    if ((iVar4 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_d8.ArrayNum = iVar4;
    pTVar13 = &local_d8;
  }
  else {
    pTVar13 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
              GetConstArrayView<Chaos::TVector<float,3>_>
                        ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_b8,
                         pTVar6);
  }
  iVar4 = this->ParticleCount;
  fVar1 = this->Scale;
  pTVar11 = pTVar13->DataPtr;
  iVar5 = (this->SphereOffsetDistances).ArrayNum;
  if ((this->SphereRadii).ArrayNum == iVar4) {
    fVar15 = fVar1 * this->BackstopRadiusRange;
    pfVar7 = (this->SphereRadii).DataPtr;
    fVar16 = fVar1 * this->BackstopRadiusBase;
    if (iVar5 == iVar4) {
      fVar2 = this->BackstopDistanceRange;
      fVar3 = this->BackstopDistanceBase;
      pfVar8 = (this->SphereOffsetDistances).DataPtr;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_a8);
      ApplySphericalBackstopConstraintsWithMaps
                (pTVar14->DataPtr,pTVar10,pTVar11,pfVar8,pfVar7,fVar1 * fVar3,fVar1 * fVar2,fVar16,
                 fVar15,0,iVar4);
    }
    else {
      fVar2 = this->BackstopDistanceBase;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_98);
      ApplySphericalBackstopConstraintsWithRadiusMap
                (pTVar14->DataPtr,pTVar10,pTVar11,pfVar7,CONCAT44(uVar17,fVar1 * fVar2),fVar16,
                 fVar15,0,iVar4);
    }
  }
  else {
    fVar15 = fVar1 * this->BackstopRadiusBase;
    if (iVar5 == iVar4) {
      pfVar7 = (this->SphereOffsetDistances).DataPtr;
      fVar16 = this->BackstopDistanceBase;
      fVar2 = this->BackstopDistanceRange;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_88);
      ApplySphericalBackstopConstraintsWithDistanceMap
                (pTVar14->DataPtr,pTVar10,pTVar11,pfVar7,CONCAT44(uVar17,fVar1 * fVar16),
                 fVar1 * fVar2,fVar15,0,iVar4);
    }
    else {
      fVar16 = this->BackstopDistanceBase;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,local_78);
      ApplySphericalBackstopConstraintsWithoutMaps
                (pTVar14->DataPtr,pTVar10,pTVar11,fVar1 * fVar16,CONCAT44(uVar17,fVar15),0,iVar4);
    }
  }
  return;
}

// ApplyLegacyHelperISPC @ 143d9bf50

void __thiscall
Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelperISPC
          (FPBDSphericalBackstopConstraint *this,FSolverParticlesRange *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  float *pfVar7;
  float *pfVar8;
  code *pcVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  bool bVar12;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar13;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar17;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_e8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_a8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_98;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_88;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_78 [7];
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  pTVar6 = this->AnimationPositions;
  if (this->bMeshUseGlobalIndexation == false) {
    iVar4 = pTVar6->ArrayNum;
    local_e8.DataPtr = (TVector<float,3> *)(pTVar6->AllocatorInstance).Data;
    if ((iVar4 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_e8.ArrayNum = iVar4;
    pTVar13 = &local_e8;
  }
  else {
    pTVar13 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
              GetConstArrayView<Chaos::TVector<float,3>_>
                        ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_c8,
                         pTVar6);
  }
  pTVar10 = pTVar13->DataPtr;
  pTVar6 = this->AnimationNormals;
  if (this->bMeshUseGlobalIndexation == false) {
    iVar4 = pTVar6->ArrayNum;
    local_d8.DataPtr = (TVector<float,3> *)(pTVar6->AllocatorInstance).Data;
    if ((iVar4 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_d8.ArrayNum = iVar4;
    pTVar13 = &local_d8;
  }
  else {
    pTVar13 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
              GetConstArrayView<Chaos::TVector<float,3>_>
                        ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_b8,
                         pTVar6);
  }
  iVar4 = this->ParticleCount;
  fVar1 = this->Scale;
  pTVar11 = pTVar13->DataPtr;
  iVar5 = (this->SphereOffsetDistances).ArrayNum;
  if ((this->SphereRadii).ArrayNum == iVar4) {
    fVar15 = fVar1 * this->BackstopRadiusRange;
    pfVar7 = (this->SphereRadii).DataPtr;
    fVar16 = fVar1 * this->BackstopRadiusBase;
    if (iVar5 == iVar4) {
      fVar2 = this->BackstopDistanceRange;
      fVar3 = this->BackstopDistanceBase;
      pfVar8 = (this->SphereOffsetDistances).DataPtr;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_a8);
      ApplyLegacySphericalBackstopConstraintsWithMaps
                (pTVar14->DataPtr,pTVar10,pTVar11,pfVar8,pfVar7,fVar1 * fVar3,fVar1 * fVar2,fVar16,
                 fVar15,0,iVar4);
    }
    else {
      fVar2 = this->BackstopDistanceBase;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_98);
      ApplyLegacySphericalBackstopConstraintsWithRadiusMap
                (pTVar14->DataPtr,pTVar10,pTVar11,pfVar7,CONCAT44(uVar17,fVar1 * fVar2),fVar16,
                 fVar15,0,iVar4);
    }
  }
  else {
    fVar15 = fVar1 * this->BackstopRadiusBase;
    if (iVar5 == iVar4) {
      pfVar7 = (this->SphereOffsetDistances).DataPtr;
      fVar16 = this->BackstopDistanceBase;
      fVar2 = this->BackstopDistanceRange;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_88);
      ApplyLegacySphericalBackstopConstraintsWithDistanceMap
                (pTVar14->DataPtr,pTVar10,pTVar11,pfVar7,CONCAT44(uVar17,fVar1 * fVar16),
                 fVar1 * fVar2,fVar15,0,iVar4);
    }
    else {
      fVar16 = this->BackstopDistanceBase;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,local_78);
      ApplyLegacySphericalBackstopConstraintsWithoutMaps
                (pTVar14->DataPtr,pTVar10,pTVar11,fVar1 * fVar16,CONCAT44(uVar17,fVar15),0,iVar4);
    }
  }
  return;
}

// SetProperties @ 143db8c70

void __thiscall
Chaos::Softs::FPBDSphericalBackstopConstraint::SetProperties
          (FPBDSphericalBackstopConstraint *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,float param_3)

{
  code *pcVar1;
  ECollectionPropertyFlags EVar2;
  bool bVar3;
  FString *pFVar4;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar5;
  TArrayView<unsigned_char_const_,int> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  
  iVar11 = (this->BackstopRadiusIndex).Index;
  if (iVar11 != -1) {
    pTVar6 = &param_1->FlagsArray;
    EVar2 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar11,pTVar6);
    if (((EVar2 & Animatable) != None) &&
       (EVar2 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->BackstopRadiusIndex).Index,pTVar6), (char)EVar2 < '\0')) {
      if (((this->BackstopRadiusIndex).Index == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BackstopRadiusIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                             ,0x1b7,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar11 = (this->BackstopRadiusIndex).Index;
      uVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                        (param_1,iVar11,&param_1->HighValueArray);
      uVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                        (param_1,iVar11,&param_1->LowValueArray);
      iVar11 = (this->BackstopRadiusIndex).Index;
      if ((float)uVar8 <= UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X) {
        uVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X;
      }
      if ((float)uVar7 <= UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y) {
        uVar7 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y;
      }
      this->BackstopRadiusBase = (float)uVar8;
      this->BackstopRadiusRange = (float)uVar7 - (float)uVar8;
      if ((iVar11 == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BackstopRadiusIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                             ,0x1b7,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EVar2 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->BackstopRadiusIndex).Index,pTVar6);
      if ((EVar2 & StringDirty) != None) {
        if (((this->BackstopRadiusIndex).Index == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("BackstopRadiusIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                               ,0x1b7,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar4 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->BackstopRadiusIndex).Index,&param_1->StringValueArray);
        pTVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                         *)param_2,pFVar4);
        if (pTVar5 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_58 = 0;
          uStack_54 = 0;
          iVar11 = 0;
        }
        else {
          local_58 = *(undefined4 *)&pTVar5->field_0x10;
          uStack_54 = *(undefined4 *)&pTVar5->field_0x14;
          iVar11 = *(int *)&pTVar5->field_0x18;
          uStack_4c = *(undefined4 *)&pTVar5->field_0x1c;
        }
        *(undefined4 *)&(this->SphereRadii).DataPtr = local_58;
        *(undefined4 *)((longlong)&(this->SphereRadii).DataPtr + 4) = uStack_54;
        (this->SphereRadii).ArrayNum = iVar11;
        *(undefined4 *)&(this->SphereRadii).field_0xc = uStack_4c;
      }
      if (((this->BackstopRadiusIndex).Index == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BackstopRadiusIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                             ,0x1b7,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EVar2 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->BackstopRadiusIndex).Index,pTVar6);
      this->bEnabled = (bool)(EVar2 & Enabled);
    }
  }
  pTVar6 = &param_1->FlagsArray;
  iVar11 = (this->BackstopDistanceIndex).Index;
  if (((iVar11 != -1) &&
      (EVar2 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar11,pTVar6), (EVar2 & Animatable) != None)) &&
     (EVar2 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->BackstopDistanceIndex).Index,pTVar6), (char)EVar2 < '\0')) {
    if (((this->BackstopDistanceIndex).Index == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BackstopDistanceIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                           ,0x1b6,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar11 = (this->BackstopDistanceIndex).Index;
    fVar9 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,iVar11,&param_1->HighValueArray);
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar11,&param_1->LowValueArray);
    iVar11 = (this->BackstopDistanceIndex).Index;
    this->BackstopDistanceBase = fVar10;
    this->BackstopDistanceRange = fVar9 - fVar10;
    if ((iVar11 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BackstopDistanceIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                           ,0x1b6,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EVar2 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->BackstopDistanceIndex).Index,pTVar6);
    if ((EVar2 & StringDirty) != None) {
      if (((this->BackstopDistanceIndex).Index == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BackstopDistanceIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                             ,0x1b6,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->BackstopDistanceIndex).Index,&param_1->StringValueArray);
      pTVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar4);
      if (pTVar5 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_48 = 0;
        uStack_44 = 0;
        iVar11 = 0;
      }
      else {
        local_48 = *(undefined4 *)&pTVar5->field_0x10;
        uStack_44 = *(undefined4 *)&pTVar5->field_0x14;
        iVar11 = *(int *)&pTVar5->field_0x18;
        uStack_3c = *(undefined4 *)&pTVar5->field_0x1c;
      }
      *(undefined4 *)&(this->SphereOffsetDistances).DataPtr = local_48;
      *(undefined4 *)((longlong)&(this->SphereOffsetDistances).DataPtr + 4) = uStack_44;
      (this->SphereOffsetDistances).ArrayNum = iVar11;
      *(undefined4 *)&(this->SphereOffsetDistances).field_0xc = uStack_3c;
    }
  }
  this->Scale = param_3;
  return;
}

