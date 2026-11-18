// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 4

// FXPBDAreaSpringConstraints @ 14db9a1d0

FXPBDAreaSpringConstraints * __thiscall
Chaos::Softs::FXPBDAreaSpringConstraints::FXPBDAreaSpringConstraints
          (FXPBDAreaSpringConstraints *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,FCollectionPropertyConstFacade *param_6,bool param_7)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  float fVar2;
  FCollectionPropertyConstFacade *this_01;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FString *pFVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  TVector<float,2> local_res8;
  TArrayView<float_const_,int> local_78;
  FString local_68;
  FString local_58 [3];
  
  this_01 = param_6;
  fVar2 = __real_4b189680;
  this_00 = &param_6->KeyNameIndices;
  local_res8 = (TVector<float,2>)0x4b1896804b189680;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAreaSpringStiffnessName);
  if ((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != -1)) {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->LowValueArray);
    param_6 = (FCollectionPropertyConstFacade *)CONCAT44(fVar10,fVar11);
    local_res8 = (TVector<float,2>)param_6;
  }
  pFVar7 = ::FName::ToString(&XPBDAreaSpringStiffnessName,&local_68);
  pFVar7 = ::FString::FString(local_58,pFVar7);
  param_6 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,(FString *)&local_78,&XPBDAreaSpringStiffnessName,(<lambda_1> *)&param_6,pFVar7
             ,(int *)0x0);
  pfVar3 = local_78.DataPtr;
  iVar5 = local_78.ArrayNum;
  pfVar9 = (float *)L"";
  if (iVar5 != 0) {
    pfVar9 = local_78.DataPtr;
  }
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)pfVar9);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_5,uVar4,(FString *)&local_78);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_5 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_78.DataPtr = (float *)0x0;
    local_78._8_8_ = (ulonglong)(uint)local_78._12_4_ << 0x20;
  }
  else {
    local_78.DataPtr = *(float **)(lVar1 + 0x10);
    local_78._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this,param_1,param_2,param_3,param_4,&local_78,
             &local_res8,param_7,fVar2);
  param_6 = (FCollectionPropertyConstFacade *)((ulonglong)param_6 & 0xffffffff00000000);
  this->_padding_ = (longlong)&___7FXPBDAxialSpringConstraints_Softs_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,(float *)&param_6,
             (int)this->_padding_);
  if (pfVar3 != (float *)0x0) {
    FMemory::Free(pfVar3);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FXPBDAreaSpringConstraints_Softs_Chaos__6B_;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAreaSpringStiffnessName);
  if (piVar6 == (int *)0x0) {
    (this->XPBDAreaSpringStiffnessIndex).Index = -1;
    return this;
  }
  (this->XPBDAreaSpringStiffnessIndex).Index = *piVar6;
  return this;
}

// FXPBDAreaSpringConstraints @ 14db9a480

FXPBDAreaSpringConstraints * __thiscall
Chaos::Softs::FXPBDAreaSpringConstraints::FXPBDAreaSpringConstraints
          (FXPBDAreaSpringConstraints *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,FCollectionPropertyConstFacade *param_4,bool param_5)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  float fVar2;
  FCollectionPropertyConstFacade *this_01;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FString *pFVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  TVector<float,2> local_res8;
  TArrayView<float_const_,int> local_78;
  FString local_68;
  FString local_58 [3];
  
  this_01 = param_4;
  fVar2 = __real_4b189680;
  this_00 = &param_4->KeyNameIndices;
  local_res8 = (TVector<float,2>)0x4b1896804b189680;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAreaSpringStiffnessName);
  if ((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != -1)) {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->LowValueArray);
    param_4 = (FCollectionPropertyConstFacade *)CONCAT44(fVar10,fVar11);
    local_res8 = (TVector<float,2>)param_4;
  }
  pFVar7 = ::FName::ToString(&XPBDAreaSpringStiffnessName,&local_68);
  pFVar7 = ::FString::FString(local_58,pFVar7);
  param_4 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,(FString *)&local_78,&XPBDAreaSpringStiffnessName,(<lambda_1> *)&param_4,pFVar7
             ,(int *)0x0);
  pfVar3 = local_78.DataPtr;
  iVar5 = local_78.ArrayNum;
  pfVar9 = (float *)L"";
  if (iVar5 != 0) {
    pfVar9 = local_78.DataPtr;
  }
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)pfVar9);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar4,(FString *)&local_78);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_78.DataPtr = (float *)0x0;
    local_78._8_8_ = (ulonglong)(uint)local_78._12_4_ << 0x20;
  }
  else {
    local_78.DataPtr = *(float **)(lVar1 + 0x10);
    local_78._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this,param_1,param_2,&local_78,&local_res8,param_5,
             fVar2);
  param_4 = (FCollectionPropertyConstFacade *)((ulonglong)param_4 & 0xffffffff00000000);
  this->_padding_ = (longlong)&___7FXPBDAxialSpringConstraints_Softs_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,(float *)&param_4,
             (int)this->_padding_);
  if (pfVar3 != (float *)0x0) {
    FMemory::Free(pfVar3);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FXPBDAreaSpringConstraints_Softs_Chaos__6B_;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAreaSpringStiffnessName);
  if (piVar6 == (int *)0x0) {
    (this->XPBDAreaSpringStiffnessIndex).Index = -1;
    return this;
  }
  (this->XPBDAreaSpringStiffnessIndex).Index = *piVar6;
  return this;
}

// ~FXPBDAreaSpringConstraints @ 14dba02f0

void __thiscall
Chaos::Softs::FXPBDAreaSpringConstraints::~FXPBDAreaSpringConstraints
          (FXPBDAreaSpringConstraints *this)

{
  this->_padding_ = (longlong)&___7FXPBDAxialSpringConstraints_Softs_Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FPBDAxialSpringConstraintsBase::~FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this);
  return;
}

// SetProperties @ 14dc17530

void __thiscall
Chaos::Softs::FXPBDAreaSpringConstraints::SetProperties
          (FXPBDAreaSpringConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ECollectionPropertyFlags EVar4;
  bool bVar5;
  FString *pFVar6;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_a8;
  undefined1 local_98 [40];
  undefined8 local_70;
  bool local_68;
  float local_60;
  undefined8 local_5c;
  int local_54;
  
  iVar1 = (this->XPBDAreaSpringStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,&param_1->FlagsArray), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAreaSpringStiffnessIndex).Index,&param_1->FlagsArray),
     (char)EVar4 < '\0')) {
    if (((this->XPBDAreaSpringStiffnessIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAreaSpringStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAxialSpringConstraints.h"
                           ,0x104,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->XPBDAreaSpringStiffnessIndex).Index;
    fVar9 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_1,iVar1,&param_1->HighValueArray);
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (((this->XPBDAreaSpringStiffnessIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAreaSpringStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAxialSpringConstraints.h"
                           ,0x104,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar4 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAreaSpringStiffnessIndex).Index,&param_1->FlagsArray);
    if ((EVar4 & StringDirty) == None) {
      if (__real_4b189680 <= fVar10) {
        fVar10 = __real_4b189680;
      }
      if (__real_4b189680 <= fVar9) {
        fVar9 = __real_4b189680;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      local_res8._4_4_ = fVar9;
      local_res8._0_4_ = fVar10;
      if ((fVar10 == *(float *)&this->_padding_) &&
         (fVar9 == *(float *)((longlong)&this->_padding_ + 4))) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar8;
      this->_padding_ = (longlong)local_res8;
    }
    else {
      if (((this->XPBDAreaSpringStiffnessIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAreaSpringStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAxialSpringConstraints.h"
                             ,0x104,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->XPBDAreaSpringStiffnessIndex).Index,
                          &param_1->StringValueArray);
      local_a8.DataPtr = (TVector<int,3> *)this->_padding_;
      local_a8.ArrayNum = (int)this->_padding_;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar3 = this->_padding_;
      if ((local_a8.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar6);
      if (pTVar7 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_b8.DataPtr = (float *)0x0;
        local_b8._8_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
      }
      else {
        local_b8.DataPtr = *(float **)&pTVar7->field_0x10;
        local_b8._8_8_ = *(undefined8 *)&pTVar7->field_0x18;
      }
      local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FPBDWeightMap::FPBDWeightMap<3>
                ((FPBDWeightMap *)local_98,(TVector<float,2> *)&local_res8,&local_b8,&local_a8,
                 (int)lVar3,iVar1,0x10,(void *)0x0);
      if (__real_4b189680 <= fVar10) {
        fVar10 = __real_4b189680;
      }
      if (__real_4b189680 <= fVar9) {
        fVar9 = __real_4b189680;
      }
      local_98._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      local_60 = 1000.0;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      local_5c._0_4_ = 6.9077554;
      local_5c._4_4_ = 0.0;
      local_54 = 0;
      local_res8._4_4_ = fVar9;
      local_res8._0_4_ = fVar10;
      if (((float)local_70 == fVar10) && (local_70._4_4_ == fVar9)) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      local_68 = (bool)(local_68 | bVar8);
      local_70 = (TVector<float,2>)local_res8;
      FPBDStiffness::operator=((FPBDStiffness *)&this->_padding_,(FPBDStiffness *)local_98);
      if ((FScriptContainerElement *)local_98._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._24_8_);
      }
      if ((FScriptContainerElement *)local_98._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._8_8_);
      }
    }
  }
  return;
}

