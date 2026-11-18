// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ApplyHelperISPC<Chaos::Softs::FSolverParticles> @ 143d87650

void __thiscall
Chaos::Softs::FPBDSphericalConstraint::ApplyHelperISPC<Chaos::Softs::FSolverParticles>
          (FPBDSphericalConstraint *this,FSolverParticles *param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar2 = (this->AnimationPositions->AllocatorInstance).Data;
  if (this->AnimationPositions->ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = this->ParticleCount;
  uVar3 = *(undefined8 *)&(param_1->MPAndInvM).field_0x8;
  if ((this->SphereRadii).ArrayNum == iVar1) {
    ApplySphericalConstraintsWithMap
              (uVar3,pFVar2,(this->SphereRadii).DataPtr,this->Scale * this->MaxDistanceBase,
               this->Scale * this->MaxDistanceRange,this->ParticleOffset,iVar1);
    return;
  }
  ApplySphericalConstraintsWithoutMap
            (uVar3,pFVar2,this->Scale * this->MaxDistanceBase,this->ParticleOffset,iVar1);
  return;
}

// ApplyHelperISPC<Chaos::Softs::FSolverParticlesRange> @ 143d87720

void __thiscall
Chaos::Softs::FPBDSphericalConstraint::ApplyHelperISPC<Chaos::Softs::FSolverParticlesRange>
          (FPBDSphericalConstraint *this,FSolverParticlesRange *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar7;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_38 [3];
  
  TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<Chaos::TVector<float,3>_>
            ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_48,
             this->AnimationPositions);
  iVar4 = this->ParticleCount;
  iVar5 = this->ParticleOffset;
  fVar1 = this->Scale;
  if ((this->SphereRadii).ArrayNum == iVar4) {
    fVar2 = this->MaxDistanceRange;
    fVar3 = this->MaxDistanceBase;
    pfVar6 = (this->SphereRadii).DataPtr;
    pTVar7 = FSolverParticlesRange::GetPAndInvM(param_1,local_38);
    ApplySphericalConstraintsWithMap
              (pTVar7->DataPtr,local_48.DataPtr,pfVar6,fVar1 * fVar3,fVar1 * fVar2,iVar5,iVar4);
  }
  else {
    fVar2 = this->MaxDistanceBase;
    pTVar7 = FSolverParticlesRange::GetPAndInvM(param_1,local_38);
    ApplySphericalConstraintsWithoutMap(pTVar7->DataPtr,local_48.DataPtr,fVar1 * fVar2,iVar5,iVar4);
  }
  return;
}

// SetProperties @ 143db8fa0

void __thiscall
Chaos::Softs::FPBDSphericalConstraint::SetProperties
          (FPBDSphericalConstraint *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,float param_3)

{
  code *pcVar1;
  ECollectionPropertyFlags EVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  iVar4 = (this->MaxDistanceIndex).Index;
  if (iVar4 == -1) {
    this->Scale = param_3;
  }
  else {
    EVar2 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar4,&param_1->FlagsArray);
    if ((EVar2 & Animatable) != None) {
      EVar2 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->MaxDistanceIndex).Index,&param_1->FlagsArray);
      if ((char)EVar2 < '\0') {
        if ((this->MaxDistanceIndex).Index == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaxDistanceIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                             ,0x9e,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        iVar4 = (this->MaxDistanceIndex).Index;
        uVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_1,iVar4,&param_1->HighValueArray);
        uVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_1,iVar4,&param_1->LowValueArray);
        iVar4 = (this->MaxDistanceIndex).Index;
        if ((float)uVar7 <= UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y) {
          uVar7 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y;
        }
        if ((float)uVar8 <= UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X) {
          uVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X;
        }
        this->MaxDistanceBase = (float)uVar8;
        this->MaxDistanceRange = (float)uVar7 - (float)uVar8;
        if (iVar4 == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaxDistanceIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                             ,0x9e,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        EVar2 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->MaxDistanceIndex).Index,&param_1->FlagsArray);
        if ((EVar2 & StringDirty) != None) {
          if ((this->MaxDistanceIndex).Index == -1) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("MaxDistanceIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                               ,0x9e,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              );
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          pFVar5 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                             (param_1,(this->MaxDistanceIndex).Index,&param_1->StringValueArray);
          pTVar6 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                           *)param_2,pFVar5);
          if (pTVar6 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
            iVar4 = 0;
            local_38 = 0;
            uStack_34 = 0;
          }
          else {
            local_38 = *(undefined4 *)&pTVar6->field_0x10;
            uStack_34 = *(undefined4 *)&pTVar6->field_0x14;
            iVar4 = *(int *)&pTVar6->field_0x18;
            uStack_2c = *(undefined4 *)&pTVar6->field_0x1c;
          }
          *(undefined4 *)&(this->SphereRadii).DataPtr = local_38;
          *(undefined4 *)((longlong)&(this->SphereRadii).DataPtr + 4) = uStack_34;
          (this->SphereRadii).ArrayNum = iVar4;
          *(undefined4 *)&(this->SphereRadii).field_0xc = uStack_2c;
        }
      }
    }
    this->Scale = param_3;
  }
  return;
}

