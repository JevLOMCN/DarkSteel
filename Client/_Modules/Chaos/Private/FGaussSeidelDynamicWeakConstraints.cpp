// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> @ 143a31bc0

FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FDeformableXPBDWeakConstraintParams *param_1)

{
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_58;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_28;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_18;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
  FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>
            ((FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)this,&local_18,
             &local_28,&local_38,&local_48,&local_58,param_1);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)0x0,0);
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)0x0,0);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)0x0,0);
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)0x0,0);
  this->_padding_ =
       (longlong)
       &___7__FGaussSeidelDynamicWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  *(undefined8 *)&(this->Handles).field_0x8 = 0;
  *(undefined ***)&this->Handles =
       &
       ___7__TArrayCollectionArray_PEAUFGaussSeidelConstraintHandle___FGaussSeidelWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos___Chaos__6B_
  ;
  *(undefined8 *)&(this->Handles).field_0x10 = 0;
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->_padding_,(TArrayCollectionArrayBase *)&this->Handles);
  return this;
}

// ~FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> @ 143a38640

void __thiscall
Chaos::Softs::FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles>::
~FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  this->_padding_ =
       (longlong)
       &___7__FGaussSeidelDynamicWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  puVar4 = *(undefined8 **)&(this->Handles).field_0x8;
  iVar2 = *(int *)&(this->Handles).field_0x10;
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)&(this->Handles).field_0x10 != iVar2) {
      `TCheckedPointerIterator<Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelConstraintHandle_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    ::operator_delete((void *)*puVar4,4);
    puVar4 = puVar4 + 1;
  }
  *(undefined ***)&this->Handles =
       &
       ___7__TArrayCollectionArray_PEAUFGaussSeidelConstraintHandle___FGaussSeidelWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos___Chaos__6B_
  ;
  pvVar3 = *(void **)&(this->Handles).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
  ~FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>
            ((FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)this);
  return;
}

// AddSingleParticleTetrahedraConstraint @ 143a4ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGaussSeidelConstraintHandle * __thiscall
Chaos::Softs::FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles>::
AddSingleParticleTetrahedraConstraint
          (FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FTetrahedralFacade *param_1,FSolverParticles *param_2,
          TetrahedralParticleEmbedding *param_3,int param_4,FRange *param_5,FRange *param_6,
          float param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  TManagedArray<int> *pTVar13;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar14;
  code *pcVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  uint uVar18;
  FGaussSeidelConstraintHandle *pFVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined1 auStackY_168 [32];
  FGaussSeidelWeakConstraintSingleData<float> local_118;
  FGaussSeidelConstraintHandle *local_b8;
  FGaussSeidelDynamicWeakConstraints<float,Chaos::Softs::FSolverParticles> *local_a8;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_a8 = this;
  pFVar19 = ::operator_new(4);
  pFVar19->ConstraintIndex = param_4;
  uVar20 = 0;
  if (param_4 < *(int *)&(this->Handles).field_0x10) {
    uVar20 = (uint)~param_4 >> 0x1f;
  }
  local_b8 = pFVar19;
  if (uVar20 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  *(FGaussSeidelConstraintHandle **)
   (*(longlong *)&(this->Handles).field_0x8 + (longlong)param_4 * 8) = pFVar19;
  uVar20 = param_3->GeometryIndex;
  if ((param_1->TetrahedronStart).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                        ,0x60,L"");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  pTVar13 = (param_1->TetrahedronStart).ConstAttributeArray;
  uVar21 = 0;
  if ((int)uVar20 < *(int *)&pTVar13->field_0x18) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  uVar20 = *(int *)(*(longlong *)&pTVar13->field_0x10 + (longlong)(int)uVar20 * 4) +
           param_3->TetrahedronIndex;
  if ((param_1->Tetrahedron).ConstAttributeArray ==
      (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                        ,0x60,L"");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  pTVar14 = (param_1->Tetrahedron).ConstAttributeArray;
  uVar21 = 0;
  if ((int)uVar20 < *(int *)&pTVar14->field_0x18) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  iVar10 = param_6->Start;
  iVar11 = param_5->Start;
  iVar12 = param_3->ParticleIndex;
  piVar1 = (int *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar20 * 0x10);
  local_a0 = *piVar1;
  iStack_9c = piVar1[1];
  iStack_98 = piVar1[2];
  iStack_94 = piVar1[3];
  local_118.SingleIndices.ArrayNum = 1;
  local_118.SingleIndices.ArrayMax = 0;
  local_118.SingleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SingleSecondIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SingleSecondIndices.ArrayNum = 0;
  local_118.SingleSecondIndices.ArrayMax = 0;
  local_118.SingleStiffness = 0.0;
  local_118.SingleWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar23 = local_a0 + iVar10;
  local_118.SingleWeights.ArrayNum = 0;
  local_118.SingleWeights.ArrayMax = 0;
  local_118.SingleSecondWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.SingleSecondWeights.ArrayNum = 0;
  local_118.SingleSecondWeights.ArrayMax = 0;
  local_118.bIsAnisotropic = false;
  local_118.SingleNormal._0_8_ = 0;
  local_118.SingleNormal._8_4_ = 0;
  local_118.bIsZeroRestLength = false;
  local_118.RestLength = 0.0;
  uVar21 = iStack_9c + iVar10;
  uVar22 = iStack_98 + iVar10;
  uVar20 = iStack_94 + iVar10;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,(ForAnyElementType *)&local_118,1,&local_118.SingleIndices.ArrayMax);
  *(int *)local_118.SingleIndices.AllocatorInstance.Data = iVar11 + iVar12;
  local_118.SingleSecondIndices.ArrayNum = 4;
  local_90 = uVar23;
  uStack_8c = uVar21;
  uStack_88 = uVar22;
  uStack_84 = uVar20;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,local_118.SingleSecondIndices.ArrayMax,
             &local_118.SingleSecondIndices.AllocatorInstance,4,
             &local_118.SingleSecondIndices.ArrayMax);
  *(ulonglong *)local_118.SingleSecondIndices.AllocatorInstance.Data = CONCAT44(uStack_8c,local_90);
  *(ulonglong *)(local_118.SingleSecondIndices.AllocatorInstance.Data + 8) =
       CONCAT44(uStack_84,uStack_88);
  local_118.SingleWeights.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,local_118.SingleWeights.ArrayMax,&local_118.SingleWeights.AllocatorInstance,1,
             &local_118.SingleWeights.ArrayMax);
  *(undefined4 *)local_118.SingleWeights.AllocatorInstance.Data = 0x3f800000;
  if ((param_3->BarycentricWeights).ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  local_80 = *(float *)(param_3->BarycentricWeights).AllocatorInstance.Data;
  if ((param_3->BarycentricWeights).ArrayNum < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  fStack_7c = *(float *)((param_3->BarycentricWeights).AllocatorInstance.Data + 4);
  if ((param_3->BarycentricWeights).ArrayNum < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  fStack_78 = *(float *)((param_3->BarycentricWeights).AllocatorInstance.Data + 8);
  if ((param_3->BarycentricWeights).ArrayNum < 4) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  fVar2 = *(float *)((param_3->BarycentricWeights).AllocatorInstance.Data + 0xc);
  local_118.SingleSecondWeights.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,local_118.SingleSecondWeights.ArrayMax,
             &local_118.SingleSecondWeights.AllocatorInstance,4,
             &local_118.SingleSecondWeights.ArrayMax);
  *(float *)local_118.SingleSecondWeights.AllocatorInstance.Data = local_80;
  *(float *)(local_118.SingleSecondWeights.AllocatorInstance.Data + 4) = fStack_7c;
  *(float *)(local_118.SingleSecondWeights.AllocatorInstance.Data + 8) = fStack_78;
  *(float *)(local_118.SingleSecondWeights.AllocatorInstance.Data + 0xc) = fVar2;
  local_118.bIsAnisotropic = false;
  local_118.SingleNormal._0_8_ = 0;
  local_118.SingleNormal._8_4_ = 0;
  fStack_74 = fVar2;
  if (local_118.SingleSecondWeights.ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  FVar16.Data = local_118.SingleSecondWeights.AllocatorInstance.Data;
  uVar18 = 0;
  if ((int)uVar23 < (int)param_2->_padding_) {
    uVar18 = ~uVar23 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  fVar2 = *(float *)FVar16.Data;
  fVar3 = *(float *)(param_2->_padding_ + (longlong)(int)uVar23 * 4);
  if (local_118.SingleSecondWeights.ArrayNum < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  FVar16.Data = local_118.SingleSecondWeights.AllocatorInstance.Data;
  uVar23 = 0;
  if ((int)uVar21 < (int)param_2->_padding_) {
    uVar23 = ~uVar21 >> 0x1f;
  }
  if (uVar23 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  fVar4 = *(float *)(FVar16.Data + 4);
  fVar5 = *(float *)(param_2->_padding_ + (longlong)(int)uVar21 * 4);
  if (local_118.SingleSecondWeights.ArrayNum < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  FVar16.Data = local_118.SingleSecondWeights.AllocatorInstance.Data;
  uVar21 = 0;
  if ((int)uVar22 < (int)param_2->_padding_) {
    uVar21 = ~uVar22 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  fVar6 = *(float *)(FVar16.Data + 8);
  fVar7 = *(float *)(param_2->_padding_ + (longlong)(int)uVar22 * 4);
  if (local_118.SingleSecondWeights.ArrayNum < 4) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  FVar16.Data = local_118.SingleSecondWeights.AllocatorInstance.Data;
  uVar21 = 0;
  if ((int)uVar20 < (int)param_2->_padding_) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  fVar8 = *(float *)(FVar16.Data + 0xc);
  fVar9 = *(float *)(param_2->_padding_ + (longlong)(int)uVar20 * 4);
  if (local_118.SingleIndices.ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar15 = (code *)swi(3);
      pFVar19 = (FGaussSeidelConstraintHandle *)(*pcVar15)();
      return pFVar19;
    }
  }
  fVar24 = TDynamicParticles<float,3>::M
                     ((TDynamicParticles<float,3> *)param_2,
                      *(int *)local_118.SingleIndices.AllocatorInstance.Data);
  local_118.SingleStiffness =
       fVar24 * param_7 +
       param_7 * fVar2 * fVar3 + param_7 * fVar4 * fVar5 + param_7 * fVar6 * fVar7 +
       param_7 * fVar8 * fVar9;
  TGaussSeidelWeakConstraintData<float>::SetSingleConstraint
            ((TGaussSeidelWeakConstraintData<float> *)&local_a8->_padding_,&local_118,param_4);
  if (local_118.SingleSecondWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.SingleSecondWeights.AllocatorInstance.Data);
  }
  if (local_118.SingleWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.SingleWeights.AllocatorInstance.Data);
  }
  if (local_118.SingleSecondIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.SingleSecondIndices.AllocatorInstance.Data);
  }
  if (local_118.SingleIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.SingleIndices.AllocatorInstance.Data);
  }
  return local_b8;
}

