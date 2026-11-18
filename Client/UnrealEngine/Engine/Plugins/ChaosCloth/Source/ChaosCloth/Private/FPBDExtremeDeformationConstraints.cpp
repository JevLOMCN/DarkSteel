// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FPBDExtremeDeformationConstraints<2> @ 14db7a160

FPBDExtremeDeformationConstraints * __thiscall
Chaos::Softs::FPBDExtremeDeformationConstraints::FPBDExtremeDeformationConstraints<2>
          (FPBDExtremeDeformationConstraints *this,FSolverParticles *param_1,int param_2,int param_3
          ,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                   *param_6,FCollectionPropertyConstFacade *param_7,bool param_8)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  FCollectionPropertyConstFacade *this_00;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FString *pFVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  FPBDExtremeDeformationConstraints *pFVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  ulonglong uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_b8 [2];
  FScriptContainerElement *local_b0;
  FString local_a8;
  FSolverParticles *local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  FPBDExtremeDeformationConstraints *local_88;
  FString local_80;
  <lambda_36_> local_68;
  FString local_48;
  
  this->_padding_ = (longlong)&___7FPBDExtremeDeformationConstraints_Softs_Chaos__6B_;
  pFVar12 = ::FName::ToString(&ExtremeDeformationVertexSelectionName,&local_80);
  pFVar12 = ::FString::FString(&local_48,pFVar12);
  this_00 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_a8,&ExtremeDeformationVertexSelectionName,(<lambda_1> *)&param_7,pFVar12
             ,(int *)0x0);
  iVar10 = local_a8.Data.ArrayNum + -1;
  FVar7.Data = local_a8.Data.AllocatorInstance.Data;
  if (local_a8.Data.ArrayNum == 0) {
    iVar10 = 0;
    FVar7.Data = (FScriptContainerElement *)L"";
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar7.Data);
  iVar10 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                       *)param_6,uVar9,&local_a8);
  if ((iVar10 == -1) || (lVar13 = (longlong)iVar10 * 0x20 + *(longlong *)param_6, lVar13 == 0)) {
    pTVar17 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  }
  else {
    pTVar17 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)(lVar13 + 0x10);
  }
  this->VertexSet = pTVar17;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  uStack_90 = param_8;
  local_68._9_7_ = uStack_8f;
  local_68.bTrimKinematicConstraints = param_8;
  local_98 = param_1;
  local_88 = this;
  local_68.Particles = param_1;
  local_68.__this = this;
  TrimConstraints<2,_Chaos::Softs::FPBDExtremeDeformationConstraints::FPBDExtremeDeformationConstraints<2>_::__l1::<lambda_36_>_>
            (&this->Constraints,param_4,&local_68);
  this->ParticleOffset = param_2;
  this->ParticleCount = param_3;
  piVar14 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_00->KeyNameIndices,ExtremeDeformationEdgeRatioThresholdName);
  fVar21 = __real_7f7fffff;
  if ((piVar14 != (int *)0x0) && (*piVar14 != -1)) {
    fVar21 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_00,*piVar14,&this_00->LowValueArray);
  }
  pTVar1 = &this->Dists;
  this->ExtremeDeformationThreshold = fVar21;
  piVar14 = &(this->Dists).ArrayMax;
  *piVar14 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Dists).ArrayNum = 0;
  piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_00->KeyNameIndices,ExtremeDeformationEdgeRatioThresholdName);
  if (piVar15 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar15;
  }
  (this->ExtremeDeformationEdgeRatioThresholdIndex).Index = iVar10;
  uVar9 = (this->Constraints).ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  (this->Dists).ArrayNum = 0;
  if (*piVar14 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,&pTVar1->AllocatorInstance,0,piVar14);
  }
  uVar9 = (this->Constraints).ArrayNum;
  uVar18 = (ulonglong)(int)uVar9;
  pFVar20 = (this->Constraints).AllocatorInstance.Data;
  local_b0 = pFVar20 + uVar18 * 8;
  while( true ) {
    pFVar5 = local_b0;
    if ((this->Constraints).ArrayNum != (int)uVar18) {
      param_8 = false;
      `TCheckedPointerIterator<Chaos::TVector<int,2>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_8);
    }
    if (pFVar20 == pFVar5) {
      return this;
    }
    uVar2 = *(uint *)pFVar20;
    lVar13 = (longlong)(int)uVar2;
    uVar11 = 0;
    if ((int)uVar2 < (int)param_1->_padding_) {
      uVar11 = ~uVar2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    uVar2 = *(uint *)(pFVar20 + 4);
    lVar19 = (longlong)(int)uVar2;
    lVar3 = param_1->_padding_;
    uVar11 = 0;
    if ((int)uVar2 < (int)param_1->_padding_) {
      uVar11 = ~uVar2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar16 = (FPBDExtremeDeformationConstraints *)(*pcVar6)();
      return pFVar16;
    }
    lVar4 = param_1->_padding_;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    fVar21 = *(float *)(lVar4 + 4 + lVar19 * 0xc) - *(float *)(lVar3 + 4 + lVar13 * 0xc);
    fVar22 = *(float *)(lVar4 + lVar19 * 0xc) - *(float *)(lVar3 + lVar13 * 0xc);
    fVar23 = *(float *)(lVar4 + 8 + lVar19 * 0xc) - *(float *)(lVar3 + 8 + lVar13 * 0xc);
    local_b8[0] = SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23);
    if (((pFVar5 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar5 + (longlong)*piVar14 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar16 = (FPBDExtremeDeformationConstraints *)(*pcVar6)();
      return pFVar16;
    }
    iVar10 = (this->Dists).ArrayNum;
    if (iVar10 == *piVar14) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar1->AllocatorInstance,piVar14);
    }
    pFVar20 = pFVar20 + 8;
    (this->Dists).ArrayNum = iVar10 + 1;
    *(float *)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_b8[0];
    uVar18 = (ulonglong)uVar9;
  }
  pcVar6 = (code *)swi(3);
  pFVar16 = (FPBDExtremeDeformationConstraints *)(*pcVar6)();
  return pFVar16;
}

// FPBDExtremeDeformationConstraints<2> @ 14db7a540

FPBDExtremeDeformationConstraints * __thiscall
Chaos::Softs::FPBDExtremeDeformationConstraints::FPBDExtremeDeformationConstraints<2>
          (FPBDExtremeDeformationConstraints *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                   *param_4,FCollectionPropertyConstFacade *param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  FPBDExtremeDeformationConstraints *pFVar12;
  TVector<float,3> *pTVar13;
  TVector<float,3> *pTVar14;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  float fVar19;
  float fVar20;
  FCollectionPropertyConstFacade *local_res10;
  float local_a8 [2];
  FString local_a0;
  FString local_90;
  FString local_80;
  FSolverParticlesRange *local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  FPBDExtremeDeformationConstraints *local_60;
  <lambda_35_> local_58;
  
  this->_padding_ = (longlong)&___7FPBDExtremeDeformationConstraints_Softs_Chaos__6B_;
  pFVar8 = ::FName::ToString(&ExtremeDeformationVertexSelectionName,&local_90);
  pFVar8 = ::FString::FString(&local_80,pFVar8);
  pTVar15 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  local_res10 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_a0,&ExtremeDeformationVertexSelectionName,(<lambda_1> *)&local_res10,
             pFVar8,(int *)0x0);
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar17.Data = local_a0.Data.AllocatorInstance.Data;
  }
  iVar7 = local_a0.Data.ArrayNum + -1;
  if (local_a0.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar17.Data);
  iVar7 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                      *)param_4,uVar6,&local_a0);
  if ((iVar7 != -1) && (lVar9 = (longlong)iVar7 * 0x20 + *(longlong *)param_4, lVar9 != 0)) {
    pTVar15 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)(lVar9 + 0x10);
  }
  this->VertexSet = pTVar15;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  uStack_68 = param_6;
  local_58._9_7_ = uStack_67;
  local_58.bTrimKinematicConstraints = param_6;
  local_70 = param_1;
  local_60 = this;
  local_58.Particles = param_1;
  local_58.__this = this;
  TrimConstraints<2,_Chaos::Softs::FPBDExtremeDeformationConstraints::FPBDExtremeDeformationConstraints<2>_::__l1::<lambda_35_>_>
            (&this->Constraints,param_2,&local_58);
  this->ParticleOffset = 0;
  this->ParticleCount = *(int *)&param_1->field_0x14;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&param_5->KeyNameIndices,ExtremeDeformationEdgeRatioThresholdName);
  fVar19 = __real_7f7fffff;
  if ((piVar10 != (int *)0x0) && (*piVar10 != -1)) {
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,*piVar10,&param_5->LowValueArray);
  }
  pTVar2 = &this->Dists;
  this->ExtremeDeformationThreshold = fVar19;
  (this->Dists).ArrayMax = 0;
  piVar10 = &(this->Dists).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Dists).ArrayNum = 0;
  piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&param_5->KeyNameIndices,ExtremeDeformationEdgeRatioThresholdName);
  if (piVar11 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar11;
  }
  (this->ExtremeDeformationEdgeRatioThresholdIndex).Index = iVar7;
  uVar6 = (this->Constraints).ArrayNum;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  (this->Dists).ArrayNum = 0;
  if (*piVar10 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&pTVar2->AllocatorInstance,0,piVar10);
  }
  uVar6 = (this->Constraints).ArrayNum;
  uVar16 = (ulonglong)(int)uVar6;
  pFVar18 = (this->Constraints).AllocatorInstance.Data;
  pFVar1 = pFVar18 + uVar16 * 8;
  while( true ) {
    if ((this->Constraints).ArrayNum != (int)uVar16) {
      param_6 = false;
      `TCheckedPointerIterator<Chaos::TVector<int,2>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_6);
    }
    if (pFVar18 == pFVar1) {
      return this;
    }
    iVar7 = *(int *)pFVar18;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FPBDExtremeDeformationConstraints *)(*pcVar4)();
      return pFVar12;
    }
    pTVar13 = TParticles<float,3>::GetX
                        (*(TParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar7);
    iVar7 = *(int *)(pFVar18 + 4);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar5)) break;
    pTVar14 = TParticles<float,3>::GetX
                        (*(TParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar7);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    fVar19 = *(float *)&pTVar14->field_0x4 - *(float *)&pTVar13->field_0x4;
    fVar20 = *(float *)&pTVar14->field_0x8 - *(float *)&pTVar13->field_0x8;
    local_a8[0] = SQRT((*(float *)pTVar14 - *(float *)pTVar13) *
                       (*(float *)pTVar14 - *(float *)pTVar13) + fVar19 * fVar19 + fVar20 * fVar20);
    if (((pFVar3 <= (FScriptContainerElement *)local_a8) &&
        ((FScriptContainerElement *)local_a8 < pFVar3 + (longlong)*piVar10 * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FPBDExtremeDeformationConstraints *)(*pcVar4)();
      return pFVar12;
    }
    iVar7 = (this->Dists).ArrayNum;
    if (iVar7 == *piVar10) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar10);
    }
    pFVar18 = pFVar18 + 8;
    (this->Dists).ArrayNum = iVar7 + 1;
    *(float *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a8[0];
    uVar16 = (ulonglong)uVar6;
  }
  pcVar4 = (code *)swi(3);
  pFVar12 = (FPBDExtremeDeformationConstraints *)(*pcVar4)();
  return pFVar12;
}

// ~FPBDExtremeDeformationConstraints @ 14db9fd40

void __thiscall
Chaos::Softs::FPBDExtremeDeformationConstraints::~FPBDExtremeDeformationConstraints
          (FPBDExtremeDeformationConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDExtremeDeformationConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->Dists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

