// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FXPBDVertexConstraints @ 143f479b0

FXPBDVertexConstraints * __thiscall
Chaos::Softs::FXPBDVertexConstraints::FXPBDVertexConstraints
          (FXPBDVertexConstraints *this,FSolverParticlesRange *param_1,
          FCollectionPropertyConstFacade *param_2,FEmbeddedSpringConstraintFacade *param_3)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar1;
  FEmbeddedSpringConstraintFacade *this_00;
  int iVar2;
  int *piVar3;
  TArrayView<float_const_,int> *pTVar4;
  TArrayView<float_const_,int> *pTVar5;
  TArrayView<float_const_,int> *pTVar6;
  TArrayView<float_const_,int> *pTVar7;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar9;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar10;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar11;
  float fVar12;
  undefined8 local_res8;
  FSolverParticlesRange *local_res10;
  TVector<float,2> local_res18;
  FEmbeddedSpringConstraintFacade *local_res20;
  TVector<float,2> local_e8;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_e0;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_98;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_88;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_78;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_68 [2];
  
  pTVar1 = &param_2->KeyNameIndices;
  local_res8 = (TVector<float,2>)0x3f8000003f800000;
  local_res10 = param_1;
  local_res20 = param_3;
  local_e0 = pTVar1;
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)pTVar1,VertexSpringDampingName);
  if ((piVar3 != (int *)0x0) && (iVar2 = *piVar3, iVar2 != -1)) {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar2,&param_2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_2,iVar2,&param_2->LowValueArray);
    local_res8._4_4_ = fVar12;
  }
  local_res18 = local_res8;
  local_res8 = (TVector<float,2>)0x42c8000042c80000;
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)pTVar1,VertexSpringCompressionStiffnessName);
  if ((piVar3 != (int *)0x0) && (iVar2 = *piVar3, iVar2 != -1)) {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar2,&param_2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_2,iVar2,&param_2->LowValueArray);
    local_res8._4_4_ = fVar12;
  }
  local_e8 = local_res8;
  local_res8 = (TVector<float,2>)0x42c8000042c80000;
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)pTVar1,VertexSpringExtensionStiffnessName);
  if ((piVar3 != (int *)0x0) && (iVar2 = *piVar3, iVar2 != -1)) {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_2,iVar2,&param_2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_2,iVar2,&param_2->LowValueArray);
    local_res8._4_4_ = fVar12;
  }
  this_00 = local_res20;
  pTVar4 = FEmbeddedSpringConstraintFacade::GetDampingConst(local_res20,&local_d8);
  pTVar5 = FEmbeddedSpringConstraintFacade::GetCompressionStiffnessConst(this_00,&local_c8);
  pTVar6 = FEmbeddedSpringConstraintFacade::GetExtensionStiffnessConst(this_00,&local_b8);
  pTVar7 = FEmbeddedSpringConstraintFacade::GetSpringLengthConst(this_00,&local_a8);
  pTVar8 = FEmbeddedSpringConstraintFacade::GetTargetWeightsConst(this_00,&local_98);
  pTVar9 = FEmbeddedSpringConstraintFacade::GetTargetIndexConst(this_00,&local_88);
  pTVar10 = FEmbeddedSpringConstraintFacade::GetSourceWeightsConst(this_00,&local_78);
  pTVar11 = FEmbeddedSpringConstraintFacade::GetSourceIndexConst(local_res20,local_68);
  TXPBDEmbeddedSpringConstraints<1,1>::TXPBDEmbeddedSpringConstraints<1,1>
            ((TXPBDEmbeddedSpringConstraints<1,1> *)this,local_res10,pTVar11,pTVar10,pTVar9,pTVar8,
             pTVar7,pTVar6,pTVar5,pTVar4,(TVector<float,2> *)&local_res8,&local_e8,&local_res18);
  pTVar1 = local_e0;
  this->_padding_ = (longlong)&___7FXPBDVertexConstraints_Softs_Chaos__6B_;
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)local_e0,VertexSpringExtensionStiffnessName);
  if (piVar3 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *piVar3;
  }
  (this->VertexSpringExtensionStiffnessIndex).Index = iVar2;
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)pTVar1,VertexSpringCompressionStiffnessName);
  if (piVar3 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *piVar3;
  }
  (this->VertexSpringCompressionStiffnessIndex).Index = iVar2;
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)pTVar1,VertexSpringDampingName);
  if (piVar3 == (int *)0x0) {
    (this->VertexSpringDampingIndex).Index = -1;
    return this;
  }
  (this->VertexSpringDampingIndex).Index = *piVar3;
  return this;
}

// SetProperties @ 143f76f60

void __thiscall
Chaos::Softs::FXPBDVertexConstraints::SetProperties
          (FXPBDVertexConstraints *this,FCollectionPropertyConstFacade *param_1)

{
  int iVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = __real_7f7fc99e;
  iVar1 = (this->VertexSpringExtensionStiffnessIndex).Index;
  if (iVar1 != -1) {
    EVar3 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,&param_1->FlagsArray);
    if (((EVar3 & Animatable) != None) &&
       (EVar3 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->VertexSpringExtensionStiffnessIndex).Index,
                           &param_1->FlagsArray), (char)EVar3 < '\0')) {
      if (((this->VertexSpringExtensionStiffnessIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexSpringExtensionStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                             ,0x121,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = (this->VertexSpringExtensionStiffnessIndex).Index;
      fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                        (param_1,iVar1,&param_1->HighValueArray);
      fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                        (param_1,iVar1,&param_1->LowValueArray);
      if (fVar8 <= fVar6) {
        fVar6 = fVar8;
      }
      if (fVar8 <= fVar7) {
        fVar7 = fVar8;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      *(float *)&this->_padding_ = fVar7;
      *(float *)((longlong)&this->_padding_ + 4) = fVar6 - fVar7;
    }
  }
  pTVar5 = &param_1->FlagsArray;
  iVar1 = (this->VertexSpringCompressionStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar5), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->VertexSpringCompressionStiffnessIndex).Index,pTVar5),
     (char)EVar3 < '\0')) {
    if (((this->VertexSpringCompressionStiffnessIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexSpringCompressionStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                           ,0x122,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->VertexSpringCompressionStiffnessIndex).Index;
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,iVar1,&param_1->HighValueArray);
    fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,iVar1,&param_1->LowValueArray);
    if (fVar8 <= fVar6) {
      fVar6 = fVar8;
    }
    if (fVar8 <= fVar7) {
      fVar7 = fVar8;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    *(float *)&this->_padding_ = fVar7;
    *(float *)((longlong)&this->_padding_ + 4) = fVar6 - fVar7;
  }
  iVar1 = (this->VertexSpringDampingIndex).Index;
  if (((iVar1 != -1) &&
      (EVar3 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar5), (EVar3 & Animatable) != None)) &&
     (EVar3 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->VertexSpringDampingIndex).Index,pTVar5), (char)EVar3 < '\0')
     ) {
    if (((this->VertexSpringDampingIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexSpringDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                           ,0x123,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->VertexSpringDampingIndex).Index;
    fVar7 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,iVar1,&param_1->HighValueArray);
    fVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,iVar1,&param_1->LowValueArray);
    if (__real_447a0000 <= fVar7) {
      fVar7 = __real_447a0000;
    }
    if (__real_447a0000 <= fVar8) {
      fVar8 = __real_447a0000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    *(float *)&this->_padding_ = fVar8;
    *(float *)((longlong)&this->_padding_ + 4) = fVar7 - fVar8;
  }
  return;
}

