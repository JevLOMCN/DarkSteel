// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// FExternalForces @ 14db91640

FExternalForces * __thiscall
Chaos::Softs::FExternalForces::FExternalForces
          (FExternalForces *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,FCollectionPropertyConstFacade *param_4)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  FCollectionPropertyConstFacade *this_01;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  TVector<float,2> local_res8;
  TArrayView<float_const_,int> local_68;
  FString local_58;
  FString local_48 [2];
  
  pFVar5 = ::FName::ToString(&GravityScaleName,&local_58);
  pFVar5 = ::FString::FString(local_48,pFVar5);
  this_01 = param_4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_4,(FString *)&local_68,&GravityScaleName,(<lambda_1> *)&param_4,pFVar5,(int *)0x0
            );
  pfVar2 = local_68.DataPtr;
  iVar4 = local_68.ArrayNum;
  pfVar8 = (float *)L"";
  if (iVar4 != 0) {
    pfVar8 = local_68.DataPtr;
  }
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)pfVar8);
  iVar4 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar3,(FString *)&local_68);
  if ((iVar4 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar4 * 0x28, lVar1 == 0)) {
    local_68.DataPtr = (float *)0x0;
    local_68._8_8_ = (ulonglong)(uint)local_68._12_4_ << 0x20;
  }
  else {
    local_68.DataPtr = *(float **)(lVar1 + 0x10);
    local_68._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  this_00 = &this_01->KeyNameIndices;
  param_4 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,GravityScaleName);
  if ((piVar6 != (int *)0x0) && (iVar4 = *piVar6, iVar4 != -1)) {
    fVar9 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (this_01,iVar4,&this_01->HighValueArray);
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar4,&this_01->LowValueArray);
    param_4 = (FCollectionPropertyConstFacade *)CONCAT44(fVar9,fVar10);
  }
  local_res8 = (TVector<float,2>)param_4;
  this->_padding_ = (longlong)&___7FExternalForcesBase_Softs_Chaos__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xc4752a8f;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  param_4 = (FCollectionPropertyConstFacade *)0x3f80000000000000;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            ((FPBDFlatWeightMap *)&this->_padding_,&local_res8,&local_68,
             *(int *)&param_1->field_0x14,(TVector<float,2> *)&param_4);
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  if (pfVar2 != (float *)0x0) {
    FMemory::Free(pfVar2);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FExternalForces_Softs_Chaos__6B_;
  this->ParticleCount = *(int *)&param_1->field_0x14;
  *(undefined8 *)&this->WorldGravityMultiplier = 0x3f800000;
  *(undefined4 *)&(this->SolverGravity).field_0x4 = 0;
  *(undefined4 *)&(this->SolverGravity).field_0x8 = 0xc4752a8f;
  this->bPerSoftBodyGravityOverrideEnabled = true;
  *(undefined8 *)&this->FictitiousAngularVelocityNoScale = 0;
  *(undefined4 *)&(this->FictitiousAngularVelocityNoScale).field_0x8 = 0;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UseGravityOverrideName);
  if (piVar6 == (int *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *piVar6;
  }
  (this->UseGravityOverrideIndex).Index = iVar4;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,GravityOverrideName);
  if (piVar6 == (int *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *piVar6;
  }
  (this->GravityOverrideIndex).Index = iVar4;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,GravityScaleName);
  if (piVar6 == (int *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *piVar6;
  }
  (this->GravityScaleIndex).Index = iVar4;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,FictitiousAngularScaleName);
  if (piVar6 == (int *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *piVar6;
  }
  (this->FictitiousAngularScaleIndex).Index = iVar4;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,UsePointBasedWindModelName);
  if (piVar6 != (int *)0x0) {
    (this->UsePointBasedWindModelIndex).Index = *piVar6;
    return this;
  }
  (this->UsePointBasedWindModelIndex).Index = -1;
  return this;
}

// SetProperties @ 14dc155e0

void __thiscall
Chaos::Softs::FExternalForces::SetProperties
          (FExternalForces *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ECollectionPropertyFlags EVar5;
  TVector<float,3> *pTVar6;
  FString *pFVar7;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar8;
  FPBDFlatWeightMap *pFVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float fStackX_c;
  TVector<float,2> local_res20;
  undefined1 local_a8 [8];
  float local_a0;
  TVector<float>_u_0 local_98;
  TArrayView<float_const_,int> local_88;
  FPBDFlatWeightMap local_78;
  
  iVar2 = (this->UseGravityOverrideIndex).Index;
  if (iVar2 == -1) {
    bVar4 = false;
  }
  else {
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,iVar2,&param_1->LowValueArray);
  }
  iVar2 = (this->GravityOverrideIndex).Index;
  if (iVar2 == -1) {
    local_a8 = (undefined1  [8])0x0;
    local_a0 = -980.665;
  }
  else {
    FCollectionPropertyConstFacade::GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
              (param_1,(TVector<float> *)&local_98._s_0,iVar2,&param_1->LowValueArray);
    local_a8 = (undefined1  [8])local_98._0_8_;
    local_a0 = local_98._s_0.Z;
  }
  if ((this->bPerSoftBodyGravityOverrideEnabled == false) || (bVar4 == false)) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    pTVar6 = &this->SolverGravity;
  }
  else {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    pTVar6 = (TVector<float,3> *)local_a8;
  }
  fVar11 = this->WorldGravityMultiplier;
  fVar10 = *(float *)&pTVar6->field_0x4;
  fVar1 = *(float *)&pTVar6->field_0x8;
  *(float *)&this->_padding_ = fVar11 * *(float *)pTVar6;
  *(float *)((longlong)&this->_padding_ + 4) = fVar11 * fVar10;
  *(float *)&this->_padding_ = fVar11 * fVar1;
  fVar11 = __real_3f800000;
  iVar2 = (this->GravityScaleIndex).Index;
  if (((iVar2 != -1) &&
      (EVar5 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,&param_1->FlagsArray), (EVar5 & Animatable) != None)) &&
     (EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->GravityScaleIndex).Index,&param_1->FlagsArray),
     (char)EVar5 < '\0')) {
    if (((this->GravityScaleIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GravityScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsExternalForces.h"
                           ,0xfb,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = (this->GravityScaleIndex).Index;
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar2,&param_1->HighValueArray);
    local_res8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                           (param_1,iVar2,&param_1->LowValueArray);
    fStackX_c = fVar10;
    if (((this->GravityScaleIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GravityScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsExternalForces.h"
                           ,0xfb,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar5 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->GravityScaleIndex).Index,&param_1->FlagsArray);
    if ((EVar5 & StringDirty) == None) {
      *(float *)&this->_padding_ = local_res8;
      *(float *)((longlong)&this->_padding_ + 4) = fStackX_c - local_res8;
    }
    else {
      if (((this->GravityScaleIndex).Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GravityScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsExternalForces.h"
                             ,0xfb,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->GravityScaleIndex).Index,&param_1->StringValueArray);
      iVar2 = this->ParticleCount;
      local_res20._0_4_ = 0;
      local_res20._4_4_ = 0x3f800000;
      pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar7);
      if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
        local_88.DataPtr = (float *)0x0;
      }
      else {
        local_88.DataPtr = *(float **)&pTVar8->field_0x10;
        local_88._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
      }
      pFVar9 = FPBDFlatWeightMap::FPBDFlatWeightMap
                         (&local_78,(TVector<float,2> *)&local_res8,&local_88,iVar2,&local_res20);
      FPBDFlatWeightMap::operator=((FPBDFlatWeightMap *)&this->_padding_,pFVar9);
      if (local_78.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.MapValues.AllocatorInstance.Data);
      }
    }
  }
  iVar2 = (this->FictitiousAngularScaleIndex).Index;
  if (iVar2 != -1) {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar2,&param_1->LowValueArray);
  }
  if (__real_40000000 <= fVar11) {
    fVar11 = __real_40000000;
  }
  fVar10 = *(float *)&(this->FictitiousAngularVelocityNoScale).field_0x4;
  fVar1 = *(float *)&(this->FictitiousAngularVelocityNoScale).field_0x8;
  *(float *)&this->_padding_ = fVar11 * *(float *)&this->FictitiousAngularVelocityNoScale;
  *(float *)((longlong)&this->_padding_ + 4) = fVar11 * fVar10;
  *(float *)&this->_padding_ = fVar11 * fVar1;
  iVar2 = (this->UsePointBasedWindModelIndex).Index;
  if (iVar2 == -1) {
    *(undefined1 *)&this->_padding_ = 0;
    return;
  }
  bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                    (param_1,iVar2,&param_1->LowValueArray);
  *(bool *)&this->_padding_ = bVar4;
  return;
}

