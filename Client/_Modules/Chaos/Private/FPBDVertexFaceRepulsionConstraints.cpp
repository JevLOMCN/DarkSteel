// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FPBDVertexFaceRepulsionConstraints @ 143d91ce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDVertexFaceRepulsionConstraints * __thiscall
Chaos::Softs::FPBDVertexFaceRepulsionConstraints::FPBDVertexFaceRepulsionConstraints
          (FPBDVertexFaceRepulsionConstraints *this,FSolverParticlesRange *param_1,
          FCollectionPropertyConstFacade *param_2,FEmbeddedSpringConstraintFacade *param_3)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  int iVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  float fVar6;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_48;
  TArray<float,TSizedDefaultAllocator<32>_> local_38 [2];
  
  this_00 = &param_2->KeyNameIndices;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,VertexFaceMaxRepulsionItersName);
  iVar1 = 1;
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    iVar1 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_2,*piVar2,&param_2->LowValueArray);
  }
  iVar5 = 1;
  if (1 < iVar1) {
    iVar5 = iVar1;
  }
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,VertexFaceRepulsionStiffnessName);
  fVar6 = __real_3f000000;
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (param_2,*piVar2,&param_2->LowValueArray);
  }
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  pTVar3 = ExtractVolumes(local_38,param_1,param_3);
  pTVar4 = ExtractConstraintIndices(&local_48,param_3);
  this->_padding_ = 0;
  this->_padding_ = (longlong)(pTVar4->AllocatorInstance).Data;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(int *)&this->_padding_ = pTVar4->ArrayNum;
  *(int *)((longlong)&this->_padding_ + 4) = pTVar4->ArrayMax;
  pTVar4->ArrayNum = 0;
  pTVar4->ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)(pTVar3->AllocatorInstance).Data;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(int *)&this->_padding_ = pTVar3->ArrayNum;
  *(int *)((longlong)&this->_padding_ + 4) = pTVar3->ArrayMax;
  pTVar3->ArrayNum = 0;
  pTVar3->ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(float *)&this->_padding_ = fVar6;
  *(int *)((longlong)&this->_padding_ + 4) = iVar5;
  FPBDUnilateralTetConstraints::TrimKinematicConstraints
            ((FPBDUnilateralTetConstraints *)this,param_1);
  FPBDUnilateralTetConstraints::InitColor((FPBDUnilateralTetConstraints *)this,param_1);
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->_padding_,(int)this->_padding_,
             Default);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,VertexFaceRepulsionStiffnessName);
  if (piVar2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *piVar2;
  }
  (this->VertexFaceRepulsionStiffnessIndex).Index = iVar1;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,VertexFaceMaxRepulsionItersName);
  if (piVar2 == (int *)0x0) {
    (this->VertexFaceMaxRepulsionItersIndex).Index = -1;
    return this;
  }
  (this->VertexFaceMaxRepulsionItersIndex).Index = *piVar2;
  return this;
}

// ExtractConstraintIndices @ 143da4950

TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Softs::FPBDVertexFaceRepulsionConstraints::ExtractConstraintIndices
          (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FEmbeddedSpringConstraintFacade *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_48;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_38;
  
  FEmbeddedSpringConstraintFacade::GetSourceIndexConst(param_1,&local_38);
  FEmbeddedSpringConstraintFacade::GetTargetIndexConst(param_1,&local_48);
  iVar9 = local_38.ArrayNum;
  lVar13 = (longlong)local_38.ArrayNum;
  if ((local_48.ArrayNum != local_38.ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetIndices.Num() == NumConstraints",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDUnilateralTetConstraints.cpp"
                         ,0xd8,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)iVar9);
  }
  if (0 < iVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar9,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  uVar14 = 0;
  if (0 < iVar9) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      uVar12 = ~uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < local_48.ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      pTVar6 = local_48.DataPtr;
      if ((*(int *)((longlong)&(local_48.DataPtr)->ArrayNum + lVar15) < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      lVar1 = *(longlong *)((longlong)&(pTVar6->AllocatorInstance).Data + lVar15);
      uVar8 = 0;
      if ((int)uVar14 < local_48.ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      pTVar6 = local_48.DataPtr;
      if ((*(int *)((longlong)&(local_48.DataPtr)->ArrayNum + lVar15) < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      lVar2 = *(longlong *)((longlong)&(pTVar6->AllocatorInstance).Data + lVar15);
      uVar8 = 0;
      if ((int)uVar14 < local_48.ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      pTVar6 = local_48.DataPtr;
      if ((*(int *)((longlong)&(local_48.DataPtr)->ArrayNum + lVar15) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      puVar3 = *(undefined4 **)((longlong)&(pTVar6->AllocatorInstance).Data + lVar15);
      uVar8 = 0;
      if ((int)uVar14 < local_38.ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      pTVar6 = local_38.DataPtr;
      if ((*(int *)((longlong)&(local_38.DataPtr)->ArrayNum + lVar15) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      puVar4 = *(undefined4 **)((longlong)&(pTVar6->AllocatorInstance).Data + lVar15);
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x10;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined4 *)pFVar11 = *puVar4;
      *(undefined4 *)(pFVar11 + 4) = *puVar3;
      *(undefined4 *)(pFVar11 + 8) = *(undefined4 *)(lVar2 + 4);
      *(undefined4 *)(pFVar11 + 0xc) = *(undefined4 *)(lVar1 + 8);
    } while (lVar16 < lVar13);
  }
  return __return_storage_ptr__;
}

// ExtractVolumes @ 143da4d00

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Softs::FPBDVertexFaceRepulsionConstraints::ExtractVolumes
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSolverParticlesRange *param_1,FEmbeddedSpringConstraintFacade *param_2)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_98;
  TArrayView<float_const_,int> local_88 [5];
  
  FEmbeddedSpringConstraintFacade::GetTargetIndexConst(param_2,&local_98);
  FEmbeddedSpringConstraintFacade::GetSpringLengthConst(param_2,local_88);
  iVar7 = local_98.ArrayNum;
  lVar11 = (longlong)local_98.ArrayNum;
  if ((local_88[0].ArrayNum != local_98.ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSpringLengths.Num() == NumConstraints",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDUnilateralTetConstraints.cpp"
                         ,0xea,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)iVar7);
  }
  if (0 < iVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  fVar3 = __real_3e2aaaab;
  uVar13 = 0;
  if (0 < iVar7) {
    lVar14 = 0;
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar13 < local_98.ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      pTVar4 = local_98.DataPtr;
      if ((*(int *)((longlong)&(local_98.DataPtr)->ArrayNum + lVar12) < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)(*(longlong *)((longlong)&(pTVar4->AllocatorInstance).Data + lVar12) + 8);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      pTVar9 = TParticles<float,3>::GetX
                         (*(TParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar7);
      if ((*(int *)((longlong)&pTVar4->ArrayNum + lVar12) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar7 = **(int **)((longlong)&(pTVar4->AllocatorInstance).Data + lVar12);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      pTVar10 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           iVar7 + *(int *)&param_1->field_0x10);
      fVar18 = *(float *)pTVar9;
      fVar19 = *(float *)&pTVar9->field_0x8 - *(float *)&pTVar10->field_0x8;
      fVar20 = *(float *)&pTVar9->field_0x4 - *(float *)&pTVar10->field_0x4;
      fVar1 = *(float *)pTVar10;
      if ((*(int *)((longlong)&pTVar4->ArrayNum + lVar12) < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar7 = *(int *)(*(longlong *)((longlong)&(pTVar4->AllocatorInstance).Data + lVar12) + 4);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      pTVar9 = TParticles<float,3>::GetX
                         (*(TParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar7);
      if ((*(int *)((longlong)&pTVar4->ArrayNum + lVar12) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar7 = **(int **)((longlong)&(pTVar4->AllocatorInstance).Data + lVar12);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      pTVar10 = TParticles<float,3>::GetX
                          (*(TParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar7);
      fVar15 = *(float *)&pTVar9->field_0x8 - *(float *)&pTVar10->field_0x8;
      fVar16 = *(float *)&pTVar9->field_0x4 - *(float *)&pTVar10->field_0x4;
      uVar6 = 0;
      if ((int)uVar13 < local_88[0].ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      fVar17 = fVar15 * (fVar18 - fVar1) - (*(float *)pTVar9 - *(float *)pTVar10) * fVar19;
      fVar19 = fVar16 * fVar19 - fVar15 * fVar20;
      fVar18 = (*(float *)pTVar9 - *(float *)pTVar10) * fVar20 - fVar16 * (fVar18 - fVar1);
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      fVar1 = local_88[0].DataPtr[lVar14];
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      uVar13 = uVar13 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0x10;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar18 * fVar18) * fVar1 * fVar3;
    } while (lVar14 < lVar11);
  }
  return __return_storage_ptr__;
}

// SetProperties @ 143db9150

void __thiscall
Chaos::Softs::FPBDVertexFaceRepulsionConstraints::SetProperties
          (FPBDVertexFaceRepulsionConstraints *this,FCollectionPropertyConstFacade *param_1)

{
  code *pcVar1;
  ECollectionPropertyFlags EVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = (this->VertexFaceRepulsionStiffnessIndex).Index;
  if (iVar5 != -1) {
    EVar2 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar5,&param_1->FlagsArray);
    if (((EVar2 & Animatable) != None) &&
       (EVar2 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->VertexFaceRepulsionStiffnessIndex).Index,
                           &param_1->FlagsArray), (char)EVar2 < '\0')) {
      if (((this->VertexFaceRepulsionStiffnessIndex).Index == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexFaceRepulsionStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDUnilateralTetConstraints.h"
                             ,0x59,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar6 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                        (param_1,(this->VertexFaceRepulsionStiffnessIndex).Index,
                         &param_1->LowValueArray);
      if (__real_3f800000 <= fVar6) {
        fVar6 = __real_3f800000;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)&this->_padding_ = fVar6;
    }
  }
  iVar5 = (this->VertexFaceMaxRepulsionItersIndex).Index;
  if (((iVar5 != -1) &&
      (EVar2 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar5,&param_1->FlagsArray), (EVar2 & Animatable) != None)) &&
     (EVar2 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->VertexFaceMaxRepulsionItersIndex).Index,&param_1->FlagsArray
                        ), (char)EVar2 < '\0')) {
    if (((this->VertexFaceMaxRepulsionItersIndex).Index == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexFaceMaxRepulsionItersIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDUnilateralTetConstraints.h"
                           ,0x5a,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_1,(this->VertexFaceMaxRepulsionItersIndex).Index,
                       &param_1->LowValueArray);
    iVar5 = 1;
    if (1 < iVar4) {
      iVar5 = iVar4;
    }
    *(int *)((longlong)&this->_padding_ + 4) = iVar5;
  }
  return;
}

