// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// SetProperties @ 143d706b0

void __thiscall
Chaos::Softs::FPBDSelfCollisionSphereConstraints::SetProperties
          (FPBDSelfCollisionSphereConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  float fVar5;
  
  iVar1 = (this->SelfCollisionSphereRadiusIndex).Index;
  if (iVar1 != -1) {
    EVar3 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,&param_1->FlagsArray);
    if (((EVar3 & Animatable) != None) &&
       (EVar3 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->SelfCollisionSphereRadiusIndex).Index,&param_1->FlagsArray
                          ), (char)EVar3 < '\0')) {
      if (((this->SelfCollisionSphereRadiusIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SelfCollisionSphereRadiusIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSelfCollisionSphereConstraints.h"
                             ,0x57,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar5 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                        (param_1,(this->SelfCollisionSphereRadiusIndex).Index,
                         &param_1->LowValueArray);
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      *(float *)&this->_padding_ = fVar5;
    }
  }
  iVar1 = (this->SelfCollisionSphereStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,&param_1->FlagsArray), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionSphereStiffnessIndex).Index,
                         &param_1->FlagsArray), (char)EVar3 < '\0')) {
    if (((this->SelfCollisionSphereStiffnessIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionSphereStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSelfCollisionSphereConstraints.h"
                           ,0x58,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar5 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,(this->SelfCollisionSphereStiffnessIndex).Index,
                       &param_1->LowValueArray);
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar5;
  }
  return;
}

