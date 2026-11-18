// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// SetProperties @ 143d707e0

void __thiscall
Chaos::Softs::FPBDSoftBodyCollisionConstraint::SetProperties
          (FPBDSoftBodyCollisionConstraint *this,FCollectionPropertyConstFacade *param_1)

{
  int iVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  float fVar6;
  
  iVar1 = (this->CollisionThicknessIndex).Index;
  if (iVar1 != -1) {
    EVar3 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,&param_1->FlagsArray);
    if (((EVar3 & Animatable) != None) &&
       (EVar3 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->CollisionThicknessIndex).Index,&param_1->FlagsArray),
       (char)EVar3 < '\0')) {
      if (((this->CollisionThicknessIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CollisionThicknessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSoftBodyCollisionConstraint.h"
                             ,0xd8,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                        (param_1,(this->CollisionThicknessIndex).Index,&param_1->LowValueArray);
      *(float *)&this->_padding_ = fVar6 * this->MeshScale;
    }
  }
  pTVar5 = &param_1->FlagsArray;
  iVar1 = (this->SoftBodyCollisionThicknessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar5), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SoftBodyCollisionThicknessIndex).Index,pTVar5),
     (char)EVar3 < '\0')) {
    if (((this->SoftBodyCollisionThicknessIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SoftBodyCollisionThicknessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSoftBodyCollisionConstraint.h"
                           ,0xd9,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,(this->SoftBodyCollisionThicknessIndex).Index,&param_1->LowValueArray
                      );
    *(float *)((longlong)&this->_padding_ + 4) = fVar6;
  }
  iVar1 = (this->FrictionCoefficientIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar5), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->FrictionCoefficientIndex).Index,pTVar5), (char)EVar3 < '\0')
     ) {
    if (((this->FrictionCoefficientIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrictionCoefficientIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSoftBodyCollisionConstraint.h"
                           ,0xda,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,(this->FrictionCoefficientIndex).Index,&param_1->LowValueArray);
    *(float *)&this->_padding_ = fVar6;
    *(float *)&this->_padding_ = fVar6;
  }
  iVar1 = (this->UseCCDIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar5), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->UseCCDIndex).Index,pTVar5), (char)EVar3 < '\0')) {
    if (((this->UseCCDIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UseCCDIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSoftBodyCollisionConstraint.h"
                           ,0xdb,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,(this->UseCCDIndex).Index,&param_1->LowValueArray);
    *(bool *)((longlong)&this->_padding_ + 4) = bVar4;
  }
  iVar1 = (this->ProximityStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar5), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->ProximityStiffnessIndex).Index,pTVar5), (char)EVar3 < '\0'))
  {
    if (((this->ProximityStiffnessIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProximityStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSoftBodyCollisionConstraint.h"
                           ,0xdc,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,(this->ProximityStiffnessIndex).Index,&param_1->LowValueArray);
    *(float *)&this->_padding_ = fVar6;
  }
  iVar1 = (this->UsePlanarConstraintForSimpleCollidersIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar5), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->UsePlanarConstraintForSimpleCollidersIndex).Index,pTVar5),
     (char)EVar3 < '\0')) {
    if (((this->UsePlanarConstraintForSimpleCollidersIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsePlanarConstraintForSimpleCollidersIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSoftBodyCollisionConstraint.h"
                           ,0xde,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,(this->UsePlanarConstraintForSimpleCollidersIndex).Index,
                       &param_1->LowValueArray);
    *(bool *)((longlong)&this->_padding_ + 6) = bVar4;
  }
  iVar1 = (this->UsePlanarConstraintForComplexCollidersIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar5), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->UsePlanarConstraintForComplexCollidersIndex).Index,pTVar5),
     (char)EVar3 < '\0')) {
    if (((this->UsePlanarConstraintForComplexCollidersIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsePlanarConstraintForComplexCollidersIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSoftBodyCollisionConstraint.h"
                           ,0xe0,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,(this->UsePlanarConstraintForComplexCollidersIndex).Index,
                       &param_1->LowValueArray);
    *(bool *)((longlong)&this->_padding_ + 7) = bVar4;
  }
  return;
}

