// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 10

// FPBDSphericalBackstopConstraint @ 14db95dc0

FPBDSphericalBackstopConstraint * __thiscall
Chaos::Softs::FPBDSphericalBackstopConstraint::FPBDSphericalBackstopConstraint
          (FPBDSphericalBackstopConstraint *this,int param_1,int param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,FCollectionPropertyConstFacade *param_6,float param_7,bool param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
  *this_00;
  FCollectionPropertyConstFacade *this_01;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  int *piVar8;
  ForAnyElementType FVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  this->AnimationNormals = param_4;
  this->AnimationPositions = param_3;
  pFVar7 = ::FName::ToString(&BackstopRadiusName,&local_68);
  pFVar7 = ::FString::FString(local_58,pFVar7);
  this_01 = param_6;
  param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)param_6;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_6,&local_78,&BackstopRadiusName,(<lambda_1> *)&param_4,pFVar7,(int *)0x0);
  FVar3.Data = local_78.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar9.Data = local_78.Data.AllocatorInstance.Data;
  }
  iVar6 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar9.Data);
  this_00 = param_5;
  iVar6 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_5,uVar5,&local_78);
  if ((iVar6 == -1) || (lVar1 = *(longlong *)this_00 + (longlong)iVar6 * 0x28, lVar1 == 0)) {
    (this->SphereRadii).DataPtr = (float *)0x0;
    (this->SphereRadii).ArrayNum = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    (this->SphereRadii).DataPtr = *(float **)(lVar1 + 0x10);
    *(undefined8 *)&(this->SphereRadii).ArrayNum = uVar2;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::ToString(&BackstopDistanceName,&local_68);
  pFVar7 = ::FString::FString(local_58,pFVar7);
  param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,&local_78,&BackstopDistanceName,(<lambda_1> *)&param_4,pFVar7,(int *)0x0);
  iVar6 = local_78.Data.ArrayNum + -1;
  FVar3.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_00,uVar5,&local_78);
  if ((iVar6 == -1) || (lVar1 = *(longlong *)this_00 + (longlong)iVar6 * 0x28, lVar1 == 0)) {
    (this->SphereOffsetDistances).DataPtr = (float *)0x0;
    (this->SphereOffsetDistances).ArrayNum = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    (this->SphereOffsetDistances).DataPtr = *(float **)(lVar1 + 0x10);
    *(undefined8 *)&(this->SphereOffsetDistances).ArrayNum = uVar2;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  this->Scale = param_7;
  this->ParticleOffset = param_1;
  this->ParticleCount = param_2;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_01->KeyNameIndices,BackstopRadiusName);
  fVar12 = 0.0;
  if ((piVar8 == (int *)0x0) || (*piVar8 == -1)) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,*piVar8,&this_01->LowValueArray);
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  this->BackstopRadiusBase = fVar10;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_01->KeyNameIndices,BackstopRadiusName);
  fVar10 = __real_3f800000;
  fVar11 = __real_3f800000;
  if ((piVar8 != (int *)0x0) && (*piVar8 != -1)) {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,*piVar8,&this_01->HighValueArray);
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  this->BackstopRadiusRange = fVar11 - this->BackstopRadiusBase;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_01->KeyNameIndices,BackstopDistanceName);
  if ((piVar8 != (int *)0x0) && (*piVar8 != -1)) {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,*piVar8,&this_01->LowValueArray);
  }
  this->BackstopDistanceBase = fVar12;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_01->KeyNameIndices,BackstopDistanceName);
  if ((piVar8 != (int *)0x0) && (*piVar8 != -1)) {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,*piVar8,&this_01->HighValueArray);
  }
  this->bEnabled = true;
  this->BackstopDistanceRange = fVar10 - this->BackstopDistanceBase;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_01->KeyNameIndices,UseLegacyBackstopName);
  if ((piVar8 == (int *)0x0) || (*piVar8 == -1)) {
    bVar4 = false;
  }
  else {
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_01,*piVar8,&this_01->LowValueArray);
  }
  this->bUseLegacyBackstop = bVar4;
  this->bMeshUseGlobalIndexation = param_8;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_01->KeyNameIndices,BackstopDistanceName);
  if (piVar8 == (int *)0x0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *piVar8;
  }
  (this->BackstopDistanceIndex).Index = iVar6;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_01->KeyNameIndices,BackstopRadiusName);
  if (piVar8 == (int *)0x0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *piVar8;
  }
  (this->BackstopRadiusIndex).Index = iVar6;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this_01->KeyNameIndices,UseLegacyBackstopName);
  if (piVar8 == (int *)0x0) {
    (this->UseLegacyBackstopIndex).Index = -1;
  }
  else {
    (this->UseLegacyBackstopIndex).Index = *piVar8;
  }
  return this;
}

// operator() @ 14dba1330

void __thiscall
`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<1,1>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (*pfVar5 != 0.0) {
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                        param_1);
    lVar1 = *(longlong *)this;
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar1 + 0x20),param_1);
    lVar2 = *(longlong *)this;
    fVar15 = (*(float *)(lVar1 + 0x48) * *pfVar5 + *(float *)(lVar1 + 0x44)) *
             *(float *)(lVar2 + 0x38);
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x10),param_1);
    lVar1 = *(longlong *)((longlong)this + 8);
    fVar14 = (*(float *)(lVar2 + 0x40) * *pfVar5 + *(float *)(lVar2 + 0x3c)) *
             *(float *)(*(longlong *)this + 0x38);
    fVar9 = fVar14 + fVar15;
    fVar16 = *(float *)&pTVar6->field_0x8 - fVar9 * *(float *)&pTVar7->field_0x8;
    fVar17 = *(float *)&pTVar6->field_0x4 - fVar9 * *(float *)&pTVar7->field_0x4;
    fVar9 = *(float *)pTVar6 - fVar9 * *(float *)pTVar7;
    if ((*(longlong *)(lVar1 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
    fVar12 = *(float *)&pTVar8->field_0x4 - fVar17;
    fVar13 = *(float *)pTVar8 - fVar9;
    fVar11 = *(float *)&pTVar8->field_0x8 - fVar16;
    fVar10 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
    if (__real_322bcc77 <= fVar10) {
      if (fVar10 < fVar14 * fVar14) {
        fVar14 = fVar14 / SQRT(fVar10);
        pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                           (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
        *(float *)pTVar6 = fVar13 * fVar14 + fVar9;
        *(float *)&pTVar6->field_0x4 = fVar12 * fVar14 + fVar17;
        *(float *)&pTVar6->field_0x8 = fVar11 * fVar14 + fVar16;
      }
    }
    else {
      fVar9 = *(float *)&pTVar6->field_0x8;
      fVar14 = *(float *)&pTVar7->field_0x8;
      fVar16 = *(float *)&pTVar7->field_0x4;
      fVar17 = *(float *)pTVar7;
      fVar10 = *(float *)&pTVar6->field_0x4;
      fVar11 = *(float *)pTVar6;
      pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
      *(float *)pTVar6 = fVar11 - fVar15 * fVar17;
      *(float *)&pTVar6->field_0x4 = fVar10 - fVar15 * fVar16;
      *(float *)&pTVar6->field_0x8 = fVar9 - fVar15 * fVar14;
    }
  }
  return;
}

// operator() @ 14dba1610

void __thiscall
`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<1,0>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (*pfVar5 != 0.0) {
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                        param_1);
    lVar1 = *(longlong *)this;
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar1 + 0x20),param_1);
    fVar14 = *(float *)(*(longlong *)this + 0x38);
    lVar2 = *(longlong *)((longlong)this + 8);
    fVar15 = (*(float *)(lVar1 + 0x48) * *pfVar5 + *(float *)(lVar1 + 0x44)) * fVar14;
    fVar14 = fVar14 * *(float *)(*(longlong *)this + 0x3c);
    fVar9 = fVar14 + fVar15;
    fVar13 = *(float *)&pTVar6->field_0x8 - fVar9 * *(float *)&pTVar7->field_0x8;
    fVar17 = *(float *)&pTVar6->field_0x4 - fVar9 * *(float *)&pTVar7->field_0x4;
    fVar9 = *(float *)pTVar6 - fVar9 * *(float *)pTVar7;
    if ((*(longlong *)(lVar2 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar2 + 8),*(int *)(lVar2 + 0x10) + param_1);
    fVar12 = *(float *)&pTVar8->field_0x4 - fVar17;
    fVar16 = *(float *)pTVar8 - fVar9;
    fVar11 = *(float *)&pTVar8->field_0x8 - fVar13;
    fVar10 = fVar16 * fVar16 + fVar12 * fVar12 + fVar11 * fVar11;
    if (__real_322bcc77 <= fVar10) {
      if (fVar10 < fVar14 * fVar14) {
        fVar14 = fVar14 / SQRT(fVar10);
        pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                           (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
        *(float *)pTVar6 = fVar14 * fVar16 + fVar9;
        *(float *)&pTVar6->field_0x4 = fVar14 * fVar12 + fVar17;
        *(float *)&pTVar6->field_0x8 = fVar14 * fVar11 + fVar13;
      }
    }
    else {
      fVar14 = *(float *)&pTVar6->field_0x8;
      fVar9 = *(float *)&pTVar7->field_0x8;
      fVar13 = *(float *)&pTVar7->field_0x4;
      fVar17 = *(float *)pTVar7;
      fVar10 = *(float *)&pTVar6->field_0x4;
      fVar11 = *(float *)pTVar6;
      pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
      *(float *)pTVar6 = fVar11 - fVar15 * fVar17;
      *(float *)&pTVar6->field_0x4 = fVar10 - fVar15 * fVar13;
      *(float *)&pTVar6->field_0x8 = fVar14 - fVar15 * fVar9;
    }
  }
  return;
}

// operator() @ 14dba1c80

void __thiscall
`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<0,1>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (*pfVar5 != 0.0) {
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                        param_1);
    lVar1 = *(longlong *)this;
    fVar15 = *(float *)(lVar1 + 0x44) * *(float *)(lVar1 + 0x38);
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar1 + 0x10),param_1);
    lVar2 = *(longlong *)((longlong)this + 8);
    fVar14 = (*(float *)(lVar1 + 0x40) * *pfVar5 + *(float *)(lVar1 + 0x3c)) *
             *(float *)(*(longlong *)this + 0x38);
    fVar9 = fVar14 + fVar15;
    fVar13 = *(float *)&pTVar6->field_0x8 - fVar9 * *(float *)&pTVar7->field_0x8;
    fVar17 = *(float *)&pTVar6->field_0x4 - fVar9 * *(float *)&pTVar7->field_0x4;
    fVar9 = *(float *)pTVar6 - fVar9 * *(float *)pTVar7;
    if ((*(longlong *)(lVar2 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar2 + 8),*(int *)(lVar2 + 0x10) + param_1);
    fVar12 = *(float *)&pTVar8->field_0x4 - fVar17;
    fVar16 = *(float *)pTVar8 - fVar9;
    fVar11 = *(float *)&pTVar8->field_0x8 - fVar13;
    fVar10 = fVar16 * fVar16 + fVar12 * fVar12 + fVar11 * fVar11;
    if (__real_322bcc77 <= fVar10) {
      if (fVar10 < fVar14 * fVar14) {
        fVar14 = fVar14 / SQRT(fVar10);
        pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                           (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
        *(float *)pTVar6 = fVar14 * fVar16 + fVar9;
        *(float *)&pTVar6->field_0x4 = fVar14 * fVar12 + fVar17;
        *(float *)&pTVar6->field_0x8 = fVar14 * fVar11 + fVar13;
      }
    }
    else {
      fVar9 = *(float *)&pTVar6->field_0x8;
      fVar13 = *(float *)&pTVar7->field_0x8;
      fVar14 = *(float *)&pTVar7->field_0x4;
      fVar17 = *(float *)pTVar7;
      fVar10 = *(float *)&pTVar6->field_0x4;
      fVar11 = *(float *)pTVar6;
      pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
      *(float *)pTVar6 = fVar11 - fVar15 * fVar17;
      *(float *)&pTVar6->field_0x4 = fVar10 - fVar15 * fVar14;
      *(float *)&pTVar6->field_0x8 = fVar9 - fVar15 * fVar13;
    }
  }
  return;
}

// operator() @ 14dba1f30

void __thiscall
`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<0,0>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (*pfVar5 != 0.0) {
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                        param_1);
    lVar1 = *(longlong *)this;
    lVar2 = *(longlong *)((longlong)this + 8);
    fVar14 = *(float *)(lVar1 + 0x38) * *(float *)(lVar1 + 0x3c);
    fVar15 = *(float *)(lVar1 + 0x38) * *(float *)(lVar1 + 0x44);
    fVar9 = fVar14 + fVar15;
    fVar13 = *(float *)&pTVar6->field_0x8 - fVar9 * *(float *)&pTVar7->field_0x8;
    fVar17 = *(float *)&pTVar6->field_0x4 - fVar9 * *(float *)&pTVar7->field_0x4;
    fVar9 = *(float *)pTVar6 - fVar9 * *(float *)pTVar7;
    if ((*(longlong *)(lVar2 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar2 + 8),*(int *)(lVar2 + 0x10) + param_1);
    fVar12 = *(float *)&pTVar8->field_0x4 - fVar17;
    fVar16 = *(float *)pTVar8 - fVar9;
    fVar11 = *(float *)&pTVar8->field_0x8 - fVar13;
    fVar10 = fVar16 * fVar16 + fVar12 * fVar12 + fVar11 * fVar11;
    if (__real_322bcc77 <= fVar10) {
      if (fVar10 < fVar14 * fVar14) {
        fVar14 = fVar14 / SQRT(fVar10);
        pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                           (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
        *(float *)pTVar6 = fVar14 * fVar16 + fVar9;
        *(float *)&pTVar6->field_0x4 = fVar14 * fVar12 + fVar17;
        *(float *)&pTVar6->field_0x8 = fVar14 * fVar11 + fVar13;
      }
    }
    else {
      fVar9 = *(float *)&pTVar6->field_0x8;
      fVar13 = *(float *)&pTVar7->field_0x8;
      fVar14 = *(float *)&pTVar7->field_0x4;
      fVar17 = *(float *)pTVar7;
      fVar10 = *(float *)&pTVar6->field_0x4;
      fVar11 = *(float *)pTVar6;
      pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
      *(float *)pTVar6 = fVar11 - fVar15 * fVar17;
      *(float *)&pTVar6->field_0x4 = fVar10 - fVar15 * fVar14;
      *(float *)&pTVar6->field_0x8 = fVar9 - fVar15 * fVar13;
    }
  }
  return;
}

// operator() @ 14dba2530

void __thiscall
`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<1,1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (*pfVar5 != 0.0) {
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                        param_1);
    lVar1 = *(longlong *)this;
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar1 + 0x20),param_1);
    lVar2 = *(longlong *)this;
    fVar14 = (*(float *)(lVar1 + 0x48) * *pfVar5 + *(float *)(lVar1 + 0x44)) *
             *(float *)(lVar2 + 0x38);
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x10),param_1);
    lVar1 = *(longlong *)((longlong)this + 8);
    fVar15 = *(float *)&pTVar6->field_0x8 - fVar14 * *(float *)&pTVar7->field_0x8;
    fVar10 = (*(float *)(lVar2 + 0x40) * *pfVar5 + *(float *)(lVar2 + 0x3c)) *
             *(float *)(*(longlong *)this + 0x38);
    fVar16 = *(float *)&pTVar6->field_0x4 - fVar14 * *(float *)&pTVar7->field_0x4;
    fVar17 = *(float *)pTVar6 - fVar14 * *(float *)pTVar7;
    if ((*(longlong *)(lVar1 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
    fVar12 = *(float *)&pTVar8->field_0x4 - fVar16;
    fVar13 = *(float *)pTVar8 - fVar17;
    fVar11 = *(float *)&pTVar8->field_0x8 - fVar15;
    fVar9 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
    if (__real_322bcc77 <= fVar9) {
      if (fVar9 < fVar10 * fVar10) {
        fVar10 = fVar10 / SQRT(fVar9);
        pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                           (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
        *(float *)pTVar6 = fVar13 * fVar10 + fVar17;
        *(float *)&pTVar6->field_0x4 = fVar12 * fVar10 + fVar16;
        *(float *)&pTVar6->field_0x8 = fVar11 * fVar10 + fVar15;
      }
    }
    else {
      fVar15 = *(float *)&pTVar6->field_0x8;
      fVar14 = fVar14 - fVar10;
      fVar10 = *(float *)&pTVar6->field_0x4;
      fVar16 = *(float *)pTVar6;
      fVar17 = *(float *)&pTVar7->field_0x8;
      fVar9 = *(float *)&pTVar7->field_0x4;
      fVar11 = *(float *)pTVar7;
      pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
      *(float *)pTVar6 = fVar16 - fVar14 * fVar11;
      *(float *)&pTVar6->field_0x4 = fVar10 - fVar14 * fVar9;
      *(float *)&pTVar6->field_0x8 = fVar15 - fVar14 * fVar17;
    }
  }
  return;
}

// operator() @ 14dba2810

void __thiscall
`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<1,0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (*pfVar5 != 0.0) {
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                        param_1);
    lVar1 = *(longlong *)this;
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar1 + 0x20),param_1);
    fVar13 = *(float *)(*(longlong *)this + 0x38);
    lVar2 = *(longlong *)((longlong)this + 8);
    fVar14 = (*(float *)(lVar1 + 0x48) * *pfVar5 + *(float *)(lVar1 + 0x44)) * fVar13;
    fVar13 = fVar13 * *(float *)(*(longlong *)this + 0x3c);
    fVar12 = *(float *)&pTVar6->field_0x8 - fVar14 * *(float *)&pTVar7->field_0x8;
    fVar17 = *(float *)pTVar6 - fVar14 * *(float *)pTVar7;
    fVar16 = *(float *)&pTVar6->field_0x4 - fVar14 * *(float *)&pTVar7->field_0x4;
    if ((*(longlong *)(lVar2 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar2 + 8),*(int *)(lVar2 + 0x10) + param_1);
    fVar11 = *(float *)&pTVar8->field_0x4 - fVar16;
    fVar15 = *(float *)pTVar8 - fVar17;
    fVar10 = *(float *)&pTVar8->field_0x8 - fVar12;
    fVar9 = fVar15 * fVar15 + fVar11 * fVar11 + fVar10 * fVar10;
    if (__real_322bcc77 <= fVar9) {
      if (fVar9 < fVar13 * fVar13) {
        fVar13 = fVar13 / SQRT(fVar9);
        pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                           (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
        *(float *)pTVar6 = fVar13 * fVar15 + fVar17;
        *(float *)&pTVar6->field_0x4 = fVar13 * fVar11 + fVar16;
        *(float *)&pTVar6->field_0x8 = fVar13 * fVar10 + fVar12;
      }
    }
    else {
      fVar12 = *(float *)&pTVar6->field_0x4;
      fVar14 = fVar14 - fVar13;
      fVar13 = *(float *)&pTVar6->field_0x8;
      fVar16 = *(float *)pTVar6;
      fVar17 = *(float *)&pTVar7->field_0x8;
      fVar9 = *(float *)&pTVar7->field_0x4;
      fVar10 = *(float *)pTVar7;
      pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
      *(float *)pTVar6 = fVar16 - fVar14 * fVar10;
      *(float *)&pTVar6->field_0x4 = fVar12 - fVar14 * fVar9;
      *(float *)&pTVar6->field_0x8 = fVar13 - fVar14 * fVar17;
    }
  }
  return;
}

// operator() @ 14dba2ad0

void __thiscall
`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<0,1>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (*pfVar5 != 0.0) {
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                        param_1);
    lVar1 = *(longlong *)this;
    fVar14 = *(float *)(lVar1 + 0x44) * *(float *)(lVar1 + 0x38);
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar1 + 0x10),param_1);
    fVar12 = *(float *)&pTVar6->field_0x8 - fVar14 * *(float *)&pTVar7->field_0x8;
    lVar2 = *(longlong *)((longlong)this + 8);
    fVar16 = *(float *)&pTVar6->field_0x4 - fVar14 * *(float *)&pTVar7->field_0x4;
    fVar13 = (*(float *)(lVar1 + 0x40) * *pfVar5 + *(float *)(lVar1 + 0x3c)) *
             *(float *)(*(longlong *)this + 0x38);
    fVar17 = *(float *)pTVar6 - fVar14 * *(float *)pTVar7;
    if ((*(longlong *)(lVar2 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar2 + 8),*(int *)(lVar2 + 0x10) + param_1);
    fVar11 = *(float *)&pTVar8->field_0x4 - fVar16;
    fVar15 = *(float *)pTVar8 - fVar17;
    fVar10 = *(float *)&pTVar8->field_0x8 - fVar12;
    fVar9 = fVar15 * fVar15 + fVar11 * fVar11 + fVar10 * fVar10;
    if (__real_322bcc77 <= fVar9) {
      if (fVar9 < fVar13 * fVar13) {
        fVar13 = fVar13 / SQRT(fVar9);
        pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                           (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
        *(float *)pTVar6 = fVar13 * fVar15 + fVar17;
        *(float *)&pTVar6->field_0x4 = fVar13 * fVar11 + fVar16;
        *(float *)&pTVar6->field_0x8 = fVar13 * fVar10 + fVar12;
      }
    }
    else {
      fVar12 = *(float *)&pTVar6->field_0x4;
      fVar14 = fVar14 - fVar13;
      fVar13 = *(float *)&pTVar6->field_0x8;
      fVar16 = *(float *)pTVar6;
      fVar17 = *(float *)&pTVar7->field_0x8;
      fVar9 = *(float *)&pTVar7->field_0x4;
      fVar10 = *(float *)pTVar7;
      pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
      *(float *)pTVar6 = fVar16 - fVar14 * fVar10;
      *(float *)&pTVar6->field_0x4 = fVar12 - fVar14 * fVar9;
      *(float *)&pTVar6->field_0x8 = fVar13 - fVar14 * fVar17;
    }
  }
  return;
}

// operator() @ 14dba2d90

void __thiscall
`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<0,0>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar5 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)(lVar1 + 8),*(int *)(lVar1 + 0x10) + param_1);
  if (*pfVar5 != 0.0) {
    pTVar6 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                        param_1);
    pTVar7 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                       (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                        param_1);
    lVar1 = *(longlong *)this;
    lVar2 = *(longlong *)((longlong)this + 8);
    fVar14 = *(float *)(lVar1 + 0x38) * *(float *)(lVar1 + 0x44);
    fVar13 = *(float *)(lVar1 + 0x38) * *(float *)(lVar1 + 0x3c);
    fVar12 = *(float *)&pTVar6->field_0x8 - fVar14 * *(float *)&pTVar7->field_0x8;
    fVar17 = *(float *)pTVar6 - fVar14 * *(float *)pTVar7;
    fVar16 = *(float *)&pTVar6->field_0x4 - fVar14 * *(float *)&pTVar7->field_0x4;
    if ((*(longlong *)(lVar2 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = Chaos::Softs::FSolverParticles::P
                       (*(FSolverParticles **)(lVar2 + 8),*(int *)(lVar2 + 0x10) + param_1);
    fVar11 = *(float *)&pTVar8->field_0x4 - fVar16;
    fVar15 = *(float *)pTVar8 - fVar17;
    fVar10 = *(float *)&pTVar8->field_0x8 - fVar12;
    fVar9 = fVar15 * fVar15 + fVar11 * fVar11 + fVar10 * fVar10;
    if (__real_322bcc77 <= fVar9) {
      if (fVar9 < fVar13 * fVar13) {
        fVar13 = fVar13 / SQRT(fVar9);
        pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                           (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
        *(float *)pTVar6 = fVar13 * fVar15 + fVar17;
        *(float *)&pTVar6->field_0x4 = fVar13 * fVar11 + fVar16;
        *(float *)&pTVar6->field_0x8 = fVar13 * fVar10 + fVar12;
      }
    }
    else {
      fVar12 = *(float *)&pTVar6->field_0x4;
      fVar14 = fVar14 - fVar13;
      fVar13 = *(float *)&pTVar6->field_0x8;
      fVar16 = *(float *)pTVar6;
      fVar17 = *(float *)&pTVar7->field_0x8;
      fVar9 = *(float *)&pTVar7->field_0x4;
      fVar10 = *(float *)pTVar7;
      pTVar6 = Chaos::Softs::FSolverParticlesRange::P
                         (*(FSolverParticlesRange **)((longlong)this + 8),param_1);
      *(float *)pTVar6 = fVar16 - fVar14 * fVar10;
      *(float *)&pTVar6->field_0x4 = fVar12 - fVar14 * fVar9;
      *(float *)&pTVar6->field_0x8 = fVar13 - fVar14 * fVar17;
    }
  }
  return;
}

// Apply @ 14dbbc930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDSphericalBackstopConstraint::Apply
          (FPBDSphericalBackstopConstraint *this,FSolverParticlesRange *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_PBD_SphericalBackstop> FVar11;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  TFunctionRef<void___cdecl(int)> *pTVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_528;
  FName local_520;
  FStatMessage local_510;
  code *local_500;
  FPBDSphericalBackstopConstraint **local_4f8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_4f0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_4e0;
  code *local_4d0;
  FPBDSphericalBackstopConstraint **local_4c8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_4c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_4b0;
  code *local_4a0;
  FPBDSphericalBackstopConstraint **local_498;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_490;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_480;
  code *local_470;
  FPBDSphericalBackstopConstraint **local_468;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_460;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_450;
  code *local_440;
  FPBDSphericalBackstopConstraint **local_438;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_430;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_420;
  code *local_410;
  FPBDSphericalBackstopConstraint **local_408;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_400;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_3f0;
  code *local_3e0;
  FPBDSphericalBackstopConstraint **local_3d8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_3d0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_3c0;
  code *local_3b0;
  FPBDSphericalBackstopConstraint **local_3a8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_3a0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_390;
  FPBDSphericalBackstopConstraint *local_380;
  FSolverParticlesRange *local_378;
  float local_370;
  TVector<float,3> **local_368;
  TVector<float,3> **local_360;
  FPBDSphericalBackstopConstraint *local_358;
  FSolverParticlesRange *local_350;
  float local_348;
  TVector<float,3> **local_340;
  TVector<float,3> **local_338;
  FPBDSphericalBackstopConstraint *local_330;
  FSolverParticlesRange *local_328;
  float local_320;
  TVector<float,3> **local_318;
  TVector<float,3> **local_310;
  FPBDSphericalBackstopConstraint *local_308;
  FSolverParticlesRange *local_300;
  float local_2f8;
  TVector<float,3> **local_2f0;
  TVector<float,3> **local_2e8;
  FPBDSphericalBackstopConstraint *local_2e0;
  FSolverParticlesRange *local_2d8;
  float local_2d0;
  TVector<float,3> **local_2c8;
  TVector<float,3> **local_2c0;
  FPBDSphericalBackstopConstraint *local_2b8;
  FSolverParticlesRange *local_2b0;
  float local_2a8;
  TVector<float,3> **local_2a0;
  TVector<float,3> **local_298;
  FPBDSphericalBackstopConstraint *local_290;
  FSolverParticlesRange *local_288;
  float local_280;
  TVector<float,3> **local_278;
  TVector<float,3> **local_270;
  FPBDSphericalBackstopConstraint *local_268;
  FSolverParticlesRange *local_260;
  float local_258;
  TVector<float,3> **local_250;
  TVector<float,3> **local_248;
  TVector<float,3> *local_240;
  undefined8 uStack_238;
  TVector<float,3> *local_230;
  undefined8 uStack_228;
  TVector<float,3> *local_220;
  undefined8 uStack_218;
  TVector<float,3> *local_210;
  undefined8 uStack_208;
  TVector<float,3> *local_200;
  undefined8 uStack_1f8;
  TVector<float,3> *local_1f0;
  undefined8 uStack_1e8;
  TVector<float,3> *local_1e0;
  undefined8 uStack_1d8;
  TVector<float,3> *local_1d0;
  undefined8 uStack_1c8;
  TVector<float,3> *local_1c0;
  undefined8 uStack_1b8;
  FName local_1b0;
  TVector<float,3> *local_1a8;
  undefined8 uStack_1a0;
  TVector<float,3> *local_198;
  undefined8 uStack_190;
  TVector<float,3> *local_188;
  undefined8 uStack_180;
  TVector<float,3> *local_178;
  undefined8 uStack_170;
  TVector<float,3> *local_168;
  undefined8 uStack_160;
  TVector<float,3> *local_158;
  undefined8 uStack_150;
  TVector<float,3> *local_148;
  undefined8 uStack_140;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_138;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_128;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_118;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_108;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_f8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_e8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_a8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_98;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_88;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_78;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_68;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_58;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48 [2];
  
  FVar11 = StatPtr_STAT_PBD_SphericalBackstop;
  if (StatPtr_STAT_PBD_SphericalBackstop ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_SphericalBackstop>)0x0) {
    pFVar10 = ::FName::FName(&local_1b0,"STAT_PBD_SphericalBackstop");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_PBD_SphericalBackstop>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_SphericalBackstop,*pFVar10,
                        L"Chaos PBD Spherical Backstop Constraints","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_520.ComparisonIndex.Value = 0;
  local_520.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar13 == 0)) {
LAB_14dbbca8b:
    bVar7 = false;
    FVar16 = local_520;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar15.Value;
        local_res20.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSphericalConstraint.h"
                   ,0xf2);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dbbca8b;
    local_528.s.LowPart = FVar15.Value;
    local_528.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar7 = true;
  }
  if (this->bEnabled != false) {
    if (this->bUseLegacyBackstop == false) {
      if (bChaos_Spherical_ISPC_Enabled != false) {
        ApplyHelperISPC(this,param_1,param_2);
        goto LAB_14dbbd407;
      }
      iVar2 = this->ParticleCount;
      iVar3 = (this->SphereOffsetDistances).ArrayNum;
      bVar9 = this->bMeshUseGlobalIndexation;
      pTVar4 = this->AnimationPositions;
      if ((this->SphereRadii).ArrayNum == iVar2) {
        if (iVar3 == iVar2) {
          if (bVar9 == false) {
            iVar2 = pTVar4->ArrayNum;
            local_430.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
            if (iVar2 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            local_430.ArrayNum = iVar2;
            pTVar12 = &local_430;
          }
          else {
            pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                      GetConstArrayView<Chaos::TVector<float,3>_>
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                                 &local_138,pTVar4);
          }
          pTVar4 = this->AnimationNormals;
          local_230 = pTVar12->DataPtr;
          uStack_228 = *(undefined8 *)&pTVar12->ArrayNum;
          if (this->bMeshUseGlobalIndexation == false) {
            iVar2 = pTVar4->ArrayNum;
            local_420.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
            if (iVar2 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            local_420.ArrayNum = iVar2;
            pTVar12 = &local_420;
          }
          else {
            pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                      GetConstArrayView<Chaos::TVector<float,3>_>
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                                 &local_128,pTVar4);
          }
          local_220 = pTVar12->DataPtr;
          uStack_218 = *(undefined8 *)&pTVar12->ArrayNum;
          local_2a0 = &local_230;
          pTVar14 = (TFunctionRef<void___cdecl(int)> *)&local_410;
          local_298 = &local_220;
          local_408 = &local_2b8;
          local_410 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<1,1>'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_2b8 = this;
          local_2b0 = param_1;
          local_2a8 = param_2;
        }
        else {
          if (bVar9 == false) {
            iVar2 = pTVar4->ArrayNum;
            local_400.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
            if (iVar2 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            local_400.ArrayNum = iVar2;
            pTVar12 = &local_400;
          }
          else {
            pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                      GetConstArrayView<Chaos::TVector<float,3>_>
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                                 &local_118,pTVar4);
          }
          pTVar4 = this->AnimationNormals;
          local_210 = pTVar12->DataPtr;
          uStack_208 = *(undefined8 *)&pTVar12->ArrayNum;
          if (this->bMeshUseGlobalIndexation == false) {
            iVar2 = pTVar4->ArrayNum;
            local_3f0.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
            if (iVar2 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            local_3f0.ArrayNum = iVar2;
            pTVar12 = &local_3f0;
          }
          else {
            pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                      GetConstArrayView<Chaos::TVector<float,3>_>
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                                 &local_108,pTVar4);
          }
          local_200 = pTVar12->DataPtr;
          uStack_1f8 = *(undefined8 *)&pTVar12->ArrayNum;
          local_278 = &local_210;
          pTVar14 = (TFunctionRef<void___cdecl(int)> *)&local_3e0;
          local_270 = &local_200;
          local_3d8 = &local_290;
          local_3e0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<0,1>'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_290 = this;
          local_288 = param_1;
          local_280 = param_2;
        }
      }
      else if (iVar3 == iVar2) {
        if (bVar9 == false) {
          iVar2 = pTVar4->ArrayNum;
          local_3d0.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
          if (iVar2 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_3d0.ArrayNum = iVar2;
          pTVar12 = &local_3d0;
        }
        else {
          pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                    GetConstArrayView<Chaos::TVector<float,3>_>
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                               &local_f8,pTVar4);
        }
        pTVar4 = this->AnimationNormals;
        local_1f0 = pTVar12->DataPtr;
        uStack_1e8 = *(undefined8 *)&pTVar12->ArrayNum;
        if (this->bMeshUseGlobalIndexation == false) {
          iVar2 = pTVar4->ArrayNum;
          local_3c0.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
          if (iVar2 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_3c0.ArrayNum = iVar2;
          pTVar12 = &local_3c0;
        }
        else {
          pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                    GetConstArrayView<Chaos::TVector<float,3>_>
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                               &local_e8,pTVar4);
        }
        local_1e0 = pTVar12->DataPtr;
        uStack_1d8 = *(undefined8 *)&pTVar12->ArrayNum;
        local_250 = &local_1f0;
        pTVar14 = (TFunctionRef<void___cdecl(int)> *)&local_3b0;
        local_248 = &local_1e0;
        local_3a8 = &local_268;
        local_3b0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<1,0>'::__l2::<lambda_1>,void,int>
                    ::Call;
        local_268 = this;
        local_260 = param_1;
        local_258 = param_2;
      }
      else {
        if (bVar9 == false) {
          iVar2 = pTVar4->ArrayNum;
          local_3a0.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
          if (iVar2 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_3a0.ArrayNum = iVar2;
          pTVar12 = &local_3a0;
        }
        else {
          pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                    GetConstArrayView<Chaos::TVector<float,3>_>
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                               &local_d8,pTVar4);
        }
        pTVar4 = this->AnimationNormals;
        local_1d0 = pTVar12->DataPtr;
        uStack_1c8 = *(undefined8 *)&pTVar12->ArrayNum;
        if (this->bMeshUseGlobalIndexation == false) {
          iVar2 = pTVar4->ArrayNum;
          local_390.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
          if (iVar2 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_390.ArrayNum = iVar2;
          pTVar12 = &local_390;
        }
        else {
          pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                    GetConstArrayView<Chaos::TVector<float,3>_>
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                               local_48,pTVar4);
        }
        local_1c0 = pTVar12->DataPtr;
        uStack_1b8 = *(undefined8 *)&pTVar12->ArrayNum;
        local_368 = &local_1d0;
        pTVar14 = (TFunctionRef<void___cdecl(int)> *)&local_500;
        local_360 = &local_1c0;
        local_4f8 = &local_380;
        local_500 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<0,0>'::__l2::<lambda_1>,void,int>
                    ::Call;
        local_380 = this;
        local_378 = param_1;
        local_370 = param_2;
      }
    }
    else {
      if (bChaos_Spherical_ISPC_Enabled != false) {
        ApplyLegacyHelperISPC(this,param_1,param_2);
        goto LAB_14dbbd407;
      }
      iVar2 = this->ParticleCount;
      iVar3 = (this->SphereOffsetDistances).ArrayNum;
      bVar9 = this->bMeshUseGlobalIndexation;
      pTVar4 = this->AnimationPositions;
      if ((this->SphereRadii).ArrayNum == iVar2) {
        if (iVar3 == iVar2) {
          if (bVar9 == false) {
            iVar2 = pTVar4->ArrayNum;
            local_4f0.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
            if (iVar2 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            local_4f0.ArrayNum = iVar2;
            pTVar12 = &local_4f0;
          }
          else {
            pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                      GetConstArrayView<Chaos::TVector<float,3>_>
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                                 &local_58,pTVar4);
          }
          pTVar4 = this->AnimationNormals;
          local_1a8 = pTVar12->DataPtr;
          uStack_1a0 = *(undefined8 *)&pTVar12->ArrayNum;
          if (this->bMeshUseGlobalIndexation == false) {
            iVar2 = pTVar4->ArrayNum;
            local_4e0.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
            if (iVar2 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            local_4e0.ArrayNum = iVar2;
            pTVar12 = &local_4e0;
          }
          else {
            pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                      GetConstArrayView<Chaos::TVector<float,3>_>
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                                 &local_b8,pTVar4);
          }
          local_198 = pTVar12->DataPtr;
          uStack_190 = *(undefined8 *)&pTVar12->ArrayNum;
          local_340 = &local_1a8;
          pTVar14 = (TFunctionRef<void___cdecl(int)> *)&local_4d0;
          local_338 = &local_198;
          local_4c8 = &local_358;
          local_4d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<1,1>'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_358 = this;
          local_350 = param_1;
          local_348 = param_2;
        }
        else {
          if (bVar9 == false) {
            iVar2 = pTVar4->ArrayNum;
            local_4c0.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
            if (iVar2 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            local_4c0.ArrayNum = iVar2;
            pTVar12 = &local_4c0;
          }
          else {
            pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                      GetConstArrayView<Chaos::TVector<float,3>_>
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                                 &local_a8,pTVar4);
          }
          pTVar4 = this->AnimationNormals;
          local_188 = pTVar12->DataPtr;
          uStack_180 = *(undefined8 *)&pTVar12->ArrayNum;
          if (this->bMeshUseGlobalIndexation == false) {
            iVar2 = pTVar4->ArrayNum;
            local_4b0.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
            if (iVar2 < 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            local_4b0.ArrayNum = iVar2;
            pTVar12 = &local_4b0;
          }
          else {
            pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                      GetConstArrayView<Chaos::TVector<float,3>_>
                                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                                 &local_98,pTVar4);
          }
          local_178 = pTVar12->DataPtr;
          uStack_170 = *(undefined8 *)&pTVar12->ArrayNum;
          local_318 = &local_188;
          pTVar14 = (TFunctionRef<void___cdecl(int)> *)&local_4a0;
          local_310 = &local_178;
          local_498 = &local_330;
          local_4a0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<0,1>'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_330 = this;
          local_328 = param_1;
          local_320 = param_2;
        }
      }
      else if (iVar3 == iVar2) {
        if (bVar9 == false) {
          iVar2 = pTVar4->ArrayNum;
          local_490.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
          if (iVar2 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_490.ArrayNum = iVar2;
          pTVar12 = &local_490;
        }
        else {
          pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                    GetConstArrayView<Chaos::TVector<float,3>_>
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                               &local_88,pTVar4);
        }
        pTVar4 = this->AnimationNormals;
        local_168 = pTVar12->DataPtr;
        uStack_160 = *(undefined8 *)&pTVar12->ArrayNum;
        if (this->bMeshUseGlobalIndexation == false) {
          iVar2 = pTVar4->ArrayNum;
          local_480.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
          if (iVar2 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_480.ArrayNum = iVar2;
          pTVar12 = &local_480;
        }
        else {
          pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                    GetConstArrayView<Chaos::TVector<float,3>_>
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                               &local_78,pTVar4);
        }
        local_158 = pTVar12->DataPtr;
        uStack_150 = *(undefined8 *)&pTVar12->ArrayNum;
        local_2f0 = &local_168;
        pTVar14 = (TFunctionRef<void___cdecl(int)> *)&local_470;
        local_2e8 = &local_158;
        local_468 = &local_308;
        local_470 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<1,0>'::__l2::<lambda_1>,void,int>
                    ::Call;
        local_308 = this;
        local_300 = param_1;
        local_2f8 = param_2;
      }
      else {
        if (bVar9 == false) {
          iVar2 = pTVar4->ArrayNum;
          local_460.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
          if (iVar2 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_460.ArrayNum = iVar2;
          pTVar12 = &local_460;
        }
        else {
          pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                    GetConstArrayView<Chaos::TVector<float,3>_>
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                               &local_68,pTVar4);
        }
        pTVar4 = this->AnimationNormals;
        local_148 = pTVar12->DataPtr;
        uStack_140 = *(undefined8 *)&pTVar12->ArrayNum;
        if (this->bMeshUseGlobalIndexation == false) {
          iVar2 = pTVar4->ArrayNum;
          local_450.DataPtr = (TVector<float,3> *)(pTVar4->AllocatorInstance).Data;
          if (iVar2 < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_450.ArrayNum = iVar2;
          pTVar12 = &local_450;
        }
        else {
          pTVar12 = TParticlesRange<Chaos::Softs::FSolverParticles,void>::
                    GetConstArrayView<Chaos::TVector<float,3>_>
                              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                               &local_c8,pTVar4);
        }
        local_240 = pTVar12->DataPtr;
        uStack_238 = *(undefined8 *)&pTVar12->ArrayNum;
        local_2c8 = &local_148;
        pTVar14 = (TFunctionRef<void___cdecl(int)> *)&local_440;
        local_2c0 = &local_240;
        local_438 = &local_2e0;
        local_440 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<0,0>'::__l2::<lambda_1>,void,int>
                    ::Call;
        local_2e0 = this;
        local_2d8 = param_1;
        local_2d0 = param_2;
      }
    }
    PhysicsParallelFor(this->ParticleCount,pTVar14,false);
  }
LAB_14dbbd407:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_510.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_510.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_528);
      local_510.StatData.Pad[4] = '\0';
      local_510.StatData.Pad[5] = '\0';
      local_510.StatData.Pad[6] = '\0';
      local_510.StatData.Pad[7] = '\0';
      local_510.StatData.Pad[0] = local_528.s.LowPart._0_1_;
      local_510.StatData.Pad[1] = local_528.s.LowPart._1_1_;
      local_510.StatData.Pad[2] = local_528.s.LowPart._2_1_;
      local_510.StatData.Pad[3] = local_528.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_510);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

