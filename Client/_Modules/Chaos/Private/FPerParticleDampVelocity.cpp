// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ApplyFast @ 143bef040

void __thiscall
Chaos::Softs::FPerParticleDampVelocity::ApplyFast
          (FPerParticleDampVelocity *this,FSolverParticles *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TVector<float,3> *pTVar8;
  TVector<float,3> *pTVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pTVar8 = TDynamicParticles<float,3>::V((TDynamicParticles<float,3> *)param_1,param_3);
  pTVar9 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,param_3);
  fVar1 = *(float *)&this->Omega;
  fVar2 = this->LinearCoefficient;
  fVar3 = this->AngularCoefficient;
  fVar4 = *(float *)&(this->Omega).field_0x8;
  fVar5 = *(float *)&(this->Omega).field_0x4;
  fVar12 = *(float *)&pTVar9->field_0x8 - *(float *)&(this->Xcm).field_0x8;
  fVar11 = *(float *)&pTVar9->field_0x4 - *(float *)&(this->Xcm).field_0x4;
  fVar10 = *(float *)pTVar9 - *(float *)&this->Xcm;
  fVar6 = *(float *)&(this->Vcm).field_0x4;
  fVar7 = *(float *)&this->Vcm;
  *(float *)&pTVar8->field_0x8 =
       *(float *)&pTVar8->field_0x8 +
       (fVar5 * fVar10 - fVar1 * fVar11) * fVar3 +
       (*(float *)&(this->Vcm).field_0x8 - *(float *)&pTVar8->field_0x8) * fVar2;
  *(float *)&pTVar8->field_0x4 =
       *(float *)&pTVar8->field_0x4 +
       (fVar1 * fVar12 - fVar4 * fVar10) * fVar3 + (fVar6 - *(float *)&pTVar8->field_0x4) * fVar2;
  *(float *)pTVar8 =
       (fVar4 * fVar11 - fVar5 * fVar12) * fVar3 + (fVar7 - *(float *)pTVar8) * fVar2 +
       *(float *)pTVar8;
  return;
}

// GetLocalDampingAngularCoefficient @ 143daba40

float __thiscall
Chaos::Softs::FPerParticleDampVelocity::GetLocalDampingAngularCoefficient
          (FPerParticleDampVelocity *this,FCollectionPropertyConstFacade *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->LocalDampingAngularCoefficientIndex).Index == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalDampingAngularCoefficientIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticleDampVelocity.h"
                       ,0x46,
                       L"The default value getter that sets the property index must be called once prior to calling this function."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                    (param_1,(this->LocalDampingAngularCoefficientIndex).Index,
                     &param_1->LowValueArray);
  return fVar3;
}

// GetLocalDampingLinearCoefficient @ 143dabaa0

float __thiscall
Chaos::Softs::FPerParticleDampVelocity::GetLocalDampingLinearCoefficient
          (FPerParticleDampVelocity *this,FCollectionPropertyConstFacade *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->LocalDampingLinearCoefficientIndex).Index == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalDampingLinearCoefficientIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticleDampVelocity.h"
                       ,0x45,
                       L"The default value getter that sets the property index must be called once prior to calling this function."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                    (param_1,(this->LocalDampingLinearCoefficientIndex).Index,
                     &param_1->LowValueArray);
  return fVar3;
}

// SetProperties @ 143db9270

void __thiscall
Chaos::Softs::FPerParticleDampVelocity::SetProperties
          (FPerParticleDampVelocity *this,FCollectionPropertyConstFacade *param_1,
          TVector<float,3> *param_2,TVector<float,3> *param_3,TVector<float,3> *param_4)

{
  TArrayView<unsigned_char_const_,int> *pTVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  
  if (this->bPropertyIndicesInitialized == false) {
    piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,LocalDampingCoefficientName);
    iVar6 = -1;
    if (piVar7 == (int *)0x0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *piVar7;
    }
    (this->LocalDampingCoefficientIndex).Index = iVar5;
    piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,LocalDampingLinearCoefficientName);
    if (piVar7 == (int *)0x0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *piVar7;
    }
    (this->LocalDampingLinearCoefficientIndex).Index = iVar5;
    piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,LocalDampingAngularCoefficientName);
    if (piVar7 == (int *)0x0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *piVar7;
    }
    (this->LocalDampingAngularCoefficientIndex).Index = iVar5;
    piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&param_1->KeyNameIndices,LocalDampingSpaceName);
    if (piVar7 != (int *)0x0) {
      iVar6 = *piVar7;
    }
    (this->LocalDampingSpaceIndex).Index = iVar6;
    if (((this->LocalDampingLinearCoefficientIndex).Index == -1) ||
       ((this->LocalDampingAngularCoefficientIndex).Index == -1)) {
      piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&param_1->KeyNameIndices,LocalDampingCoefficientName);
      if ((piVar7 == (int *)0x0) || (*piVar7 == -1)) {
        this->LinearCoefficient = 0.0;
        this->AngularCoefficient = 0.0;
        this->bPropertyIndicesInitialized = true;
      }
      else {
        fVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_1,*piVar7,&param_1->LowValueArray);
        this->LinearCoefficient = fVar8;
        this->AngularCoefficient = fVar8;
        this->bPropertyIndicesInitialized = true;
      }
    }
    else {
      fVar8 = GetLocalDampingLinearCoefficient(this,param_1);
      this->LinearCoefficient = fVar8;
      fVar8 = GetLocalDampingAngularCoefficient(this,param_1);
      this->AngularCoefficient = fVar8;
      this->bPropertyIndicesInitialized = true;
    }
  }
  else {
    iVar6 = (this->LocalDampingLinearCoefficientIndex).Index;
    if ((iVar6 == -1) || ((this->LocalDampingAngularCoefficientIndex).Index == -1)) {
      iVar6 = (this->LocalDampingCoefficientIndex).Index;
      if (iVar6 != -1) {
        EVar3 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,iVar6,&param_1->FlagsArray);
        if (((EVar3 & Animatable) != None) &&
           (EVar3 = FCollectionPropertyConstFacade::
                    GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                              (param_1,(this->LocalDampingCoefficientIndex).Index,
                               &param_1->FlagsArray), (char)EVar3 < '\0')) {
          if (((this->LocalDampingCoefficientIndex).Index == -1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("LocalDampingCoefficientIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticleDampVelocity.h"
                                 ,0x44,
                                 L"The default value getter that sets the property index must be called once prior to calling this function."
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                            (param_1,(this->LocalDampingCoefficientIndex).Index,
                             &param_1->LowValueArray);
          this->AngularCoefficient = fVar8;
          this->LinearCoefficient = fVar8;
        }
      }
    }
    else {
      pTVar1 = &param_1->FlagsArray;
      EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,iVar6,pTVar1);
      if (((EVar3 & Animatable) != None) &&
         (EVar3 = FCollectionPropertyConstFacade::
                  GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                            (param_1,(this->LocalDampingLinearCoefficientIndex).Index,pTVar1),
         (char)EVar3 < '\0')) {
        fVar8 = GetLocalDampingLinearCoefficient(this,param_1);
        this->LinearCoefficient = fVar8;
      }
      iVar6 = (this->LocalDampingAngularCoefficientIndex).Index;
      if (((iVar6 != -1) &&
          (EVar3 = FCollectionPropertyConstFacade::
                   GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                             (param_1,iVar6,pTVar1), (EVar3 & Animatable) != None)) &&
         (EVar3 = FCollectionPropertyConstFacade::
                  GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                            (param_1,(this->LocalDampingAngularCoefficientIndex).Index,pTVar1),
         (char)EVar3 < '\0')) {
        fVar8 = GetLocalDampingAngularCoefficient(this,param_1);
        this->AngularCoefficient = fVar8;
      }
    }
    iVar6 = (this->LocalDampingSpaceIndex).Index;
    if (((iVar6 != -1) &&
        (EVar3 = FCollectionPropertyConstFacade::
                 GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                           (param_1,iVar6,&param_1->FlagsArray), (EVar3 & Animatable) != None)) &&
       (EVar3 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->LocalDampingSpaceIndex).Index,&param_1->FlagsArray),
       (char)EVar3 < '\0')) {
      if (((this->LocalDampingSpaceIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalDampingSpaceIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PerParticleDampVelocity.h"
                             ,0x47,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                        (param_1,(this->LocalDampingSpaceIndex).Index,&param_1->LowValueArray);
      this->LocalDampingSpace = (EChaosSoftsLocalDampingSpace)iVar6;
    }
    if (this->LocalDampingSpace == ReferenceBoneSpace) {
      *(undefined8 *)&this->Xcm = *(undefined8 *)param_2;
      *(undefined4 *)&(this->Xcm).field_0x8 = *(undefined4 *)&param_2->field_0x8;
      *(undefined8 *)&this->Vcm = *(undefined8 *)param_3;
      *(undefined4 *)&(this->Vcm).field_0x8 = *(undefined4 *)&param_3->field_0x8;
      *(undefined8 *)&this->Omega = *(undefined8 *)param_4;
      *(undefined4 *)&(this->Omega).field_0x8 = *(undefined4 *)&param_4->field_0x8;
    }
  }
  return;
}

// UpdatePositionBasedState @ 143dbbd90

void __thiscall
Chaos::Softs::FPerParticleDampVelocity::UpdatePositionBasedState
          (FPerParticleDampVelocity *this,FSolverParticles *param_1,int param_2,int param_3)

{
  undefined **local_28;
  FSolverParticles *local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  if (this->LocalDampingSpace == CenterOfMass) {
    local_14 = param_3 - param_2;
    local_28 = &___7FSolverParticlesRange_Softs_Chaos__6B_;
    local_10 = 0xffffffff;
    local_20 = param_1;
    local_18 = param_2;
    UpdatePositionBasedState(this,(FSolverParticlesRange *)&local_28);
  }
  return;
}

// UpdatePositionBasedState @ 143dbbde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FPerParticleDampVelocity::UpdatePositionBasedState
          (FPerParticleDampVelocity *this,FSolverParticlesRange *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  longlong lVar12;
  TVector<float>_u_0 *pTVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_318 [32];
  TVector<float,3> *local_2f8;
  float *local_2f0;
  float *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  float local_2c8;
  float fStack_2c4;
  undefined4 local_2c0;
  TVector<float>_u_0 local_2b8;
  longlong local_2a8;
  float local_298;
  float fStack_294;
  float afStack_290 [2];
  float local_288;
  float fStack_284;
  float afStack_280 [2];
  float local_278;
  float fStack_274;
  float afStack_270 [2];
  float local_268 [2];
  float afStack_260 [2];
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  float local_248;
  float local_244;
  float local_240;
  undefined4 local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float local_228 [2];
  float afStack_220 [2];
  TArrayView<float_const_,int> local_218;
  TArrayView<float_const_,int> local_208;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_1f8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_1e8;
  TVector<float> local_1d8;
  TMatrix<float> local_1c8;
  TMatrix<float> local_188;
  TMatrix<float> local_148;
  TMatrix<float> local_108;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_318;
  if (this->LocalDampingSpace == CenterOfMass) {
    if (bChaos_DampVelocity_ISPC_Enabled) {
      uVar1 = *(undefined4 *)&param_1->field_0x14;
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_218,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&param_1->field_0x8 + 0x90));
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_208,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&param_1->field_0x8 + 0x78));
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_1f8,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&param_1->field_0x8 + 0x48));
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_1e8,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&param_1->field_0x8 + 0x28));
      local_2e0 = 0;
      local_2e8 = local_218.DataPtr;
      local_2f0 = local_208.DataPtr;
      local_2f8 = local_1f8.DataPtr;
      local_2d8 = uVar1;
      ::UpdatePositionBasedState(&this->Xcm,&this->Vcm,&this->Omega,local_1e8.DataPtr);
    }
    else {
      iVar14 = 0;
      fVar21 = 0.0;
      *(undefined8 *)&this->Xcm = 0;
      *(undefined8 *)&(this->Xcm).field_0x8 = 0;
      *(undefined8 *)&(this->Vcm).field_0x4 = 0;
      iVar15 = iVar14;
      if (0 < *(int *)&param_1->field_0x14) {
        do {
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Particles",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                 ,0x56,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar17 = TDynamicParticles<float,3>::InvM
                             (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                              *(int *)&param_1->field_0x10 + iVar15);
          if (fVar17 != 0.0) {
            if ((*(longlong *)&param_1->field_0x8 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Particles",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                   ,0x56,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar11 = TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)&param_1->field_0x8,
                                 *(int *)&param_1->field_0x10 + iVar15);
            fVar18 = FSolverParticlesRange::M(param_1,iVar15);
            fVar17 = *(float *)&pTVar11->field_0x8;
            fVar22 = *(float *)pTVar11;
            fVar19 = *(float *)&this->Xcm;
            *(float *)&(this->Xcm).field_0x4 =
                 fVar18 * *(float *)&pTVar11->field_0x4 + *(float *)&(this->Xcm).field_0x4;
            *(float *)&(this->Xcm).field_0x8 = fVar18 * fVar17 + *(float *)&(this->Xcm).field_0x8;
            *(float *)&this->Xcm = fVar18 * fVar22 + fVar19;
            pTVar11 = FSolverParticlesRange::V(param_1,iVar15);
            fVar18 = FSolverParticlesRange::M(param_1,iVar15);
            fVar17 = *(float *)&pTVar11->field_0x8;
            fVar22 = *(float *)pTVar11;
            fVar19 = *(float *)&this->Vcm;
            *(float *)&(this->Vcm).field_0x4 =
                 fVar18 * *(float *)&pTVar11->field_0x4 + *(float *)&(this->Vcm).field_0x4;
            *(float *)&(this->Vcm).field_0x8 = fVar18 * fVar17 + *(float *)&(this->Vcm).field_0x8;
            *(float *)&this->Vcm = fVar18 * fVar22 + fVar19;
            fVar17 = FSolverParticlesRange::M(param_1,iVar15);
            fVar21 = fVar21 + fVar17;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)&param_1->field_0x14);
        if (fVar21 != 0.0) {
          fVar17 = *(float *)&(this->Xcm).field_0x4;
          fVar22 = *(float *)&(this->Xcm).field_0x8;
          fVar19 = *(float *)&this->Vcm;
          fVar21 = __real_3f800000 / fVar21;
          *(float *)&this->Xcm = *(float *)&this->Xcm * fVar21;
          *(float *)&(this->Xcm).field_0x4 = fVar17 * fVar21;
          *(float *)&(this->Xcm).field_0x8 = fVar22 * fVar21;
          *(float *)&this->Vcm = fVar19 * fVar21;
          *(float *)&(this->Vcm).field_0x8 = fVar21 * *(float *)&(this->Vcm).field_0x8;
          *(float *)&(this->Vcm).field_0x4 = fVar21 * *(float *)&(this->Vcm).field_0x4;
        }
      }
      uVar7 = _UNK_150689648;
      uVar5 = ___xmm_3f800000000000000000000000000000;
      uVar4 = __xmm_80000000800000008000000080000000;
      local_1c8.M[2][0] = 0.0;
      local_1c8.M[1][1] = 0.0;
      local_1c8.M[2][1] = 0.0;
      local_1c8.M[1][2] = 0.0;
      local_1c8.M[2][2] = 0.0;
      local_1c8.M[3][0] = ___xmm_3f800000000000000000000000000000;
      local_1c8.M[3][1] = _UNK_150689644;
      local_1c8.M[3][2] = _UNK_150689648;
      local_1c8.M[3][3] = _UNK_15068964c;
      local_1c8.M[1][0] = 0.0;
      _local_2c8 = 0;
      local_2c0 = 0.0;
      local_1c8.M[0][0] = 0.0;
      local_1c8.M[0][1] = 0.0;
      local_1c8.M[0][2] = 0.0;
      local_1c8.M[0][3] = 0.0;
      local_1c8.M[1][3] = 0.0;
      local_1c8.M[2][3] = 0.0;
      if (0 < *(int *)&param_1->field_0x14) {
        do {
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Particles",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                 ,0x56,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar21 = TDynamicParticles<float,3>::InvM
                             (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                              *(int *)&param_1->field_0x10 + iVar14);
          if (fVar21 != 0.0) {
            if ((*(longlong *)&param_1->field_0x8 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Particles",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                   ,0x56,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar11 = TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)&param_1->field_0x8,
                                 *(int *)&param_1->field_0x10 + iVar14);
            fVar21 = *(float *)&pTVar11->field_0x8 - *(float *)&(this->Xcm).field_0x8;
            fVar17 = *(float *)&pTVar11->field_0x4 - *(float *)&(this->Xcm).field_0x4;
            fVar22 = *(float *)pTVar11 - *(float *)&this->Xcm;
            if ((*(longlong *)&param_1->field_0x8 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Particles",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                   ,0x56,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)&param_1->field_0x8;
            uVar16 = *(int *)&param_1->field_0x10 + iVar14;
            iVar15 = *(int *)(lVar2 + 0x50);
            uVar10 = 0;
            if ((int)uVar16 < iVar15) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_2f8 = (TVector<float,3> *)(longlong)(int)uVar16;
              local_2f0 = (float *)(longlong)iVar15;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            lVar12 = (longlong)(int)uVar16;
            local_2a8 = *(longlong *)(lVar2 + 0x48);
            if ((*(longlong *)&param_1->field_0x8 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Particles",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                   ,0x56,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)&param_1->field_0x8;
            uVar16 = *(int *)&param_1->field_0x10 + iVar14;
            iVar15 = *(int *)(lVar2 + 0x80);
            uVar10 = 0;
            if ((int)uVar16 < iVar15) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_2f8 = (TVector<float,3> *)(longlong)(int)uVar16;
              local_2f0 = (float *)(longlong)iVar15;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar8 = _UNK_150689648;
            uVar6 = ___xmm_3f800000000000000000000000000000;
            fVar19 = *(float *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar16 * 4);
            local_148.M[0][0] = 0.0;
            local_148.M[1][1] = 0.0;
            local_148.M[2][2] = 0.0;
            local_148.M[2][3] = 0.0;
            fVar20 = fVar19 * *(float *)(local_2a8 + 4 + lVar12 * 0xc);
            local_148.M[0][3] = 0.0;
            fVar18 = fVar19 * *(float *)(local_2a8 + 8 + lVar12 * 0xc);
            local_148.M[1][3] = 0.0;
            fVar19 = fVar19 * *(float *)(local_2a8 + lVar12 * 0xc);
            local_188.M[2][2] = 0.0;
            local_188.M[2][3] = 0.0;
            local_188.M[0][3] = 0.0;
            ___xmm_3f800000000000000000000000000000 = (float)uVar5;
            _UNK_150689644 = SUB84(uVar5,4);
            local_188.M[3][0] = ___xmm_3f800000000000000000000000000000;
            local_188.M[3][1] = _UNK_150689644;
            _UNK_150689648 = (float)uVar7;
            _UNK_15068964c = SUB84(uVar7,4);
            local_188.M[3][2] = _UNK_150689648;
            local_188.M[3][3] = _UNK_15068964c;
            ___xmm_3f800000000000000000000000000000 = (float)uVar5;
            _UNK_150689644 = SUB84(uVar5,4);
            local_148.M[3][0] = ___xmm_3f800000000000000000000000000000;
            local_148.M[3][1] = _UNK_150689644;
            _UNK_150689648 = (float)uVar7;
            _UNK_15068964c = SUB84(uVar7,4);
            local_148.M[3][2] = _UNK_150689648;
            local_148.M[3][3] = _UNK_15068964c;
            local_148.M[0][2] = (float)((uint)fVar17 ^ uVar4);
            local_188.M._28_8_ = (ulonglong)(uint)local_148.M[0][2] << 0x20;
            local_148.M[2][1] = (float)((uint)fVar22 ^ uVar4);
            local_188.M[1]._4_8_ = (ulonglong)(uint)local_148.M[2][1] << 0x20;
            fStack_2c4 = fStack_2c4 + (fVar19 * fVar21 - fVar18 * fVar22);
            local_2c8 = local_2c8 + (fVar18 * fVar17 - fVar20 * fVar21);
            local_2c0 = (float)local_2c0 + (fVar20 * fVar22 - fVar19 * fVar17);
            local_148.M[1][0] = (float)((uint)fVar21 ^ uVar4);
            local_188.M[0]._0_8_ = (ulonglong)(uint)local_148.M[1][0] << 0x20;
            ___xmm_3f800000000000000000000000000000 = uVar6;
            _UNK_150689648 = uVar8;
            local_188.M[0][2] = fVar17;
            local_188.M[1][0] = fVar21;
            local_188.M[2][1] = fVar22;
            local_148.M[0][1] = fVar21;
            local_148.M[1][2] = fVar22;
            local_148.M[2][0] = fVar17;
            VectorMatrixMultiply(&local_108,&local_148,&local_188);
            local_298 = local_108.M[0][0];
            fStack_294 = local_108.M[0][1];
            afStack_290[0] = local_108.M[0][2];
            afStack_290[1] = local_108.M[0][3];
            local_288 = local_108.M[1][0];
            fStack_284 = local_108.M[1][1];
            afStack_280[0] = local_108.M[1][2];
            afStack_280[1] = local_108.M[1][3];
            local_278 = local_108.M[2][0];
            fStack_274 = local_108.M[2][1];
            afStack_270[0] = local_108.M[2][2];
            afStack_270[1] = local_108.M[2][3];
            local_268[0] = local_108.M[3][0];
            local_268[1] = local_108.M[3][1];
            afStack_260[0] = local_108.M[3][2];
            afStack_260[1] = local_108.M[3][3];
            if ((*(longlong *)&param_1->field_0x8 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Particles",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                   ,0x56,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)&param_1->field_0x8;
            uVar16 = *(int *)&param_1->field_0x10 + iVar14;
            iVar15 = *(int *)(lVar2 + 0x80);
            uVar10 = 0;
            if ((int)uVar16 < iVar15) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_2f8 = (TVector<float,3> *)(longlong)(int)uVar16;
              local_2f0 = (float *)(longlong)iVar15;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar8 = _UNK_150689648;
            uVar6 = ___xmm_3f800000000000000000000000000000;
            ___xmm_3f800000000000000000000000000000 = (float)uVar5;
            _UNK_150689644 = SUB84(uVar5,4);
            local_228[0] = ___xmm_3f800000000000000000000000000000;
            local_228[1] = _UNK_150689644;
            _UNK_150689648 = (float)uVar7;
            _UNK_15068964c = SUB84(uVar7,4);
            afStack_220[0] = _UNK_150689648;
            afStack_220[1] = _UNK_15068964c;
            local_24c = 0;
            local_23c = 0;
            fVar21 = *(float *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar16 * 4);
            local_22c = 0;
            local_258 = fVar21 * local_298;
            local_254 = fVar21 * fStack_294;
            local_1c8.M[0][1] = local_1c8.M[0][1] + fVar21 * fStack_294;
            local_1c8.M[0][0] = local_1c8.M[0][0] + fVar21 * local_298;
            local_248 = fVar21 * local_288;
            local_244 = fVar21 * fStack_284;
            local_250 = fVar21 * afStack_290[0];
            local_1c8.M[2][1] = local_1c8.M[2][1] + fVar21 * fStack_274;
            local_238 = fVar21 * local_278;
            local_234 = fVar21 * fStack_274;
            local_240 = fVar21 * afStack_280[0];
            local_230 = fVar21 * afStack_270[0];
            local_1c8.M[2][2] = local_1c8.M[2][2] + fVar21 * afStack_270[0];
            local_1c8.M[0][2] = local_1c8.M[0][2] + fVar21 * afStack_290[0];
            local_1c8.M[1][0] = local_1c8.M[1][0] + fVar21 * local_288;
            local_1c8.M[1][1] = local_1c8.M[1][1] + fVar21 * fStack_284;
            local_1c8.M[1][2] = local_1c8.M[1][2] + fVar21 * afStack_280[0];
            local_1c8.M[2][0] = local_1c8.M[2][0] + fVar21 * local_278;
            ___xmm_3f800000000000000000000000000000 = uVar6;
            _UNK_150689648 = uVar8;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)&param_1->field_0x14);
      }
      fVar21 = ((local_1c8.M[2][2] * local_1c8.M[1][1] - local_1c8.M[1][2] * local_1c8.M[2][1]) *
                local_1c8.M[0][0] -
               (local_1c8.M[2][2] * local_1c8.M[1][0] - local_1c8.M[1][2] * local_1c8.M[2][0]) *
               local_1c8.M[0][1]) +
               (local_1c8.M[2][1] * local_1c8.M[1][0] - local_1c8.M[1][1] * local_1c8.M[2][0]) *
               local_1c8.M[0][2];
      if ((fVar21 < __real_322bcc77) || (iVar15 = _finite((double)fVar21), iVar15 == 0)) {
        local_2b8._0_8_ = 0;
        pTVar13 = &local_2b8;
        local_2b8._s_0.Z = 0.0;
      }
      else {
        pTVar13 = &UE::Math::TMatrix<float>::InverseTransformVector
                             (&local_1c8,&local_1d8,(TVector<float> *)&local_2c8)->field0_0x0;
      }
      fVar21 = (pTVar13->_s_0).Z;
      *(undefined8 *)&this->Omega = *(undefined8 *)&(pTVar13->_s_0).X;
      *(float *)&(this->Omega).field_0x8 = fVar21;
    }
  }
  return;
}

