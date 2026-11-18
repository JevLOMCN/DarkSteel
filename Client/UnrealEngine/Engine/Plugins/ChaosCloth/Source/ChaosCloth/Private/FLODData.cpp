// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 20

// FLODData @ 14db91980

FLODData * __thiscall
Chaos::FClothingSimulationCloth::FLODData::FLODData
          (FLODData *this,FClothingSimulationMesh *param_1,int param_2,bool param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4,TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                   *param_5,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *param_6,TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
                   *param_7,FCollectionPropertyFacade *param_8)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  TArrayView<unsigned_int_const_,int> *pTVar4;
  undefined8 *puVar5;
  TArrayView<unsigned_int_const_,int> *pTVar6;
  int *piVar7;
  undefined4 in_register_00000084;
  undefined7 in_register_00000089;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  iVar2 = (**(code **)(param_1->_padding_ + 0x30))
                    (param_1,param_2,CONCAT44(in_register_00000084,param_2),
                     CONCAT71(in_register_00000089,param_3));
  this->NumParticles = iVar2;
  TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
              *)&this->WeightMaps,
             (TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
              *)param_4);
  TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
              *)&this->VertexSets,
             (TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
              *)param_5);
  TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
              *)&this->FaceSets,
             (TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
              *)param_6);
  TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
              *)&this->FaceIntMaps,
             (TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
              *)param_7);
  (**(code **)(param_1->_padding_ + 0xa0))(param_1,&this->Tethers,param_2,param_3);
  (**(code **)(param_1->_padding_ + 0xf8))(param_1,&this->ManagedArrayCollection,param_2);
  puVar3 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x68))(param_1,local_68,param_2);
  pTVar4 = (TArrayView<unsigned_int_const_,int> *)
           (**(code **)(param_1->_padding_ + 0x60))(param_1,local_58,param_2);
  puVar5 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x48))(param_1,local_48,param_2);
  pTVar6 = (TArrayView<unsigned_int_const_,int> *)
           (**(code **)(param_1->_padding_ + 0x58))(param_1,local_38,param_2);
  iVar2 = this->NumParticles;
  FTriangleMesh::FTriangleMesh(&(this->PatternData).PatternTriangleMesh);
  uVar1 = puVar5[1];
  (this->PatternData).PatternPositions.DataPtr = (TVector2<float> *)*puVar5;
  *(undefined8 *)&(this->PatternData).PatternPositions.ArrayNum = uVar1;
  uVar1 = puVar3[1];
  (this->PatternData).PatternToWeldedIndices.DataPtr = (uint *)*puVar3;
  *(undefined8 *)&(this->PatternData).PatternToWeldedIndices.ArrayNum = uVar1;
  (this->PatternData).WeldedFaceVertexPatternPositions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PatternData).WeldedFaceVertexPatternPositions.ArrayNum = 0;
  (this->PatternData).WeldedFaceVertexPatternPositions.ArrayMax = 0;
  FClothingPatternData::GenerateDerivedPatternData(&this->PatternData,iVar2,pTVar6,pTVar4);
  iVar2 = this->NumParticles;
  pTVar4 = (TArrayView<unsigned_int_const_,int> *)
           (**(code **)(param_1->_padding_ + 0x58))(param_1,local_38,param_2);
  BuildTriangleMesh(&this->NoOffsetTriangleMesh,pTVar4,iVar2);
  iVar2 = -1;
  *(undefined8 *)&this->SolverData = 0;
  *(undefined8 *)&(this->SolverData).field_0x8 = 0;
  *(undefined8 *)&(this->SolverData).field_0x20 = 0;
  *(undefined4 *)&(this->SolverData).field_0x28 = 0;
  *(undefined4 *)&(this->SolverData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SolverData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SolverData).field_0x34 = 0;
  *(undefined8 *)&(this->SolverData).field_0x40 = 0;
  *(undefined4 *)&(this->SolverData).field_0x48 = 0;
  this->ActiveMorphTarget = -1;
  this->ActiveMorphTargetWeight = 0.0;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_8->field_0x58,ActiveMorphTargetName);
  if (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
  }
  (this->ActiveMorphTargetIndex).Index = iVar2;
  UpdateCachedProperties(this,param_1,param_2,param_8,true);
  return this;
}

// operator() @ 14dba3030

bool __thiscall
`Chaos::FClothingSimulationCloth::FLODData::AddParticles'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  float *pfVar5;
  longlong *plVar6;
  float fVar7;
  
  lVar2 = *(longlong *)this;
  if ((*(int *)(lVar2 + 0x10) < 1) ||
     (fVar1 = *(float *)(lVar2 + 0x1c),
     (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar7 = *(float *)(lVar2 + 0x18);
  }
  else {
    fVar7 = *(float *)(lVar2 + 0x18);
    pfVar5 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 8),param_1);
    fVar7 = fVar1 * *pfVar5 + fVar7;
  }
  if (fVar7 < __real_3dcccccd) {
    return true;
  }
  plVar3 = *(longlong **)((longlong)this + 8);
  if ((plVar3 != (longlong *)0x0) && ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
    plVar6 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar6 = plVar3 + 7;
    }
    iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar3[9] - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(int *)(*plVar3 + (longlong)iVar4 * 0xc) == param_1) {
          return true;
        }
        iVar4 = *(int *)(*plVar3 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  return false;
}

// Add @ 14dbb4eb0

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::Add
          (FLODData *this,FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  double dVar3;
  FClothingSimulationConfig *this_00;
  FClothingSimulationCollider *this_01;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar11;
  FCollectionPropertyConstFacade *pFVar12;
  int *piVar13;
  FSolverData *pFVar14;
  FClothConstraints *pFVar15;
  TArrayView<float_const_,int> *pTVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  ECollisionDataType EVar19;
  FScriptContainerElement *pFVar20;
  float *pfVar21;
  ulonglong uVar22;
  float fVar23;
  int local_res10;
  undefined1 local_res20 [8];
  TArray<Chaos::FClothComplexColliders_const_*,TSizedDefaultAllocator<32>_> local_d8;
  longlong local_c8;
  int local_c0;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *local_b8;
  FTriangleMesh *local_b0;
  TSharedPtr<Chaos::Softs::FMultiResConstraints,1> local_a8;
  FTriangleMesh *local_98;
  FCollectionPropertyConstFacade *local_90;
  FClothConstraints *local_88;
  TArrayView<float_const_,int> local_80 [4];
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x138,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x139,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2->Mesh == (FClothingSimulationMesh *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth->Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x13a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar11 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                    *)&this->SolverData,param_1);
  local_b8 = pTVar11;
  if ((pTVar11 ==
       (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
        *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)&pTVar11->field_0x8 != param_3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverDatum.LODIndex == InLODIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x13d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->NumParticles == 0) {
    return;
  }
  if ((*(int *)&pTVar11->field_0xc == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverDatum.ParticleRangeId != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x143,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar3 = param_1->LocalSpaceScale;
  iVar10 = *(int *)&pTVar11->field_0xc;
  local_c0 = iVar10;
  if ((dVar3 <= __real_3e45798ee0000000) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalSpaceScale > (1.e-8f)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x148,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar23 = (float)(**(code **)(param_2->Mesh->_padding_ + 0xf0))();
  local_98 = (FTriangleMesh *)&pTVar11->field_0x10;
  if ((param_1->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
    local_98 = &this->NoOffsetTriangleMesh;
  }
  if ((param_2->Config == (FClothingSimulationConfig *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth->Config",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x14f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(param_2->Config,param_3);
  local_a8.Object = (FMultiResConstraints *)0x0;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0 = (FTriangleMesh *)0x0;
  local_res10 = -1;
  local_90 = pFVar12;
  if ((param_1->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
    iVar8 = -1;
    if (param_3 == 0) {
      piVar13 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&pFVar12->KeyNameIndices,MultiResCoarseLODIndexName);
      if ((piVar13 != (int *)0x0) && (*piVar13 != -1)) {
        uVar7 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                          (pFVar12,*piVar13,&pFVar12->LowValueArray);
        if (1 < uVar7 + 1) {
          this_00 = param_2->Config;
          if (this_00->bIsLegacySingleLOD == false) {
            if (((int)uVar7 < 0) || ((this_00->Properties).ArrayNum <= (int)uVar7))
            goto LAB_14dbb538e;
          }
          else if ((int)uVar7 < 0) goto LAB_14dbb538e;
          if ((int)uVar7 < (param_2->LODData).ArrayNum) {
            pFVar12 = (FCollectionPropertyConstFacade *)
                      FClothingSimulationConfig::GetProperties(this_00,uVar7);
            piVar13 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)&pFVar12->KeyNameIndices,IsCoarseMultiResLODName);
            if (((piVar13 != (int *)0x0) && (*piVar13 != -1)) &&
               (bVar6 = Softs::FCollectionPropertyConstFacade::
                        GetValue<bool,UE::Math::TVector<float>_>
                                  (pFVar12,*piVar13,&pFVar12->LowValueArray), bVar6)) {
              uVar9 = 0;
              if ((int)uVar7 < (param_2->LODData).ArrayNum) {
                uVar9 = ~uVar7 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_b0 = (FTriangleMesh *)
                         (*(longlong *)
                           ((param_2->LODData).AllocatorInstance.Data + (ulonglong)uVar7 * 8) +
                         0x2e0);
              uVar9 = 0;
              if ((int)uVar7 < (param_2->LODData).ArrayNum) {
                uVar9 = ~uVar7 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar14 = TMapBase<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>_>
                        ::FindChecked((TMapBase<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>_>
                                       *)(*(longlong *)
                                           ((param_2->LODData).AllocatorInstance.Data +
                                           (ulonglong)uVar7 * 8) + 0x428),param_1);
              local_res10 = pFVar14->ParticleRangeId;
              *(uint *)&local_b8->field_0x158 = uVar7;
            }
          }
        }
      }
    }
    else {
      piVar13 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&pFVar12->KeyNameIndices,IsCoarseMultiResLODName);
      if (((piVar13 != (int *)0x0) && (*piVar13 != -1)) &&
         (bVar6 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                            (pFVar12,*piVar13,&pFVar12->LowValueArray), bVar6)) {
        pFVar12 = (FCollectionPropertyConstFacade *)
                  FClothingSimulationConfig::GetProperties(param_2->Config,0);
        piVar13 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&pFVar12->KeyNameIndices,MultiResCoarseLODIndexName);
        if ((piVar13 != (int *)0x0) && (*piVar13 != -1)) {
          iVar8 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                            (pFVar12,*piVar13,&pFVar12->LowValueArray);
        }
        if (iVar8 == param_3) {
          if (((param_2->LODData).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar14 = TMapBase<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>_>
                    ::FindChecked((TMapBase<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>_>
                                   *)(*(longlong *)(param_2->LODData).AllocatorInstance.Data + 0x428
                                     ),param_1);
          pFVar15 = FClothingSimulationSolver::GetClothConstraints(param_1,pFVar14->ParticleRangeId)
          ;
          local_a8.SharedReferenceCount.ReferenceController =
               (pFVar15->MultiResConstraints).SharedReferenceCount.ReferenceController;
          local_a8.Object = (pFVar15->MultiResConstraints).Object;
          if (local_a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
      }
    }
  }
LAB_14dbb538e:
  local_88 = FClothingSimulationSolver::GetClothConstraints(param_1,iVar10);
  uVar7 = (param_2->Colliders).ArrayNum;
  uVar22 = (ulonglong)(int)uVar7;
  pFVar20 = (param_2->Colliders).AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  pFVar1 = pFVar20 + uVar22 * 8;
  do {
    EVar19 = LODless;
    if ((param_2->Colliders).ArrayNum != (int)uVar22) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*_const,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    if (pFVar20 == pFVar1) {
      FClothConstraints::AddRules
                (local_88,local_90,local_98,&this->PatternData,&this->WeightMaps,&this->VertexSets,
                 &this->FaceSets,&this->FaceIntMaps,&this->Tethers,(float)((double)fVar23 / dVar3),
                 false,local_b0,local_res10,&local_a8,&local_d8,&this->ManagedArrayCollection,
                 (TMap<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
                  *)&local_b8->field_0x160);
      iVar10 = this->NumParticles;
      pTVar16 = FClothingSimulationSolver::GetParticleInvMassesView(param_1,local_80,local_c0);
      pfVar21 = pTVar16->DataPtr;
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = 0;
      this->NumKinematicParticles = 0;
      this->NumDynamicParticles = 0;
      if (0 < this->NumParticles) {
        do {
          uVar9 = 0;
          if ((int)uVar7 < iVar10) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*pfVar21 == 0.0) {
            this->NumKinematicParticles = this->NumKinematicParticles + 1;
          }
          else {
            this->NumDynamicParticles = this->NumDynamicParticles + 1;
          }
          uVar7 = uVar7 + 1;
          pfVar21 = pfVar21 + 1;
        } while ((int)uVar7 < this->NumParticles);
      }
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      return;
    }
    this_01 = *(FClothingSimulationCollider **)pFVar20;
    if ((this_01 == (FClothingSimulationCollider *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Collider",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                           ,0x17f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    do {
      uVar9 = FClothingSimulationCollider::GetCollisionRangeId(this_01,param_1,param_2,EVar19);
      if (*(int *)&(param_1->ComplexColliders).field_0x8 !=
          *(int *)&(param_1->ComplexColliders).field_0x34) {
        puVar4 = *(undefined1 **)&(param_1->ComplexColliders).field_0x40;
        puVar18 = &(param_1->ComplexColliders).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar18 = puVar4;
        }
        iVar10 = *(int *)(puVar18 +
                         (ulonglong)(*(int *)&(param_1->ComplexColliders).field_0x48 - 1U & uVar9) *
                         4);
        if (iVar10 != -1) {
          do {
            lVar2 = *(longlong *)&param_1->ComplexColliders + (longlong)iVar10 * 0x18;
            if (*(uint *)(*(longlong *)&param_1->ComplexColliders + (longlong)iVar10 * 0x18) ==
                uVar9) {
              plVar17 = (longlong *)(lVar2 + 8);
              if (lVar2 == 0) {
                plVar17 = (longlong *)0x0;
              }
              if (plVar17 != (longlong *)0x0) {
                local_c8 = *plVar17;
                if (local_c8 != 0) {
                  if (((local_d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c8) &&
                      ((FScriptContainerElement *)&local_c8 <
                       local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 8)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar10 = local_d8.ArrayNum;
                  if (local_d8.ArrayNum == local_d8.ArrayMax) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
                  }
                  local_d8.ArrayNum = iVar10 + 1;
                  *(longlong *)(local_d8.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_c8;
                }
                goto LAB_14dbb548c;
              }
              break;
            }
            iVar10 = *(int *)(lVar2 + 0x10);
          } while (iVar10 != -1);
        }
      }
      local_c8 = 0;
LAB_14dbb548c:
      EVar19 = EVar19 + External;
    } while (EVar19 != Count);
    uVar22 = (ulonglong)uVar7;
    pFVar20 = pFVar20 + 8;
  } while( true );
}

// Add @ 14dbb5710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationCollider::FLODData::Add
          (FLODData *this,FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          FClothCollisionData *param_3,FClothCollisionDataExtended *param_4,double param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7)

{
  TArray<Chaos::FClothComplexColliders::FMLLevelSetData,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  double dVar3;
  undefined8 uVar4;
  FEvolution *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  __m128 _Var20;
  __m128 _Var21;
  __m128 _Var22;
  TConsoleVariableData<bool> *pTVar23;
  FClothingSimulationCloth *pFVar24;
  FClothingSimulationSolver *this_00;
  FClothCollisionDataExtended *pFVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar29;
  TSphere<double,3> *pTVar30;
  FCapsule *this_01;
  FTaperedCapsule *this_02;
  FTaperedCylinder *this_03;
  FImplicitObjectUnion *this_04;
  FConvex *this_05;
  FSolverCollisionParticlesRange *pFVar31;
  FImplicitObject *this_06;
  TImplicitObjectTransformed<double,3,1> *this_07;
  FClothComplexColliders *pFVar32;
  ForElementType<unsigned_int> FVar33;
  int *piVar34;
  TRefCountPtr<Chaos::FImplicitObject> TVar35;
  FStaticBasicLogRecord *pFVar36;
  FSolverCollisionParticles *pFVar37;
  uint uVar38;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar39;
  uint uVar40;
  double *pdVar41;
  ulonglong uVar42;
  FScriptContainerElement *pFVar43;
  int iVar44;
  int *piVar45;
  longlong lVar46;
  double *pdVar47;
  uint uVar48;
  float *pfVar49;
  ulonglong uVar50;
  longlong lVar51;
  uint uVar52;
  longlong lVar53;
  float *pfVar54;
  ulonglong uVar55;
  undefined4 uVar56;
  longlong lVar57;
  uint uVar58;
  float fVar59;
  float fVar60;
  uint uVar61;
  uint uVar62;
  double dVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auStackY_488 [32];
  longlong local_438;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_430;
  int *local_420;
  uint local_418;
  uint local_414;
  uint local_410;
  FClothingSimulationCloth *local_408;
  TArrayView<int,int> local_400;
  FClothComplexColliders *local_3f0;
  undefined1 local_3e8 [4];
  int local_3e4;
  FClothingSimulationSolver *local_3e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3d8;
  FClothCollisionDataExtended *local_3d0;
  uint local_3c8;
  uint local_3c4;
  int local_3c0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_3b8;
  int local_3a8;
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> local_3a0;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_390;
  int local_380;
  int local_37c;
  int local_378;
  FTaperedCylinder *local_370;
  TSphere<double,3> *local_368;
  TSphere<double,3> *local_360;
  undefined8 *local_358;
  TArray<int,TSizedDefaultAllocator<32>_> *local_350;
  FConvex *local_348;
  FImplicitObject *local_340;
  TImplicitObjectTransformed<double,3,1> *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_320;
  TRefCountPtr<Chaos::FImplicitObject> local_310;
  TRefCountPtr<Chaos::FImplicitObject> local_308;
  TRefCountPtr<Chaos::FImplicitObject> local_300;
  TRefCountPtr<Chaos::FImplicitObject> local_2f8;
  TRefCountPtr<Chaos::FImplicitObject> local_2f0;
  TRefCountPtr<Chaos::FImplicitObject> local_2e8;
  undefined8 local_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float local_2cc;
  float fStack_2c8;
  longlong local_2c0;
  TRefCountPtr<Chaos::FImplicitObject> local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  FClothingSimulationSolver **local_280;
  FPBDEvolution *local_278;
  double local_268;
  double local_260;
  double local_258;
  double dStack_250;
  FClothingSimulationSolver *local_248;
  FClothingSimulationCloth *local_240;
  FClothingSimulationSolver *local_238;
  FClothingSimulationCloth *local_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  TVector<double,3> local_1c0;
  TVector<double,3> local_1a8;
  ForElementType<unsigned_int> local_190;
  uint local_168;
  int local_164;
  TRigidTransform<double,3> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_3d8 = param_6;
  local_350 = param_7;
  local_3d0 = param_4;
  local_408 = param_2;
  local_3f0 = (FClothComplexColliders *)this;
  local_3e0 = param_1;
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x4d,L""), bVar26)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cloth",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x4e,L""), bVar26)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FClothCollisionData::operator=(&this->ClothCollisionData,param_3);
  dVar3 = param_1->LocalSpaceScale;
  uVar64 = SUB84(__real_3e45798ee0000000,0);
  uVar65 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  if ((dVar3 <= __real_3e45798ee0000000) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("LocalSpaceScale > (1.e-8f)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x55,L""), bVar26)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar42 = 0;
  local_3c8 = (this->ClothCollisionData).Spheres.ArrayNum;
  dVar3 = param_5 / dVar3;
  local_190.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_164 = 0x100;
  uVar38 = local_3c8 + 0x1f >> 5;
  local_168 = local_3c8;
  if (local_3c8 + 0x1f >> 5 != 0) {
    if (8 < uVar38) {
      TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_190,0,uVar38,4);
      local_164 = uVar38 << 5;
    }
    FVar33 = (ForElementType<unsigned_int>)&local_190;
    if (local_190.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar33 = local_190.SecondaryData;
    }
    memset((void *)FVar33,0,(ulonglong)uVar38 << 2);
    uVar38 = local_168 & 0x8000001f;
    if ((int)uVar38 < 0) {
      uVar38 = (uVar38 - 1 | 0xffffffe0) + 1;
    }
    if (uVar38 != 0) {
      FVar33 = (ForElementType<unsigned_int>)&local_190;
      if (local_190.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar33 = local_190.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar33 +
                       (longlong)((int)(local_168 + ((int)local_168 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar38 & 0x1f);
    }
  }
  uVar38 = (this->ClothCollisionData).SphereConnections.ArrayNum;
  pFVar32 = local_3f0;
  uVar50 = uVar42;
  local_3c4 = uVar38;
  if (0 < (int)uVar38) {
    do {
      uVar40 = (uint)uVar42;
      uVar52 = 0;
      if ((int)uVar40 < (int)(pFVar32->CollisionSubBones)._padding_) {
        uVar52 = ~uVar40 >> 0x1f;
      }
      if ((uVar52 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      piVar45 = (int *)((pFVar32->CollisionSubBones)._padding_ + uVar50);
      piVar34 = piVar45 + 2;
      param_2 = local_408;
      this = (FLODData *)local_3f0;
      param_4 = local_3d0;
      uVar52 = local_3c8;
      for (; local_408 = param_2, local_3f0 = (FClothComplexColliders *)this, local_3d0 = param_4,
          piVar45 != piVar34; piVar45 = piVar45 + 1) {
        iVar44 = *piVar45;
        if (((iVar44 < 0) || ((int)local_168 <= iVar44)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar33 = (ForElementType<unsigned_int>)&local_190;
        if (local_190.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar33 = local_190.SecondaryData;
        }
        iVar28 = iVar44;
        if (iVar44 < 0) {
          iVar28 = iVar44 + 0x1f;
        }
        uVar48 = 1 << ((byte)iVar44 & 0x1f);
        uVar38 = *(uint *)((longlong)FVar33 + (longlong)(iVar28 >> 5) * 4);
        if ((uVar48 & uVar38) == 0) {
          *(uint *)((longlong)FVar33 + (longlong)(iVar28 >> 5) * 4) = uVar38 | uVar48;
          uVar52 = uVar52 - 1;
        }
        pFVar32 = local_3f0;
        uVar38 = local_3c4;
        param_2 = local_408;
        this = (FLODData *)local_3f0;
        param_4 = local_3d0;
      }
      uVar42 = (ulonglong)(uVar40 + 1);
      uVar50 = uVar50 + 0x20;
      local_3c8 = uVar52;
    } while ((int)(uVar40 + 1) < (int)uVar38);
  }
  this_00 = local_3e0;
  uVar52 = 0xffffffff;
  local_3c0 = (param_4->SkinnedLevelSets).ArrayNum;
  local_37c = (param_4->MLLevelSets).ArrayNum;
  local_378 = (param_4->SkinnedTriangleMeshes).ArrayNum;
  local_3e4 = (param_4->LevelSets).ArrayNum;
  local_3a8 = *(int *)&(((FClothComplexColliders *)this)->CollisionSubBones).BoneIndices.field_0x8;
  local_380 = (int)(((FClothComplexColliders *)this)->CollisionSubBones)._padding_;
  local_278 = (local_3e0->PBDEvolution).Ptr;
  iVar44 = 0;
  if (local_278 == (FPBDEvolution *)0x0) {
    iVar44 = local_37c + local_378 + local_3c0;
  }
  iVar44 = local_3e4 + iVar44 + local_3a8 + local_380 + uVar38 + local_3c8;
  *(int *)&(((FClothComplexColliders *)this)->CollisionSubBones).BoneIndices.field_0x10 = iVar44;
  if (param_2 != (FClothingSimulationCloth *)0x0) {
    uVar52 = param_2->GroupId;
  }
  local_248 = local_3e0;
  local_240 = param_2;
  pTVar29 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                    *)&(((FClothComplexColliders *)this)->CollisionSubBones).BaseTransforms,
                   (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                    *)&local_248);
  piVar34 = (int *)&pTVar29->field_0x10;
  if (pTVar29 ==
      (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
       *)0x0) {
    piVar34 = (int *)0x0;
  }
  if (piVar34 == (int *)0x0) {
    local_280 = &local_238;
    local_238 = this_00;
    local_420 = piVar34;
    local_230 = param_2;
    TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
    ::
    Emplace<TKeyInitializer<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>_&&>_>
              ((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                *)&(((FClothComplexColliders *)this)->CollisionSubBones).BaseTransforms,
               (TKeyInitializer<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>_&&>
                *)&local_2e0,(bool *)&local_280);
    iVar28 = -1;
    iVar44 = *(int *)&(((FClothComplexColliders *)this)->CollisionSubBones).BoneIndices.field_0x10;
    piVar34 = (int *)(*(longlong *)
                       &(((FClothComplexColliders *)this)->CollisionSubBones).BaseTransforms +
                     (longlong)(int)local_2e0 * 0x20 + 0x10);
  }
  else {
    iVar28 = *piVar34;
  }
  local_420 = piVar34;
  iVar44 = FClothingSimulationSolver::AddCollisionParticles(this_00,iVar44,uVar52,iVar28);
  pFVar32 = local_3f0;
  *piVar34 = iVar44;
  if (*(int *)&(local_3f0->CollisionSubBones).BoneIndices.field_0x10 != 0) {
    FClothingSimulationSolver::GetCollisionBoneIndicesView(this_00,&local_400,iVar44);
    Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
              (&local_390,&this_00->Evolution,&this_00->PBDEvolution,*piVar34,
               (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
               &(this_00->CollisionBaseTransforms).field_0x8);
    uVar38 = 0;
    if ((local_3c4 != 0) && (0 < (int)local_3c4)) {
      uVar64 = (undefined4)__real_3fe0000000000000;
      uVar65 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      local_438 = 0;
      do {
        uVar40 = ~uVar38 >> 0x1f;
        uVar52 = 0;
        if ((int)uVar38 < (int)(pFVar32->CollisionSubBones)._padding_) {
          uVar52 = uVar40;
        }
        if ((uVar52 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar53 = (pFVar32->CollisionSubBones)._padding_;
        lVar46 = local_438 * 0x20;
        uVar52 = *(uint *)(lVar46 + lVar53);
        uVar48 = *(uint *)(lVar46 + 4 + lVar53);
        uVar58 = 0;
        if ((int)uVar52 < local_3f0->CollisionRangeId) {
          uVar58 = ~uVar52 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar32 = local_3f0;
        pfVar49 = &local_3f0->Evolution->Time + (longlong)(int)uVar52 * 8;
        uVar52 = 0;
        if ((int)uVar48 < local_3f0->CollisionRangeId) {
          uVar52 = ~uVar48 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pfVar54 = &pFVar32->Evolution->Time + (longlong)(int)uVar48 * 8;
        fVar59 = *pfVar49;
        if (((int)fVar59 < 0) || (local_3d8->ArrayNum <= (int)fVar59)) {
          iVar44 = -1;
        }
        else {
          if (((int)fVar59 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar44 = *(int *)((local_3d8->AllocatorInstance).Data + (longlong)(int)fVar59 * 4);
        }
        uVar52 = 0;
        if ((int)uVar38 < local_400.ArrayNum) {
          uVar52 = uVar40;
        }
        if ((uVar52 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_400.DataPtr[local_438] = iVar44;
        if ((2 < (byte)LogChaosCloth._0_1_) && (*pfVar49 != *pfVar54)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        }
        if (6 < (byte)LogChaosCloth._0_1_) {
          uVar52 = 0;
          if ((int)uVar38 < local_400.ArrayNum) {
            uVar52 = uVar40;
          }
          if ((uVar52 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        }
        _Var22 = UE::Math::TTransform<float>::Identity.Scale3D;
        _Var21 = UE::Math::TTransform<float>::Identity.Translation;
        _Var20 = UE::Math::TTransform<float>::Identity.Rotation;
        dVar13 = dVar3 * *(double *)(pfVar54 + 2) - dVar3 * *(double *)(pfVar49 + 2);
        dVar63 = dVar3 * *(double *)(pfVar54 + 6) - dVar3 * *(double *)(pfVar49 + 6);
        local_1f8 = (dVar3 * *(double *)(pfVar54 + 2) + dVar3 * *(double *)(pfVar49 + 2)) *
                    (double)CONCAT44(uVar65,uVar64);
        dVar14 = dVar3 * *(double *)(pfVar54 + 4) - dVar3 * *(double *)(pfVar49 + 4);
        local_1f0 = (dVar3 * *(double *)(pfVar54 + 4) + dVar3 * *(double *)(pfVar49 + 4)) *
                    (double)CONCAT44(uVar65,uVar64);
        local_1e8 = (dVar3 * *(double *)(pfVar54 + 6) + dVar3 * *(double *)(pfVar49 + 6)) *
                    (double)CONCAT44(uVar65,uVar64);
        local_298 = dVar13 * (double)CONCAT44(uVar65,uVar64);
        local_288 = dVar63 * (double)CONCAT44(uVar65,uVar64);
        local_290 = dVar14 * (double)CONCAT44(uVar65,uVar64);
        local_2b0 = local_1f8 - local_298;
        local_298 = local_298 + local_1f8;
        dVar15 = (double)pfVar49[1] * dVar3;
        local_2a8 = local_1f0 - local_290;
        local_290 = local_290 + local_1f0;
        local_2a0 = local_1e8 - local_288;
        local_288 = local_288 + local_1e8;
        dVar16 = (double)pfVar54[1] * dVar3;
        dVar17 = dVar16;
        dVar18 = dVar15;
        if (dVar15 <= dVar16) {
          dVar17 = dVar15;
          dVar18 = dVar16;
        }
        uVar52 = 0;
        if ((int)uVar38 < local_390.ArrayNum) {
          uVar52 = uVar40;
        }
        if ((uVar52 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(__m128 *)(local_390.DataPtr + local_438) = _Var20;
        *(__m128 *)&local_390.DataPtr[local_438].field_0x10 = _Var21;
        *(__m128 *)&local_390.DataPtr[local_438].field_0x20 = _Var22;
        pTVar23 = ClothingSimulationColliderConsoleVariables::CVarUseOptimizedTaperedCapsule.Ref;
        uVar52 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((((__real_3e45798ee0000000 <=
               (dVar13 * dVar13 + dVar14 * dVar14 + dVar63 * dVar63) * __real_3fd0000000000000) ||
             (uVar4 = *(undefined8 *)(lVar46 + 8 + lVar53), uVar48 = (uint)uVar4 & uVar52,
             uVar58 = (uint)((ulonglong)uVar4 >> 0x20) & uVar40,
             __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar58,uVar48) &&
             (double)CONCAT44(uVar58,uVar48) != __real_3f1a36e2e0000000)) ||
            (uVar4 = *(undefined8 *)(lVar46 + 0x10 + lVar53), uVar48 = (uint)uVar4 & uVar52,
            uVar58 = (uint)((ulonglong)uVar4 >> 0x20) & uVar40,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar58,uVar48) &&
            (double)CONCAT44(uVar58,uVar48) != __real_3f1a36e2e0000000)) ||
           (uVar4 = *(undefined8 *)(lVar46 + 0x18 + lVar53), uVar48 = (uint)uVar4 & uVar52,
           uVar58 = (uint)((ulonglong)uVar4 >> 0x20) & uVar40,
           __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar58,uVar48) &&
           (double)CONCAT44(uVar58,uVar48) != __real_3f1a36e2e0000000)) {
          if (((dVar18 - dVar17 < __real_3f1a36e2e0000000) &&
              (uVar4 = *(undefined8 *)(lVar46 + 8 + lVar53), uVar48 = (uint)uVar4 & uVar52,
              uVar58 = (uint)((ulonglong)uVar4 >> 0x20) & uVar40,
              (double)CONCAT44(uVar58,uVar48) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar58,uVar48) == __real_3f1a36e2e0000000)) &&
             ((uVar4 = *(undefined8 *)(lVar46 + 0x10 + lVar53), uVar48 = (uint)uVar4 & uVar52,
              uVar58 = (uint)((ulonglong)uVar4 >> 0x20) & uVar40,
              (double)CONCAT44(uVar58,uVar48) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar58,uVar48) == __real_3f1a36e2e0000000 &&
              (uVar4 = *(undefined8 *)(lVar46 + 0x18 + lVar53), uVar52 = (uint)uVar4 & uVar52,
              uVar40 = (uint)((ulonglong)uVar4 >> 0x20) & uVar40,
              (double)CONCAT44(uVar40,uVar52) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar40,uVar52) == __real_3f1a36e2e0000000)))) {
            this_01 = ::operator_new(0x40);
            if (this_01 == (FCapsule *)0x0) {
              local_308.Reference = (FImplicitObject *)0x0;
            }
            else {
              local_308.Reference =
                   (FImplicitObject *)
                   FCapsule::FCapsule(this_01,(TVector<double,3> *)&local_2b0,
                                      (TVector<double,3> *)&local_298,dVar18);
              if ((FTaperedCapsule *)local_308.Reference != (FTaperedCapsule *)0x0) {
                LOCK();
                *(int *)&((FTaperedCapsule *)local_308.Reference)->_padding_ =
                     (int)((FTaperedCapsule *)local_308.Reference)->_padding_ + 1;
                UNLOCK();
              }
            }
            FClothingSimulationSolver::SetCollisionGeometry(local_3e0,*local_420,uVar38,&local_308);
            TVar35.Reference = local_308.Reference;
            goto LAB_14dbb6260;
          }
          bVar26 = IsInParallelGameThread();
          if (bVar26) {
LAB_14dbb61c1:
            lVar51 = 0;
          }
          else {
            bVar26 = IsInGameThread();
            lVar51 = 1;
            if (bVar26) goto LAB_14dbb61c1;
          }
          if (pTVar23->ShadowedValue[lVar51] != false) {
            this_02 = ::operator_new(0x88);
            if (this_02 == (FTaperedCapsule *)0x0) {
              local_300.Reference = (FImplicitObject *)0x0;
            }
            else {
              puVar9 = (undefined8 *)(lVar46 + 8 + lVar53);
              local_1c0._0_8_ = *puVar9;
              local_1c0._8_8_ = puVar9[1];
              local_1c0._16_8_ = *(undefined8 *)(lVar46 + 0x18 + lVar53);
              local_300.Reference =
                   (FImplicitObject *)
                   FTaperedCapsule::FTaperedCapsule
                             (this_02,(TVector<double,3> *)&local_2b0,
                              (TVector<double,3> *)&local_298,dVar15,dVar16,&local_1c0);
              if ((FTaperedCapsule *)local_300.Reference != (FTaperedCapsule *)0x0) {
                LOCK();
                *(int *)&((FTaperedCapsule *)local_300.Reference)->_padding_ =
                     (int)((FTaperedCapsule *)local_300.Reference)->_padding_ + 1;
                UNLOCK();
              }
            }
            FClothingSimulationSolver::SetCollisionGeometry(local_3e0,*local_420,uVar38,&local_300);
            TVar35.Reference = local_300.Reference;
            goto LAB_14dbb6260;
          }
          local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_430.ArrayNum = 0;
          local_430.ArrayMax = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,3,&local_430.AllocatorInstance,0,&local_430.ArrayMax);
          this_03 = ::operator_new(0x90);
          if (this_03 == (FTaperedCylinder *)0x0) {
            local_370 = (FTaperedCylinder *)0x0;
          }
          else {
            local_370 = FTaperedCylinder::FTaperedCylinder
                                  (this_03,(TVector<double,3> *)&local_2b0,
                                   (TVector<double,3> *)&local_298,dVar15,dVar16);
            if (local_370 != (FTaperedCylinder *)0x0) {
              LOCK();
              *(int *)&local_370->_padding_ = (int)local_370->_padding_ + 1;
              UNLOCK();
            }
          }
          if (((local_430.AllocatorInstance.Data <= (FScriptContainerElement *)&local_370) &&
              ((FScriptContainerElement *)&local_370 <
               local_430.AllocatorInstance.Data + (longlong)local_430.ArrayMax * 8)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar44 = local_430.ArrayNum;
          if (local_430.ArrayNum == local_430.ArrayMax) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_430.AllocatorInstance,&local_430.ArrayMax);
          }
          local_430.ArrayNum = iVar44 + 1;
          *(undefined8 *)(local_430.AllocatorInstance.Data + (longlong)iVar44 * 8) = 0;
          *(FTaperedCylinder **)(local_430.AllocatorInstance.Data + (longlong)iVar44 * 8) =
               local_370;
          local_370 = (FTaperedCylinder *)0x0;
          pTVar30 = ::operator_new(0x30);
          if (pTVar30 == (TSphere<double,3> *)0x0) {
            local_368 = (TSphere<double,3> *)0x0;
          }
          else {
            local_368 = TSphere<double,3>::TSphere<double,3>
                                  (pTVar30,(TVector<double,3> *)&local_2b0,dVar15);
            if (local_368 != (TSphere<double,3> *)0x0) {
              LOCK();
              *(int *)&local_368->_padding_ = (int)local_368->_padding_ + 1;
              UNLOCK();
            }
          }
          if (((local_430.AllocatorInstance.Data <= (FScriptContainerElement *)&local_368) &&
              ((FScriptContainerElement *)&local_368 <
               local_430.AllocatorInstance.Data + (longlong)local_430.ArrayMax * 8)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar44 = local_430.ArrayNum;
          if (local_430.ArrayNum == local_430.ArrayMax) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_430.AllocatorInstance,&local_430.ArrayMax);
          }
          local_430.ArrayNum = iVar44 + 1;
          *(undefined8 *)(local_430.AllocatorInstance.Data + (longlong)iVar44 * 8) = 0;
          *(TSphere<double,3> **)(local_430.AllocatorInstance.Data + (longlong)iVar44 * 8) =
               local_368;
          local_368 = (TSphere<double,3> *)0x0;
          pTVar30 = ::operator_new(0x30);
          if (pTVar30 == (TSphere<double,3> *)0x0) {
            local_360 = (TSphere<double,3> *)0x0;
          }
          else {
            local_360 = TSphere<double,3>::TSphere<double,3>
                                  (pTVar30,(TVector<double,3> *)&local_298,dVar16);
            if (local_360 != (TSphere<double,3> *)0x0) {
              LOCK();
              *(int *)&local_360->_padding_ = (int)local_360->_padding_ + 1;
              UNLOCK();
            }
          }
          if (((local_430.AllocatorInstance.Data <= (FScriptContainerElement *)&local_360) &&
              ((FScriptContainerElement *)&local_360 <
               local_430.AllocatorInstance.Data + (longlong)local_430.ArrayMax * 8)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar44 = local_430.ArrayNum;
          if (local_430.ArrayNum == local_430.ArrayMax) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_430.AllocatorInstance,&local_430.ArrayMax);
          }
          local_430.ArrayNum = iVar44 + 1;
          *(undefined8 *)(local_430.AllocatorInstance.Data + (longlong)iVar44 * 8) = 0;
          *(TSphere<double,3> **)(local_430.AllocatorInstance.Data + (longlong)iVar44 * 8) =
               local_360;
          local_360 = (TSphere<double,3> *)0x0;
          this_04 = ::operator_new(0x70);
          if (this_04 == (FImplicitObjectUnion *)0x0) {
            local_2f8.Reference = (FImplicitObject *)0x0;
          }
          else {
            local_2f8.Reference =
                 (FImplicitObject *)FImplicitObjectUnion::FImplicitObjectUnion(this_04,&local_430);
            if ((FImplicitObjectUnion *)local_2f8.Reference != (FImplicitObjectUnion *)0x0) {
              LOCK();
              *(int *)&((FImplicitObjectUnion *)local_2f8.Reference)->_padding_ =
                   (int)((FImplicitObjectUnion *)local_2f8.Reference)->_padding_ + 1;
              UNLOCK();
            }
          }
          FClothingSimulationSolver::SetCollisionGeometry(local_3e0,*local_420,uVar38,&local_2f8);
          if ((FImplicitObjectUnion *)local_2f8.Reference != (FImplicitObjectUnion *)0x0) {
            LOCK();
            plVar8 = &(local_2f8.Reference)->_padding_;
            lVar53 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if (((int)lVar53 == 1) &&
               (*(int *)((longlong)&(local_2f8.Reference)->_padding_ + 4) == 0)) {
              (**(code **)(local_2f8.Reference)->_padding_)(local_2f8.Reference,1);
            }
          }
          DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                    ((TRefCountPtr<Chaos::FImplicitObject> *)local_430.AllocatorInstance.Data,
                     local_430.ArrayNum);
          if (local_430.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.AllocatorInstance.Data);
          }
        }
        else {
          pTVar30 = ::operator_new(0x30);
          if (pTVar30 == (TSphere<double,3> *)0x0) {
            local_310.Reference = (FImplicitObject *)0x0;
          }
          else {
            local_310.Reference =
                 (FImplicitObject *)
                 TSphere<double,3>::TSphere<double,3>
                           (pTVar30,(TVector<double,3> *)&local_1f8,dVar18);
            if ((FTaperedCapsule *)local_310.Reference != (FTaperedCapsule *)0x0) {
              LOCK();
              *(int *)&((FTaperedCapsule *)local_310.Reference)->_padding_ =
                   (int)((FTaperedCapsule *)local_310.Reference)->_padding_ + 1;
              UNLOCK();
            }
          }
          FClothingSimulationSolver::SetCollisionGeometry(local_3e0,*local_420,uVar38,&local_310);
          TVar35.Reference = local_310.Reference;
LAB_14dbb6260:
          if ((FTaperedCapsule *)TVar35.Reference != (FTaperedCapsule *)0x0) {
            LOCK();
            plVar8 = &((FTaperedCapsule *)TVar35.Reference)->_padding_;
            lVar53 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if (((int)lVar53 == 1) &&
               (*(int *)((longlong)&((FTaperedCapsule *)TVar35.Reference)->_padding_ + 4) == 0)) {
              (**(code **)((FTaperedCapsule *)TVar35.Reference)->_padding_)(TVar35.Reference,1);
            }
          }
        }
        local_438 = local_438 + 1;
        uVar64 = (undefined4)__real_3fe0000000000000;
        uVar65 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
        uVar38 = uVar38 + 1;
        pFVar32 = local_3f0;
      } while (local_438 < (int)local_3c4);
      uVar64 = SUB84(__real_3e45798ee0000000,0);
      uVar65 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    }
    uVar42 = 0;
    if ((local_3c8 != 0) && (0 < pFVar32->CollisionRangeId)) {
      local_438 = (longlong)(int)local_3c4 * 4;
      lVar53 = (longlong)(int)local_3c4 * 0x30;
      uVar50 = uVar42;
      uVar38 = local_3c4;
      do {
        uVar52 = (uint)uVar42;
        if ((((int)uVar52 < 0) || ((int)local_168 <= (int)uVar52)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar33 = (ForElementType<unsigned_int>)&local_190;
        if (local_190.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar33 = local_190.SecondaryData;
        }
        uVar40 = uVar52;
        if ((int)uVar52 < 0) {
          uVar40 = uVar52 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar33 + (longlong)((int)uVar40 >> 5) * 4) >> (uVar52 & 0x1f) & 1)
            == 0) {
          uVar40 = 0;
          if ((int)uVar52 < pFVar32->CollisionRangeId) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar39 = local_3d8;
          pFVar5 = pFVar32->Evolution;
          iVar44 = *(int *)((longlong)&pFVar5->Time + uVar50);
          if ((iVar44 < 0) || (local_3d8->ArrayNum <= iVar44)) {
            uVar56 = 0xffffffff;
          }
          else {
            if ((iVar44 < 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar56 = *(undefined4 *)((pTVar39->AllocatorInstance).Data + (longlong)iVar44 * 4);
          }
          uVar40 = 0;
          if ((int)uVar38 < local_400.ArrayNum) {
            uVar40 = ~uVar38 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(undefined4 *)((longlong)local_400.DataPtr + local_438) = uVar56;
          if (6 < (byte)LogChaosCloth._0_1_) {
            uVar40 = 0;
            if ((int)uVar38 < local_400.ArrayNum) {
              uVar40 = ~uVar38 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
          _Var22 = UE::Math::TTransform<float>::Identity.Scale3D;
          _Var21 = UE::Math::TTransform<float>::Identity.Translation;
          _Var20 = UE::Math::TTransform<float>::Identity.Rotation;
          uVar40 = 0;
          if ((int)uVar38 < local_390.ArrayNum) {
            uVar40 = ~uVar38 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(__m128 *)(&(local_390.DataPtr)->field_0x0 + lVar53) = _Var20;
          *(__m128 *)(&(local_390.DataPtr)->field_0x10 + lVar53) = _Var21;
          *(__m128 *)(&(local_390.DataPtr)->field_0x20 + lVar53) = _Var22;
          fVar59 = *(float *)(&pFVar5->bEnableForceBasedSolver + uVar50);
          dVar13 = *(double *)((longlong)&pFVar5->MaxNumIterations + uVar50);
          dVar14 = *(double *)((longlong)&pFVar5->NumUsedIterations + uVar50);
          dVar15 = *(double *)(&pFVar5->bDisableTimeDependentNumIterations + uVar50);
          pTVar30 = ::operator_new(0x30);
          if (pTVar30 == (TSphere<double,3> *)0x0) {
            local_2f0.Reference = (FImplicitObject *)0x0;
          }
          else {
            local_1e0 = dVar3 * dVar13;
            local_1d8 = dVar3 * dVar14;
            local_1d0 = dVar3 * dVar15;
            local_2f0.Reference =
                 (FImplicitObject *)
                 TSphere<double,3>::TSphere<double,3>
                           (pTVar30,(TVector<double,3> *)&local_1e0,(double)fVar59 * dVar3);
            if ((TSphere<double,3> *)local_2f0.Reference != (TSphere<double,3> *)0x0) {
              LOCK();
              *(int *)&((TSphere<double,3> *)local_2f0.Reference)->_padding_ =
                   (int)((TSphere<double,3> *)local_2f0.Reference)->_padding_ + 1;
              UNLOCK();
            }
          }
          FClothingSimulationSolver::SetCollisionGeometry(local_3e0,*local_420,uVar38,&local_2f0);
          if ((TSphere<double,3> *)local_2f0.Reference != (TSphere<double,3> *)0x0) {
            LOCK();
            plVar8 = &(local_2f0.Reference)->_padding_;
            lVar46 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if (((int)lVar46 == 1) &&
               (*(int *)((longlong)&(local_2f0.Reference)->_padding_ + 4) == 0)) {
              (**(code **)(local_2f0.Reference)->_padding_)(local_2f0.Reference,1);
            }
          }
          local_438 = local_438 + 4;
          uVar38 = uVar38 + 1;
          lVar53 = lVar53 + 0x30;
          pFVar32 = local_3f0;
        }
        uVar42 = (ulonglong)(uVar52 + 1);
        uVar50 = uVar50 + 0x20;
      } while ((int)(uVar52 + 1) < pFVar32->CollisionRangeId);
    }
    dVar13 = __real_3ff0000000000000;
    uVar38 = local_3c8 + local_3c4;
    if ((local_380 != 0) && (local_418 = 0, local_414 = uVar38, 0 < local_380)) {
      lVar53 = (longlong)(int)uVar38;
      local_408 = (FClothingSimulationCloth *)0x0;
      uVar52 = uVar38;
      do {
        pFVar24 = local_408;
        uVar40 = 0;
        if ((int)local_418 < (int)(pFVar32->CollisionSubBones)._padding_) {
          uVar40 = ~local_418 >> 0x1f;
        }
        local_414 = uVar52;
        local_2c0 = lVar53;
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        _Var22 = UE::Math::TTransform<float>::Identity.Scale3D;
        _Var21 = UE::Math::TTransform<float>::Identity.Translation;
        _Var20 = UE::Math::TTransform<float>::Identity.Rotation;
        lVar46 = (pFVar32->CollisionSubBones)._padding_;
        uVar40 = 0;
        if ((int)uVar52 < local_390.ArrayNum) {
          uVar40 = ~uVar52 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar39 = local_3d8;
        *(__m128 *)(local_390.DataPtr + lVar53) = _Var20;
        *(__m128 *)&local_390.DataPtr[lVar53].field_0x10 = _Var21;
        *(__m128 *)&local_390.DataPtr[lVar53].field_0x20 = _Var22;
        iVar44 = *(int *)(lVar46 + 0x20 + (longlong)pFVar24 * 0x28);
        if ((iVar44 < 0) || (local_3d8->ArrayNum <= iVar44)) {
          iVar44 = -1;
        }
        else {
          if ((iVar44 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar44 = *(int *)((pTVar39->AllocatorInstance).Data + (longlong)iVar44 * 4);
        }
        uVar40 = 0;
        if ((int)uVar52 < local_400.ArrayNum) {
          uVar40 = ~uVar52 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_400.DataPtr[lVar53] = iVar44;
        if (6 < (byte)LogChaosCloth._0_1_) {
          uVar40 = 0;
          if ((int)uVar52 < local_400.ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u_Found_collision_152c9b038,
                     (FLogCategoryBase *)&LogChaosCloth);
        }
        local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a0.ArrayNum = 0;
        local_3a0.ArrayMax = 0;
        local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b8.ArrayNum = 0;
        local_3b8.ArrayMax = 0;
        uVar40 = *(uint *)(lVar46 + 0x18 + (longlong)pFVar24 * 0x28);
        iVar44 = *(int *)(lVar46 + 8 + (longlong)pFVar24 * 0x28);
        local_410 = uVar40;
        if ((int)uVar40 < 4) {
          if (2 < (byte)LogChaosCloth._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
        }
        else if (iVar44 < 4) {
          if (2 < (byte)LogChaosCloth._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
        }
        else {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,iVar44,&local_3a0.AllocatorInstance,0,&local_3a0.ArrayMax);
          if (local_3b8.ArrayMax < iVar44) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar44,&local_3b8.AllocatorInstance,local_3b8.ArrayNum,
                       &local_3b8.ArrayMax);
          }
          pdVar47 = *(double **)(lVar46 + (longlong)pFVar24 * 0x28);
          iVar28 = *(int *)(lVar46 + 8 + (longlong)pFVar24 * 0x28);
          pTVar39 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pdVar47 + 4);
          pdVar41 = pdVar47 + (longlong)iVar28 * 6;
          while( true ) {
            if (*(int *)(lVar46 + 8 + (longlong)pFVar24 * 0x28) != iVar28) {
              local_3e8[0] = 0;
              `TCheckedPointerIterator<FClothCollisionPrim_ConvexFace_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_3e8);
            }
            uVar52 = local_414;
            uVar40 = local_410;
            if (pdVar47 == pdVar41) goto LAB_14dbb6fc5;
            dVar15 = *pdVar47;
            dVar16 = pdVar47[1];
            local_258 = pdVar47[2];
            dStack_250 = pdVar47[3];
            dVar14 = dVar16 * dVar16 + dVar15 * dVar15 + local_258 * local_258;
            if (dVar14 < (double)CONCAT44(uVar65,uVar64) ||
                dVar14 == (double)CONCAT44(uVar65,uVar64)) {
              if ((byte)LogChaosCloth._0_1_ < 3) goto LAB_14dbb6fc5;
              pFVar36 = &::LOG_Static;
              goto LAB_14dbb6fae;
            }
            local_1c8 = dVar13 / SQRT(dVar14);
            local_268 = local_1c8 * dVar15;
            local_260 = local_1c8 * dVar16;
            dStack_250 = local_1c8 * dStack_250;
            local_258 = local_1c8 * local_258;
            if (pTVar39->ArrayNum == 0) break;
            fStack_2d0 = (float)local_268;
            local_2cc = (float)local_260;
            fStack_2c8 = (float)local_258;
            fVar59 = (float)dStack_250;
            fStack_2d4 = (float)dVar3;
            local_2e0._4_4_ = fStack_2d0 * fVar59 * fStack_2d4;
            fStack_2d8 = local_2cc * fVar59 * fStack_2d4;
            fStack_2d4 = fStack_2c8 * fVar59 * fStack_2d4;
            if (((local_3a0.AllocatorInstance.Data <=
                  (FScriptContainerElement *)((longlong)&local_2e0 + 4U)) &&
                ((FScriptContainerElement *)((longlong)&local_2e0 + 4U) <
                 local_3a0.AllocatorInstance.Data + (longlong)local_3a0.ArrayMax * 0x18)) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar27 = local_3a0.ArrayNum;
            if (local_3a0.ArrayNum == local_3a0.ArrayMax) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x418,&local_3a0.AllocatorInstance,&local_3a0.ArrayMax);
            }
            local_3a0.ArrayNum = iVar27 + 1;
            *(ulonglong *)(local_3a0.AllocatorInstance.Data + (longlong)iVar27 * 0x18) =
                 CONCAT44(fStack_2d8,local_2e0._4_4_);
            *(ulonglong *)(local_3a0.AllocatorInstance.Data + (longlong)iVar27 * 0x18 + 8) =
                 CONCAT44(fStack_2d0,fStack_2d4);
            *(ulonglong *)(local_3a0.AllocatorInstance.Data + (longlong)iVar27 * 0x18 + 0x10) =
                 CONCAT44(fStack_2c8,local_2cc);
            if (((local_3b8.AllocatorInstance.Data <= pTVar39) &&
                (pTVar39 < (TArray<int,TSizedDefaultAllocator<32>_> *)
                           (local_3b8.AllocatorInstance.Data + (longlong)local_3b8.ArrayMax * 0x10))
                ) && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar27 = local_3b8.ArrayNum;
            if (local_3b8.ArrayNum == local_3b8.ArrayMax) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_3b8.AllocatorInstance,&local_3b8.ArrayMax);
            }
            local_3b8.ArrayNum = iVar27 + 1;
            (((TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_3b8.AllocatorInstance.Data + (longlong)iVar27 * 0x10))->AllocatorInstance).Data
                 = (FScriptContainerElement *)0x0;
            TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)
                       (local_3b8.AllocatorInstance.Data + (longlong)iVar27 * 0x10),
                       (int *)(pTVar39->AllocatorInstance).Data,pTVar39->ArrayNum,0);
            pdVar47 = pdVar47 + 6;
            pTVar39 = pTVar39 + 3;
          }
          if (2 < (byte)LogChaosCloth._0_1_) {
            pFVar36 = &::LOG_Static;
LAB_14dbb6fae:
            UE::Logging::Private::BasicLog<3>(pFVar36,(FLogCategoryBase *)&LogChaosCloth);
            uVar52 = local_414;
            uVar40 = local_410;
          }
        }
LAB_14dbb6fc5:
        uVar42 = 0;
        if (local_3a0.ArrayNum == iVar44) {
          if ((local_3a0.ArrayNum != local_3b8.ArrayNum) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Planes.Num() == FaceIndices.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                                  ,0x125,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_320.ArrayNum = 0;
          local_320.ArrayMax = 0;
          if ((int)uVar40 < 1) {
            if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
            }
          }
          else {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,uVar40,&local_320.AllocatorInstance,&local_320.ArrayNum,
                       &local_320.ArrayMax);
            uVar50 = uVar42;
            uVar55 = uVar42;
            do {
              uVar40 = (uint)uVar50;
              uVar52 = 0;
              if ((int)uVar40 < *(int *)(lVar46 + 0x18 + (longlong)pFVar24 * 0x28)) {
                uVar52 = ~uVar40 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar26)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar53 = *(longlong *)(lVar46 + 0x10 + (longlong)pFVar24 * 0x28);
              dVar14 = *(double *)(lVar53 + uVar55);
              dVar15 = *(double *)(lVar53 + 8 + uVar55);
              dVar16 = *(double *)(lVar53 + 0x10 + uVar55);
              uVar52 = 0;
              if ((int)uVar40 < local_320.ArrayNum) {
                uVar52 = ~uVar40 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar26)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar50 = (ulonglong)(uVar40 + 1);
              uVar55 = uVar55 + 0x18;
              *(float *)(local_320.AllocatorInstance.Data + uVar42) = (float)dVar14;
              *(float *)(local_320.AllocatorInstance.Data + uVar42 + 4) = (float)dVar15;
              *(float *)(local_320.AllocatorInstance.Data + uVar42 + 8) = (float)dVar16;
              uVar42 = uVar42 + 0xc;
            } while ((int)(uVar40 + 1) < (int)local_410);
          }
          this_05 = ::operator_new(0xb0);
          if (this_05 == (FConvex *)0x0) {
            local_348 = (FConvex *)0x0;
          }
          else {
            local_348 = FConvex::FConvex(this_05,&local_3a0,&local_3b8,&local_320);
            if (local_348 != (FConvex *)0x0) {
              LOCK();
              *(int *)&local_348->_padding_ = (int)local_348->_padding_ + 1;
              UNLOCK();
            }
          }
          pFVar5 = (local_3e0->Evolution).Ptr;
          iVar44 = *local_420;
          if (pFVar5 == (FEvolution *)0x0) {
            pFVar37 = &((local_3e0->PBDEvolution).Ptr)->MCollisionParticles;
          }
          else {
            pFVar31 = Softs::FEvolution::GetCollisionParticleRange(pFVar5,iVar44);
            if ((*(longlong *)&pFVar31->field_0x8 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x57,L""), bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar37 = *(FSolverCollisionParticles **)&pFVar31->field_0x8;
            iVar44 = *(int *)&pFVar31->field_0x10;
          }
          uVar52 = local_414;
          (**(code **)(pFVar37->_padding_ + 0x10))(pFVar37,iVar44 + local_414,&local_348);
          if (local_348 != (FConvex *)0x0) {
            LOCK();
            plVar8 = &local_348->_padding_;
            lVar53 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if (((int)lVar53 == 1) && (*(int *)((longlong)&local_348->_padding_ + 4) == 0)) {
              (**(code **)local_348->_padding_)(local_348,1);
            }
          }
          if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.AllocatorInstance.Data);
          }
        }
        else {
          if (2 < (byte)LogChaosCloth._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
          local_1a8._16_8_ = 0;
          local_1a8._0_8_ = 0;
          local_1a8._8_8_ = 0;
          pTVar30 = ::operator_new(0x30);
          if (pTVar30 == (TSphere<double,3> *)0x0) {
            local_2e8.Reference = (FImplicitObject *)0x0;
          }
          else {
            local_2e8.Reference =
                 (FImplicitObject *)TSphere<double,3>::TSphere<double,3>(pTVar30,&local_1a8,dVar13);
            if ((TSphere<double,3> *)local_2e8.Reference != (TSphere<double,3> *)0x0) {
              LOCK();
              *(int *)&((TSphere<double,3> *)local_2e8.Reference)->_padding_ =
                   (int)((TSphere<double,3> *)local_2e8.Reference)->_padding_ + 1;
              UNLOCK();
            }
          }
          FClothingSimulationSolver::SetCollisionGeometry(local_3e0,*local_420,uVar52,&local_2e8);
          if ((TSphere<double,3> *)local_2e8.Reference != (TSphere<double,3> *)0x0) {
            LOCK();
            plVar8 = &(local_2e8.Reference)->_padding_;
            lVar53 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if (((int)lVar53 == 1) &&
               (*(int *)((longlong)&(local_2e8.Reference)->_padding_ + 4) == 0)) {
              (**(code **)(local_2e8.Reference)->_padding_)(local_2e8.Reference,1);
            }
          }
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_3b8.AllocatorInstance.Data,
                   local_3b8.ArrayNum);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_3b8.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_3b8.AllocatorInstance.Data);
        }
        if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.AllocatorInstance.Data);
        }
        uVar52 = uVar52 + 1;
        lVar53 = local_2c0 + 1;
        local_418 = local_418 + 1;
        local_408 = (FClothingSimulationCloth *)((longlong)&local_408->Mesh + 1);
        pFVar32 = local_3f0;
        local_414 = uVar52;
        local_2c0 = lVar53;
      } while ((longlong)local_408 < (longlong)local_380);
    }
    uVar19 = _UNK_150689548;
    uVar4 = ___xmm_000000003f8000003f8000003f800000;
    lVar46 = 0;
    uVar38 = uVar38 + local_380;
    lVar53 = (longlong)local_3a8;
    local_418 = uVar38;
    if ((local_3a8 != 0) && (0 < local_3a8)) {
      uVar52 = (uint)__xmm_80000000000000008000000000000000;
      uVar40 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      lVar57 = (longlong)(int)uVar38 * 0x30;
      lVar51 = (longlong)(int)uVar38 * 4;
      do {
        pFVar32 = local_3f0;
        uVar48 = 0;
        if ((int)(uVar38 - local_418) <
            *(int *)&(local_3f0->CollisionSubBones).BoneIndices.field_0x8) {
          uVar48 = ~(uVar38 - local_418) >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar6 = *(longlong *)&(pFVar32->CollisionSubBones).BoneIndices;
        uVar48 = 0;
        if ((int)uVar38 < local_390.ArrayNum) {
          uVar48 = ~uVar38 >> 0x1f;
        }
        dVar13 = *(double *)(lVar46 + lVar6);
        local_208 = uVar4;
        uStack_200 = uVar19;
        fStack_224 = (float)*(double *)(lVar46 + 0x28 + lVar6);
        local_228 = (float)*(double *)(lVar46 + 0x20 + lVar6);
        fStack_21c = (float)*(double *)(lVar46 + 0x38 + lVar6);
        fVar59 = (float)*(double *)(lVar46 + 0x10 + lVar6);
        fVar60 = (float)*(double *)(lVar46 + 8 + lVar6);
        local_218._4_4_ = fVar60;
        local_218._0_4_ = (float)dVar13;
        local_218._8_4_ = fVar59;
        local_218._12_4_ = 0;
        fStack_220 = (float)*(double *)(lVar46 + 0x30 + lVar6);
        if ((uVar48 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(ulonglong *)(&(local_390.DataPtr)->field_0x0 + lVar57) = CONCAT44(fStack_224,local_228);
        *(ulonglong *)((longlong)(&(local_390.DataPtr)->field_0x0 + lVar57) + 8) =
             CONCAT44(fStack_21c,fStack_220);
        auVar12._4_4_ = fVar60;
        auVar12._0_4_ = (float)dVar13;
        auVar12._8_4_ = fVar59;
        auVar12._12_4_ = 0;
        *(undefined1 (*) [16])(&(local_390.DataPtr)->field_0x10 + lVar57) = auVar12;
        *(undefined8 *)(&(local_390.DataPtr)->field_0x20 + lVar57) = uVar4;
        *(undefined8 *)((longlong)(&(local_390.DataPtr)->field_0x20 + lVar57) + 8) = uVar19;
        iVar44 = *(int *)(lVar46 + 0x58 + lVar6);
        if ((iVar44 < 0) || (local_3d8->ArrayNum <= iVar44)) {
          uVar64 = 0xffffffff;
        }
        else {
          if ((iVar44 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar64 = *(undefined4 *)((local_3d8->AllocatorInstance).Data + (longlong)iVar44 * 4);
        }
        uVar48 = 0;
        if ((int)uVar38 < local_400.ArrayNum) {
          uVar48 = ~uVar38 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(undefined4 *)((longlong)local_400.DataPtr + lVar51) = uVar64;
        if (6 < (byte)LogChaosCloth._0_1_) {
          uVar48 = 0;
          if ((int)uVar38 < local_400.ArrayNum) {
            uVar48 = ~uVar38 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        }
        dVar13 = dVar3 * *(double *)(lVar46 + 0x40 + lVar6);
        local_258 = dVar3 * *(double *)(lVar46 + 0x50 + lVar6);
        uVar48 = SUB84(local_258,0);
        dVar14 = dVar3 * *(double *)(lVar46 + 0x48 + lVar6);
        uVar61 = SUB84(dVar14,0);
        uVar62 = (uint)((ulonglong)dVar14 >> 0x20);
        uVar58 = (uint)((ulonglong)local_258 >> 0x20) ^ uVar40;
        this_06 = ::operator_new(0x50);
        if (this_06 != (FImplicitObject *)0x0) {
          FImplicitObject::FImplicitObject(this_06,3,'\x01');
          this_06->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
          this_06[1]._padding_ =
               CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar40,SUB84(dVar13,0) ^ uVar52);
          this_06[1]._padding_ = CONCAT44(uVar62 ^ uVar40,uVar61 ^ uVar52);
          this_06[1].Margin = (float)(uVar48 ^ uVar52);
          this_06[1].bIsConvex = (bool)(char)uVar58;
          this_06[1].bDoCollide = (bool)(char)(uVar58 >> 8);
          this_06[1].bHasBoundingBox = (bool)(char)(uVar58 >> 0x10);
          this_06[1].bIsTracked = (bool)(char)(uVar58 >> 0x18);
          auVar11._8_4_ = uVar61;
          auVar11._0_8_ = dVar13;
          auVar11._12_4_ = uVar62;
          *(undefined1 (*) [16])&this_06[1].Type = auVar11;
          this_06[2]._padding_ = (longlong)local_258;
          LOCK();
          *(int *)&this_06->_padding_ = (int)this_06->_padding_ + 1;
          UNLOCK();
        }
        iVar44 = *local_420;
        pFVar5 = (local_3e0->Evolution).Ptr;
        local_340 = this_06;
        if (pFVar5 == (FEvolution *)0x0) {
          pFVar37 = &((local_3e0->PBDEvolution).Ptr)->MCollisionParticles;
        }
        else {
          pFVar31 = Softs::FEvolution::GetCollisionParticleRange(pFVar5,iVar44);
          if ((*(longlong *)&pFVar31->field_0x8 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar37 = *(FSolverCollisionParticles **)&pFVar31->field_0x8;
          iVar44 = *(int *)&pFVar31->field_0x10;
        }
        (**(code **)(pFVar37->_padding_ + 0x10))(pFVar37,iVar44 + uVar38);
        if (local_340 != (FImplicitObject *)0x0) {
          LOCK();
          plVar8 = &local_340->_padding_;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if (((int)lVar6 == 1) && (*(int *)((longlong)&local_340->_padding_ + 4) == 0)) {
            (**(code **)local_340->_padding_)(local_340,1);
          }
        }
        uVar38 = uVar38 + 1;
        lVar46 = lVar46 + 0x60;
        lVar57 = lVar57 + 0x30;
        lVar51 = lVar51 + 4;
        lVar53 = lVar53 + -1;
      } while (lVar53 != 0);
    }
    uVar38 = local_418 + local_3a8;
    if ((local_3e4 != 0) &&
       (local_408 = (FClothingSimulationCloth *)(longlong)local_3e4, 0 < local_3e4)) {
      uVar50 = 0;
      lVar46 = (longlong)(int)uVar38 * 0x30;
      lVar53 = (longlong)(int)uVar38 * 4;
      iVar44 = -uVar38;
      uVar42 = uVar50;
      uVar52 = uVar38;
      do {
        _Var22 = UE::Math::TTransform<float>::Identity.Scale3D;
        _Var21 = UE::Math::TTransform<float>::Identity.Translation;
        _Var20 = UE::Math::TTransform<float>::Identity.Rotation;
        uVar40 = 0;
        if ((int)uVar52 < local_390.ArrayNum) {
          uVar40 = ~uVar52 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar25 = local_3d0;
        *(__m128 *)(&(local_390.DataPtr)->field_0x0 + lVar46) = _Var20;
        *(__m128 *)(&(local_390.DataPtr)->field_0x10 + lVar46) = _Var21;
        *(__m128 *)(&(local_390.DataPtr)->field_0x20 + lVar46) = _Var22;
        uVar40 = 0;
        if ((int)uVar42 < (local_3d0->LevelSets).ArrayNum) {
          uVar40 = ~(iVar44 + uVar52) >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar28 = *(int *)((pFVar25->LevelSets).AllocatorInstance.Data + uVar50 + 0x70);
        if ((iVar28 < 0) || (local_3d8->ArrayNum <= iVar28)) {
          uVar64 = 0xffffffff;
        }
        else {
          if ((iVar28 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar64 = *(undefined4 *)((local_3d8->AllocatorInstance).Data + (longlong)iVar28 * 4);
        }
        uVar40 = 0;
        if ((int)uVar52 < local_400.ArrayNum) {
          uVar40 = ~uVar52 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(undefined4 *)((longlong)local_400.DataPtr + lVar53) = uVar64;
        if (6 < (byte)LogChaosCloth._0_1_) {
          uVar40 = 0;
          if ((int)uVar52 < local_400.ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        }
        pFVar25 = local_3d0;
        uVar40 = 0;
        if ((int)(iVar44 + uVar52) < (local_3d0->LevelSets).ArrayNum) {
          uVar40 = ~(iVar44 + uVar52) >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar7 = (pFVar25->LevelSets).AllocatorInstance.Data;
        local_158._0_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x10);
        local_158._8_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x10 + 8);
        local_158._16_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x20);
        local_158._24_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x20 + 8);
        local_158._32_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x30);
        local_158._40_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x30 + 8);
        local_158._48_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x40);
        local_158._56_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x40 + 8);
        local_158._64_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x50);
        local_158._72_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x50 + 8);
        local_158._80_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x60);
        local_158._88_8_ = *(undefined8 *)(pFVar7 + uVar50 + 0x60 + 8);
        uVar40 = 0;
        if ((int)(iVar44 + uVar52) < (pFVar25->LevelSets).ArrayNum) {
          uVar40 = ~(iVar44 + uVar52) >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar7 = (pFVar25->LevelSets).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar7 + uVar50) == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        plVar8 = *(longlong **)(pFVar7 + uVar50);
        (**(code **)(*plVar8 + 0x38))(plVar8,&local_2b8);
        this_07 = ::operator_new(0xc0);
        if (this_07 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
          local_338 = (TImplicitObjectTransformed<double,3,1> *)0x0;
        }
        else {
          local_338 = TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
                                (this_07,&local_2b8,&local_158);
          if (local_338 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
            LOCK();
            *(int *)&local_338->_padding_ = (int)local_338->_padding_ + 1;
            UNLOCK();
          }
        }
        if (local_2b8.Reference != (FImplicitObject *)0x0) {
          LOCK();
          plVar8 = &(local_2b8.Reference)->_padding_;
          lVar51 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if (((int)lVar51 == 1) && (*(int *)((longlong)&(local_2b8.Reference)->_padding_ + 4) == 0)
             ) {
            (**(code **)(local_2b8.Reference)->_padding_)(local_2b8.Reference,1);
          }
        }
        iVar28 = *local_420;
        pFVar5 = (local_3e0->Evolution).Ptr;
        if (pFVar5 == (FEvolution *)0x0) {
          pFVar37 = &((local_3e0->PBDEvolution).Ptr)->MCollisionParticles;
        }
        else {
          pFVar31 = Softs::FEvolution::GetCollisionParticleRange(pFVar5,iVar28);
          if ((*(longlong *)&pFVar31->field_0x8 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar37 = *(FSolverCollisionParticles **)&pFVar31->field_0x8;
          iVar28 = *(int *)&pFVar31->field_0x10;
        }
        (**(code **)(pFVar37->_padding_ + 0x10))(pFVar37,iVar28 + uVar52);
        if (local_338 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
          LOCK();
          plVar8 = &local_338->_padding_;
          lVar51 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if (((int)lVar51 == 1) && (*(int *)((longlong)&local_338->_padding_ + 4) == 0)) {
            (**(code **)local_338->_padding_)(local_338,1);
          }
        }
        uVar52 = uVar52 + 1;
        uVar42 = (ulonglong)((int)uVar42 + 1);
        lVar46 = lVar46 + 0x30;
        lVar53 = lVar53 + 4;
        uVar50 = uVar50 + 0x80;
        local_408 = (FClothingSimulationCloth *)&local_408[-1].field_0x15f;
      } while (local_408 != (FClothingSimulationCloth *)0x0);
      local_408 = (FClothingSimulationCloth *)0x0;
    }
    iVar44 = local_3e4;
    if (6 < (byte)LogChaosCloth._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    }
    if (local_278 == (FPBDEvolution *)0x0) {
      pFVar32 = FClothingSimulationSolver::GetComplexColliders(local_3e0,*local_420);
      local_3f0 = pFVar32;
      if ((pFVar32 == (FClothComplexColliders *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ComplexColliders",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                              ,0x164,L""), bVar26)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FClothComplexColliders::Reset(pFVar32);
      FClothComplexColliders::AddSubBoneIndices(pFVar32,local_350);
      local_408 = (FClothingSimulationCloth *)(longlong)local_3c0;
      uVar38 = uVar38 + iVar44;
      if (0 < (longlong)local_408) {
        local_350 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar32->SkinnedLevelSets;
        local_3e4 = 0;
        lVar46 = 0;
        lVar51 = (longlong)(int)uVar38 * 0x30;
        lVar53 = (longlong)(int)uVar38 * 4;
        iVar44 = -uVar38;
        uVar52 = uVar38;
        do {
          pTVar39 = local_350;
          iVar28 = local_3e4;
          _Var22 = UE::Math::TTransform<float>::Identity.Scale3D;
          _Var21 = UE::Math::TTransform<float>::Identity.Translation;
          _Var20 = UE::Math::TTransform<float>::Identity.Rotation;
          uVar40 = 0;
          if ((int)uVar52 < local_390.ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(__m128 *)(&(local_390.DataPtr)->field_0x0 + lVar51) = _Var20;
          *(__m128 *)(&(local_390.DataPtr)->field_0x10 + lVar51) = _Var21;
          *(__m128 *)(&(local_390.DataPtr)->field_0x20 + lVar51) = _Var22;
          uVar40 = 0;
          if (iVar28 < (local_3d0->SkinnedLevelSets).ArrayNum) {
            uVar40 = ~(iVar44 + uVar52) >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar28 = *(int *)((local_3d0->SkinnedLevelSets).AllocatorInstance.Data + lVar46 + 8);
          if ((iVar28 < 0) || (local_3d8->ArrayNum <= iVar28)) {
            uVar64 = 0xffffffff;
          }
          else {
            if ((iVar28 < 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar64 = *(undefined4 *)((local_3d8->AllocatorInstance).Data + (longlong)iVar28 * 4);
          }
          uVar40 = 0;
          if ((int)uVar52 < local_400.ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(undefined4 *)(lVar53 + (longlong)local_400.DataPtr) = uVar64;
          if (6 < (byte)LogChaosCloth._0_1_) {
            uVar40 = 0;
            if ((int)uVar52 < local_400.ArrayNum) {
              uVar40 = ~uVar52 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
          pFVar25 = local_3d0;
          uVar40 = 0;
          if ((int)(iVar44 + uVar52) < (local_3d0->SkinnedLevelSets).ArrayNum) {
            uVar40 = ~(iVar44 + uVar52) >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          plVar8 = *(longlong **)((pFVar25->SkinnedLevelSets).AllocatorInstance.Data + lVar46);
          (**(code **)(*plVar8 + 0x48))(plVar8,&local_330);
          uVar40 = 0;
          if ((int)(iVar44 + uVar52) < (pFVar25->SkinnedLevelSets).ArrayNum) {
            uVar40 = ~(iVar44 + uVar52) >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar7 = (local_3d0->SkinnedLevelSets).AllocatorInstance.Data;
          iVar28 = pTVar39->ArrayNum;
          if (iVar28 == pTVar39->ArrayMax) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar39->AllocatorInstance,&pTVar39->ArrayMax);
          }
          pTVar39->ArrayNum = iVar28 + 1;
          pFVar43 = (pTVar39->AllocatorInstance).Data + (longlong)iVar28 * 0x20;
          DefaultConstructItems<Chaos::FClothComplexColliders::FSkinnedLevelSetData,int>(pFVar43,1);
          *(uint *)pFVar43 = uVar52;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar43 + 8),
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     (pFVar7 + (longlong)(int)(iVar44 + uVar52) * 0x20 + 0x10));
          puVar9 = *(undefined8 **)(pFVar43 + 0x18);
          if (puVar9 != local_330) {
            *(undefined8 **)(pFVar43 + 0x18) = local_330;
            if (local_330 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_330 + 1) = *(int *)(local_330 + 1) + 1;
              UNLOCK();
            }
            if (puVar9 != (undefined8 *)0x0) {
              LOCK();
              piVar34 = (int *)(puVar9 + 1);
              iVar28 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if ((iVar28 == 1) && (*(int *)((longlong)puVar9 + 0xc) == 0)) {
                (**(code **)*puVar9)(puVar9,1);
              }
            }
          }
          iVar28 = *local_420;
          pFVar5 = (local_3e0->Evolution).Ptr;
          if (pFVar5 == (FEvolution *)0x0) {
            pFVar37 = &((local_3e0->PBDEvolution).Ptr)->MCollisionParticles;
          }
          else {
            pFVar31 = Softs::FEvolution::GetCollisionParticleRange(pFVar5,iVar28);
            if ((*(longlong *)&pFVar31->field_0x8 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x57,L""), bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar37 = *(FSolverCollisionParticles **)&pFVar31->field_0x8;
            iVar28 = *(int *)&pFVar31->field_0x10;
          }
          (**(code **)(pFVar37->_padding_ + 0x10))(pFVar37,iVar28 + uVar52);
          if (local_330 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(local_330 + 1);
            iVar28 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if ((iVar28 == 1) && (*(int *)((longlong)local_330 + 0xc) == 0)) {
              (**(code **)*local_330)(local_330,1);
            }
          }
          uVar52 = uVar52 + 1;
          lVar51 = lVar51 + 0x30;
          lVar53 = lVar53 + 4;
          lVar46 = lVar46 + 0x20;
          local_408 = (FClothingSimulationCloth *)((longlong)local_408 + -1);
          local_3e4 = local_3e4 + 1;
        } while (local_408 != (FClothingSimulationCloth *)0x0);
      }
      uVar38 = uVar38 + local_3c0;
      if (0 < local_37c) {
        lVar46 = 0;
        local_408 = (FClothingSimulationCloth *)0x0;
        local_3c0 = 0;
        lVar51 = (longlong)(int)uVar38 * 0x30;
        lVar53 = (longlong)(int)uVar38 * 4;
        iVar44 = -uVar38;
        uVar52 = uVar38;
        do {
          iVar28 = local_3c0;
          _Var22 = UE::Math::TTransform<float>::Identity.Scale3D;
          _Var21 = UE::Math::TTransform<float>::Identity.Translation;
          _Var20 = UE::Math::TTransform<float>::Identity.Rotation;
          uVar40 = 0;
          if ((int)uVar52 < local_390.ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(__m128 *)(&(local_390.DataPtr)->field_0x0 + lVar51) = _Var20;
          *(__m128 *)(&(local_390.DataPtr)->field_0x10 + lVar51) = _Var21;
          *(__m128 *)(&(local_390.DataPtr)->field_0x20 + lVar51) = _Var22;
          uVar40 = 0;
          if (iVar28 < (local_3d0->MLLevelSets).ArrayNum) {
            uVar40 = ~(iVar44 + uVar52) >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar28 = *(int *)((local_3d0->MLLevelSets).AllocatorInstance.Data + lVar46 + 0x10);
          if ((iVar28 < 0) || (local_3d8->ArrayNum <= iVar28)) {
            uVar64 = 0xffffffff;
          }
          else {
            if ((iVar28 < 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar64 = *(undefined4 *)((local_3d8->AllocatorInstance).Data + (longlong)iVar28 * 4);
          }
          uVar40 = 0;
          if ((int)uVar52 < local_400.ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(undefined4 *)((longlong)local_400.DataPtr + lVar53) = uVar64;
          if (6 < (byte)LogChaosCloth._0_1_) {
            uVar40 = 0;
            if ((int)uVar52 < local_400.ArrayNum) {
              uVar40 = ~uVar52 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
          pFVar25 = local_3d0;
          uVar40 = 0;
          if ((int)(iVar44 + uVar52) < (local_3d0->MLLevelSets).ArrayNum) {
            uVar40 = ~(iVar44 + uVar52) >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar7 = (pFVar25->MLLevelSets).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar7 + lVar46) == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FMLLevelSet::CopyGeometry(*(FMLLevelSet **)(pFVar7 + lVar46));
          pFVar25 = local_3d0;
          uVar40 = 0;
          if ((int)(iVar44 + uVar52) < (local_3d0->MLLevelSets).ArrayNum) {
            uVar40 = ~(iVar44 + uVar52) >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar32 = local_3f0;
          pFVar7 = (pFVar25->MLLevelSets).AllocatorInstance.Data;
          pTVar1 = &local_3f0->MLLevelSets;
          iVar28 = (local_3f0->MLLevelSets).ArrayNum;
          piVar34 = &(local_3f0->MLLevelSets).ArrayMax;
          if (iVar28 == *piVar34) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar1->AllocatorInstance,piVar34);
          }
          (pFVar32->MLLevelSets).ArrayNum = iVar28 + 1;
          pFVar43 = (pTVar1->AllocatorInstance).Data + (longlong)iVar28 * 0x20;
          DefaultConstructItems<Chaos::FClothComplexColliders::FMLLevelSetData,int>(pFVar43,1);
          *(uint *)pFVar43 = uVar52;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar43 + 8),
                     (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar7 + lVar46 + 0x18));
          puVar9 = *(undefined8 **)(pFVar43 + 0x18);
          if (puVar9 != local_328) {
            *(undefined8 **)(pFVar43 + 0x18) = local_328;
            if (local_328 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_328 + 1) = *(int *)(local_328 + 1) + 1;
              UNLOCK();
            }
            if (puVar9 != (undefined8 *)0x0) {
              LOCK();
              piVar34 = (int *)(puVar9 + 1);
              iVar28 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if ((iVar28 == 1) && (*(int *)((longlong)puVar9 + 0xc) == 0)) {
                (**(code **)*puVar9)(puVar9,1);
              }
            }
          }
          iVar28 = *local_420;
          pFVar5 = (local_3e0->Evolution).Ptr;
          if (pFVar5 == (FEvolution *)0x0) {
            pFVar37 = &((local_3e0->PBDEvolution).Ptr)->MCollisionParticles;
          }
          else {
            pFVar31 = Softs::FEvolution::GetCollisionParticleRange(pFVar5,iVar28);
            if ((*(longlong *)&pFVar31->field_0x8 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x57,L""), bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar37 = *(FSolverCollisionParticles **)&pFVar31->field_0x8;
            iVar28 = *(int *)&pFVar31->field_0x10;
          }
          (**(code **)(pFVar37->_padding_ + 0x10))(pFVar37,iVar28 + uVar52);
          if (local_328 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(local_328 + 1);
            iVar28 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if ((iVar28 == 1) && (*(int *)((longlong)local_328 + 0xc) == 0)) {
              (**(code **)*local_328)(local_328,1);
            }
          }
          uVar52 = uVar52 + 1;
          local_408 = (FClothingSimulationCloth *)((longlong)local_408 + 1);
          lVar51 = lVar51 + 0x30;
          lVar53 = lVar53 + 4;
          lVar46 = lVar46 + 0x28;
          local_3c0 = local_3c0 + 1;
        } while ((longlong)local_408 < (longlong)local_37c);
      }
      local_408 = (FClothingSimulationCloth *)(longlong)local_378;
      uVar38 = local_37c + uVar38;
      if (0 < (longlong)local_408) {
        uVar52 = 0;
        local_350 = (TArray<int,TSizedDefaultAllocator<32>_> *)&local_3f0->SkinnedTriangleMeshes;
        lVar46 = 0;
        lVar51 = (longlong)(int)uVar38 * 0x30;
        lVar53 = (longlong)(int)uVar38 * 4;
        do {
          pTVar39 = local_350;
          _Var22 = UE::Math::TTransform<float>::Identity.Scale3D;
          _Var21 = UE::Math::TTransform<float>::Identity.Translation;
          _Var20 = UE::Math::TTransform<float>::Identity.Rotation;
          uVar40 = 0;
          if ((int)uVar38 < local_390.ArrayNum) {
            uVar40 = ~uVar38 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar25 = local_3d0;
          *(__m128 *)(&(local_390.DataPtr)->field_0x0 + lVar51) = _Var20;
          *(__m128 *)(&(local_390.DataPtr)->field_0x10 + lVar51) = _Var21;
          *(__m128 *)(&(local_390.DataPtr)->field_0x20 + lVar51) = _Var22;
          uVar40 = 0;
          if ((int)uVar52 < (local_3d0->SkinnedTriangleMeshes).ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar44 = *(int *)((pFVar25->SkinnedTriangleMeshes).AllocatorInstance.Data + lVar46 + 8);
          if ((iVar44 < 0) || (local_3d8->ArrayNum <= iVar44)) {
            uVar64 = 0xffffffff;
          }
          else {
            if ((iVar44 < 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar64 = *(undefined4 *)((local_3d8->AllocatorInstance).Data + (longlong)iVar44 * 4);
          }
          uVar40 = 0;
          if ((int)uVar38 < local_400.ArrayNum) {
            uVar40 = ~uVar38 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(undefined4 *)((longlong)local_400.DataPtr + lVar53) = uVar64;
          if (6 < (byte)LogChaosCloth._0_1_) {
            uVar40 = 0;
            if ((int)uVar38 < local_400.ArrayNum) {
              uVar40 = ~uVar38 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
          pFVar25 = local_3d0;
          uVar40 = 0;
          if ((int)uVar52 < (local_3d0->SkinnedTriangleMeshes).ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          plVar8 = *(longlong **)((pFVar25->SkinnedTriangleMeshes).AllocatorInstance.Data + lVar46);
          (**(code **)(*plVar8 + 0x38))(plVar8,&local_358);
          uVar40 = 0;
          if ((int)uVar52 < (pFVar25->SkinnedTriangleMeshes).ArrayNum) {
            uVar40 = ~uVar52 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar7 = (local_3d0->SkinnedTriangleMeshes).AllocatorInstance.Data;
          iVar44 = pTVar39->ArrayNum;
          if (iVar44 == pTVar39->ArrayMax) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x888,&pTVar39->AllocatorInstance,&pTVar39->ArrayMax);
          }
          pTVar39->ArrayNum = iVar44 + 1;
          pFVar43 = (pTVar39->AllocatorInstance).Data + (longlong)iVar44 * 0x88;
          DefaultConstructItems<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int>
                    (pFVar43,1);
          *(uint *)pFVar43 = uVar38;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar43 + 8),
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     (pFVar7 + (longlong)(int)uVar52 * 0x20 + 0x10));
          puVar9 = *(undefined8 **)(pFVar43 + 0x18);
          if (puVar9 != local_358) {
            *(undefined8 **)(pFVar43 + 0x18) = local_358;
            if (local_358 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_358 + 1) = *(int *)(local_358 + 1) + 1;
              UNLOCK();
            }
            if (puVar9 != (undefined8 *)0x0) {
              LOCK();
              piVar34 = (int *)(puVar9 + 1);
              iVar44 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if ((iVar44 == 1) && (*(int *)((longlong)puVar9 + 0xc) == 0)) {
                (**(code **)*puVar9)(puVar9,1);
              }
            }
          }
          puVar9 = local_358;
          if ((*(char *)(local_358 + 3) != '\x12') &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("T_DERIVED::StaticType() == Type",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                  ,0xc2,L""), bVar26)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          TArrayCollection::ResizeHelper
                    ((TArrayCollection *)(pFVar43 + 0x20),*(int *)(puVar9 + 0x2e));
          iVar44 = *local_420;
          pFVar5 = (local_3e0->Evolution).Ptr;
          if (pFVar5 == (FEvolution *)0x0) {
            pFVar37 = &((local_3e0->PBDEvolution).Ptr)->MCollisionParticles;
          }
          else {
            pFVar31 = Softs::FEvolution::GetCollisionParticleRange(pFVar5,iVar44);
            if ((*(longlong *)&pFVar31->field_0x8 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Particles",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                    ,0x57,L""), bVar26)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar37 = *(FSolverCollisionParticles **)&pFVar31->field_0x8;
            iVar44 = *(int *)&pFVar31->field_0x10;
          }
          (**(code **)(pFVar37->_padding_ + 0x10))(pFVar37,iVar44 + uVar38);
          if (local_358 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(local_358 + 1);
            iVar44 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if ((iVar44 == 1) && (*(int *)((longlong)local_358 + 0xc) == 0)) {
              (**(code **)*local_358)(local_358,1);
            }
          }
          uVar38 = uVar38 + 1;
          uVar52 = uVar52 + 1;
          lVar51 = lVar51 + 0x30;
          lVar53 = lVar53 + 4;
          lVar46 = lVar46 + 0x20;
          local_408 = (FClothingSimulationCloth *)&local_408[-1].field_0x15f;
        } while (local_408 != (FClothingSimulationCloth *)0x0);
      }
    }
  }
  if (local_190.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_190.SecondaryData);
  }
  return;
}

// AddParticles @ 14dbb9910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::AddParticles
          (FLODData *this,FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  FEvolution *pFVar2;
  code *pcVar3;
  FClothingSimulationSolver *pFVar4;
  TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
  *pTVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar11;
  longlong *plVar12;
  FCollectionPropertyConstFacade *this_00;
  FString *pFVar13;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar14;
  int *piVar15;
  FSolverParticlesRange *pFVar16;
  int iVar17;
  undefined1 *puVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  undefined8 uVar23;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar24;
  longlong lVar25;
  FTriangleMesh *pFVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float local_res8;
  float fStackX_c;
  FClothingSimulationSolver *local_res10;
  undefined8 local_res18;
  int local_res20;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_398;
  int local_388;
  int iStack_384;
  int local_380;
  longlong local_378;
  longlong local_370;
  undefined1 local_368 [8];
  float local_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float fStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
  *local_318;
  int *local_310;
  undefined8 local_308;
  TArrayView<float_const_,int> local_300;
  FClothingSimulationSolver **local_2f0;
  FCollectionPropertyConstFacade *local_2e8;
  FCollectionPropertyConstFacade *local_2e0;
  FCollectionPropertyConstFacade *local_2d8;
  TVector<float,2> local_2d0;
  FCollectionPropertyConstFacade *local_2c8;
  TVector2<float>_u_0 local_2c0;
  TVector<float,2> local_2b8;
  longlong local_2b0;
  int local_2a8;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  FString local_288;
  FString local_278;
  code *local_268;
  int **local_260;
  code *local_258;
  int **local_250;
  TArrayView<float_const_,int> local_248;
  int local_238 [2];
  longlong *local_230;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  undefined8 local_200;
  void *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  TArrayView<float_const_,int> local_198;
  TArrayView<float_const_,int> local_188;
  longlong local_178;
  int *local_170;
  code *local_168;
  int **local_160;
  FString local_158;
  int local_148 [2];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float local_130;
  float local_12c;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_a8 [6];
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0xcb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0xcc,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->Mesh == (FClothingSimulationMesh *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth->Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0xcd,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar11 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                    *)&this->SolverData,local_res10);
  puVar18 = &pTVar11->field_0x8;
  if (pTVar11 ==
      (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
       *)0x0) {
    puVar18 = (undefined1 *)0x0;
  }
  if ((puVar18 != (undefined1 *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SolverData.Find(Solver)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_2f0 = &local_res10;
  TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<Chaos::FClothingSimulationSolver_*_const_&>_>
            ((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
              *)&this->SolverData,
             (TKeyInitializer<Chaos::FClothingSimulationSolver_*_const_&> *)local_368,
             (bool *)&local_2f0);
  lVar22 = *(longlong *)&this->SolverData;
  lVar28 = (longlong)(int)local_368._0_4_ * 0x1b8;
  *(int *)(lVar28 + 8 + lVar22) = param_3;
  local_378 = lVar28;
  local_370 = lVar22;
  iVar8 = FClothingSimulationSolver::AddParticles(local_res10,this->NumParticles,param_2->GroupId);
  *(int *)(lVar28 + 0xc + lVar22) = iVar8;
  if (this->NumParticles == 0) {
    return;
  }
  if ((local_res10->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
    uVar10 = (this->NoOffsetTriangleMesh).MElements.ArrayNum;
    local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_398.ArrayNum = 0;
    local_398.ArrayMax = 0;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (0 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar10,&local_398.AllocatorInstance,0,&local_398.ArrayMax);
    }
    iVar8 = (this->NoOffsetTriangleMesh).MElements.ArrayNum;
    pFVar21 = (this->NoOffsetTriangleMesh).MElements.AllocatorInstance.Data;
    pFVar1 = pFVar21 + (longlong)iVar8 * 0xc;
    while( true ) {
      if ((this->NoOffsetTriangleMesh).MElements.ArrayNum != iVar8) {
        local_res8 = (float)((uint)local_res8 & 0xffffff00);
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      iVar9 = *(int *)(lVar28 + 0xc + lVar22);
      if (pFVar21 == pFVar1) break;
      local_388 = *(int *)pFVar21 + iVar9;
      iStack_384 = *(int *)(pFVar21 + 4) + iVar9;
      local_380 = *(int *)(pFVar21 + 8) + iVar9;
      if (((local_398.AllocatorInstance.Data <= (FScriptContainerElement *)&local_388) &&
          ((FScriptContainerElement *)&local_388 <
           local_398.AllocatorInstance.Data + (longlong)local_398.ArrayMax * 0xc)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_398.ArrayNum == local_398.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&local_398.AllocatorInstance,&local_398.ArrayMax);
        local_398.ArrayNum = iVar9;
      }
      lVar19 = (longlong)local_398.ArrayNum;
      pFVar21 = pFVar21 + 0xc;
      local_398.ArrayNum = local_398.ArrayNum + 1;
      *(ulonglong *)(local_398.AllocatorInstance.Data + lVar19 * 0xc) =
           CONCAT44(iStack_384,local_388);
      *(int *)(local_398.AllocatorInstance.Data + lVar19 * 0xc + 8) = local_380;
    }
    FTriangleMesh::Init((FTriangleMesh *)(lVar28 + lVar22 + 0x10),&local_398,iVar9,
                        this->NumParticles + -1 + iVar9,true);
    FTriangleMesh::GetPointToTriangleMap((FTriangleMesh *)(lVar28 + lVar22 + 0x10),local_a8);
    param_2 = local_res18;
    param_3 = local_res20;
    if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.AllocatorInstance.Data);
      param_2 = local_res18;
      param_3 = local_res20;
    }
  }
  (**(code **)(param_2->Mesh->_padding_ + 0x128))(param_2->Mesh,&local_2b0,param_3);
  lVar28 = lVar28 + lVar22;
  TSet<TTuple<FName,Chaos::FClothingAccessoryMeshData>,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,Chaos::FClothingAccessoryMeshData>,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>,FDefaultSetAllocator>
             *)(lVar28 + 0x160),local_2a8);
  for (lVar22 = local_2b0; lVar22 != local_2b0 + (longlong)local_2a8 * 8; lVar22 = lVar22 + 8) {
    plVar12 = (longlong *)
              (**(code **)(param_2->Mesh->_padding_ + 0x130))(param_2->Mesh,param_3,lVar22);
    if (plVar12 != (longlong *)0x0) {
      local_238[0] = this->NumParticles;
      local_228 = (void *)0x0;
      local_220 = 0;
      local_218 = (void *)0x0;
      local_210 = 0;
      local_208 = (void *)0x0;
      local_200 = 0;
      local_1f8 = (void *)0x0;
      local_1f0 = 0;
      local_1e8 = (void *)0x0;
      local_1e0 = 0;
      local_1d8 = (void *)0x0;
      local_1d0 = 0;
      local_1c8 = (void *)0x0;
      local_1c0 = 0;
      local_230 = plVar12;
      iVar8 = (**(code **)(*plVar12 + 8))(plVar12);
      if ((local_238[0] != iVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumParticles == AccessoryMesh.GetNumPoints()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingAccessoryMeshData.cpp"
                             ,0x11,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_170 = local_238;
      local_178 = lVar22;
      TSet<TTuple<FName,Chaos::FClothingAccessoryMeshData>,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,Chaos::FClothingAccessoryMeshData_&&>_>
                ((TSet<TTuple<FName,Chaos::FClothingAccessoryMeshData>,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>,FDefaultSetAllocator>
                  *)(lVar28 + 0x160),
                 (TPairInitializer<FName_const_&,Chaos::FClothingAccessoryMeshData_&&> *)
                 (local_368 + 4),(bool *)&local_178);
      lVar19 = *(longlong *)(lVar28 + 0x160);
      lVar25 = (longlong)(int)local_368._4_4_ * 0x90;
      if (local_1c8 != (void *)0x0) {
        FMemory::Free(local_1c8);
      }
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      if (local_1e8 != (void *)0x0) {
        FMemory::Free(local_1e8);
      }
      if (local_1f8 != (void *)0x0) {
        FMemory::Free(local_1f8);
      }
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      if (local_218 != (void *)0x0) {
        FMemory::Free(local_218);
      }
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (lVar25 + 0x18 + lVar19),*(int *)(lVar25 + 8 + lVar19),Default);
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (lVar25 + 0x28 + lVar19),*(int *)(lVar25 + 8 + lVar19),Default);
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (lVar25 + 0x38 + lVar19),*(int *)(lVar25 + 8 + lVar19),Default);
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (lVar25 + 0x48 + lVar19),*(int *)(lVar25 + 8 + lVar19),Default);
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (lVar25 + 0x58 + lVar19),*(int *)(lVar25 + 8 + lVar19),Default);
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (lVar25 + 0x68 + lVar19),*(int *)(lVar25 + 8 + lVar19),Default);
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (lVar25 + 0x78 + lVar19),*(int *)(lVar25 + 8 + lVar19),Default);
      param_2 = local_res18;
      param_3 = local_res20;
    }
  }
  pFVar26 = (FTriangleMesh *)(local_370 + 0x10 + local_378);
  if ((local_res10->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
    pFVar26 = &this->NoOffsetTriangleMesh;
  }
  iVar8 = 0;
  FClothingSimulationMesh::Update
            (param_2->Mesh,local_res10,-1,param_3,0,*(int *)(local_378 + 0xc + local_370),-1,0.0);
  UpdateAccessoryMeshes(this,local_res10);
  pFVar4 = local_res10;
  if ((local_res10 == (FClothingSimulationSolver *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x1db,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar11 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                    *)&this->SolverData,pFVar4);
  if ((pTVar11 ==
       (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&pTVar11->field_0xc != -1) {
    FClothingSimulationSolver::ResetStartPose(pFVar4,*(int *)&pTVar11->field_0xc,this->NumParticles)
    ;
    ResetAccessoryMeshes(this,pFVar4);
  }
  UpdateNormals(this,local_res10);
  if ((param_2->Config == (FClothingSimulationConfig *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth->Config",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x103,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(param_2->Config,local_res20);
  iVar9 = this->NumParticles;
  pFVar13 = ::FName::ToString(&Softs::FPBDSphericalConstraint::MaxDistanceName,&local_128);
  pFVar13 = ::FString::FString(&local_e8,pFVar13);
  local_2e8 = this_00;
  Softs::FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_00,&local_1a8,&Softs::FPBDSphericalConstraint::MaxDistanceName,
             (<lambda_1> *)&local_2e8,pFVar13,(int *)0x0);
  local_318 = (TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               *)&this->WeightMaps;
  pTVar14 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find(local_318,&local_1a8);
  fVar31 = __real_3f800000;
  if (pTVar14 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_298 = 0;
    uStack_290 = 0;
    local_298._0_4_ = 0;
    local_298._4_4_ = 0;
    uVar33 = (undefined4)local_298;
    uVar34 = local_298._4_4_;
  }
  else {
    local_298 = *(undefined8 *)&pTVar14->field_0x10;
    uStack_290 = *(undefined4 *)&pTVar14->field_0x18;
    uStack_28c = *(undefined4 *)&pTVar14->field_0x1c;
    iVar8 = *(int *)&pTVar14->field_0x18;
    uVar33 = *(undefined4 *)&pTVar14->field_0x10;
    uVar34 = *(undefined4 *)&pTVar14->field_0x14;
  }
  uVar6 = uStack_28c;
  uVar35 = uStack_290;
  local_358 = 0.0;
  fStack_354 = 1.0;
  piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_00->KeyNameIndices,Softs::FPBDSphericalConstraint::MaxDistanceName);
  local_130 = local_358;
  fStack_34c = fStack_354;
  if ((piVar15 != (int *)0x0) && (iVar17 = *piVar15, iVar17 != -1)) {
    fVar29 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_00,iVar17,&this_00->HighValueArray);
    local_360 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (this_00,iVar17,&this_00->LowValueArray);
    fStack_35c = fVar29;
    local_130 = local_360;
    fStack_34c = fVar29;
  }
  iVar17 = 0;
  local_140 = uVar33;
  uStack_13c = uVar34;
  uStack_134 = uVar6;
  if (iVar8 != iVar9) {
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1b8._0_4_ = 0;
    local_1b8._4_4_ = 0;
    uVar35 = 0;
    local_140 = (undefined4)local_1b8;
    uStack_13c = local_1b8._4_4_;
    uStack_134 = uStack_1ac;
  }
  local_12c = fStack_34c - local_130;
  local_148[0] = iVar9;
  uStack_138 = uVar35;
  local_350 = local_130;
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FName::ToString(&KinematicVertices3DName,&local_118);
  pFVar13 = ::FString::FString(&local_d8,pFVar13);
  local_2e0 = this_00;
  Softs::FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_00,&local_288,&KinematicVertices3DName,(<lambda_1> *)&local_2e0,pFVar13,(int *)0x0
            );
  pwVar27 = L"";
  if (local_288.Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    iVar17 = local_288.Data.ArrayNum + -1;
    pwVar20 = (wchar_t *)local_288.Data.AllocatorInstance.Data;
  }
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar20);
  iVar8 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                      *)&this->VertexSets,uVar10,&local_288);
  if ((iVar8 == -1) ||
     (lVar22 = (longlong)iVar8 * 0x20 + *(longlong *)&this->VertexSets, lVar22 == 0)) {
    uVar23 = 0;
  }
  else {
    uVar23 = *(undefined8 *)(lVar22 + 0x10);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_310 = local_148;
  local_308 = uVar23;
  piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_00->KeyNameIndices,MassModeName);
  if ((piVar15 == (int *)0x0) || (*piVar15 == -1)) {
    iVar8 = 2;
  }
  else {
    iVar8 = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (this_00,*piVar15,&this_00->LowValueArray);
  }
  pTVar24 = &this_00->LowValueArray;
  piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_00->KeyNameIndices,MinPerParticleMassName);
  fVar29 = __real_38d1b717;
  fVar30 = __real_38d1b717;
  if ((piVar15 != (int *)0x0) && (*piVar15 != -1)) {
    fVar30 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_00,*piVar15,pTVar24);
  }
  if (fVar30 <= __real_322bcc77) {
    fVar30 = __real_322bcc77;
  }
  iVar9 = 0;
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&this_00->KeyNameIndices,MassValueName);
      fVar29 = __real_3eb33333;
      if ((piVar15 != (int *)0x0) && (*piVar15 != -1)) {
        fVar29 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                           (this_00,*piVar15,pTVar24);
      }
      pFVar4 = local_res10;
      local_250 = &local_310;
      local_258 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothingSimulationCloth::FLODData::AddParticles'::__l2::<lambda_1>,bool,int>
                  ::Call;
      pFVar2 = (local_res10->Evolution).Ptr;
      iVar8 = *(int *)(local_378 + 0xc + local_370);
      if (pFVar2 != (FEvolution *)0x0) {
        pFVar16 = Softs::FEvolution::GetSoftBodyParticles(pFVar2,iVar8);
        fVar32 = FClothingSimulationSolver::SetParticleMassPerArea(pFVar4,pFVar16,pFVar26);
        if (0.0 < fVar32) {
          fVar31 = fVar29 / fVar32;
        }
        local_198.DataPtr = (float *)0x0;
        local_198.ArrayNum = 0;
        local_338 = fVar31;
        local_334 = fVar31;
        FClothingSimulationSolver::ParticleMassUpdateDensity
                  (pFVar4,pFVar16,pFVar26,(TVector<float,2> *)&local_338,&local_198);
        FClothingSimulationSolver::ParticleMassClampAndKinematicStateUpdate
                  (pFVar4,pFVar16,fVar30,(TFunctionRef<bool___cdecl(int)> *)&local_258);
        return;
      }
      iVar9 = Softs::FPBDEvolution::GetParticleRangeSize((local_res10->PBDEvolution).Ptr,iVar8);
      fVar32 = FClothingSimulationSolver::SetParticleMassPerArea(pFVar4,iVar8,iVar9,pFVar26);
      if (0.0 < fVar32) {
        fVar31 = fVar29 / fVar32;
      }
      local_188.DataPtr = (float *)0x0;
      local_188.ArrayNum = 0;
      local_330 = fVar31;
      local_32c = fVar31;
      FClothingSimulationSolver::ParticleMassUpdateDensity
                (pFVar4,pFVar26,iVar8,iVar9,(TVector<float,2> *)&local_330,&local_188);
      FClothingSimulationSolver::ParticleMassClampAndKinematicStateUpdate
                (pFVar4,iVar8,iVar9,fVar30,(TFunctionRef<bool___cdecl(int)> *)&local_258);
      return;
    }
    if (iVar8 == 2) {
      local_340 = 0x3eb33333;
      uStack_33c = 0x3eb33333;
      piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&this_00->KeyNameIndices,MassValueName);
      if ((piVar15 == (int *)0x0) || (iVar8 = *piVar15, iVar8 == -1)) {
        local_res18 = (FClothingSimulationCloth *)CONCAT44(uStack_33c,local_340);
      }
      else {
        fVar31 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                           (this_00,iVar8,&this_00->HighValueArray);
        local_348 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                              (this_00,iVar8,pTVar24);
        local_res18 = (FClothingSimulationCloth *)CONCAT44(fVar31,local_348);
        fStack_344 = fVar31;
      }
      pFVar13 = ::FName::ToString(&MassValueName,&local_108);
      pFVar13 = ::FString::FString(&local_c8,pFVar13);
      local_2d8 = this_00;
      Softs::FCollectionPropertyConstFacade::
      SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
                (this_00,&local_278,&MassValueName,(<lambda_1> *)&local_2d8,pFVar13,(int *)0x0);
      if (local_278.Data.ArrayNum != 0) {
        iVar9 = local_278.Data.ArrayNum + -1;
        pwVar27 = (wchar_t *)local_278.Data.AllocatorInstance.Data;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar27);
      pTVar5 = local_318;
      iVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(local_318,uVar10,&local_278);
      if ((iVar8 == -1) ||
         (lVar22 = *(longlong *)&pTVar5->Elements + (longlong)iVar8 * 0x28, lVar22 == 0)) {
        local_300.DataPtr = (float *)0x0;
        local_300._8_8_ = (ulonglong)(uint)local_300._12_4_ << 0x20;
      }
      else {
        local_300.DataPtr = *(float **)(lVar22 + 0x10);
        local_300._8_8_ = *(longlong *)(lVar22 + 0x18);
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      pFVar4 = local_res10;
      local_260 = &local_310;
      local_268 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FClothingSimulationCloth::FLODData::AddParticles'::__l2::<lambda_1>,bool,int>
                  ::Call;
      pFVar2 = (local_res10->Evolution).Ptr;
      iVar8 = *(int *)(local_378 + 0xc + local_370);
      if (pFVar2 != (FEvolution *)0x0) {
        pFVar16 = Softs::FEvolution::GetSoftBodyParticles(pFVar2,iVar8);
        FClothingSimulationSolver::SetParticleMassPerArea(pFVar4,pFVar16,pFVar26);
        local_res8 = (float)local_res18 * fVar29;
        fStackX_c = local_res18._4_4_ * fVar29;
        local_2d0._4_4_ = fStackX_c;
        local_2d0._0_4_ = local_res8;
        FClothingSimulationSolver::ParticleMassUpdateDensity
                  (pFVar4,pFVar16,pFVar26,&local_2d0,&local_300);
        FClothingSimulationSolver::ParticleMassClampAndKinematicStateUpdate
                  (pFVar4,pFVar16,fVar30,(TFunctionRef<bool___cdecl(int)> *)&local_268);
        return;
      }
      iVar9 = Softs::FPBDEvolution::GetParticleRangeSize((local_res10->PBDEvolution).Ptr,iVar8);
      FClothingSimulationSolver::SetParticleMassPerArea(pFVar4,iVar8,iVar9,pFVar26);
      local_res8 = (float)local_res18 * fVar29;
      fStackX_c = local_res18._4_4_ * fVar29;
      local_2b8._4_4_ = fStackX_c;
      local_2b8._0_4_ = local_res8;
      FClothingSimulationSolver::ParticleMassUpdateDensity
                (pFVar4,pFVar26,iVar8,iVar9,&local_2b8,&local_300);
      FClothingSimulationSolver::ParticleMassClampAndKinematicStateUpdate
                (pFVar4,iVar8,iVar9,fVar30,(TFunctionRef<bool___cdecl(int)> *)&local_268);
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x11e,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_320 = 0x3eb33333;
  uStack_31c = 0x3eb33333;
  piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_00->KeyNameIndices,MassValueName);
  if ((piVar15 == (int *)0x0) || (iVar8 = *piVar15, iVar8 == -1)) {
    local_2c0._s_0.Y = (float)uStack_31c;
    local_2c0._s_0.X = (float)local_320;
  }
  else {
    fVar31 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_00,iVar8,&this_00->HighValueArray);
    local_328 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (this_00,iVar8,pTVar24);
    local_2c0._s_0.Y = fVar31;
    local_2c0._s_0.X = local_328;
    fStack_324 = fVar31;
  }
  pFVar13 = ::FName::ToString(&MassValueName,&local_f8);
  pFVar13 = ::FString::FString(&local_b8,pFVar13);
  local_2c8 = this_00;
  Softs::FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_00,&local_158,&MassValueName,(<lambda_1> *)&local_2c8,pFVar13,(int *)0x0);
  pTVar14 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find(local_318,&local_158);
  if (pTVar14 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_248.DataPtr = (float *)0x0;
    local_248._8_8_ = (ulonglong)(uint)local_248._12_4_ << 0x20;
  }
  else {
    local_248.DataPtr = *(float **)&pTVar14->field_0x10;
    local_248._8_8_ = *(undefined8 *)&pTVar14->field_0x18;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  local_160 = &local_310;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FClothingSimulationCloth::FLODData::AddParticles'::__l2::<lambda_1>,bool,int>
              ::Call;
  FClothingSimulationSolver::SetParticleMassUniform
            (local_res10,*(int *)(local_378 + 0xc + local_370),(TVector2<float> *)&local_2c0._s_0,
             &local_248,fVar30,pFVar26,(TFunctionRef<bool___cdecl(int)> *)&local_168);
  return;
}

// ApplyPreSimulationTransformsToAccessoryMeshes @ 14dbbea40

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::ApplyPreSimulationTransformsToAccessoryMeshes
          (FLODData *this,FClothingSimulationSolver *param_1,TVector<float,3> *param_2,
          TRigidTransform<float,3> *param_3,float param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TVector<float,3> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  TVector<float,3> *local_res18;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res18 = param_2;
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x1fe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar9 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                   *)&this->SolverData,param_1);
  if ((pTVar9 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                  *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = 0;
  puVar1 = &pTVar9->field_0x170;
  iVar3 = *(int *)&pTVar9->field_0x188;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&pTVar9->field_0x180;
    if (*(uint **)&pTVar9->field_0x180 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14dbbeb5d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = iVar15 + -1 + local_res10;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14dbbeb5d:
  uVar12 = *(uint *)&pTVar9->field_0x188;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar13);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = local_ac;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_7c,*(int *)&pTVar9->field_0x168 - *(int *)&pTVar9->field_0x194);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_res18;
  uVar7 = *(uint *)&pTVar9->field_0x188;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&pTVar9->field_0x180;
    if (*(undefined1 **)&pTVar9->field_0x180 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14dbbec70;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14dbbec70:
  while( true ) {
    if (*(int *)&pTVar9->field_0x168 - *(int *)&pTVar9->field_0x194 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,Chaos::FClothingAccessoryMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar12) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FClothingAccessoryMeshData::ApplyPreSimulationTransforms
              ((FClothingAccessoryMeshData *)
               ((longlong)TStack_70.CurrentBitIndex * 0x90 + *(longlong *)&pTVar9->field_0x160 + 8),
               pTVar5,param_3,param_4);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// BuildTriangleMesh @ 14dbbf0d0

FTriangleMesh * __cdecl
Chaos::FClothingSimulationCloth::FLODData::BuildTriangleMesh
          (FTriangleMesh *__return_storage_ptr__,TArrayView<unsigned_int_const_,int> *param_1,
          int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FTriangleMesh *pFVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_38;
  
  FTriangleMesh::FTriangleMesh(__return_storage_ptr__);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  uVar9 = iVar1 / 3 + (iVar1 >> 0x1f) +
          (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar9,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
  }
  lVar10 = (longlong)(int)uVar9;
  if (0 < (int)uVar9) {
    uVar9 = 2;
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)(uVar9 - 2) < param_1->ArrayNum) {
        uVar6 = ~(uVar9 - 2) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FTriangleMesh *)(*pcVar4)();
        return pFVar7;
      }
      uVar2 = *(undefined4 *)(lVar11 + (longlong)param_1->DataPtr);
      uVar6 = 0;
      if ((int)(uVar9 - 1) < param_1->ArrayNum) {
        uVar6 = ~(uVar9 - 1) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FTriangleMesh *)(*pcVar4)();
        return pFVar7;
      }
      uVar3 = *(undefined4 *)(lVar11 + 4 + (longlong)param_1->DataPtr);
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FTriangleMesh *)(*pcVar4)();
        return pFVar7;
      }
      local_50 = *(undefined4 *)(lVar11 + 8 + (longlong)param_1->DataPtr);
      local_58 = uVar2;
      uStack_54 = uVar3;
      if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FTriangleMesh *)(*pcVar4)();
        return pFVar7;
      }
      if (local_48.ArrayNum == local_48.ArrayMax) {
        local_48.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      lVar8 = (longlong)local_48.ArrayNum;
      uVar9 = uVar9 + 3;
      lVar11 = lVar11 + 0xc;
      local_48.ArrayNum = local_48.ArrayNum + 1;
      *(ulonglong *)(local_48.AllocatorInstance.Data + lVar8 * 0xc) = CONCAT44(uStack_54,local_58);
      *(undefined4 *)(local_48.AllocatorInstance.Data + lVar8 * 0xc + 8) = local_50;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  FTriangleMesh::Init(__return_storage_ptr__,&local_48,0,param_2 + -1,true);
  FTriangleMesh::GetPointToTriangleMap(__return_storage_ptr__,&local_38);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Enable @ 14dbef450

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::Enable
          (FLODData *this,FClothingSimulationSolver *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar3;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x1cf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                   *)&this->SolverData,param_1);
  if (pTVar3 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&pTVar3->field_0xc != -1) {
    FClothingSimulationSolver::EnableParticles(param_1,*(int *)&pTVar3->field_0xc,param_2);
  }
  return;
}

// Enable @ 14dbef500

void __thiscall
Chaos::FClothingSimulationCollider::FLODData::Enable
          (FLODData *this,FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar3;
  FClothingSimulationSolver *local_18;
  FClothingSimulationCloth *local_10;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                       ,0x1c3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (FClothingSimulationCloth *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cloth",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                       ,0x1c4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NumGeometries != 0) {
    local_18 = param_1;
    local_10 = param_2;
    pTVar3 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                     *)&this->CollisionRangeIds,
                    (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                     *)&local_18);
    if (pTVar3 == (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
                   *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FClothingSimulationSolver::EnableCollisionParticles(param_1,*(int *)&pTVar3->field_0x10,param_3)
    ;
  }
  return;
}

// PreSubstepAccessoryMeshes @ 14dc09f10

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::PreSubstepAccessoryMeshes
          (FLODData *this,FClothingSimulationSolver *param_1,float param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x209,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                   *)&this->SolverData,param_1);
  if ((pTVar8 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                  *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = 0;
  puVar1 = &pTVar8->field_0x170;
  iVar3 = *(int *)&pTVar8->field_0x188;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&pTVar8->field_0x180;
    if (*(uint **)&pTVar8->field_0x180 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc0a02d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14dc0a02d:
  uVar11 = *(uint *)&pTVar8->field_0x188;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&pTVar8->field_0x168 - *(int *)&pTVar8->field_0x194);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&pTVar8->field_0x188;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&pTVar8->field_0x180;
    if (*(undefined1 **)&pTVar8->field_0x180 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc0a130;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14dc0a130:
  while( true ) {
    if (*(int *)&pTVar8->field_0x168 - *(int *)&pTVar8->field_0x194 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,Chaos::FClothingAccessoryMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FClothingAccessoryMeshData::PreSubstep
              ((FClothingAccessoryMeshData *)
               ((longlong)TStack_60.CurrentBitIndex * 0x90 + *(longlong *)&pTVar8->field_0x160 + 8),
               param_2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Remove @ 14dc0d390

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::Remove(FLODData *this,FClothingSimulationSolver *param_1)

{
  uint uVar1;
  FClothingSimulationSolver *local_res8 [4];
  
  if (*(int *)&(this->SolverData).field_0x8 != *(int *)&(this->SolverData).field_0x34) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_res8[0] = param_1;
    TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
    ::RemoveImpl<Chaos::FClothingSimulationSolver_const_*>
              ((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                *)&this->SolverData,uVar1 >> 0x10 ^ uVar1,local_res8);
  }
  return;
}

// Remove @ 14dc0d3f0

void __thiscall
Chaos::FClothingSimulationCollider::FLODData::Remove
          (FLODData *this,FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2)

{
  FClothingSimulationSolver *local_18;
  FClothingSimulationCloth *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
            *)&this->CollisionRangeIds,
           (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
            *)&local_18);
  return;
}

// ResetAccessoryMeshes @ 14dc0eaa0

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::ResetAccessoryMeshes
          (FLODData *this,FClothingSimulationSolver *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,499,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                   *)&this->SolverData,param_1);
  if ((pTVar8 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                  *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = 0;
  puVar1 = &pTVar8->field_0x170;
  iVar3 = *(int *)&pTVar8->field_0x188;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&pTVar8->field_0x180;
    if (*(uint **)&pTVar8->field_0x180 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc0ebbd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14dc0ebbd:
  uVar11 = *(uint *)&pTVar8->field_0x188;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar12);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&pTVar8->field_0x168 - *(int *)&pTVar8->field_0x194);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&pTVar8->field_0x188;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&pTVar8->field_0x180;
    if (*(undefined1 **)&pTVar8->field_0x180 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc0ecc0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14dc0ecc0:
  while( true ) {
    if (*(int *)&pTVar8->field_0x168 - *(int *)&pTVar8->field_0x194 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FName,Chaos::FClothingAccessoryMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FClothingAccessoryMeshData::ResetStartPose
              ((FClothingAccessoryMeshData *)
               ((longlong)TStack_50.CurrentBitIndex * 0x90 + *(longlong *)&pTVar8->field_0x160 + 8))
    ;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ResetStartPose @ 14dc10330

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::ResetStartPose
          (FLODData *this,FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar3;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x1db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                   *)&this->SolverData,param_1);
  if (pTVar3 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&pTVar3->field_0xc != -1) {
    FClothingSimulationSolver::ResetStartPose(param_1,*(int *)&pTVar3->field_0xc,this->NumParticles)
    ;
    ResetAccessoryMeshes(this,param_1);
  }
  return;
}

// ResetStartPose @ 14dc103f0

void __thiscall
Chaos::FClothingSimulationCollider::FLODData::ResetStartPose
          (FLODData *this,FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar8;
  TRotation<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  FClothComplexColliders *this_00;
  TRigidTransform<float,3> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  FClothingSimulationSolver *local_58;
  FClothingSimulationCloth *local_50;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_48;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_38;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_28;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                       ,0x1ce,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2 == (FClothingSimulationCloth *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cloth",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                       ,0x1cf,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->NumGeometries != 0) {
    local_58 = param_1;
    local_50 = param_2;
    pTVar8 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                     *)&this->CollisionRangeIds,
                    (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                     *)&local_58);
    if (pTVar8 == (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
                   *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = *(int *)&pTVar8->field_0x10;
    iVar3 = this->NumGeometries;
    lVar12 = (longlong)iVar3;
    Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
              (&local_48,&param_1->Evolution,&param_1->PBDEvolution,iVar2,
               (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->CollisionTransforms).field_0x8);
    Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
              (&local_38,&param_1->Evolution,&param_1->PBDEvolution,iVar2,
               (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->OldCollisionTransforms).field_0x8);
    pTVar9 = FClothingSimulationSolver::GetCollisionParticleRs(param_1,iVar2);
    pTVar10 = FClothingSimulationSolver::GetCollisionParticleXs(param_1,iVar2);
    Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
              (&local_28,&param_1->Evolution,&param_1->PBDEvolution,iVar2,
               (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->LastSubframeCollisionTransformsCCD).field_0x8);
    if (0 < iVar3) {
      lVar13 = (longlong)local_28.DataPtr - (longlong)local_48.DataPtr;
      pTVar11 = local_48.DataPtr;
      do {
        uVar6 = *(undefined8 *)&pTVar11->field_0x8;
        puVar1 = (undefined8 *)
                 ((longlong)pTVar11 + ((longlong)local_38.DataPtr - (longlong)local_48.DataPtr));
        *puVar1 = *(undefined8 *)pTVar11;
        puVar1[1] = uVar6;
        uVar6 = *(undefined8 *)&pTVar11->field_0x18;
        puVar1[2] = *(undefined8 *)&pTVar11->field_0x10;
        puVar1[3] = uVar6;
        uVar6 = *(undefined8 *)&pTVar11->field_0x28;
        puVar1[4] = *(undefined8 *)&pTVar11->field_0x20;
        puVar1[5] = uVar6;
        puVar1 = (undefined8 *)
                 ((longlong)puVar1 +
                 (longlong)local_48.DataPtr + (0x10 - (longlong)local_38.DataPtr));
        uVar5 = *(undefined4 *)(puVar1 + 1);
        *(undefined8 *)pTVar10 = *puVar1;
        *(undefined4 *)&pTVar10->field_0x8 = uVar5;
        uVar6 = *(undefined8 *)&pTVar11->field_0x8;
        *(undefined8 *)pTVar9 = *(undefined8 *)pTVar11;
        *(undefined8 *)&pTVar9->field_0x8 = uVar6;
        uVar6 = *(undefined8 *)&pTVar11->field_0x8;
        *(undefined8 *)((longlong)pTVar11 + lVar13) = *(undefined8 *)pTVar11;
        ((undefined8 *)((longlong)pTVar11 + lVar13))[1] = uVar6;
        uVar6 = *(undefined8 *)&pTVar11->field_0x18;
        puVar1 = (undefined8 *)((longlong)pTVar11 + lVar13 + 0x10);
        *puVar1 = *(undefined8 *)&pTVar11->field_0x10;
        puVar1[1] = uVar6;
        uVar6 = *(undefined8 *)&pTVar11->field_0x28;
        puVar1 = (undefined8 *)((longlong)pTVar11 + lVar13 + 0x20);
        *puVar1 = *(undefined8 *)&pTVar11->field_0x20;
        puVar1[1] = uVar6;
        lVar12 = lVar12 + -1;
        pTVar11 = pTVar11 + 1;
        pTVar10 = pTVar10 + 1;
        pTVar9 = pTVar9 + 1;
      } while (lVar12 != 0);
    }
    this_00 = FClothingSimulationSolver::GetComplexColliders(param_1,iVar2);
    if (this_00 != (FClothComplexColliders *)0x0) {
      FClothComplexColliders::ResetStartPose(this_00);
    }
  }
  return;
}

// Update @ 14dc21f70

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::Update
          (FLODData *this,FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  FPBDSkinnedTriangleMeshCollisionConstraints *pFVar6;
  FClothingSimulationCollider *this_00;
  undefined1 *puVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar12;
  FClothConstraints *this_01;
  FCollectionPropertyConstFacade *pFVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  float fVar19;
  undefined1 local_res8 [8];
  TRotation<double,3> local_68 [2];
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x1a6,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cloth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x1a7,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar12 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                    *)&this->SolverData,param_1);
  if ((pTVar12 ==
       (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
        *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(int *)&pTVar12->field_0xc != -1) {
    this_01 = FClothingSimulationSolver::GetClothConstraints(param_1,*(int *)&pTVar12->field_0xc);
    if ((param_2->Config == (FClothingSimulationConfig *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cloth->Config",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                           ,0x1b1,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar4 = param_1->LocalSpaceScale;
    if ((dVar4 <= __real_3e45798ee0000000) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalSpaceScale > (1.e-8f)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                           ,0x1b3,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar19 = (float)(**(code **)(param_2->Mesh->_padding_ + 0xf0))();
    local_68[0]._0_8_ = *(undefined8 *)&param_2->ReferenceSpaceTransform;
    local_68[0]._8_8_ = *(undefined8 *)&(param_2->ReferenceSpaceTransform).field_0x8;
    local_68[0]._16_8_ = *(undefined8 *)&(param_2->ReferenceSpaceTransform).field_0x10;
    local_68[0]._24_8_ = *(undefined8 *)&(param_2->ReferenceSpaceTransform).field_0x18;
    fVar3 = param_2->MaxDistancesMultiplier;
    pFVar13 = (FCollectionPropertyConstFacade *)
              FClothingSimulationConfig::GetProperties(param_2->Config,*(int *)&pTVar12->field_0x8);
    FClothConstraints::Update
              (this_01,pFVar13,&this->WeightMaps,&this->VertexSets,&this->FaceSets,
               &this->FaceIntMaps,(float)((double)fVar19 / dVar4),fVar3,&param_1->LocalSpaceRotation
               ,local_68);
    pFVar6 = (this_01->SkinnedTriangleCollisionsConstraint).Object;
    if (pFVar6 != (FPBDSkinnedTriangleMeshCollisionConstraints *)0x0) {
      fVar3 = *(float *)&(pFVar6->ClothCollisionThickness).MapView.OffsetRange;
      iVar5 = (param_2->Colliders).ArrayNum;
      fVar19 = fVar3 + *(float *)&(pFVar6->ClothCollisionThickness).MapView.OffsetRange.field_0x4;
      plVar17 = (longlong *)0x0;
      pFVar18 = (param_2->Colliders).AllocatorInstance.Data;
      if (fVar19 <= fVar3) {
        fVar19 = fVar3;
      }
      pFVar1 = pFVar18 + (longlong)iVar5 * 8;
      fVar3 = pFVar6->CollisionThickness;
      while( true ) {
        if ((param_2->Colliders).ArrayNum != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar18 == pFVar1) break;
        this_00 = *(FClothingSimulationCollider **)pFVar18;
        plVar16 = plVar17;
        if ((this_00 == (FClothingSimulationCollider *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Collider",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                               ,0x1bf,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        do {
          uVar10 = FClothingSimulationCollider::GetCollisionRangeId
                             (this_00,param_1,param_2,(ECollisionDataType)plVar16);
          if (*(int *)&(param_1->ComplexColliders).field_0x8 !=
              *(int *)&(param_1->ComplexColliders).field_0x34) {
            puVar7 = *(undefined1 **)&(param_1->ComplexColliders).field_0x40;
            puVar15 = &(param_1->ComplexColliders).field_0x38;
            if (puVar7 != (undefined1 *)0x0) {
              puVar15 = puVar7;
            }
            iVar11 = *(int *)(puVar15 +
                             (ulonglong)
                             (*(int *)&(param_1->ComplexColliders).field_0x48 - 1U & uVar10) * 4);
            if (iVar11 != -1) {
              do {
                lVar2 = *(longlong *)&param_1->ComplexColliders + (longlong)iVar11 * 0x18;
                if (*(uint *)(*(longlong *)&param_1->ComplexColliders + (longlong)iVar11 * 0x18) ==
                    uVar10) {
                  plVar14 = (longlong *)(lVar2 + 8);
                  if (lVar2 == 0) {
                    plVar14 = plVar17;
                  }
                  if ((plVar14 != (longlong *)0x0) && (*plVar14 != 0)) {
                    *(float *)(*plVar14 + 0x124) = fVar19 + fVar3;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar2 + 0x10);
              } while (iVar11 != -1);
            }
          }
          uVar10 = (ECollisionDataType)plVar16 + External;
          plVar16 = (longlong *)(ulonglong)uVar10;
        } while (uVar10 != 3);
        pFVar18 = pFVar18 + 8;
      }
    }
  }
  return;
}

// Update @ 14dc222d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClothingSimulationCollider::FLODData::Update
          (FLODData *this,FClothingSimulationSolver *param_1,FClothingSimulationCloth *param_2,
          TTransform<double> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  uint uVar23;
  TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
  *pTVar24;
  TArrayView<int,int> *pTVar25;
  FClothComplexColliders *this_00;
  longlong lVar26;
  uint uVar27;
  uint *puVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStackY_338 [32];
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_2e8;
  FLODData *local_2d8;
  __m128 local_2c8;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  FClothingSimulationSolver *local_298;
  FClothingSimulationCloth *local_290;
  TArrayView<Chaos::TRigidTransform<float,3>,int> local_288;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> local_278;
  uint local_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  undefined8 local_258;
  undefined1 local_250 [16];
  double local_240;
  undefined1 local_238 [16];
  double local_228;
  TArrayView<int,int> local_220;
  __m128 local_208;
  __m128 local_1f8;
  __m128 local_1e8;
  __m128 local_1d8;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  __m128 local_1a8;
  undefined1 local_198 [8];
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  __m128 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  __m128 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  __m128 local_118;
  ulong64 local_108;
  ulong64 uStack_100;
  ulong64 local_f8;
  ulong64 uStack_f0;
  __m128 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2d8 = this;
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Solver",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                        ,0x19f,L"");
    if (bVar22) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2 == (FClothingSimulationCloth *)0x0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Cloth",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                        ,0x1a0,L"");
    if (bVar22) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (this->NumGeometries != 0) {
    local_298 = param_1;
    local_290 = param_2;
    pTVar24 = TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>,TDefaultMapHashableKeyFuncs<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int,0>,FDefaultSetAllocator>
                      *)&this->CollisionRangeIds,
                     (TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>
                      *)&local_298);
    if (pTVar24 ==
        (TTuple<TTuple<Chaos::FClothingSimulationSolver_const_*,Chaos::FClothingSimulationCloth_const_*>,int>
         *)0x0) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar22) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar6 = *(int *)&pTVar24->field_0x10;
    pTVar25 = FClothingSimulationSolver::GetCollisionBoneIndicesView(param_1,&local_220,iVar6);
    iVar7 = pTVar25->ArrayNum;
    puVar28 = (uint *)pTVar25->DataPtr;
    Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
              (&local_288,&param_1->Evolution,&param_1->PBDEvolution,iVar6,
               (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->CollisionBaseTransforms).field_0x8);
    Chaos::Private::GetCollisionParticleArrayView<Chaos::TRigidTransform<float,3>_>
              (&local_2e8,&param_1->Evolution,&param_1->PBDEvolution,iVar6,
               (TArray<Chaos::TRigidTransform<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->CollisionTransforms).field_0x8);
    uVar30 = (uint)__xmm_80000000000000008000000000000000;
    uVar31 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar12 = (param_3->Translation).XY.m128d_f64[0];
    dVar13 = (param_3->Translation).XY.m128d_f64[1];
    uVar2 = *(undefined8 *)&(param_1->LocalSpaceLocation).field_0x8;
    local_268 = (uint)*(undefined8 *)&param_1->LocalSpaceLocation ^ uVar30;
    uStack_264 = (uint)((ulonglong)*(undefined8 *)&param_1->LocalSpaceLocation >> 0x20) ^ uVar31;
    uVar3 = *(undefined8 *)&(param_1->LocalSpaceLocation).field_0x10;
    uStack_260 = (uint)uVar2 ^ uVar30;
    uStack_25c = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar31;
    local_240 = param_1->LocalSpaceScale;
    uVar30 = (uint)uVar3 ^ uVar30;
    uVar31 = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar31;
    local_258 = CONCAT44(uVar31,uVar30);
    dVar14 = (param_3->Rotation).XY.m128d_f64[0];
    dVar15 = (param_3->Rotation).XY.m128d_f64[1];
    dVar16 = (param_3->Rotation).ZW.m128d_f64[0];
    dVar17 = (param_3->Rotation).ZW.m128d_f64[1];
    dVar18 = (param_3->Scale3D).XY.m128d_f64[0];
    dVar19 = (param_3->Scale3D).XY.m128d_f64[1];
    dVar20 = (param_3->Scale3D).ZW.m128d_f64[0];
    dVar21 = (param_3->Scale3D).ZW.m128d_f64[1];
    dVar4 = (param_3->Translation).ZW.m128d_f64[0];
    dVar5 = (param_3->Translation).ZW.m128d_f64[1];
    dVar10 = (double)CONCAT44(uStack_264,local_268);
    dVar11 = (double)CONCAT44(uStack_25c,uStack_260);
    if (local_240 <= __real_3e45798ee0000000) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("LocalSpaceScale > (1.e-8f)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x1ab,L"");
      if (bVar22) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar27 = 0;
    local_240 = __real_3ff0000000000000 / local_240;
    uVar32 = (undefined4)((ulonglong)local_240 >> 0x20);
    local_2c8.m128_f32[0] = (float)dVar14;
    local_2c8.m128_f32[1] = (float)dVar15;
    local_2c8.m128_f32[2] = (float)dVar16;
    local_2c8.m128_f32[3] = (float)dVar17;
    fStack_2b0 = (float)(local_240 * ((double)CONCAT44(uVar31,uVar30) + dVar4));
    fStack_2ac = (float)((dVar5 + 0.0) * 0.0);
    local_250._8_4_ = SUB84(local_240,0);
    local_250._0_8_ = local_240;
    local_250._12_4_ = uVar32;
    local_2b8 = (float)(local_240 * (dVar12 + dVar10));
    fStack_2b4 = (float)(local_240 * (dVar13 + dVar11));
    local_238._8_4_ = SUB84(local_240,0);
    local_238._0_8_ = local_240;
    local_238._12_4_ = uVar32;
    local_2a8 = (float)(dVar18 * local_240);
    fStack_2a4 = (float)(dVar19 * local_240);
    fStack_2a0 = (float)(local_240 * dVar20);
    fStack_29c = (float)(dVar21 * 0.0);
    local_228 = local_240;
    if (0 < this->NumGeometries) {
      lVar29 = 0;
      do {
        uVar31 = ~uVar27 >> 0x1f;
        uVar30 = 0;
        if ((int)uVar27 < iVar7) {
          uVar30 = uVar31;
        }
        if (uVar30 == 0) {
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar22) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        uVar30 = *puVar28;
        if (((int)uVar30 < 0) || (param_4->ArrayNum <= (int)uVar30)) {
          uVar30 = 0;
          if ((int)uVar27 < local_288.ArrayNum) {
            uVar30 = uVar31;
          }
          if (uVar30 == 0) {
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar22) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          local_e8.m128_u64[0] = CONCAT44(local_2c8.m128_i32[1],local_2c8.m128_i32[0]);
          local_e8.m128_u64[1] = CONCAT44(local_2c8.m128_i32[3],local_2c8.m128_i32[2]);
          local_d8 = CONCAT44(fStack_2b4,local_2b8);
          uStack_d0 = CONCAT44(fStack_2ac,fStack_2b0);
          local_c8 = CONCAT44(fStack_2a4,local_2a8);
          uStack_c0 = CONCAT44(fStack_29c,fStack_2a0);
          local_1a8 = GlobalVectorConstants::Float0001;
          _local_198 = GlobalVectorConstants::FloatZero;
          _local_188 = GlobalVectorConstants::Float1110;
          UE::Math::TTransform<float>::Multiply
                    ((TTransform<float> *)&local_1a8,
                     (TTransform<float> *)(local_288.DataPtr + (int)uVar27),
                     (TTransform<float> *)&local_e8);
          uVar32 = local_1a8.m128_i32[0];
          uVar33 = local_1a8.m128_i32[1];
          uVar34 = local_1a8.m128_i32[2];
          uVar35 = local_1a8.m128_i32[3];
          fVar36 = (float)local_198._0_4_;
          fVar37 = (float)local_198._4_4_;
          fVar38 = fStack_190;
          fVar39 = fStack_18c;
          fVar40 = (float)local_188._0_4_;
          fVar41 = (float)local_188._4_4_;
          fVar42 = fStack_180;
          fVar43 = fStack_17c;
        }
        else {
          uVar23 = 0;
          if ((int)uVar27 < local_288.ArrayNum) {
            uVar23 = uVar31;
          }
          if (uVar23 == 0) {
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar22) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          uVar31 = 0;
          if ((int)uVar30 < param_4->ArrayNum) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if (uVar31 == 0) {
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar22) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pFVar8 = (param_4->AllocatorInstance).Data;
          lVar26 = (longlong)(int)uVar30 * 0x60;
          local_178.m128_f32[2] = (float)*(double *)(pFVar8 + lVar26 + 0x10);
          local_178.m128_f32[3] = (float)*(double *)(pFVar8 + lVar26 + 0x10 + 8);
          local_178.m128_f32[0] = (float)*(double *)(pFVar8 + lVar26);
          local_178.m128_f32[1] = (float)*(double *)(pFVar8 + lVar26 + 8);
          local_158 = (float)*(double *)(pFVar8 + lVar26 + 0x40);
          fStack_154 = (float)*(double *)(pFVar8 + lVar26 + 0x40 + 8);
          fStack_160 = (float)*(double *)(pFVar8 + lVar26 + 0x30);
          fStack_15c = (float)*(double *)(pFVar8 + lVar26 + 0x30 + 8);
          local_168 = (float)*(double *)(pFVar8 + lVar26 + 0x20);
          fStack_164 = (float)*(double *)(pFVar8 + lVar26 + 0x20 + 8);
          fStack_150 = (float)*(double *)(pFVar8 + lVar26 + 0x50);
          fStack_14c = (float)*(double *)(pFVar8 + lVar26 + 0x50 + 8);
          local_208 = GlobalVectorConstants::Float0001;
          local_1e8 = GlobalVectorConstants::Float1110;
          local_1f8 = GlobalVectorConstants::FloatZero;
          UE::Math::TTransform<float>::Multiply
                    ((TTransform<float> *)&local_208,
                     (TTransform<float> *)(local_288.DataPtr + (int)uVar27),
                     (TTransform<float> *)&local_178);
          local_118.m128_u64[0] = local_208.m128_u64[0];
          local_118.m128_u64[1] = local_208.m128_u64[1];
          local_f8 = local_1e8.m128_u64[0];
          uStack_f0 = local_1e8.m128_u64[1];
          local_138 = CONCAT44(fStack_2b4,local_2b8);
          uStack_130 = CONCAT44(fStack_2ac,fStack_2b0);
          local_108 = local_1f8.m128_u64[0];
          uStack_100 = local_1f8.m128_u64[1];
          local_148.m128_u64[0] = CONCAT44(local_2c8.m128_i32[1],local_2c8.m128_i32[0]);
          local_148.m128_u64[1] = CONCAT44(local_2c8.m128_i32[3],local_2c8.m128_i32[2]);
          local_128 = CONCAT44(fStack_2a4,local_2a8);
          uStack_120 = CONCAT44(fStack_29c,fStack_2a0);
          local_1d8 = GlobalVectorConstants::Float0001;
          _local_1b8 = GlobalVectorConstants::Float1110;
          _local_1c8 = GlobalVectorConstants::FloatZero;
          UE::Math::TTransform<float>::Multiply
                    ((TTransform<float> *)&local_1d8,(TTransform<float> *)&local_118,
                     (TTransform<float> *)&local_148);
          uVar32 = local_1d8.m128_i32[0];
          uVar33 = local_1d8.m128_i32[1];
          uVar34 = local_1d8.m128_i32[2];
          uVar35 = local_1d8.m128_i32[3];
          fVar36 = (float)local_1c8._0_4_;
          fVar37 = (float)local_1c8._4_4_;
          fVar38 = fStack_1c0;
          fVar39 = fStack_1bc;
          fVar40 = (float)local_1b8._0_4_;
          fVar41 = (float)local_1b8._4_4_;
          fVar42 = fStack_1b0;
          fVar43 = fStack_1ac;
        }
        uVar30 = 0;
        if ((int)uVar27 < local_2e8.ArrayNum) {
          uVar30 = ~uVar27 >> 0x1f;
        }
        if (uVar30 == 0) {
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar22) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        uVar27 = uVar27 + 1;
        puVar28 = puVar28 + 1;
        pfVar1 = (float *)(&(local_2e8.DataPtr)->field_0x0 + lVar29);
        *pfVar1 = (float)uVar32;
        pfVar1[1] = (float)uVar33;
        pfVar1[2] = (float)uVar34;
        pfVar1[3] = (float)uVar35;
        pfVar1 = (float *)(&(local_2e8.DataPtr)->field_0x10 + lVar29);
        *pfVar1 = fVar36;
        pfVar1[1] = fVar37;
        pfVar1[2] = fVar38;
        pfVar1[3] = fVar39;
        pfVar1 = (float *)(&(local_2e8.DataPtr)->field_0x20 + lVar29);
        *pfVar1 = fVar40;
        pfVar1[1] = fVar41;
        pfVar1[2] = fVar42;
        pfVar1[3] = fVar43;
        lVar29 = lVar29 + 0x30;
      } while ((int)uVar27 < local_2d8->NumGeometries);
    }
    this_00 = FClothingSimulationSolver::GetComplexColliders(param_1,iVar6);
    if (this_00 != (FClothComplexColliders *)0x0) {
      local_278.DataPtr = local_2e8.DataPtr;
      local_278.ArrayNum = local_2e8.ArrayNum;
      FClothComplexColliders::Update(this_00,(TTransform<float> *)&local_2c8,param_4,&local_278);
    }
  }
  return;
}

// UpdateAccessoryMeshes @ 14dc229d0

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::UpdateAccessoryMeshes
          (FLODData *this,FClothingSimulationSolver *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  FClothingSimulationAccessoryMesh *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined1 *local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TArrayView<Chaos::TVector<float,3>,int> local_98;
  TArrayView<Chaos::TVector<float,3>,int> local_88 [2];
  undefined4 local_5c;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x1e8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar10 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                    *)&this->SolverData,param_1);
  if ((pTVar10 ==
       (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar14 = 0;
  puVar1 = &pTVar10->field_0x170;
  iVar4 = *(int *)&pTVar10->field_0x188;
  puVar2 = &pTVar10->field_0x160;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&pTVar10->field_0x180;
    if (*(uint **)&pTVar10->field_0x180 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14dc22aee;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar9 = iVar16 + -1 + local_res10;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14dc22aee:
  uVar13 = *(uint *)&pTVar10->field_0x188;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar8,iVar14);
  TStack_c0.CurrentBitIndex = iVar9;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_c0._28_4_ = local_5c;
  TStack_c0.BaseBitIndex = iVar16;
  uStack_a0 = CONCAT44(uStack_cc,*(int *)&pTVar10->field_0x168 - *(int *)&pTVar10->field_0x194);
  local_res20 = puVar2;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&pTVar10->field_0x188;
  puVar18 = puVar2;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&pTVar10->field_0x180;
    if (*(undefined1 **)&pTVar10->field_0x180 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14dc22c00;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar13 = local_res18 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14dc22c00:
  do {
    if (*(int *)&pTVar10->field_0x168 - *(int *)&pTVar10->field_0x194 != (int)uStack_a0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,Chaos::FClothingAccessoryMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar11 = (longlong)TStack_c0.CurrentBitIndex;
    if (((TStack_c0.CurrentBitIndex == uVar13) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (puVar2 == puVar18))
    {
      return;
    }
    lVar5 = *(longlong *)puVar2;
    if (*(int *)(lVar5 + 0x30 + lVar11 * 0x90) == *(int *)(lVar5 + 8 + lVar11 * 0x90)) {
      local_98.DataPtr = *(TVector<float,3> **)(lVar5 + 0x58 + lVar11 * 0x90);
      iVar4 = *(int *)(lVar5 + 0x60 + lVar11 * 0x90);
      this_00 = *(FClothingSimulationAccessoryMesh **)(lVar5 + 0x10 + lVar11 * 0x90);
      if ((iVar4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_88[0].DataPtr = *(TVector<float,3> **)(lVar5 + 0x28 + lVar11 * 0x90);
      iVar14 = *(int *)(lVar5 + 0x30 + lVar11 * 0x90);
      local_98.ArrayNum = iVar4;
      if ((iVar14 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_88[0].ArrayNum = iVar14;
      if ((param_1 == (FClothingSimulationSolver *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Solver",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                             ,0xc5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FClothingSimulationAccessoryMesh::SkinPhysicsMesh
                (this_00,-1,0.0,param_1->LocalSpaceScale,&param_1->LocalSpaceLocation,local_88,
                 &local_98);
      puVar18 = local_res20;
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// UpdateCachedProperties @ 14dc22d70

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::UpdateCachedProperties
          (FLODData *this,FClothingSimulationMesh *param_1,int param_2,
          FCollectionPropertyFacade *param_3,bool param_4)

{
  FActiveMorphTargetIndex *pFVar1;
  code *pcVar2;
  ECollectionPropertyFlags EVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  float fVar7;
  
  pFVar1 = &this->ActiveMorphTargetIndex;
  if ((pFVar1->Index != -1) &&
     ((param_4 ||
      ((EVar3 = Softs::FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          ((FCollectionPropertyConstFacade *)param_3,pFVar1->Index,
                           (TArrayView<unsigned_char_const_,int> *)&param_3->field_0x48),
       (EVar3 & Animatable) != None &&
       (EVar3 = Softs::FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          ((FCollectionPropertyConstFacade *)param_3,pFVar1->Index,
                           (TArrayView<unsigned_char_const_,int> *)&param_3->field_0x48),
       (char)EVar3 < '\0')))))) {
    if ((pFVar1->Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveMorphTargetIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                           ,0x8a,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar7 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      ((FCollectionPropertyConstFacade *)param_3,pFVar1->Index,
                       (TArrayView<UE::Math::TVector<float>_const_,int> *)&param_3->field_0x18);
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= __real_bf800000) {
      fVar7 = __real_bf800000;
    }
    this->ActiveMorphTargetWeight = fVar7;
    if (!param_4) {
      if ((pFVar1->Index == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActiveMorphTargetIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                             ,0x8a,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar3 = Softs::FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        ((FCollectionPropertyConstFacade *)param_3,pFVar1->Index,
                         (TArrayView<unsigned_char_const_,int> *)&param_3->field_0x48);
      if ((EVar3 & StringDirty) == None) {
        return;
      }
    }
    pcVar2 = *(code **)(param_1->_padding_ + 0x100);
    if (((this->ActiveMorphTargetIndex).Index == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveMorphTargetIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                           ,0x8a,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = Softs::FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                       ((FCollectionPropertyConstFacade *)param_3,
                        (this->ActiveMorphTargetIndex).Index,
                        (TArrayView<FString_const_,int> *)&param_3->field_0x38);
    iVar5 = (*pcVar2)(param_1,param_2,pFVar6);
    this->ActiveMorphTarget = iVar5;
  }
  return;
}

// UpdateNormals @ 14dc23b00

void __thiscall
Chaos::FClothingSimulationCloth::FLODData::UpdateNormals
          (FLODData *this,FClothingSimulationSolver *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar4;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar5;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_58;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48;
  TArrayView<Chaos::TVector<float,3>,int> local_38;
  TArrayView<Chaos::TVector<float,3>,int> local_28;
  TArrayView<Chaos::TVector<float,3>,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x214,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                   *)&this->SolverData,param_1);
  if (pTVar4 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)&pTVar4->field_0xc;
  if (iVar1 != -1) {
    pTVar5 = FClothingSimulationSolver::GetParticleXsView(param_1,&local_18,iVar1);
    local_58.DataPtr = pTVar5->DataPtr;
    local_58.ArrayNum = pTVar5->ArrayNum;
    Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
              (&local_38,&param_1->Evolution,&param_1->PBDEvolution,iVar1,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->Normals).field_0x8);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    FTriangleMesh::GetFaceNormals<float>(&this->NoOffsetTriangleMesh,&local_68,&local_58,false);
    local_48.ArrayNum = local_68.ArrayNum;
    local_48.DataPtr = (TVector<float,3> *)local_68.AllocatorInstance.Data;
    if (local_68.ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_28.DataPtr = local_38.DataPtr;
    local_28.ArrayNum = local_38.ArrayNum;
    local_28._12_4_ = local_38._12_4_;
    FTriangleMesh::GetPointNormals(&this->NoOffsetTriangleMesh,&local_28,&local_48,false);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

