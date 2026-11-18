// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// FMultiResConstraints @ 14db91be0

FMultiResConstraints * __thiscall
Chaos::Softs::FMultiResConstraints::FMultiResConstraints
          (FMultiResConstraints *this,FSolverParticlesRange *param_1,int param_2,
          FTriangleMesh *param_3,
          TArray<Chaos::TVector<float,4>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_5,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_6,FCollectionPropertyConstFacade *param_7)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FString *pFVar7;
  FMultiResConstraints *pFVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  FCollectionPropertyConstFacade *local_res8;
  TVector<float,2> local_res10;
  FCollectionPropertyConstFacade *local_res20;
  TVector<float,2> local_f8;
  FString local_f0;
  TArrayView<float_const_,int> local_e0;
  FString local_d0;
  TArrayView<float_const_,int> local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [4];
  
  this_00 = &param_7->KeyNameIndices;
  this->NumParticles = *(int *)&param_1->field_0x14;
  (this->CoarseToFinePositionBaryCoordsAndDist).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->CoarseSoftBodyId = param_2;
  this->CoarseMesh = param_3;
  (this->CoarseToFinePositionBaryCoordsAndDist).AllocatorInstance.Data =
       (param_4->AllocatorInstance).Data;
  (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CoarseToFinePositionBaryCoordsAndDist).ArrayNum = param_4->ArrayNum;
  (this->CoarseToFinePositionBaryCoordsAndDist).ArrayMax = param_4->ArrayMax;
  param_4->ArrayNum = 0;
  param_4->ArrayMax = 0;
  (this->CoarseToFineSourceMeshVertIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoarseToFineSourceMeshVertIndices).AllocatorInstance.Data =
       (param_5->AllocatorInstance).Data;
  (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CoarseToFineSourceMeshVertIndices).ArrayNum = param_5->ArrayNum;
  (this->CoarseToFineSourceMeshVertIndices).ArrayMax = param_5->ArrayMax;
  param_5->ArrayNum = 0;
  param_5->ArrayMax = 0;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,MultiResUseXPBDName);
  fVar15 = __real_4e6e6b28;
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    this->bUseXPBD = false;
    fVar14 = __real_3f800000;
  }
  else {
    bVar3 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_7,*piVar6,&param_7->LowValueArray);
    this->bUseXPBD = bVar3;
    fVar14 = __real_3f800000;
    if (bVar3) {
      fVar14 = fVar15;
    }
  }
  iVar11 = this->NumParticles;
  pFVar7 = ::FName::ToString(&MultiResStiffnessName,&local_b0);
  pFVar7 = ::FString::FString(&local_90,pFVar7);
  local_res8 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_f0,&MultiResStiffnessName,(<lambda_1> *)&local_res8,pFVar7,(int *)0x0);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar9.Data = local_f0.Data.AllocatorInstance.Data;
  }
  iVar5 = local_f0.Data.ArrayNum + -1;
  if (local_f0.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar9.Data);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_6,uVar4,&local_f0);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_6 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_e0.DataPtr = (float *)0x0;
    local_e0._8_8_ = (ulonglong)(uint)local_e0._12_4_ << 0x20;
  }
  else {
    local_e0.DataPtr = *(float **)(lVar1 + 0x10);
    local_e0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,MultiResStiffnessName);
  if ((piVar6 == (int *)0x0) || (iVar5 = *piVar6, iVar5 == -1)) {
    local_res10 = (TVector<float,2>)0x3f8000003f800000;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar5,&param_7->HighValueArray);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar5,&param_7->LowValueArray);
    local_res10._4_4_ = fVar12;
    local_res10._0_4_ = fVar13;
  }
  fVar12 = __real_447a0000;
  FPBDStiffness::FPBDStiffness
            (&this->Stiffness,&local_res10,&local_e0,iVar11,0x10,__real_447a0000,fVar14);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (this->bUseXPBD == false) {
    fVar15 = __real_3f800000;
  }
  iVar11 = this->NumParticles;
  pFVar7 = ::FName::ToString(&MultiResVelocityTargetStiffnessName,&local_a0);
  pFVar7 = ::FString::FString(local_80,pFVar7);
  local_res20 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_d0,&MultiResVelocityTargetStiffnessName,(<lambda_1> *)&local_res20,
             pFVar7,(int *)0x0);
  if (local_d0.Data.ArrayNum == 0) {
    pwVar10 = L"";
    local_d0.Data.ArrayNum = 0;
  }
  else {
    local_d0.Data.ArrayNum = local_d0.Data.ArrayNum + -1;
    pwVar10 = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(local_d0.Data.ArrayNum,pwVar10);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_6,uVar4,&local_d0);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_6 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_c0.DataPtr = (float *)0x0;
    local_c0._8_8_ = (ulonglong)(uint)local_c0._12_4_ << 0x20;
  }
  else {
    local_c0.DataPtr = *(float **)(lVar1 + 0x10);
    local_c0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,MultiResVelocityTargetStiffnessName);
  if ((piVar6 == (int *)0x0) || (iVar5 = *piVar6, iVar5 == -1)) {
    local_f8 = (TVector<float,2>)0x3f8000003f800000;
  }
  else {
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar5,&param_7->HighValueArray);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar5,&param_7->LowValueArray);
    local_f8._4_4_ = fVar14;
    local_f8._0_4_ = fVar13;
  }
  FPBDStiffness::FPBDStiffness
            (&this->VelocityTargetStiffness,&local_f8,&local_c0,iVar11,0x10,fVar12,fVar15);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  iVar11 = -1;
  (this->FineTargetPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FineTargetPositions).ArrayNum = 0;
  (this->FineTargetPositions).ArrayMax = 0;
  (this->FineTargetVelocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FineTargetVelocities).ArrayNum = 0;
  (this->FineTargetVelocities).ArrayMax = 0;
  (this->CoarseBarycentricMass).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoarseBarycentricMass).ArrayNum = 0;
  (this->CoarseBarycentricMass).ArrayMax = 0;
  this->NonZeroStiffnessMin = -1;
  this->NonZeroStiffnessMax = -1;
  this->bStiffnessEntriesInitialized = false;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,MultiResUseXPBDName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->MultiResUseXPBDIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,MultiResStiffnessName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->MultiResStiffnessIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,MultiResVelocityTargetStiffnessName);
  if (piVar6 != (int *)0x0) {
    iVar11 = *piVar6;
  }
  (this->MultiResVelocityTargetStiffnessIndex).Index = iVar11;
  if ((this->NumParticles != (this->CoarseToFinePositionBaryCoordsAndDist).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumParticles == CoarseToFinePositionBaryCoordsAndDist.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                         ,0x38,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FMultiResConstraints *)(*pcVar2)();
    return pFVar8;
  }
  if ((this->NumParticles != (this->CoarseToFineSourceMeshVertIndices).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumParticles == CoarseToFineSourceMeshVertIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\SoftsMultiResConstraints.h"
                         ,0x39,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FMultiResConstraints *)(*pcVar2)();
    return pFVar8;
  }
  return this;
}

// ~FMultiResConstraints @ 14db9fc10

void __thiscall
Chaos::Softs::FMultiResConstraints::~FMultiResConstraints(FMultiResConstraints *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CoarseBarycentricMass).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FineTargetVelocities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FineTargetPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->VelocityTargetStiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->VelocityTargetStiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Stiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Stiffness)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->CoarseToFineSourceMeshVertIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CoarseToFinePositionBaryCoordsAndDist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

