// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FPBDBendingSpringConstraints @ 14db93650

FPBDBendingSpringConstraints * __thiscall
Chaos::Softs::FPBDBendingSpringConstraints::FPBDBendingSpringConstraints
          (FPBDBendingSpringConstraints *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,FCollectionPropertyConstFacade *param_6,bool param_7)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  float fVar2;
  FCollectionPropertyConstFacade *this_01;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FString *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  float fVar10;
  float fVar11;
  TVector<float,2> local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  FString local_58 [3];
  
  this_01 = param_6;
  fVar2 = __real_3f800000;
  this_00 = &param_6->KeyNameIndices;
  local_res8 = (TVector<float,2>)0x3f8000003f800000;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BendingSpringStiffnessName);
  if ((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != -1)) {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->LowValueArray);
    param_6 = (FCollectionPropertyConstFacade *)CONCAT44(fVar10,fVar11);
    local_res8 = (TVector<float,2>)param_6;
  }
  pFVar7 = ::FName::ToString(&BendingSpringStiffnessName,(FString *)&local_68);
  pFVar7 = ::FString::FString(local_58,pFVar7);
  param_6 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,(FString *)&local_78,&BendingSpringStiffnessName,(<lambda_1> *)&param_6,pFVar7,
             (int *)0x0);
  FVar3.Data = local_78.AllocatorInstance.Data;
  iVar5 = local_78.ArrayNum;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (iVar5 != 0) {
    FVar9.Data = local_78.AllocatorInstance.Data;
  }
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar9.Data);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_5,uVar4,(FString *)&local_78);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_5 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78._8_8_ = (ulonglong)(uint)local_78.ArrayMax << 0x20;
  }
  else {
    local_78.AllocatorInstance.Data = *(FScriptContainerElement **)(lVar1 + 0x10);
    local_78._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<2>
            ((FPBDSpringConstraintsBase *)this,param_1,param_2,param_3,param_4,
             (TArrayView<float_const_,int> *)&local_78,&local_res8,param_7,fVar2);
  this->_padding_ = (longlong)&___7FPBDSpringConstraints_Softs_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticles>
            ((FPBDSpringConstraints *)this,&local_78,param_1);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPBDBendingSpringConstraints_Softs_Chaos__6B_;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BendingSpringStiffnessName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->BendingSpringStiffnessIndex).Index = iVar5;
  FPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticles>
            ((FPBDSpringConstraints *)this,&local_68,param_1);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return this;
}

// FPBDBendingSpringConstraints @ 14db93920

FPBDBendingSpringConstraints * __thiscall
Chaos::Softs::FPBDBendingSpringConstraints::FPBDBendingSpringConstraints
          (FPBDBendingSpringConstraints *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,FCollectionPropertyConstFacade *param_4,bool param_5)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  float fVar2;
  FCollectionPropertyConstFacade *this_01;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FString *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  float fVar10;
  float fVar11;
  TVector<float,2> local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  FString local_58 [3];
  
  this_01 = param_4;
  fVar2 = __real_3f800000;
  this_00 = &param_4->KeyNameIndices;
  local_res8 = (TVector<float,2>)0x3f8000003f800000;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BendingSpringStiffnessName);
  if ((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != -1)) {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->LowValueArray);
    param_4 = (FCollectionPropertyConstFacade *)CONCAT44(fVar10,fVar11);
    local_res8 = (TVector<float,2>)param_4;
  }
  pFVar7 = ::FName::ToString(&BendingSpringStiffnessName,(FString *)&local_68);
  pFVar7 = ::FString::FString(local_58,pFVar7);
  param_4 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,(FString *)&local_78,&BendingSpringStiffnessName,(<lambda_1> *)&param_4,pFVar7,
             (int *)0x0);
  FVar3.Data = local_78.AllocatorInstance.Data;
  iVar5 = local_78.ArrayNum;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (iVar5 != 0) {
    FVar9.Data = local_78.AllocatorInstance.Data;
  }
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar9.Data);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar4,(FString *)&local_78);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78._8_8_ = (ulonglong)(uint)local_78.ArrayMax << 0x20;
  }
  else {
    local_78.AllocatorInstance.Data = *(FScriptContainerElement **)(lVar1 + 0x10);
    local_78._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<2>
            ((FPBDSpringConstraintsBase *)this,param_1,param_2,
             (TArrayView<float_const_,int> *)&local_78,&local_res8,param_5,fVar2);
  this->_padding_ = (longlong)&___7FPBDSpringConstraints_Softs_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
            ((FPBDSpringConstraints *)this,&local_78,param_1);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPBDBendingSpringConstraints_Softs_Chaos__6B_;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BendingSpringStiffnessName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->BendingSpringStiffnessIndex).Index = iVar5;
  FPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
            ((FPBDSpringConstraints *)this,&local_68,param_1);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return this;
}

// ~FPBDBendingSpringConstraints @ 14db9fd10

void __thiscall
Chaos::Softs::FPBDBendingSpringConstraints::~FPBDBendingSpringConstraints
          (FPBDBendingSpringConstraints *this)

{
  this->_padding_ = (longlong)&___7FPBDSpringConstraints_Softs_Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

