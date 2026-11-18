// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 42

// TXPBDEmbeddedSpringConstraints<1,1> @ 143f427a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TXPBDEmbeddedSpringConstraints<1,1> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::TXPBDEmbeddedSpringConstraints<1,1>
          (TXPBDEmbeddedSpringConstraints<1,1> *this,FSolverParticlesRange *param_1,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_2,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_3,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_4,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_5,
          TArrayView<float_const_,int> *param_6,TArrayView<float_const_,int> *param_7,
          TArrayView<float_const_,int> *param_8,TArrayView<float_const_,int> *param_9,
          TVector<float,2> *param_10,TVector<float,2> *param_11,TVector<float,2> *param_12)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  float *pfVar7;
  code *pcVar8;
  TVector<float,2> *pTVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  TXPBDEmbeddedSpringConstraints<1,1> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  TVector<float,2> local_88;
  TVector<float,2> local_80;
  TVector<float,2> local_78;
  TVector<float,2> local_70;
  TVector<float,2> local_68;
  int *local_60;
  
  fVar23 = __real_7f7fc99e;
  this->_padding_ = (longlong)&___7__TXPBDEmbeddedSpringConstraints__00_00_Softs_Chaos__6B_;
  (this->SpringLengths).ArrayNum = 0;
  (this->SpringLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60 = &(this->SpringLengths).ArrayMax;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->Weights).ArrayNum = 0;
  (this->Weights).ArrayMax = 0;
  (this->OrigMapToReordered).ArrayNum = 0;
  (this->OrigMapToReordered).ArrayMax = 0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  *local_60 = 0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrigMapToReordered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar22 = *(float *)&param_10->field_0x4;
  fVar21 = *(float *)param_10;
  if (fVar23 <= *(float *)param_10) {
    fVar21 = fVar23;
  }
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (fVar23 <= fVar22) {
    fVar22 = fVar23;
  }
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  local_88._0_4_ = 0;
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  local_88._4_4_ = 0x7f7fc99e;
  local_78._4_4_ = fVar22;
  local_78._0_4_ = fVar21;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->ExtensionStiffness,&local_78,param_7,param_2->ArrayNum,&local_88);
  local_80._0_4_ = 0;
  fVar22 = *(float *)param_11;
  if (fVar23 <= *(float *)param_11) {
    fVar22 = fVar23;
  }
  fVar21 = *(float *)&param_11->field_0x4;
  if (fVar23 <= *(float *)&param_11->field_0x4) {
    fVar21 = fVar23;
  }
  local_80._4_4_ = 0x7f7fc99e;
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  local_70._4_4_ = fVar21;
  local_70._0_4_ = fVar22;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->CompressionStiffness,&local_70,param_8,param_2->ArrayNum,&local_80);
  param_11._0_4_ = 0;
  param_11._4_4_ = 0x447a0000;
  fVar22 = *(float *)param_12;
  if (__real_447a0000 <= *(float *)param_12) {
    fVar22 = __real_447a0000;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  fVar23 = *(float *)&param_12->field_0x4;
  if (__real_447a0000 <= *(float *)&param_12->field_0x4) {
    fVar23 = __real_447a0000;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  local_68._4_4_ = fVar23;
  local_68._0_4_ = fVar22;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->DampingRatio,&local_68,param_9,param_2->ArrayNum,(TVector<float,2> *)&param_11);
  uVar1 = param_2->ArrayNum;
  if (param_3->ArrayNum != uVar1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSourceWeights.Num() == NumConstraints",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                        ,0x8f,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  if (param_4->ArrayNum != uVar1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTargetIndices.Num() == NumConstraints",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                        ,0x90,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  if (param_5->ArrayNum != uVar1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTargetWeights.Num() == NumConstraints",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                        ,0x91,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  if (param_6->ArrayNum != uVar1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSpringLengths.Num() == NumConstraints",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                        ,0x92,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  if ((param_7->ArrayNum != 0) && (param_7->ArrayNum != uVar1)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InExtensionStiffnessMultipliers.IsEmpty() || InExtensionStiffnessMultipliers.Num() == NumConstraints"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                        ,0x93,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  if ((param_8->ArrayNum != 0) && (param_8->ArrayNum != uVar1)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCompressionStiffnessMultipliers.IsEmpty() || InCompressionStiffnessMultipliers.Num() == NumConstraints"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                        ,0x94,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  if ((param_9->ArrayNum != 0) && (param_9->ArrayNum != uVar1)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InDampingMultipliers.IsEmpty() || InDampingMultipliers.Num() == NumConstraints"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                        ,0x95,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->Constraints).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,&(this->Constraints).AllocatorInstance,(this->Constraints).ArrayNum,
               &(this->Constraints).ArrayMax);
  }
  if ((this->Weights).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,&(this->Weights).AllocatorInstance,(this->Weights).ArrayNum,
               &(this->Weights).ArrayMax);
  }
  if (*local_60 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&(this->SpringLengths).AllocatorInstance,(this->SpringLengths).ArrayNum,
               local_60);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->OrigMapToReordered,uVar1,Default);
  uVar10 = __xmm_80000000800000008000000080000000;
  uVar19 = 0;
  if ((int)uVar1 < 1) {
LAB_143f42f93:
    InitColor(this,param_1);
    iVar18 = (this->Constraints).ArrayNum;
    FPBDFlatWeightMap::ReorderIndicesAndShrink
              (&this->ExtensionStiffness,&this->OrigMapToReordered,iVar18);
    FPBDFlatWeightMap::ReorderIndicesAndShrink
              (&this->CompressionStiffness,&this->OrigMapToReordered,iVar18);
    FPBDFlatWeightMap::ReorderIndicesAndShrink(&this->DampingRatio,&this->OrigMapToReordered,iVar18)
    ;
    return this;
  }
  param_7 = (TArrayView<float_const_,int> *)0x0;
  lVar15 = 0;
LAB_143f42bf0:
  uVar17 = ~uVar19 >> 0x1f;
  uVar12 = 0;
  if ((int)uVar19 < param_3->ArrayNum) {
    uVar12 = uVar17;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  pTVar4 = param_3->DataPtr;
  uVar12 = 0;
  if ((int)uVar19 < param_2->ArrayNum) {
    uVar12 = uVar17;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  pTVar5 = param_2->DataPtr;
  iVar18 = 0;
  lVar16 = 0;
  do {
    if (*(int *)((longlong)&pTVar4->ArrayNum + lVar15) <= iVar18) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
        return pTVar14;
      }
    }
    if (*(float *)(lVar16 + *(longlong *)((longlong)&(pTVar4->AllocatorInstance).Data + lVar15)) !=
        0.0) {
      if (*(int *)((longlong)&pTVar5->ArrayNum + lVar15) <= iVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
          return pTVar14;
        }
      }
      iVar13 = *(int *)(lVar16 + *(longlong *)((longlong)&(pTVar5->AllocatorInstance).Data + lVar15)
                       );
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
          return pTVar14;
        }
      }
      fVar22 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar13);
      if (fVar22 != 0.0) goto LAB_143f43000;
    }
    iVar18 = iVar18 + 1;
    lVar16 = lVar16 + 4;
  } while (iVar18 < 1);
  uVar12 = 0;
  if ((int)uVar19 < param_5->ArrayNum) {
    uVar12 = uVar17;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  pTVar4 = param_5->DataPtr;
  uVar12 = 0;
  if ((int)uVar19 < param_4->ArrayNum) {
    uVar12 = uVar17;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  pTVar5 = param_4->DataPtr;
  iVar18 = 0;
  lVar16 = 0;
  do {
    if (*(int *)((longlong)&pTVar4->ArrayNum + lVar15) <= iVar18) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
        return pTVar14;
      }
    }
    if (*(float *)(lVar16 + *(longlong *)((longlong)&(pTVar4->AllocatorInstance).Data + lVar15)) !=
        0.0) {
      if (*(int *)((longlong)&pTVar5->ArrayNum + lVar15) <= iVar18) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
          return pTVar14;
        }
      }
      iVar13 = *(int *)(lVar16 + *(longlong *)((longlong)&(pTVar5->AllocatorInstance).Data + lVar15)
                       );
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
          return pTVar14;
        }
      }
      fVar22 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar13);
      if (fVar22 != 0.0) goto LAB_143f43000;
    }
    iVar18 = iVar18 + 1;
    lVar16 = lVar16 + 4;
  } while (iVar18 < 1);
  uVar12 = 0;
  if ((int)uVar19 < (this->OrigMapToReordered).ArrayNum) {
    uVar12 = uVar17;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  *(undefined4 *)((this->OrigMapToReordered).AllocatorInstance.Data + (longlong)param_7 * 4) =
       0xffffffff;
  goto LAB_143f42f73;
LAB_143f43000:
  uVar20 = 0;
  uVar12 = uVar20;
  if ((int)uVar19 < param_2->ArrayNum) {
    uVar12 = uVar17;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  pTVar5 = param_2->DataPtr;
  if (*(int *)((longlong)&pTVar5->ArrayNum + lVar15) < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  uVar2 = **(undefined4 **)((longlong)&(pTVar5->AllocatorInstance).Data + lVar15);
  uVar12 = uVar20;
  if ((int)uVar19 < param_3->ArrayNum) {
    uVar12 = uVar17;
  }
  pTVar9 = param_12;
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    pTVar9 = param_12;
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  param_12._4_4_ = (uint)((ulonglong)pTVar9 >> 0x20);
  pTVar4 = param_3->DataPtr;
  if (*(int *)((longlong)&pTVar4->ArrayNum + lVar15) < 1) {
    param_12 = pTVar9;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  param_12._0_4_ = **(undefined4 **)((longlong)&(pTVar4->AllocatorInstance).Data + lVar15);
  uVar12 = uVar20;
  if ((int)uVar19 < param_5->ArrayNum) {
    uVar12 = ~uVar19 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  pTVar4 = param_5->DataPtr;
  if (*(int *)((longlong)&pTVar4->ArrayNum + lVar15) < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  param_12._4_4_ = **(uint **)((longlong)&(pTVar4->AllocatorInstance).Data + lVar15) ^ uVar10;
  if ((int)uVar19 < param_4->ArrayNum) {
    uVar20 = ~uVar19 >> 0x1f;
  }
  if (uVar20 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  pTVar5 = param_4->DataPtr;
  if (*(int *)((longlong)&pTVar5->ArrayNum + lVar15) < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  iVar18 = (this->Constraints).ArrayNum;
  uVar3 = **(undefined4 **)((longlong)&(pTVar5->AllocatorInstance).Data + lVar15);
  if (iVar18 == (this->Constraints).ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&(this->Constraints).AllocatorInstance,&(this->Constraints).ArrayMax);
  }
  pFVar6 = (this->Constraints).AllocatorInstance.Data;
  (this->Constraints).ArrayNum = iVar18 + 1;
  *(ulonglong *)(pFVar6 + (longlong)iVar18 * 8) = CONCAT44(uVar3,uVar2);
  iVar13 = (this->Weights).ArrayNum;
  if (iVar13 == (this->Weights).ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&(this->Weights).AllocatorInstance,&(this->Weights).ArrayMax);
  }
  (this->Weights).ArrayNum = iVar13 + 1;
  *(ulonglong *)((this->Weights).AllocatorInstance.Data + (longlong)iVar13 * 8) =
       CONCAT44(param_12._4_4_,param_12._0_4_);
  uVar12 = 0;
  if ((int)uVar19 < param_6->ArrayNum) {
    uVar12 = ~uVar19 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  iVar13 = (this->SpringLengths).ArrayNum;
  pfVar7 = param_6->DataPtr;
  if (iVar13 == (this->SpringLengths).ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&(this->SpringLengths).AllocatorInstance,
                        &(this->SpringLengths).ArrayMax);
  }
  (this->SpringLengths).ArrayNum = iVar13 + 1;
  *(float *)((this->SpringLengths).AllocatorInstance.Data + (longlong)iVar13 * 4) =
       pfVar7[(longlong)param_7];
  uVar12 = 0;
  if ((int)uVar19 < (this->OrigMapToReordered).ArrayNum) {
    uVar12 = ~uVar19 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TXPBDEmbeddedSpringConstraints<1,1> *)(*pcVar8)();
      return pTVar14;
    }
  }
  *(int *)((this->OrigMapToReordered).AllocatorInstance.Data + (longlong)param_7 * 4) = iVar18;
LAB_143f42f73:
  param_7 = (TArrayView<float_const_,int> *)((longlong)&param_7->DataPtr + 1);
  uVar19 = uVar19 + 1;
  lVar15 = lVar15 + 0x10;
  if ((longlong)(int)uVar1 <= (longlong)param_7) goto LAB_143f42f93;
  goto LAB_143f42bf0;
}

// TXPBDEmbeddedSpringConstraints<1,3> @ 143f433e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TXPBDEmbeddedSpringConstraints<1,3> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::TXPBDEmbeddedSpringConstraints<1,3>
          (TXPBDEmbeddedSpringConstraints<1,3> *this,FSolverParticlesRange *param_1,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_2,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_3,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_4,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_5,
          TArrayView<float_const_,int> *param_6,TArrayView<float_const_,int> *param_7,
          TArrayView<float_const_,int> *param_8,TArrayView<float_const_,int> *param_9,
          TVector<float,2> *param_10,TVector<float,2> *param_11,TVector<float,2> *param_12)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  float *pfVar5;
  code *pcVar6;
  uint uVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar9;
  TArrayView<float_const_,int> *pTVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  TXPBDEmbeddedSpringConstraints<1,3> *pTVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined8 local_128;
  longlong local_118;
  TVector<float,2> local_f8;
  TVector<float,2> local_f0;
  TVector<float,2> local_e8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *local_e0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *local_d8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *local_d0;
  TArrayView<float_const_,int> *local_c8;
  TVector<float,2> local_c0;
  TVector<float,2> local_b8;
  TVector<float,2> local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined8 uStack_88;
  
  fVar22 = __real_7f7fc99e;
  local_c8 = param_6;
  this->_padding_ = (longlong)&___7__TXPBDEmbeddedSpringConstraints__00_02_Softs_Chaos__6B_;
  (this->Weights).ArrayNum = 0;
  (this->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar14 = &(this->Weights).ArrayMax;
  (this->SpringLengths).ArrayNum = 0;
  (this->SpringLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar14 = 0;
  piVar15 = &(this->SpringLengths).ArrayMax;
  (this->OrigMapToReordered).ArrayNum = 0;
  (this->OrigMapToReordered).ArrayMax = 0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  *piVar15 = 0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->OrigMapToReordered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128._4_4_ = *(float *)&param_10->field_0x4;
  local_128._0_4_ = *(float *)param_10;
  if (fVar22 <= *(float *)param_10) {
    local_128._0_4_ = fVar22;
  }
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (fVar22 <= local_128._4_4_) {
    local_128._4_4_ = fVar22;
  }
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((float)local_128 <= 0.0) {
    local_128._0_4_ = 0.0;
  }
  if (local_128._4_4_ <= 0.0) {
    local_128._4_4_ = 0.0;
  }
  local_f8._0_4_ = 0;
  local_d0 = param_4;
  local_d8 = param_5;
  local_c0 = local_128;
  local_f8._4_4_ = 0x7f7fc99e;
  local_e0 = param_2;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->ExtensionStiffness,&local_c0,param_7,param_2->ArrayNum,&local_f8);
  local_f0._0_4_ = 0;
  local_f0._4_4_ = 0x7f7fc99e;
  local_128._0_4_ = *(float *)param_11;
  if (fVar22 <= *(float *)param_11) {
    local_128._0_4_ = fVar22;
  }
  local_128._4_4_ = *(float *)&param_11->field_0x4;
  if (fVar22 <= *(float *)&param_11->field_0x4) {
    local_128._4_4_ = fVar22;
  }
  if ((float)local_128 <= 0.0) {
    local_128._0_4_ = 0.0;
  }
  if (local_128._4_4_ <= 0.0) {
    local_128._4_4_ = 0.0;
  }
  local_b8 = local_128;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->CompressionStiffness,&local_b8,param_8,param_2->ArrayNum,&local_f0);
  local_e8._0_4_ = 0;
  local_128._0_4_ = *(float *)param_12;
  if (__real_447a0000 <= *(float *)param_12) {
    local_128._0_4_ = __real_447a0000;
  }
  local_128._4_4_ = *(float *)&param_12->field_0x4;
  if (__real_447a0000 <= *(float *)&param_12->field_0x4) {
    local_128._4_4_ = __real_447a0000;
  }
  local_e8._4_4_ = 0x447a0000;
  if ((float)local_128 <= 0.0) {
    local_128._0_4_ = 0.0;
  }
  if (local_128._4_4_ <= 0.0) {
    local_128._4_4_ = 0.0;
  }
  local_b0 = local_128;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->DampingRatio,&local_b0,param_9,param_2->ArrayNum,&local_e8);
  uVar12 = param_2->ArrayNum;
  if ((param_3->ArrayNum != uVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSourceWeights.Num() == NumConstraints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x8f,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  if ((param_4->ArrayNum != uVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTargetIndices.Num() == NumConstraints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x90,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  if ((param_5->ArrayNum != uVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTargetWeights.Num() == NumConstraints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x91,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  if ((local_c8->ArrayNum != uVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSpringLengths.Num() == NumConstraints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x92,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  if (((param_7->ArrayNum != 0) && (param_7->ArrayNum != uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InExtensionStiffnessMultipliers.IsEmpty() || InExtensionStiffnessMultipliers.Num() == NumConstraints"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x93,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  if (((param_8->ArrayNum != 0) && (param_8->ArrayNum != uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCompressionStiffnessMultipliers.IsEmpty() || InCompressionStiffnessMultipliers.Num() == NumConstraints"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x94,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  if (((param_9->ArrayNum != 0) && (param_9->ArrayNum != uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDampingMultipliers.IsEmpty() || InDampingMultipliers.Num() == NumConstraints"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x95,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if ((this->Constraints).ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,&(this->Constraints).AllocatorInstance,(this->Constraints).ArrayNum,
               &(this->Constraints).ArrayMax);
  }
  if (*piVar14 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,&(this->Weights).AllocatorInstance,(this->Weights).ArrayNum,piVar14);
  }
  if (*piVar15 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&(this->SpringLengths).AllocatorInstance,(this->SpringLengths).ArrayNum,
               piVar15);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->OrigMapToReordered,uVar12,Default);
  uVar7 = __xmm_80000000800000008000000080000000;
  uVar20 = 0;
  local_a8 = (longlong)(int)uVar12;
  if ((int)uVar12 < 1) {
LAB_143f43bdd:
    InitColor(this,param_1);
    iVar17 = (this->Constraints).ArrayNum;
    FPBDFlatWeightMap::ReorderIndicesAndShrink
              (&this->ExtensionStiffness,&this->OrigMapToReordered,iVar17);
    FPBDFlatWeightMap::ReorderIndicesAndShrink
              (&this->CompressionStiffness,&this->OrigMapToReordered,iVar17);
    FPBDFlatWeightMap::ReorderIndicesAndShrink(&this->DampingRatio,&this->OrigMapToReordered,iVar17)
    ;
    return this;
  }
  local_128 = (TVector<float,2>)0x0;
  local_118 = 0;
LAB_143f43820:
  uVar21 = ~uVar20 >> 0x1f;
  uVar12 = 0;
  if ((int)uVar20 < param_3->ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  pTVar8 = local_e0;
  pTVar3 = param_3->DataPtr;
  uVar12 = 0;
  if ((int)uVar20 < local_e0->ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  pTVar4 = pTVar8->DataPtr;
  iVar17 = 0;
  lVar18 = 0;
  do {
    if ((*(int *)((longlong)&pTVar3->ArrayNum + (longlong)local_128) <= iVar17) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
      return pTVar16;
    }
    if (*(float *)(lVar18 + *(longlong *)
                             ((longlong)&(pTVar3->AllocatorInstance).Data + (longlong)local_128)) !=
        0.0) {
      if ((pTVar4[local_118].ArrayNum <= iVar17) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
        return pTVar16;
      }
      iVar13 = *(int *)(pTVar4[local_118].AllocatorInstance.Data + lVar18);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
        return pTVar16;
      }
      fVar22 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar13);
      if (fVar22 != 0.0) goto LAB_143f43c4b;
    }
    pTVar9 = local_d8;
    iVar17 = iVar17 + 1;
    lVar18 = lVar18 + 4;
  } while (iVar17 < 1);
  uVar12 = 0;
  if ((int)uVar20 < local_d8->ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  pTVar8 = local_d0;
  pTVar3 = pTVar9->DataPtr;
  uVar12 = 0;
  if ((int)uVar20 < local_d0->ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  pTVar4 = pTVar8->DataPtr;
  iVar17 = 0;
  lVar18 = 0;
  do {
    if ((pTVar3[local_118].ArrayNum <= iVar17) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
      return pTVar16;
    }
    if (*(float *)(pTVar3[local_118].AllocatorInstance.Data + lVar18) != 0.0) {
      if ((pTVar4[local_118].ArrayNum <= iVar17) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
        return pTVar16;
      }
      iVar13 = *(int *)(pTVar4[local_118].AllocatorInstance.Data + lVar18);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
        return pTVar16;
      }
      fVar22 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar13);
      if (fVar22 != 0.0) goto LAB_143f43c4b;
    }
    iVar17 = iVar17 + 1;
    lVar18 = lVar18 + 4;
  } while (iVar17 < 3);
  uVar12 = 0;
  if ((int)uVar20 < (this->OrigMapToReordered).ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  *(undefined4 *)((this->OrigMapToReordered).AllocatorInstance.Data + local_118 * 4) = 0xffffffff;
  goto LAB_143f43bac;
LAB_143f43c4b:
  pTVar8 = local_e0;
  iVar17 = 0;
  uVar12 = 0;
  if ((int)uVar20 < local_e0->ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  pTVar4 = pTVar8->DataPtr;
  if ((pTVar4[local_118].ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  local_a0 = *(undefined4 *)pTVar4[local_118].AllocatorInstance.Data;
  uVar12 = 0;
  if ((int)uVar20 < param_3->ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  pTVar3 = param_3->DataPtr;
  if ((pTVar3[local_118].ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  lVar18 = 1;
  local_90 = *(undefined4 *)pTVar3[local_118].AllocatorInstance.Data;
  lVar19 = 0;
  do {
    pTVar9 = local_d8;
    uVar12 = 0;
    if ((int)uVar20 < local_d8->ArrayNum) {
      uVar12 = ~uVar20 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
      return pTVar16;
    }
    pTVar3 = pTVar9->DataPtr;
    if ((pTVar3[local_118].ArrayNum <= iVar17) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
      return pTVar16;
    }
    uVar12 = *(uint *)(pTVar3[local_118].AllocatorInstance.Data + lVar19);
    if (lVar18 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                          ,0x86,L"");
      if (bVar11) {
code_r0x000143f43e79:
        pcVar6 = (code *)swi(3);
        pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
        return pTVar16;
      }
    }
    else if ((3 < lVar18) &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                 ,0x87,L""), bVar11)) goto code_r0x000143f43e79;
    pTVar8 = local_d0;
    *(uint *)((longlong)&uStack_8c + lVar19) = uVar12 ^ uVar7;
    uVar12 = 0;
    if ((int)uVar20 < local_d0->ArrayNum) {
      uVar12 = ~uVar20 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
      return pTVar16;
    }
    pTVar4 = pTVar8->DataPtr;
    if ((pTVar4[local_118].ArrayNum <= iVar17) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
      return pTVar16;
    }
    uVar2 = *(undefined4 *)(pTVar4[local_118].AllocatorInstance.Data + lVar19);
    if (lVar18 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                          ,0x86,L"");
      if (bVar11) {
code_r0x000143f43f63:
        pcVar6 = (code *)swi(3);
        pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
        return pTVar16;
      }
    }
    else if ((3 < lVar18) &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                 ,0x87,L""), bVar11)) goto code_r0x000143f43f63;
    *(undefined4 *)((longlong)&uStack_9c + lVar19) = uVar2;
    iVar17 = iVar17 + 1;
    lVar19 = lVar19 + 4;
    lVar18 = lVar18 + 1;
  } while (iVar17 < 3);
  iVar17 = (this->Constraints).ArrayNum;
  if (iVar17 == (this->Constraints).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&(this->Constraints).AllocatorInstance,&(this->Constraints).ArrayMax);
  }
  (this->Constraints).ArrayNum = iVar17 + 1;
  pFVar1 = (this->Constraints).AllocatorInstance.Data + (longlong)iVar17 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_9c,local_a0);
  *(undefined8 *)(pFVar1 + 8) = uStack_98;
  iVar13 = (this->Weights).ArrayNum;
  if (iVar13 == (this->Weights).ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&(this->Weights).AllocatorInstance,&(this->Weights).ArrayMax);
  }
  pTVar10 = local_c8;
  (this->Weights).ArrayNum = iVar13 + 1;
  pFVar1 = (this->Weights).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_8c,local_90);
  *(undefined8 *)(pFVar1 + 8) = uStack_88;
  uVar12 = 0;
  if ((int)uVar20 < local_c8->ArrayNum) {
    uVar12 = ~uVar20 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  iVar13 = (this->SpringLengths).ArrayNum;
  pfVar5 = pTVar10->DataPtr;
  if (iVar13 == (this->SpringLengths).ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&(this->SpringLengths).AllocatorInstance,
                        &(this->SpringLengths).ArrayMax);
  }
  (this->SpringLengths).ArrayNum = iVar13 + 1;
  *(float *)((this->SpringLengths).AllocatorInstance.Data + (longlong)iVar13 * 4) =
       pfVar5[local_118];
  uVar12 = 0;
  if ((int)uVar20 < (this->OrigMapToReordered).ArrayNum) {
    uVar12 = ~uVar20 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar16 = (TXPBDEmbeddedSpringConstraints<1,3> *)(*pcVar6)();
    return pTVar16;
  }
  *(int *)((this->OrigMapToReordered).AllocatorInstance.Data + local_118 * 4) = iVar17;
LAB_143f43bac:
  uVar20 = uVar20 + 1;
  local_128 = (TVector<float,2>)((longlong)local_128 + 0x10);
  local_118 = local_118 + 1;
  if (local_a8 <= local_118) goto LAB_143f43bdd;
  goto LAB_143f43820;
}

// TXPBDEmbeddedSpringConstraints<3,3> @ 143f440e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TXPBDEmbeddedSpringConstraints<3,3> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::TXPBDEmbeddedSpringConstraints<3,3>
          (TXPBDEmbeddedSpringConstraints<3,3> *this,FSolverParticlesRange *param_1,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_2,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_3,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_4,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_5,
          TArrayView<float_const_,int> *param_6,TArrayView<float_const_,int> *param_7,
          TArrayView<float_const_,int> *param_8,TArrayView<float_const_,int> *param_9,
          TVector<float,2> *param_10,TVector<float,2> *param_11,TVector<float,2> *param_12)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined4 uVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  float *pfVar7;
  code *pcVar8;
  uint uVar9;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar10;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar11;
  TArrayView<float_const_,int> *pTVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  TXPBDEmbeddedSpringConstraints<3,3> *pTVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  longlong local_138;
  undefined8 local_130;
  TVector<float,2> local_108;
  TVector<float,2> local_100;
  TVector<float,2> local_f8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *local_f0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *local_e8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *local_e0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *local_d8;
  TArrayView<float_const_,int> *local_d0;
  TVector<float,2> local_c8;
  TVector<float,2> local_c0;
  TVector<float,2> local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  fVar25 = __real_7f7fc99e;
  local_d0 = param_6;
  this->_padding_ = (longlong)&___7__TXPBDEmbeddedSpringConstraints__02_02_Softs_Chaos__6B_;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar16 = &(this->Constraints).ArrayMax;
  (this->Weights).ArrayNum = 0;
  (this->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpringLengths).ArrayNum = 0;
  *piVar16 = 0;
  piVar17 = &(this->Weights).ArrayMax;
  (this->SpringLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrigMapToReordered).ArrayNum = 0;
  (this->OrigMapToReordered).ArrayMax = 0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  *piVar17 = 0;
  piVar18 = &(this->SpringLengths).ArrayMax;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->OrigMapToReordered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar18 = 0;
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130._0_4_ = *(float *)param_10;
  if (fVar25 <= *(float *)param_10) {
    local_130._0_4_ = fVar25;
  }
  local_130._4_4_ = *(float *)&param_10->field_0x4;
  if (fVar25 <= *(float *)&param_10->field_0x4) {
    local_130._4_4_ = fVar25;
  }
  local_108._0_4_ = 0;
  if ((float)local_130 <= 0.0) {
    local_130._0_4_ = 0.0;
  }
  if (local_130._4_4_ <= 0.0) {
    local_130._4_4_ = 0.0;
  }
  local_d8 = param_4;
  local_e0 = param_5;
  local_108._4_4_ = 0x7f7fc99e;
  local_c8 = local_130;
  local_f0 = param_2;
  local_e8 = param_3;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->ExtensionStiffness,&local_c8,param_7,param_2->ArrayNum,&local_108);
  local_100._0_4_ = 0;
  local_100._4_4_ = 0x7f7fc99e;
  local_130._0_4_ = *(float *)param_11;
  if (fVar25 <= *(float *)param_11) {
    local_130._0_4_ = fVar25;
  }
  local_130._4_4_ = *(float *)&param_11->field_0x4;
  if (fVar25 <= *(float *)&param_11->field_0x4) {
    local_130._4_4_ = fVar25;
  }
  if ((float)local_130 <= 0.0) {
    local_130._0_4_ = 0.0;
  }
  if (local_130._4_4_ <= 0.0) {
    local_130._4_4_ = 0.0;
  }
  local_c0 = local_130;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->CompressionStiffness,&local_c0,param_8,param_2->ArrayNum,&local_100);
  local_f8._0_4_ = 0;
  local_130._0_4_ = *(float *)param_12;
  if (__real_447a0000 <= *(float *)param_12) {
    local_130._0_4_ = __real_447a0000;
  }
  local_130._4_4_ = *(float *)&param_12->field_0x4;
  if (__real_447a0000 <= *(float *)&param_12->field_0x4) {
    local_130._4_4_ = __real_447a0000;
  }
  local_f8._4_4_ = 0x447a0000;
  if ((float)local_130 <= 0.0) {
    local_130._0_4_ = 0.0;
  }
  if (local_130._4_4_ <= 0.0) {
    local_130._4_4_ = 0.0;
  }
  local_b8 = local_130;
  FPBDFlatWeightMap::FPBDFlatWeightMap
            (&this->DampingRatio,&local_b8,param_9,param_2->ArrayNum,&local_f8);
  uVar2 = param_2->ArrayNum;
  if ((param_3->ArrayNum != uVar2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSourceWeights.Num() == NumConstraints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x8f,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  if ((param_4->ArrayNum != uVar2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTargetIndices.Num() == NumConstraints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x90,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  if ((param_5->ArrayNum != uVar2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTargetWeights.Num() == NumConstraints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x91,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  if ((local_d0->ArrayNum != uVar2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSpringLengths.Num() == NumConstraints",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x92,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  if (((param_7->ArrayNum != 0) && (param_7->ArrayNum != uVar2)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InExtensionStiffnessMultipliers.IsEmpty() || InExtensionStiffnessMultipliers.Num() == NumConstraints"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x93,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  if (((param_8->ArrayNum != 0) && (param_8->ArrayNum != uVar2)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCompressionStiffnessMultipliers.IsEmpty() || InCompressionStiffnessMultipliers.Num() == NumConstraints"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x94,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  if (((param_9->ArrayNum != 0) && (param_9->ArrayNum != uVar2)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDampingMultipliers.IsEmpty() || InDampingMultipliers.Num() == NumConstraints"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
                          ,0x95,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*piVar16 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar2,&(this->Constraints).AllocatorInstance,(this->Constraints).ArrayNum,
               piVar16);
  }
  if (*piVar17 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar2,&(this->Weights).AllocatorInstance,(this->Weights).ArrayNum,piVar17);
  }
  if (*piVar18 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&(this->SpringLengths).AllocatorInstance,(this->SpringLengths).ArrayNum,
               piVar18);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->OrigMapToReordered,uVar2,Default);
  uVar9 = __xmm_80000000800000008000000080000000;
  uVar23 = 0;
  if ((int)uVar2 < 1) {
LAB_143f448f6:
    InitColor(this,param_1);
    iVar20 = (this->Constraints).ArrayNum;
    FPBDFlatWeightMap::ReorderIndicesAndShrink
              (&this->ExtensionStiffness,&this->OrigMapToReordered,iVar20);
    FPBDFlatWeightMap::ReorderIndicesAndShrink
              (&this->CompressionStiffness,&this->OrigMapToReordered,iVar20);
    FPBDFlatWeightMap::ReorderIndicesAndShrink(&this->DampingRatio,&this->OrigMapToReordered,iVar20)
    ;
    return this;
  }
  local_130 = (TVector<float,2>)0x0;
  local_138 = 0;
LAB_143f44530:
  pTVar11 = local_e8;
  uVar24 = ~uVar23 >> 0x1f;
  uVar14 = 0;
  if ((int)uVar23 < local_e8->ArrayNum) {
    uVar14 = uVar24;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  pTVar10 = local_f0;
  pTVar4 = pTVar11->DataPtr;
  uVar14 = 0;
  if ((int)uVar23 < local_f0->ArrayNum) {
    uVar14 = uVar24;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  pTVar5 = pTVar10->DataPtr;
  iVar20 = 0;
  lVar21 = 0;
  do {
    if ((*(int *)((longlong)&pTVar4->ArrayNum + (longlong)local_130) <= iVar20) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    if (*(float *)(lVar21 + *(longlong *)
                             ((longlong)&(pTVar4->AllocatorInstance).Data + (longlong)local_130)) !=
        0.0) {
      if ((pTVar5[local_138].ArrayNum <= iVar20) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
        return pTVar19;
      }
      iVar15 = *(int *)(pTVar5[local_138].AllocatorInstance.Data + lVar21);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
        return pTVar19;
      }
      fVar25 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar15);
      if (fVar25 != 0.0) goto LAB_143f44964;
    }
    pTVar11 = local_e0;
    iVar20 = iVar20 + 1;
    lVar21 = lVar21 + 4;
  } while (iVar20 < 3);
  uVar14 = 0;
  if ((int)uVar23 < local_e0->ArrayNum) {
    uVar14 = uVar24;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  pTVar10 = local_d8;
  pTVar4 = pTVar11->DataPtr;
  uVar14 = 0;
  if ((int)uVar23 < local_d8->ArrayNum) {
    uVar14 = uVar24;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  iVar20 = 0;
  pTVar5 = pTVar10->DataPtr;
  lVar21 = 0;
  do {
    if ((pTVar4[local_138].ArrayNum <= iVar20) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    if (*(float *)(pTVar4[local_138].AllocatorInstance.Data + lVar21) != 0.0) {
      if ((pTVar5[local_138].ArrayNum <= iVar20) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
        return pTVar19;
      }
      iVar15 = *(int *)(pTVar5[local_138].AllocatorInstance.Data + lVar21);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
        return pTVar19;
      }
      fVar25 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar15);
      if (fVar25 != 0.0) goto LAB_143f44964;
    }
    iVar20 = iVar20 + 1;
    lVar21 = lVar21 + 4;
  } while (iVar20 < 3);
  uVar14 = 0;
  if ((int)uVar23 < (this->OrigMapToReordered).ArrayNum) {
    uVar14 = uVar24;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  *(undefined4 *)((this->OrigMapToReordered).AllocatorInstance.Data + local_138 * 4) = 0xffffffff;
  goto LAB_143f448c4;
LAB_143f44964:
  iVar20 = 0;
  lVar21 = 0;
  do {
    pTVar10 = local_f0;
    uVar14 = 0;
    if ((int)uVar23 < local_f0->ArrayNum) {
      uVar14 = uVar24;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    pTVar5 = pTVar10->DataPtr;
    if ((pTVar5[local_138].ArrayNum <= iVar20) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    pTVar11 = local_e8;
    *(undefined4 *)((longlong)&local_b0 + lVar21) =
         *(undefined4 *)(pTVar5[local_138].AllocatorInstance.Data + lVar21);
    uVar14 = 0;
    if ((int)uVar23 < local_e8->ArrayNum) {
      uVar14 = uVar24;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    pTVar4 = pTVar11->DataPtr;
    if ((pTVar4[local_138].ArrayNum <= iVar20) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    iVar20 = iVar20 + 1;
    *(undefined4 *)((longlong)&local_98 + lVar21) =
         *(undefined4 *)(pTVar4[local_138].AllocatorInstance.Data + lVar21);
    lVar21 = lVar21 + 4;
  } while (iVar20 < 3);
  iVar20 = 0;
  lVar21 = 3;
  lVar22 = 0;
  do {
    pTVar11 = local_e0;
    uVar14 = 0;
    if ((int)uVar23 < local_e0->ArrayNum) {
      uVar14 = ~uVar23 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    pTVar4 = pTVar11->DataPtr;
    if ((pTVar4[local_138].ArrayNum <= iVar20) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    uVar14 = *(uint *)(pTVar4[local_138].AllocatorInstance.Data + lVar22);
    if (lVar21 < 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                          ,0x86,L"");
      if (bVar13) {
code_r0x000143f44bc9:
        pcVar8 = (code *)swi(3);
        pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
        return pTVar19;
      }
    }
    else if ((5 < lVar21) &&
            (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                 ,0x87,L""), bVar13)) goto code_r0x000143f44bc9;
    pTVar10 = local_d8;
    *(uint *)((longlong)&uStack_90 + lVar22 + 4) = uVar14 ^ uVar9;
    uVar14 = 0;
    if ((int)uVar23 < local_d8->ArrayNum) {
      uVar14 = ~uVar23 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    pTVar5 = pTVar10->DataPtr;
    if ((pTVar5[local_138].ArrayNum <= iVar20) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
      return pTVar19;
    }
    uVar3 = *(undefined4 *)(pTVar5[local_138].AllocatorInstance.Data + lVar22);
    if (lVar21 < 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                          ,0x86,L"");
      if (bVar13) {
code_r0x000143f44cb3:
        pcVar8 = (code *)swi(3);
        pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
        return pTVar19;
      }
    }
    else if ((5 < lVar21) &&
            (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                 ,0x87,L""), bVar13)) goto code_r0x000143f44cb3;
    *(undefined4 *)((longlong)&uStack_a8 + lVar22 + 4) = uVar3;
    iVar20 = iVar20 + 1;
    lVar22 = lVar22 + 4;
    lVar21 = lVar21 + 1;
  } while (iVar20 < 3);
  iVar20 = (this->Constraints).ArrayNum;
  if (iVar20 == (this->Constraints).ArrayMax) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,&(this->Constraints).AllocatorInstance,&(this->Constraints).ArrayMax);
  }
  (this->Constraints).ArrayNum = iVar20 + 1;
  pFVar6 = (this->Constraints).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar20 * 0x18;
  *(undefined8 *)pFVar1 = local_b0;
  *(undefined8 *)(pFVar1 + 8) = uStack_a8;
  *(undefined8 *)(pFVar6 + (longlong)iVar20 * 0x18 + 0x10) = local_a0;
  iVar15 = (this->Weights).ArrayNum;
  if (iVar15 == (this->Weights).ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,&(this->Weights).AllocatorInstance,&(this->Weights).ArrayMax);
  }
  pTVar12 = local_d0;
  (this->Weights).ArrayNum = iVar15 + 1;
  pFVar6 = (this->Weights).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar15 * 0x18;
  *(undefined8 *)pFVar1 = local_98;
  *(undefined8 *)(pFVar1 + 8) = uStack_90;
  *(undefined8 *)(pFVar6 + (longlong)iVar15 * 0x18 + 0x10) = local_88;
  uVar14 = 0;
  if ((int)uVar23 < local_d0->ArrayNum) {
    uVar14 = ~uVar23 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  iVar15 = (this->SpringLengths).ArrayNum;
  pfVar7 = pTVar12->DataPtr;
  if (iVar15 == (this->SpringLengths).ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&(this->SpringLengths).AllocatorInstance,
                        &(this->SpringLengths).ArrayMax);
  }
  (this->SpringLengths).ArrayNum = iVar15 + 1;
  *(float *)((this->SpringLengths).AllocatorInstance.Data + (longlong)iVar15 * 4) =
       pfVar7[local_138];
  uVar14 = 0;
  if ((int)uVar23 < (this->OrigMapToReordered).ArrayNum) {
    uVar14 = ~uVar23 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TXPBDEmbeddedSpringConstraints<3,3> *)(*pcVar8)();
    return pTVar19;
  }
  *(int *)((this->OrigMapToReordered).AllocatorInstance.Data + local_138 * 4) = iVar20;
LAB_143f448c4:
  uVar23 = uVar23 + 1;
  local_130 = (TVector<float,2>)((longlong)local_130 + 0x10);
  local_138 = local_138 + 1;
  if ((int)uVar2 <= local_138) goto LAB_143f448f6;
  goto LAB_143f44530;
}

// ~TXPBDEmbeddedSpringConstraints<1,1> @ 143f4ad40

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::~TXPBDEmbeddedSpringConstraints<1,1>
          (TXPBDEmbeddedSpringConstraints<1,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DampingRatio).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompressionStiffness).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtensionStiffness).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdasDamping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OrigMapToReordered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpringLengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Weights).AllocatorInstance.Data;
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

// ~TXPBDEmbeddedSpringConstraints<1,3> @ 143f4adf0

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::~TXPBDEmbeddedSpringConstraints<1,3>
          (TXPBDEmbeddedSpringConstraints<1,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DampingRatio).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompressionStiffness).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtensionStiffness).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdasDamping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OrigMapToReordered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpringLengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Weights).AllocatorInstance.Data;
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

// ~TXPBDEmbeddedSpringConstraints<3,3> @ 143f4aea0

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::~TXPBDEmbeddedSpringConstraints<3,3>
          (TXPBDEmbeddedSpringConstraints<3,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DampingRatio).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompressionStiffness).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtensionStiffness).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdasDamping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OrigMapToReordered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpringLengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Weights).AllocatorInstance.Data;
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

// Apply @ 143f55ff0

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::Apply
          (TXPBDEmbeddedSpringConstraints<1,1> *this,FSolverParticlesRange *param_1,float param_2)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId223,"TXPBDEmbeddedSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
               ,0xdf);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId223);
  }
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    ApplyInternal(this,param_1,param_2);
  }
  else {
    ApplyISPC(this,param_1,param_2);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply @ 143f560a0

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::Apply
          (TXPBDEmbeddedSpringConstraints<1,3> *this,FSolverParticlesRange *param_1,float param_2)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId223,"TXPBDEmbeddedSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
               ,0xdf);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId223);
  }
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    ApplyInternal(this,param_1,param_2);
  }
  else {
    ApplyISPC(this,param_1,param_2);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply @ 143f56150

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::Apply
          (TXPBDEmbeddedSpringConstraints<3,3> *this,FSolverParticlesRange *param_1,float param_2)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId223,"TXPBDEmbeddedSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDEmbeddedSpringConstraints.h"
               ,0xdf);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::Apply(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId223);
  }
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    ApplyInternal(this,param_1,param_2);
  }
  else {
    ApplyISPC(this,param_1,param_2);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyISPC @ 143f56200

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::ApplyISPC
          (TXPBDEmbeddedSpringConstraints<1,1> *this,FSolverParticlesRange *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TVector<float,3> *pTVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar12;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar13;
  int iVar14;
  longlong lVar15;
  char cVar16;
  float *pfVar17;
  char cVar18;
  uint uVar19;
  char cVar20;
  float *local_c0;
  float *local_b8;
  float *local_b0;
  TArrayView<Chaos::TVector<float,3>,int> local_80;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_70;
  float *local_60;
  undefined8 uStack_58;
  
  iVar14 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if ((iVar14 < 2) || ((this->Constraints).ArrayNum <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    ApplyInternal(this,param_1,param_2);
    return;
  }
  iVar14 = iVar14 + -1;
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar20 = '\0';
  }
  else {
    cVar20 = '\x01';
  }
  if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar16 = '\0';
  }
  else {
    cVar16 = '\x01';
  }
  if (((*(float *)&(this->DampingRatio).MapView.OffsetRange <= 0.0) && (cVar18 == '\0')) ||
     (uVar19 = 0, iVar14 < 1)) {
    if (iVar14 < 1) {
      return;
    }
  }
  else {
    local_b8 = (float *)0x0;
    do {
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar19 = uVar19 + 1;
      iVar1 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                      (longlong)local_b8 * 4);
      lVar15 = (longlong)iVar1;
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                      (longlong)local_b8 * 4 + 4);
      if (cVar18 == '\0') {
        local_b0 = (float *)0x0;
      }
      else {
        local_b0 = (this->DampingRatio).MapView.MapValues.DataPtr + lVar15;
      }
      if (cVar16 == '\0') {
        local_c0 = (float *)0x0;
      }
      else {
        local_c0 = (this->CompressionStiffness).MapView.MapValues.DataPtr + lVar15;
      }
      if (cVar20 == '\0') {
        pfVar17 = (float *)0x0;
      }
      else {
        pfVar17 = (this->ExtensionStiffness).MapView.MapValues.DataPtr + lVar15;
      }
      pFVar4 = (this->LambdasDamping).AllocatorInstance.Data;
      pFVar5 = (this->SpringLengths).AllocatorInstance.Data;
      pFVar6 = (this->Constraints).AllocatorInstance.Data;
      pTVar12 = FSolverParticlesRange::XArray(param_1,&local_80);
      pTVar7 = pTVar12->DataPtr;
      pTVar13 = FSolverParticlesRange::GetPAndInvM(param_1,&local_70);
      ApplyXPBDEmbeddedSpringDampingConstraints
                (pTVar13->DataPtr,pTVar7,pFVar6 + lVar15 * 8,pFVar5 + lVar15 * 4,pFVar4 + lVar15 * 4
                 ,param_2,cVar20,&(this->ExtensionStiffness).MapView.OffsetRange,pfVar17,cVar16,
                 &(this->CompressionStiffness).MapView.OffsetRange,local_c0,cVar18,
                 &(this->DampingRatio).MapView.OffsetRange,local_b0,iVar2 - iVar1);
      local_b8 = (float *)((longlong)local_b8 + 1);
    } while ((longlong)local_b8 < (longlong)iVar14);
  }
  uVar19 = 0;
  local_c0 = (float *)0x0;
  while( true ) {
    uVar11 = 0;
    if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar11 = ~uVar19 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar1 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                    (longlong)local_c0 * 4);
    lVar15 = (longlong)iVar1;
    uVar11 = 0;
    if ((int)(uVar19 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar11 = ~(uVar19 + 1) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                    (longlong)local_c0 * 4 + 4);
    if (cVar16 == '\0') {
      local_b8 = (float *)0x0;
    }
    else {
      local_b8 = (this->CompressionStiffness).MapView.MapValues.DataPtr + lVar15;
    }
    if (cVar20 == '\0') {
      pfVar17 = (float *)0x0;
    }
    else {
      local_60 = (this->ExtensionStiffness).MapView.MapValues.DataPtr;
      uStack_58 = *(undefined8 *)&(this->ExtensionStiffness).MapView.MapValues.ArrayNum;
      pfVar17 = local_60 + lVar15;
    }
    pFVar4 = (this->Lambdas).AllocatorInstance.Data;
    pFVar5 = (this->SpringLengths).AllocatorInstance.Data;
    pFVar6 = (this->Constraints).AllocatorInstance.Data;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L""), bVar10)) break;
    lVar8 = *(longlong *)&param_1->field_0x8;
    if (((*(int *)&param_1->field_0x10 < 0) ||
        (*(int *)(lVar8 + 0xb0) < *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x52,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar3 = *(int *)&param_1->field_0x10;
    lVar8 = *(longlong *)(lVar8 + 0xa8);
    if ((*(int *)&param_1->field_0x14 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    ApplyXPBDEmbeddedSpringConstraints
              ((longlong)iVar3 * 0x10 + lVar8,pFVar6 + lVar15 * 8,pFVar5 + lVar15 * 4,
               pFVar4 + lVar15 * 4,param_2,cVar20,&(this->ExtensionStiffness).MapView.OffsetRange,
               pfVar17,cVar16,&(this->CompressionStiffness).MapView.OffsetRange,local_b8,
               iVar2 - iVar1);
    uVar19 = uVar19 + 1;
    local_c0 = (float *)((longlong)local_c0 + 1);
    if ((longlong)iVar14 <= (longlong)local_c0) {
      return;
    }
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// ApplyISPC @ 143f56860

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::ApplyISPC
          (TXPBDEmbeddedSpringConstraints<1,3> *this,FSolverParticlesRange *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TVector<float,3> *pTVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar13;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  char cVar19;
  float *pfVar20;
  char cVar21;
  float *pfVar22;
  char cVar23;
  float *local_d0;
  float *local_c8;
  float *local_c0;
  longlong local_b8;
  TArrayView<Chaos::TVector<float,3>,int> local_78;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_68;
  float *local_58;
  undefined8 uStack_50;
  
  iVar15 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if ((iVar15 < 2) || ((this->Constraints).ArrayNum <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    ApplyInternal(this,param_1,param_2);
    return;
  }
  iVar15 = iVar15 + -1;
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar21 = '\0';
  }
  else {
    cVar21 = '\x01';
  }
  if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x01';
  }
  if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar23 = '\0';
  }
  else {
    cVar23 = '\x01';
  }
  if (((*(float *)&(this->DampingRatio).MapView.OffsetRange <= 0.0) && (cVar21 == '\0')) ||
     (uVar16 = 0, iVar15 < 1)) {
    if (iVar15 < 1) {
      return;
    }
  }
  else {
    local_b8 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar16 = uVar16 + 1;
      iVar1 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + local_b8 * 4);
      lVar17 = (longlong)iVar1;
      uVar12 = 0;
      if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                      local_b8 * 4 + 4);
      if (cVar21 == '\0') {
        local_c8 = (float *)0x0;
      }
      else {
        local_c8 = (this->DampingRatio).MapView.MapValues.DataPtr + lVar17;
      }
      if (cVar23 == '\0') {
        local_c0 = (float *)0x0;
      }
      else {
        local_c0 = (this->CompressionStiffness).MapView.MapValues.DataPtr + lVar17;
      }
      if (cVar19 == '\0') {
        local_d0 = (float *)0x0;
      }
      else {
        local_d0 = (this->ExtensionStiffness).MapView.MapValues.DataPtr + lVar17;
      }
      pFVar4 = (this->LambdasDamping).AllocatorInstance.Data;
      pFVar5 = (this->Weights).AllocatorInstance.Data;
      pFVar6 = (this->Constraints).AllocatorInstance.Data;
      pFVar7 = (this->SpringLengths).AllocatorInstance.Data;
      pTVar13 = FSolverParticlesRange::XArray(param_1,&local_78);
      pTVar8 = pTVar13->DataPtr;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_68);
      ApplyXPBDEmbeddedVertexFaceSpringDampingConstraints
                (pTVar14->DataPtr,pTVar8,pFVar6 + lVar17 * 0x10,pFVar5 + lVar17 * 0x10,
                 pFVar7 + lVar17 * 4,pFVar4 + lVar17 * 4,param_2,cVar19,
                 &(this->ExtensionStiffness).MapView.OffsetRange,local_d0,cVar23,
                 &(this->CompressionStiffness).MapView.OffsetRange,local_c0,cVar21,
                 &(this->DampingRatio).MapView.OffsetRange,local_c8,iVar2 - iVar1);
      local_b8 = local_b8 + 1;
    } while (local_b8 < iVar15);
  }
  uVar16 = 0;
  lVar17 = 0;
  while( true ) {
    uVar12 = 0;
    if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar12 = ~uVar16 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar1 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar17 * 4);
    lVar18 = (longlong)iVar1;
    uVar12 = 0;
    if ((int)(uVar16 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar12 = ~(uVar16 + 1) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar17 * 4 + 4);
    if (cVar23 == '\0') {
      pfVar22 = (float *)0x0;
    }
    else {
      pfVar22 = (this->CompressionStiffness).MapView.MapValues.DataPtr + lVar18;
    }
    if (cVar19 == '\0') {
      pfVar20 = (float *)0x0;
    }
    else {
      local_58 = (this->ExtensionStiffness).MapView.MapValues.DataPtr;
      uStack_50 = *(undefined8 *)&(this->ExtensionStiffness).MapView.MapValues.ArrayNum;
      pfVar20 = local_58 + lVar18;
    }
    pFVar4 = (this->Lambdas).AllocatorInstance.Data;
    pFVar5 = (this->SpringLengths).AllocatorInstance.Data;
    pFVar6 = (this->Weights).AllocatorInstance.Data;
    pFVar7 = (this->Constraints).AllocatorInstance.Data;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L""), bVar11)) break;
    lVar9 = *(longlong *)&param_1->field_0x8;
    if (((*(int *)&param_1->field_0x10 < 0) ||
        (*(int *)(lVar9 + 0xb0) < *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x52,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar3 = *(int *)&param_1->field_0x10;
    lVar9 = *(longlong *)(lVar9 + 0xa8);
    if ((*(int *)&param_1->field_0x14 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    ApplyXPBDEmbeddedVertexFaceSpringConstraints
              ((longlong)iVar3 * 0x10 + lVar9,pFVar7 + lVar18 * 0x10,pFVar6 + lVar18 * 0x10,
               pFVar5 + lVar18 * 4,pFVar4 + lVar18 * 4,param_2,cVar19,
               &(this->ExtensionStiffness).MapView.OffsetRange,pfVar20,cVar23,
               &(this->CompressionStiffness).MapView.OffsetRange,pfVar22,iVar2 - iVar1);
    uVar16 = uVar16 + 1;
    lVar17 = lVar17 + 1;
    if (iVar15 <= lVar17) {
      return;
    }
  }
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

// ApplyISPC @ 143f56f00

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::ApplyISPC
          (TXPBDEmbeddedSpringConstraints<3,3> *this,FSolverParticlesRange *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TVector<float,3> *pTVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar13;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  char cVar19;
  float *pfVar20;
  char cVar21;
  float *pfVar22;
  char cVar23;
  float *local_d0;
  float *local_c8;
  float *local_c0;
  longlong local_b8;
  TArrayView<Chaos::TVector<float,3>,int> local_78;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_68;
  float *local_58;
  undefined8 uStack_50;
  
  iVar15 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if ((iVar15 < 2) || ((this->Constraints).ArrayNum <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    ApplyInternal(this,param_1,param_2);
    return;
  }
  iVar15 = iVar15 + -1;
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar21 = '\0';
  }
  else {
    cVar21 = '\x01';
  }
  if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x01';
  }
  if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar23 = '\0';
  }
  else {
    cVar23 = '\x01';
  }
  if (((*(float *)&(this->DampingRatio).MapView.OffsetRange <= 0.0) && (cVar21 == '\0')) ||
     (uVar16 = 0, iVar15 < 1)) {
    if (iVar15 < 1) {
      return;
    }
  }
  else {
    local_b8 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar16 = uVar16 + 1;
      iVar1 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + local_b8 * 4);
      lVar17 = (longlong)iVar1;
      uVar12 = 0;
      if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                      local_b8 * 4 + 4);
      if (cVar21 == '\0') {
        local_c8 = (float *)0x0;
      }
      else {
        local_c8 = (this->DampingRatio).MapView.MapValues.DataPtr + lVar17;
      }
      if (cVar23 == '\0') {
        local_c0 = (float *)0x0;
      }
      else {
        local_c0 = (this->CompressionStiffness).MapView.MapValues.DataPtr + lVar17;
      }
      if (cVar19 == '\0') {
        local_d0 = (float *)0x0;
      }
      else {
        local_d0 = (this->ExtensionStiffness).MapView.MapValues.DataPtr + lVar17;
      }
      pFVar4 = (this->LambdasDamping).AllocatorInstance.Data;
      pFVar5 = (this->SpringLengths).AllocatorInstance.Data;
      pFVar6 = (this->Weights).AllocatorInstance.Data;
      pFVar7 = (this->Constraints).AllocatorInstance.Data;
      pTVar13 = FSolverParticlesRange::XArray(param_1,&local_78);
      pTVar8 = pTVar13->DataPtr;
      pTVar14 = FSolverParticlesRange::GetPAndInvM(param_1,&local_68);
      ApplyXPBDEmbeddedFaceSpringDampingConstraints
                (pTVar14->DataPtr,pTVar8,pFVar7 + lVar17 * 0x18,pFVar6 + lVar17 * 0x18,
                 pFVar5 + lVar17 * 4,pFVar4 + lVar17 * 4,param_2,cVar19,
                 &(this->ExtensionStiffness).MapView.OffsetRange,local_d0,cVar23,
                 &(this->CompressionStiffness).MapView.OffsetRange,local_c0,cVar21,
                 &(this->DampingRatio).MapView.OffsetRange,local_c8,iVar2 - iVar1);
      local_b8 = local_b8 + 1;
    } while (local_b8 < iVar15);
  }
  uVar16 = 0;
  lVar17 = 0;
  while( true ) {
    uVar12 = 0;
    if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar12 = ~uVar16 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar1 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar17 * 4);
    lVar18 = (longlong)iVar1;
    uVar12 = 0;
    if ((int)(uVar16 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar12 = ~(uVar16 + 1) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar17 * 4 + 4);
    if (cVar23 == '\0') {
      pfVar22 = (float *)0x0;
    }
    else {
      pfVar22 = (this->CompressionStiffness).MapView.MapValues.DataPtr + lVar18;
    }
    if (cVar19 == '\0') {
      pfVar20 = (float *)0x0;
    }
    else {
      local_58 = (this->ExtensionStiffness).MapView.MapValues.DataPtr;
      uStack_50 = *(undefined8 *)&(this->ExtensionStiffness).MapView.MapValues.ArrayNum;
      pfVar20 = local_58 + lVar18;
    }
    pFVar4 = (this->Lambdas).AllocatorInstance.Data;
    pFVar5 = (this->SpringLengths).AllocatorInstance.Data;
    pFVar6 = (this->Weights).AllocatorInstance.Data;
    pFVar7 = (this->Constraints).AllocatorInstance.Data;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L""), bVar11)) break;
    lVar9 = *(longlong *)&param_1->field_0x8;
    if (((*(int *)&param_1->field_0x10 < 0) ||
        (*(int *)(lVar9 + 0xb0) < *(int *)&param_1->field_0x10 + *(int *)&param_1->field_0x14)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x52,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar3 = *(int *)&param_1->field_0x10;
    lVar9 = *(longlong *)(lVar9 + 0xa8);
    if ((*(int *)&param_1->field_0x14 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    ApplyXPBDEmbeddedFaceSpringConstraints
              ((longlong)iVar3 * 0x10 + lVar9,pFVar7 + lVar18 * 0x18,pFVar6 + lVar18 * 0x18,
               pFVar5 + lVar18 * 4,pFVar4 + lVar18 * 4,param_2,cVar19,
               &(this->ExtensionStiffness).MapView.OffsetRange,pfVar20,cVar23,
               &(this->CompressionStiffness).MapView.OffsetRange,pfVar22,iVar2 - iVar1);
    uVar16 = uVar16 + 1;
    lVar17 = lVar17 + 1;
    if (iVar15 <= lVar17) {
      return;
    }
  }
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

// ApplyInternal @ 143f575a0

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::ApplyInternal
          (TXPBDEmbeddedSpringConstraints<1,1> *this,FSolverParticlesRange *param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_38d1b717;
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange) || (bVar7)) &&
     (uVar11 = 0, 0 < (this->Constraints).ArrayNum)) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
         (fVar15 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar15 & uVar6) <= fVar5)) {
        fVar18 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      }
      else {
        fVar18 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->DampingRatio).MapView.MapValues,uVar11);
        fVar18 = fVar15 * *pfVar9 + fVar18;
      }
      if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar15 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar15 & uVar6) <= fVar5)) {
        fVar17 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
      }
      else {
        fVar17 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->CompressionStiffness).MapView.MapValues,uVar11);
        fVar17 = fVar15 * *pfVar9 + fVar17;
      }
      if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar15 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar15 & uVar6) <= fVar5)) {
        fVar16 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
      }
      else {
        fVar16 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->ExtensionStiffness).MapView.MapValues,uVar11);
        fVar16 = fVar15 * *pfVar9 + fVar16;
      }
      uVar12 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->LambdasDamping).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = (this->LambdasDamping).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->SpringLengths).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar15 = *(float *)((this->SpringLengths).AllocatorInstance.Data + lVar14 * 4);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (this->Weights).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      Spring::GetXPBDEmbeddedSpringDampingDelta<Chaos::Softs::FSolverParticlesRange,2>
                ((TVector<float,3> *)&local_b8,param_1,param_2,
                 (TVector<int,2> *)((this->Constraints).AllocatorInstance.Data + lVar14 * 8),
                 (TVector<float,2> *)(pFVar3 + lVar13),fVar15,
                 (float *)(pFVar2 + (longlong)(int)uVar11 * 4),fVar16,fVar17,fVar18);
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar1 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar14 * 8);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar15 = *(float *)((this->Weights).AllocatorInstance.Data + lVar14 * 8);
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pfVar9 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar1);
      fVar15 = fVar15 * *pfVar9;
      fVar18 = local_b8 * fVar15;
      fVar17 = local_b4 * fVar15;
      fVar15 = local_b0 * fVar15;
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                    *(int *)&param_1->field_0x10 + iVar1);
      *(float *)pTVar10 = fVar18 + *(float *)pTVar10;
      *(float *)&pTVar10->field_0x4 = fVar17 + *(float *)&pTVar10->field_0x4;
      *(float *)&pTVar10->field_0x8 = fVar15 + *(float *)&pTVar10->field_0x8;
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar1 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar14 * 8 + 4);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar15 = *(float *)((this->Weights).AllocatorInstance.Data + lVar14 * 8 + 4);
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pfVar9 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar1);
      fVar15 = fVar15 * *pfVar9;
      fVar18 = local_b8 * fVar15;
      fVar17 = local_b4 * fVar15;
      fVar15 = local_b0 * fVar15;
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                    *(int *)&param_1->field_0x10 + iVar1);
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 8;
      *(float *)pTVar10 = fVar18 + *(float *)pTVar10;
      *(float *)&pTVar10->field_0x4 = fVar17 + *(float *)&pTVar10->field_0x4;
      *(float *)&pTVar10->field_0x8 = fVar15 + *(float *)&pTVar10->field_0x8;
    } while ((int)uVar11 < (this->Constraints).ArrayNum);
  }
  uVar11 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar15 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar15 & uVar6) <= fVar5)) {
        fVar18 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
      }
      else {
        fVar18 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->CompressionStiffness).MapView.MapValues,uVar11);
        fVar18 = fVar15 * *pfVar9 + fVar18;
      }
      if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar15 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar15 & uVar6) <= fVar5)) {
        fVar17 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
      }
      else {
        fVar17 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->ExtensionStiffness).MapView.MapValues,uVar11);
        fVar17 = fVar15 * *pfVar9 + fVar17;
      }
      uVar12 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->Lambdas).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = (this->Lambdas).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->SpringLengths).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar15 = *(float *)((this->SpringLengths).AllocatorInstance.Data + lVar14 * 4);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (this->Weights).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      Spring::GetXPBDEmbeddedSpringDelta<Chaos::Softs::FSolverParticlesRange,2>
                ((TVector<float,3> *)&local_a8,param_1,param_2,
                 (TVector<int,2> *)((this->Constraints).AllocatorInstance.Data + lVar14 * 8),
                 (TVector<float,2> *)(pFVar3 + lVar13),fVar15,
                 (float *)(pFVar2 + (longlong)(int)uVar11 * 4),fVar17,fVar18);
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar1 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar14 * 8);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar15 = *(float *)((this->Weights).AllocatorInstance.Data + lVar14 * 8);
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pfVar9 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar1);
      fVar15 = fVar15 * *pfVar9;
      fVar17 = local_a4 * fVar15;
      fVar18 = fVar15 * local_a8;
      fVar15 = local_a0 * fVar15;
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                    *(int *)&param_1->field_0x10 + iVar1);
      *(float *)pTVar10 = fVar18 + *(float *)pTVar10;
      *(float *)&pTVar10->field_0x4 = fVar17 + *(float *)&pTVar10->field_0x4;
      *(float *)&pTVar10->field_0x8 = fVar15 + *(float *)&pTVar10->field_0x8;
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar1 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar14 * 8 + 4);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar15 = *(float *)((this->Weights).AllocatorInstance.Data + lVar14 * 8 + 4);
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pfVar9 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar1);
      fVar15 = fVar15 * *pfVar9;
      fVar17 = local_a4 * fVar15;
      fVar18 = fVar15 * local_a8;
      fVar15 = local_a0 * fVar15;
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x57,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                    *(int *)&param_1->field_0x10 + iVar1);
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 8;
      *(float *)pTVar10 = fVar18 + *(float *)pTVar10;
      *(float *)&pTVar10->field_0x4 = fVar17 + *(float *)&pTVar10->field_0x4;
      *(float *)&pTVar10->field_0x8 = fVar15 + *(float *)&pTVar10->field_0x8;
    } while ((int)uVar11 < (this->Constraints).ArrayNum);
  }
  return;
}

// ApplyInternal @ 143f58080

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::ApplyInternal
          (TXPBDEmbeddedSpringConstraints<1,3> *this,FSolverParticlesRange *param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_38d1b717;
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange) || (bVar7)) &&
     (uVar11 = 0, 0 < (this->Constraints).ArrayNum)) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar19 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      }
      else {
        fVar19 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->DampingRatio).MapView.MapValues,uVar11);
        fVar19 = fVar16 * *pfVar9 + fVar19;
      }
      if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar18 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
      }
      else {
        fVar18 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->CompressionStiffness).MapView.MapValues,uVar11);
        fVar18 = fVar16 * *pfVar9 + fVar18;
      }
      if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar17 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
      }
      else {
        fVar17 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->ExtensionStiffness).MapView.MapValues,uVar11);
        fVar17 = fVar16 * *pfVar9 + fVar17;
      }
      uVar15 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->LambdasDamping).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->LambdasDamping).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->SpringLengths).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar16 = *(float *)((this->SpringLengths).AllocatorInstance.Data + lVar13 * 4);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Weights).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Spring::GetXPBDEmbeddedSpringDampingDelta<Chaos::Softs::FSolverParticlesRange,4>
                ((TVector<float,3> *)&local_b8,param_1,param_2,
                 (TVector<int,4> *)((this->Constraints).AllocatorInstance.Data + lVar12),
                 (TVector<float,4> *)(pFVar3 + lVar12),fVar16,
                 (float *)(pFVar2 + (longlong)(int)uVar11 * 4),fVar17,fVar18,fVar19);
      lVar14 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->Constraints).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar14 + lVar12);
        uVar8 = 0;
        if ((int)uVar11 < (this->Weights).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->Weights).AllocatorInstance.Data;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar9 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar1);
        fVar16 = *(float *)(pFVar2 + lVar14 + lVar12) * *pfVar9;
        fVar18 = local_b4 * fVar16;
        fVar19 = fVar16 * local_b8;
        fVar16 = local_b0 * fVar16;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      *(int *)&param_1->field_0x10 + iVar1);
        lVar14 = lVar14 + 4;
        *(float *)pTVar10 = fVar19 + *(float *)pTVar10;
        *(float *)&pTVar10->field_0x4 = fVar18 + *(float *)&pTVar10->field_0x4;
        *(float *)&pTVar10->field_0x8 = fVar16 + *(float *)&pTVar10->field_0x8;
      } while (lVar14 < 0x10);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < (this->Constraints).ArrayNum);
  }
  uVar11 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar19 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
      }
      else {
        fVar19 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->CompressionStiffness).MapView.MapValues,uVar11);
        fVar19 = fVar16 * *pfVar9 + fVar19;
      }
      if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar18 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
      }
      else {
        fVar18 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->ExtensionStiffness).MapView.MapValues,uVar11);
        fVar18 = fVar16 * *pfVar9 + fVar18;
      }
      uVar15 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->Lambdas).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Lambdas).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->SpringLengths).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar16 = *(float *)((this->SpringLengths).AllocatorInstance.Data + lVar13 * 4);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Weights).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Spring::GetXPBDEmbeddedSpringDelta<Chaos::Softs::FSolverParticlesRange,4>
                ((TVector<float,3> *)&local_a8,param_1,param_2,
                 (TVector<int,4> *)((this->Constraints).AllocatorInstance.Data + lVar12),
                 (TVector<float,4> *)(pFVar3 + lVar12),fVar16,
                 (float *)(pFVar2 + (longlong)(int)uVar11 * 4),fVar18,fVar19);
      lVar14 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->Constraints).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar14 + lVar12);
        uVar8 = 0;
        if ((int)uVar11 < (this->Weights).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->Weights).AllocatorInstance.Data;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar9 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar1);
        fVar16 = *(float *)(pFVar2 + lVar14 + lVar12) * *pfVar9;
        fVar18 = local_a4 * fVar16;
        fVar19 = fVar16 * local_a8;
        fVar16 = local_a0 * fVar16;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      *(int *)&param_1->field_0x10 + iVar1);
        lVar14 = lVar14 + 4;
        *(float *)pTVar10 = fVar19 + *(float *)pTVar10;
        *(float *)&pTVar10->field_0x4 = fVar18 + *(float *)&pTVar10->field_0x4;
        *(float *)&pTVar10->field_0x8 = fVar16 + *(float *)&pTVar10->field_0x8;
      } while (lVar14 < 0x10);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < (this->Constraints).ArrayNum);
  }
  return;
}

// ApplyInternal @ 143f58950

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::ApplyInternal
          (TXPBDEmbeddedSpringConstraints<3,3> *this,FSolverParticlesRange *param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_38d1b717;
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange) || (bVar7)) &&
     (uVar11 = 0, 0 < (this->Constraints).ArrayNum)) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar19 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      }
      else {
        fVar19 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->DampingRatio).MapView.MapValues,uVar11);
        fVar19 = fVar16 * *pfVar9 + fVar19;
      }
      if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar18 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
      }
      else {
        fVar18 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->CompressionStiffness).MapView.MapValues,uVar11);
        fVar18 = fVar16 * *pfVar9 + fVar18;
      }
      if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar17 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
      }
      else {
        fVar17 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->ExtensionStiffness).MapView.MapValues,uVar11);
        fVar17 = fVar16 * *pfVar9 + fVar17;
      }
      uVar15 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->LambdasDamping).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->LambdasDamping).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->SpringLengths).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar16 = *(float *)((this->SpringLengths).AllocatorInstance.Data + lVar13 * 4);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Weights).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Spring::GetXPBDEmbeddedSpringDampingDelta<Chaos::Softs::FSolverParticlesRange,6>
                ((TVector<float,3> *)&local_b8,param_1,param_2,
                 (TVector<int,6> *)((this->Constraints).AllocatorInstance.Data + lVar12),
                 (TVector<float,6> *)(pFVar3 + lVar12),fVar16,
                 (float *)(pFVar2 + (longlong)(int)uVar11 * 4),fVar17,fVar18,fVar19);
      lVar14 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->Constraints).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar14 + lVar12);
        uVar8 = 0;
        if ((int)uVar11 < (this->Weights).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->Weights).AllocatorInstance.Data;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar9 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar1);
        fVar16 = *(float *)(pFVar2 + lVar14 + lVar12) * *pfVar9;
        fVar18 = local_b4 * fVar16;
        fVar19 = fVar16 * local_b8;
        fVar16 = local_b0 * fVar16;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      *(int *)&param_1->field_0x10 + iVar1);
        lVar14 = lVar14 + 4;
        *(float *)pTVar10 = fVar19 + *(float *)pTVar10;
        *(float *)&pTVar10->field_0x4 = fVar18 + *(float *)&pTVar10->field_0x4;
        *(float *)&pTVar10->field_0x8 = fVar16 + *(float *)&pTVar10->field_0x8;
      } while (lVar14 < 0x18);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar11 < (this->Constraints).ArrayNum);
  }
  uVar11 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      if (((this->CompressionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar19 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
      }
      else {
        fVar19 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->CompressionStiffness).MapView.MapValues,uVar11);
        fVar19 = fVar16 * *pfVar9 + fVar19;
      }
      if (((this->ExtensionStiffness).MapView.MapValues.ArrayNum < 1) ||
         (fVar16 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
         (float)((uint)fVar16 & uVar6) <= fVar5)) {
        fVar18 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
      }
      else {
        fVar18 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&(this->ExtensionStiffness).MapView.MapValues,uVar11);
        fVar18 = fVar16 * *pfVar9 + fVar18;
      }
      uVar15 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->Lambdas).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Lambdas).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->SpringLengths).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar16 = *(float *)((this->SpringLengths).AllocatorInstance.Data + lVar13 * 4);
      uVar8 = 0;
      if ((int)uVar11 < (this->Weights).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Weights).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Spring::GetXPBDEmbeddedSpringDelta<Chaos::Softs::FSolverParticlesRange,6>
                ((TVector<float,3> *)&local_a8,param_1,param_2,
                 (TVector<int,6> *)((this->Constraints).AllocatorInstance.Data + lVar12),
                 (TVector<float,6> *)(pFVar3 + lVar12),fVar16,
                 (float *)(pFVar2 + (longlong)(int)uVar11 * 4),fVar18,fVar19);
      lVar14 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->Constraints).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = *(int *)((this->Constraints).AllocatorInstance.Data + lVar14 + lVar12);
        uVar8 = 0;
        if ((int)uVar11 < (this->Weights).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->Weights).AllocatorInstance.Data;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar9 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar1);
        fVar16 = *(float *)(pFVar2 + lVar14 + lVar12) * *pfVar9;
        fVar18 = local_a4 * fVar16;
        fVar19 = fVar16 * local_a8;
        fVar16 = local_a0 * fVar16;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x57,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      *(int *)&param_1->field_0x10 + iVar1);
        lVar14 = lVar14 + 4;
        *(float *)pTVar10 = fVar19 + *(float *)pTVar10;
        *(float *)&pTVar10->field_0x4 = fVar18 + *(float *)&pTVar10->field_0x4;
        *(float *)&pTVar10->field_0x8 = fVar16 + *(float *)&pTVar10->field_0x8;
      } while (lVar14 < 0x18);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar11 < (this->Constraints).ArrayNum);
  }
  return;
}

// ApplyProperties @ 143f59220

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::ApplyProperties
          (TXPBDEmbeddedSpringConstraints<1,1> *this,float param_1,int param_2)

{
  return;
}

// ApplyProperties @ 143f59230

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::ApplyProperties
          (TXPBDEmbeddedSpringConstraints<1,3> *this,float param_1,int param_2)

{
  return;
}

// ApplyProperties @ 143f59240

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::ApplyProperties
          (TXPBDEmbeddedSpringConstraints<3,3> *this,float param_1,int param_2)

{
  return;
}

// GetCompressionStiffness @ 143f6c7b0

float __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::GetCompressionStiffness
          (TXPBDEmbeddedSpringConstraints<1,1> *this,int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  if ((0 < (this->CompressionStiffness).MapView.MapValues.ArrayNum) &&
     (fVar1 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
     __real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       (&(this->CompressionStiffness).MapView.MapValues,param_1);
    return fVar1 * *pfVar3 + fVar2;
  }
  return *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
}

// GetCompressionStiffness @ 143f6c830

float __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::GetCompressionStiffness
          (TXPBDEmbeddedSpringConstraints<1,3> *this,int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  if ((0 < (this->CompressionStiffness).MapView.MapValues.ArrayNum) &&
     (fVar1 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
     __real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       (&(this->CompressionStiffness).MapView.MapValues,param_1);
    return fVar1 * *pfVar3 + fVar2;
  }
  return *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
}

// GetCompressionStiffness @ 143f6c8b0

float __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::GetCompressionStiffness
          (TXPBDEmbeddedSpringConstraints<3,3> *this,int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  if ((0 < (this->CompressionStiffness).MapView.MapValues.ArrayNum) &&
     (fVar1 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange.field_0x4,
     __real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       (&(this->CompressionStiffness).MapView.MapValues,param_1);
    return fVar1 * *pfVar3 + fVar2;
  }
  return *(float *)&(this->CompressionStiffness).MapView.OffsetRange;
}

// GetConstraints @ 143f6c930

TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::GetConstraints
          (TXPBDEmbeddedSpringConstraints<1,1> *this)

{
  return &this->Constraints;
}

// GetConstraints @ 143f6c940

TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::GetConstraints
          (TXPBDEmbeddedSpringConstraints<1,3> *this)

{
  return &this->Constraints;
}

// GetConstraints @ 143f6c950

TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::GetConstraints
          (TXPBDEmbeddedSpringConstraints<3,3> *this)

{
  return &this->Constraints;
}

// GetExtensionStiffness @ 143f6cfe0

float __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::GetExtensionStiffness
          (TXPBDEmbeddedSpringConstraints<1,1> *this,int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  if ((0 < (this->ExtensionStiffness).MapView.MapValues.ArrayNum) &&
     (fVar1 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
     __real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       (&(this->ExtensionStiffness).MapView.MapValues,param_1);
    return fVar1 * *pfVar3 + fVar2;
  }
  return *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
}

// GetExtensionStiffness @ 143f6d060

float __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::GetExtensionStiffness
          (TXPBDEmbeddedSpringConstraints<1,3> *this,int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  if ((0 < (this->ExtensionStiffness).MapView.MapValues.ArrayNum) &&
     (fVar1 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
     __real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       (&(this->ExtensionStiffness).MapView.MapValues,param_1);
    return fVar1 * *pfVar3 + fVar2;
  }
  return *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
}

// GetExtensionStiffness @ 143f6d0e0

float __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::GetExtensionStiffness
          (TXPBDEmbeddedSpringConstraints<3,3> *this,int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  if ((0 < (this->ExtensionStiffness).MapView.MapValues.ArrayNum) &&
     (fVar1 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange.field_0x4,
     __real_38d1b717 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       (&(this->ExtensionStiffness).MapView.MapValues,param_1);
    return fVar1 * *pfVar3 + fVar2;
  }
  return *(float *)&(this->ExtensionStiffness).MapView.OffsetRange;
}

// GetSpringLengths @ 143f6d340

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::GetSpringLengths
          (TXPBDEmbeddedSpringConstraints<1,1> *this)

{
  return &this->SpringLengths;
}

// GetSpringLengths @ 143f6d350

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::GetSpringLengths
          (TXPBDEmbeddedSpringConstraints<1,3> *this)

{
  return &this->SpringLengths;
}

// GetSpringLengths @ 143f6d360

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::GetSpringLengths
          (TXPBDEmbeddedSpringConstraints<3,3> *this)

{
  return &this->SpringLengths;
}

// GetWeights @ 143f6d370

TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::GetWeights
          (TXPBDEmbeddedSpringConstraints<1,1> *this)

{
  return &this->Weights;
}

// GetWeights @ 143f6d380

TArray<Chaos::TVector<float,4>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::GetWeights
          (TXPBDEmbeddedSpringConstraints<1,3> *this)

{
  return &this->Weights;
}

// GetWeights @ 143f6d390

TArray<Chaos::TVector<float,6>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::GetWeights
          (TXPBDEmbeddedSpringConstraints<3,3> *this)

{
  return &this->Weights;
}

// Init @ 143f6d3a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::Init(TXPBDEmbeddedSpringConstraints<1,1> *this)

{
  (this->Lambdas).ArrayNum = 0;
  if ((this->Lambdas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Lambdas).AllocatorInstance,0,&(this->Lambdas).ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->Lambdas,(this->Constraints).ArrayNum,Default);
  (this->LambdasDamping).ArrayNum = 0;
  if ((this->LambdasDamping).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LambdasDamping).AllocatorInstance,0,&(this->LambdasDamping).ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->LambdasDamping,(this->Constraints).ArrayNum,Default);
  return;
}

// Init @ 143f6d440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::Init(TXPBDEmbeddedSpringConstraints<1,3> *this)

{
  (this->Lambdas).ArrayNum = 0;
  if ((this->Lambdas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Lambdas).AllocatorInstance,0,&(this->Lambdas).ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->Lambdas,(this->Constraints).ArrayNum,Default);
  (this->LambdasDamping).ArrayNum = 0;
  if ((this->LambdasDamping).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LambdasDamping).AllocatorInstance,0,&(this->LambdasDamping).ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->LambdasDamping,(this->Constraints).ArrayNum,Default);
  return;
}

// Init @ 143f6d4e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::Init(TXPBDEmbeddedSpringConstraints<3,3> *this)

{
  (this->Lambdas).ArrayNum = 0;
  if ((this->Lambdas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Lambdas).AllocatorInstance,0,&(this->Lambdas).ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->Lambdas,(this->Constraints).ArrayNum,Default);
  (this->LambdasDamping).ArrayNum = 0;
  if ((this->LambdasDamping).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LambdasDamping).AllocatorInstance,0,&(this->LambdasDamping).ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->LambdasDamping,(this->Constraints).ArrayNum,Default);
  return;
}

// InitColor @ 143f6d580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::InitColor
          (TXPBDEmbeddedSpringConstraints<1,1> *this,FSolverParticlesRange *param_1)

{
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  uint uVar21;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar22;
  uint uVar23;
  int *piVar24;
  longlong lVar25;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  uint local_d8 [2];
  ForAnyElementType local_d0;
  int local_c8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_90;
  FScriptContainerElement *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> *local_78;
  FScriptContainerElement *local_70;
  int *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_60;
  
  uVar21 = (this->Constraints).ArrayNum;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,2,0>
            (&local_90,&this->Constraints,param_1,0,*(int *)&param_1->field_0x14);
  uVar17 = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,uVar21,Default);
  if (local_c8[0] < (int)uVar21) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar21 - local_c8[0],&local_d0,local_c8,local_c8 + 1);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((int)uVar21 < local_c8[0]) {
      uVar18 = local_c8[0] - uVar21;
      if ((int)(uVar18 | uVar21) < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar18 != 0) {
        iVar9 = (local_c8[0] - uVar21) - uVar18;
        iVar10 = local_c8[0];
        if (iVar9 != 0) {
          memmove(local_d0.Data + (longlong)(int)uVar21 * 8,
                  local_d0.Data + (longlong)(int)uVar21 * 8 + (longlong)(int)uVar18 * 8,
                  (longlong)iVar9 << 3);
          iVar10 = local_c8[0];
        }
        local_c8[0] = iVar10 - uVar18;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&local_d0,iVar10 - uVar18,local_c8 + 1);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_c0,uVar21,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_a0,uVar21,Default);
  uVar21 = local_90.ArrayNum + 1;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  piVar24 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  local_68 = piVar24;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar21,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar24);
  }
  uVar13 = (ulonglong)local_90.ArrayNum;
  local_d8[0] = 0;
  local_60 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_90.AllocatorInstance.Data + uVar13 * 0x10);
  local_res20 = local_90.ArrayNum;
  FVar19.Data = local_90.AllocatorInstance.Data;
  do {
    pTVar7 = local_60;
    pTVar15 = &this->ConstraintsPerColorStartIndex;
    pTVar22 = &this->Constraints;
    local_78 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data;
    if (local_90.ArrayNum != (uint)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar16 = (pTVar15->AllocatorInstance).Data;
    uVar21 = 0;
    uVar18 = 0;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data == pTVar7) {
      if (((pFVar16 <= (FScriptContainerElement *)local_d8) &&
          ((FScriptContainerElement *)local_d8 < pFVar16 + (longlong)*piVar24 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar10 == *piVar24) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar15->AllocatorInstance,piVar24);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
      *(uint *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_d8[0];
      uVar13 = uVar17;
      if (0 < (this->OrigMapToReordered).ArrayNum) {
        do {
          uVar14 = (uint)uVar17;
          uVar23 = ~uVar14 >> 0x1f;
          uVar12 = uVar21;
          if ((int)uVar14 < (this->OrigMapToReordered).ArrayNum) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar13) != -1) {
            uVar12 = uVar21;
            if ((int)uVar14 < (this->OrigMapToReordered).ArrayNum) {
              uVar12 = uVar23;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar12 = *(uint *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar13);
            uVar11 = uVar18;
            if ((int)uVar12 < local_a0.ArrayNum) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar3 = *(undefined4 *)(local_a0.AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
            uVar12 = uVar18;
            if ((int)uVar14 < (this->OrigMapToReordered).ArrayNum) {
              uVar12 = uVar23;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(undefined4 *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar13) = uVar3;
          }
          uVar17 = (ulonglong)(uVar14 + 1);
          uVar13 = uVar13 + 4;
        } while ((int)(uVar14 + 1) < (this->OrigMapToReordered).ArrayNum);
      }
      if (pTVar22 != &local_b0) {
        pFVar16 = (pTVar22->AllocatorInstance).Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        (pTVar22->AllocatorInstance).Data = local_b0.AllocatorInstance.Data;
        (this->Constraints).ArrayNum = local_b0.ArrayNum;
        (this->Constraints).ArrayMax = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->Weights;
      if (pTVar1 != (TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *)&local_d0) {
        pFVar16 = (pTVar1->AllocatorInstance).Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        (pTVar1->AllocatorInstance).Data = local_d0.Data;
        (this->Weights).ArrayNum = local_c8[0];
        (this->Weights).ArrayMax = local_c8[1];
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_d0.Data = (FScriptContainerElement *)0x0;
      }
      pTVar2 = &this->SpringLengths;
      if (pTVar2 != &local_c0) {
        pFVar16 = (pTVar2->AllocatorInstance).Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        (pTVar2->AllocatorInstance).Data = local_c0.AllocatorInstance.Data;
        (this->SpringLengths).ArrayNum = local_c0.ArrayNum;
        (this->SpringLengths).ArrayMax = local_c0.ArrayMax;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_90.AllocatorInstance.Data,
                 local_90.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_90.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      return;
    }
    if (((pFVar16 <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 < pFVar16 + (longlong)*piVar24 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar10 == *piVar24) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar15->AllocatorInstance,piVar24);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
    *(uint *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_d8[0];
    local_res18 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->ArrayNum;
    uVar13 = (ulonglong)(int)local_res18;
    pFVar16 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->AllocatorInstance).Data;
    local_70 = pFVar16 + uVar13 * 4;
    while( true ) {
      pFVar6 = local_70;
      local_80 = pFVar16;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->ArrayNum != (int)uVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar16 == pFVar6) break;
      uVar12 = *(uint *)pFVar16;
      lVar25 = (longlong)(int)uVar12;
      uVar23 = ~uVar12 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar12 < (this->Constraints).ArrayNum) {
        uVar14 = uVar23;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = (longlong)(int)local_d8[0];
      uVar4 = *(undefined8 *)((this->Constraints).AllocatorInstance.Data + lVar25 * 8);
      uVar14 = uVar18;
      if ((int)local_d8[0] < local_b0.ArrayNum) {
        uVar14 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(local_b0.AllocatorInstance.Data + lVar20 * 8) = uVar4;
      uVar14 = uVar18;
      if ((int)uVar12 < (this->Weights).ArrayNum) {
        uVar14 = uVar23;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = (longlong)(int)local_d8[0];
      uVar4 = *(undefined8 *)((this->Weights).AllocatorInstance.Data + lVar25 * 8);
      uVar14 = uVar18;
      if ((int)local_d8[0] < local_c8[0]) {
        uVar14 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(local_d0.Data + lVar20 * 8) = uVar4;
      uVar14 = uVar18;
      if ((int)uVar12 < (this->SpringLengths).ArrayNum) {
        uVar14 = uVar23;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = (longlong)(int)local_d8[0];
      uVar3 = *(undefined4 *)((this->SpringLengths).AllocatorInstance.Data + lVar25 * 4);
      uVar14 = uVar21;
      if ((int)local_d8[0] < local_c0.ArrayNum) {
        uVar14 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar14 = local_d8[0];
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar20 * 4) = uVar3;
      uVar11 = uVar21;
      if ((int)uVar12 < local_a0.ArrayNum) {
        uVar11 = uVar23;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar13 = (ulonglong)local_res18;
      *(uint *)(local_a0.AllocatorInstance.Data + lVar25 * 4) = uVar14;
      local_d8[0] = local_d8[0] + 1;
      pFVar16 = local_80 + 4;
      FVar19.Data = (FScriptContainerElement *)local_78;
    }
    FVar19.Data = FVar19.Data + 0x10;
    uVar13 = (ulonglong)local_res20;
    piVar24 = local_68;
  } while( true );
}

// InitColor @ 143f6dde0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::InitColor
          (TXPBDEmbeddedSpringConstraints<1,3> *this,FSolverParticlesRange *param_1)

{
  TArray<Chaos::TVector<float,4>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  longlong lVar22;
  uint uVar23;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar24;
  int *piVar25;
  longlong lVar26;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  uint local_d8 [2];
  ForAnyElementType local_d0;
  int local_c8 [2];
  ForAnyElementType local_c0;
  int local_b8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_90;
  FScriptContainerElement *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> *local_78;
  FScriptContainerElement *local_70;
  int *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_60;
  
  uVar23 = (this->Constraints).ArrayNum;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0>
            (&local_90,&this->Constraints,param_1,0,*(int *)&param_1->field_0x14);
  uVar19 = 0;
  iVar11 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  if ((int)uVar23 < 1) {
    if ((int)uVar23 < 0) goto LAB_143f6e66a;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar23,&local_c0,local_b8,local_b8 + 1);
    iVar11 = local_c8[0];
  }
  if (iVar11 < (int)uVar23) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar23 - iVar11,&local_d0,local_c8,local_c8 + 1);
  }
  else {
    if ((int)uVar23 < 0) {
LAB_143f6e66a:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if ((int)uVar23 < iVar11) {
      uVar20 = iVar11 - uVar23;
      if ((int)(uVar20 | uVar23) < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = local_c8[0];
      }
      if (uVar20 != 0) {
        iVar10 = (iVar11 - uVar23) - uVar20;
        if (iVar10 != 0) {
          memmove(local_d0.Data + (longlong)(int)uVar23 * 0x10,
                  local_d0.Data + (longlong)(int)uVar23 * 0x10 + (longlong)(int)uVar20 * 0x10,
                  (longlong)iVar10 << 4);
          iVar11 = local_c8[0];
        }
        local_c8[0] = iVar11 - uVar20;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&local_d0,iVar11 - uVar20,local_c8 + 1);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_b0,uVar23,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_a0,uVar23,Default);
  uVar23 = local_90.ArrayNum + 1;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  piVar25 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  local_68 = piVar25;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar23,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar25);
  }
  uVar14 = (ulonglong)local_90.ArrayNum;
  local_d8[0] = 0;
  local_60 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_90.AllocatorInstance.Data + uVar14 * 0x10);
  local_res20 = local_90.ArrayNum;
  FVar21.Data = local_90.AllocatorInstance.Data;
  do {
    pTVar8 = local_60;
    pTVar17 = &this->ConstraintsPerColorStartIndex;
    pTVar24 = &this->Constraints;
    local_78 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar21.Data;
    if (local_90.ArrayNum != (uint)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar18 = (pTVar17->AllocatorInstance).Data;
    uVar23 = 0;
    uVar20 = 0;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar21.Data == pTVar8) {
      if (((pFVar18 <= (FScriptContainerElement *)local_d8) &&
          ((FScriptContainerElement *)local_d8 < pFVar18 + (longlong)*piVar25 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar11 == *piVar25) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar17->AllocatorInstance,piVar25);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar11 + 1;
      *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_d8[0];
      uVar14 = uVar19;
      if (0 < (this->OrigMapToReordered).ArrayNum) {
        do {
          uVar16 = (uint)uVar19;
          uVar15 = ~uVar16 >> 0x1f;
          uVar13 = uVar23;
          if ((int)uVar16 < (this->OrigMapToReordered).ArrayNum) {
            uVar13 = uVar15;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar14) != -1) {
            uVar13 = uVar23;
            if ((int)uVar16 < (this->OrigMapToReordered).ArrayNum) {
              uVar13 = uVar15;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar13 = *(uint *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar14);
            uVar12 = uVar20;
            if ((int)uVar13 < local_a0.ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar3 = *(undefined4 *)(local_a0.AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
            uVar13 = uVar20;
            if ((int)uVar16 < (this->OrigMapToReordered).ArrayNum) {
              uVar13 = uVar15;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined4 *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar14) = uVar3;
          }
          uVar19 = (ulonglong)(uVar16 + 1);
          uVar14 = uVar14 + 4;
        } while ((int)(uVar16 + 1) < (this->OrigMapToReordered).ArrayNum);
      }
      if (pTVar24 != (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)&local_c0) {
        pFVar18 = (pTVar24->AllocatorInstance).Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (pTVar24->AllocatorInstance).Data = local_c0.Data;
        (this->Constraints).ArrayNum = local_b8[0];
        (this->Constraints).ArrayMax = local_b8[1];
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_c0.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->Weights;
      if (pTVar1 != (TArray<Chaos::TVector<float,4>,TSizedDefaultAllocator<32>_> *)&local_d0) {
        pFVar18 = (pTVar1->AllocatorInstance).Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (pTVar1->AllocatorInstance).Data = local_d0.Data;
        (this->Weights).ArrayNum = local_c8[0];
        (this->Weights).ArrayMax = local_c8[1];
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_d0.Data = (FScriptContainerElement *)0x0;
      }
      pTVar2 = &this->SpringLengths;
      if (pTVar2 != &local_b0) {
        pFVar18 = (pTVar2->AllocatorInstance).Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (pTVar2->AllocatorInstance).Data = local_b0.AllocatorInstance.Data;
        (this->SpringLengths).ArrayNum = local_b0.ArrayNum;
        (this->SpringLengths).ArrayMax = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_90.AllocatorInstance.Data,
                 local_90.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_90.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      return;
    }
    if (((pFVar18 <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 < pFVar18 + (longlong)*piVar25 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar11 == *piVar25) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar17->AllocatorInstance,piVar25);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar11 + 1;
    *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_d8[0];
    local_res18 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar21.Data)->ArrayNum;
    uVar14 = (ulonglong)(int)local_res18;
    pFVar18 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar21.Data)->AllocatorInstance).Data;
    local_70 = pFVar18 + uVar14 * 4;
    while( true ) {
      pFVar7 = local_70;
      local_80 = pFVar18;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar21.Data)->ArrayNum != (int)uVar14) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar18 == pFVar7) break;
      uVar13 = *(uint *)pFVar18;
      lVar26 = (longlong)(int)uVar13;
      uVar15 = ~uVar13 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar13 < (this->Constraints).ArrayNum) {
        uVar16 = uVar15;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar22 = (longlong)(int)local_d8[0];
      pFVar18 = (this->Constraints).AllocatorInstance.Data + lVar26 * 0x10;
      uVar5 = *(undefined8 *)pFVar18;
      uVar6 = *(undefined8 *)(pFVar18 + 8);
      uVar16 = uVar20;
      if ((int)local_d8[0] < local_b8[0]) {
        uVar16 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_c0.Data + lVar22 * 0x10) = uVar5;
      *(undefined8 *)(local_c0.Data + lVar22 * 0x10 + 8) = uVar6;
      uVar16 = uVar20;
      if ((int)uVar13 < (this->Weights).ArrayNum) {
        uVar16 = uVar15;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar22 = (longlong)(int)local_d8[0];
      pFVar18 = (this->Weights).AllocatorInstance.Data + lVar26 * 0x10;
      uVar5 = *(undefined8 *)pFVar18;
      uVar6 = *(undefined8 *)(pFVar18 + 8);
      uVar16 = uVar20;
      if ((int)local_d8[0] < local_c8[0]) {
        uVar16 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_d0.Data + lVar22 * 0x10) = uVar5;
      *(undefined8 *)(local_d0.Data + lVar22 * 0x10 + 8) = uVar6;
      uVar16 = uVar20;
      if ((int)uVar13 < (this->SpringLengths).ArrayNum) {
        uVar16 = uVar15;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar22 = (longlong)(int)local_d8[0];
      uVar3 = *(undefined4 *)((this->SpringLengths).AllocatorInstance.Data + lVar26 * 4);
      uVar16 = uVar23;
      if ((int)local_d8[0] < local_b0.ArrayNum) {
        uVar16 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar16 = local_d8[0];
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar22 * 4) = uVar3;
      uVar12 = uVar23;
      if ((int)uVar13 < local_a0.ArrayNum) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = (ulonglong)local_res18;
      *(uint *)(local_a0.AllocatorInstance.Data + lVar26 * 4) = uVar16;
      local_d8[0] = local_d8[0] + 1;
      pFVar18 = local_80 + 4;
      FVar21.Data = (FScriptContainerElement *)local_78;
    }
    FVar21.Data = FVar21.Data + 0x10;
    uVar14 = (ulonglong)local_res20;
    piVar25 = local_68;
  } while( true );
}

// InitColor @ 143f6e680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::InitColor
          (TXPBDEmbeddedSpringConstraints<3,3> *this,FSolverParticlesRange *param_1)

{
  TArray<Chaos::TVector<float,6>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  uint uVar24;
  TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_> *pTVar25;
  int *piVar26;
  longlong lVar27;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  uint local_e8 [2];
  ForAnyElementType local_e0;
  int local_d8 [2];
  ForAnyElementType local_d0;
  int local_c8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_90;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  FScriptContainerElement *local_80;
  int *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  
  uVar24 = (this->Constraints).ArrayNum;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,6,0>
            (&local_a0,&this->Constraints,param_1,0,*(int *)&param_1->field_0x14);
  uVar20 = 0;
  iVar12 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  if ((int)uVar24 < 1) {
    if ((int)uVar24 < 0) goto LAB_143f6ef6d;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar24,&local_d0,local_c8,local_c8 + 1);
    iVar12 = local_d8[0];
  }
  if (iVar12 < (int)uVar24) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar24 - iVar12,&local_e0,local_d8,local_d8 + 1);
  }
  else {
    if ((int)uVar24 < 0) {
LAB_143f6ef6d:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    if ((int)uVar24 < iVar12) {
      uVar21 = iVar12 - uVar24;
      if ((int)(uVar21 | uVar24) < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = local_d8[0];
      }
      if (uVar21 != 0) {
        iVar11 = (iVar12 - uVar24) - uVar21;
        if (iVar11 != 0) {
          memmove(local_e0.Data + (longlong)(int)uVar24 * 0x18,
                  local_e0.Data + (longlong)(int)uVar24 * 0x18 + (longlong)(int)uVar21 * 0x18,
                  (longlong)iVar11 * 0x18);
          iVar12 = local_d8[0];
        }
        local_d8[0] = iVar12 - uVar21;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,&local_e0,iVar12 - uVar21,local_d8 + 1);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_c0,uVar24,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_b0,uVar24,Default);
  uVar24 = local_a0.ArrayNum + 1;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  piVar26 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  local_78 = piVar26;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar24,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar26);
  }
  uVar15 = (ulonglong)local_a0.ArrayNum;
  local_e8[0] = 0;
  local_70 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_a0.AllocatorInstance.Data + uVar15 * 0x10);
  local_res20 = local_a0.ArrayNum;
  FVar22.Data = local_a0.AllocatorInstance.Data;
  do {
    pTVar9 = local_70;
    pTVar18 = &this->ConstraintsPerColorStartIndex;
    pTVar25 = &this->Constraints;
    local_88 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar22.Data;
    if (local_a0.ArrayNum != (uint)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar19 = (pTVar18->AllocatorInstance).Data;
    uVar24 = 0;
    uVar21 = 0;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar22.Data == pTVar9) {
      if (((pFVar19 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 < pFVar19 + (longlong)*piVar26 * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar12 == *piVar26) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar18->AllocatorInstance,piVar26);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar12 + 1;
      *(uint *)((pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_e8[0];
      uVar15 = uVar20;
      if (0 < (this->OrigMapToReordered).ArrayNum) {
        do {
          uVar17 = (uint)uVar20;
          uVar16 = ~uVar17 >> 0x1f;
          uVar14 = uVar24;
          if ((int)uVar17 < (this->OrigMapToReordered).ArrayNum) {
            uVar14 = uVar16;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar15) != -1) {
            uVar14 = uVar24;
            if ((int)uVar17 < (this->OrigMapToReordered).ArrayNum) {
              uVar14 = uVar16;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar14 = *(uint *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar15);
            uVar13 = uVar21;
            if ((int)uVar14 < local_b0.ArrayNum) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar3 = *(undefined4 *)(local_b0.AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
            uVar14 = uVar21;
            if ((int)uVar17 < (this->OrigMapToReordered).ArrayNum) {
              uVar14 = uVar16;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)((this->OrigMapToReordered).AllocatorInstance.Data + uVar15) = uVar3;
          }
          uVar20 = (ulonglong)(uVar17 + 1);
          uVar15 = uVar15 + 4;
        } while ((int)(uVar17 + 1) < (this->OrigMapToReordered).ArrayNum);
      }
      if (pTVar25 != (TArray<Chaos::TVector<int,6>,TSizedDefaultAllocator<32>_> *)&local_d0) {
        pFVar19 = (pTVar25->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar25->AllocatorInstance).Data = local_d0.Data;
        (this->Constraints).ArrayNum = local_c8[0];
        (this->Constraints).ArrayMax = local_c8[1];
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_d0.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->Weights;
      if (pTVar1 != (TArray<Chaos::TVector<float,6>,TSizedDefaultAllocator<32>_> *)&local_e0) {
        pFVar19 = (pTVar1->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar1->AllocatorInstance).Data = local_e0.Data;
        (this->Weights).ArrayNum = local_d8[0];
        (this->Weights).ArrayMax = local_d8[1];
        local_d8[0] = 0;
        local_d8[1] = 0;
        local_e0.Data = (FScriptContainerElement *)0x0;
      }
      pTVar2 = &this->SpringLengths;
      if (pTVar2 != &local_c0) {
        pFVar19 = (pTVar2->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar2->AllocatorInstance).Data = local_c0.AllocatorInstance.Data;
        (this->SpringLengths).ArrayNum = local_c0.ArrayNum;
        (this->SpringLengths).ArrayMax = local_c0.ArrayMax;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_a0.AllocatorInstance.Data,
                 local_a0.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_a0.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      return;
    }
    if (((pFVar19 <= (FScriptContainerElement *)local_e8) &&
        ((FScriptContainerElement *)local_e8 < pFVar19 + (longlong)*piVar26 * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar12 == *piVar26) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar18->AllocatorInstance,piVar26);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar12 + 1;
    *(uint *)((pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_e8[0];
    local_res18 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar22.Data)->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar22.Data)->AllocatorInstance).Data;
    local_80 = pFVar19 + uVar15 * 4;
    while( true ) {
      pFVar5 = local_80;
      local_90 = pFVar19;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar22.Data)->ArrayNum != (int)uVar15) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar19 == pFVar5) break;
      uVar14 = *(uint *)pFVar19;
      lVar27 = (longlong)(int)uVar14;
      uVar16 = ~uVar14 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar14 < (this->Constraints).ArrayNum) {
        uVar17 = uVar16;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Constraints).AllocatorInstance.Data;
      lVar23 = (longlong)(int)local_e8[0];
      pFVar19 = pFVar5 + lVar27 * 0x18;
      uVar7 = *(undefined8 *)pFVar19;
      uVar8 = *(undefined8 *)(pFVar19 + 8);
      uVar4 = *(undefined8 *)(pFVar5 + lVar27 * 0x18 + 0x10);
      uVar17 = uVar21;
      if ((int)local_e8[0] < local_c8[0]) {
        uVar17 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)(local_d0.Data + lVar23 * 0x18) = uVar7;
      *(undefined8 *)(local_d0.Data + lVar23 * 0x18 + 8) = uVar8;
      *(undefined8 *)(local_d0.Data + lVar23 * 0x18 + 0x10) = uVar4;
      uVar17 = uVar21;
      if ((int)uVar14 < (this->Weights).ArrayNum) {
        uVar17 = uVar16;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Weights).AllocatorInstance.Data;
      lVar23 = (longlong)(int)local_e8[0];
      pFVar19 = pFVar5 + lVar27 * 0x18;
      uVar7 = *(undefined8 *)pFVar19;
      uVar8 = *(undefined8 *)(pFVar19 + 8);
      uVar4 = *(undefined8 *)(pFVar5 + lVar27 * 0x18 + 0x10);
      uVar17 = uVar21;
      if ((int)local_e8[0] < local_d8[0]) {
        uVar17 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)(local_e0.Data + lVar23 * 0x18) = uVar7;
      *(undefined8 *)(local_e0.Data + lVar23 * 0x18 + 8) = uVar8;
      *(undefined8 *)(local_e0.Data + lVar23 * 0x18 + 0x10) = uVar4;
      uVar17 = uVar21;
      if ((int)uVar14 < (this->SpringLengths).ArrayNum) {
        uVar17 = uVar16;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar23 = (longlong)(int)local_e8[0];
      uVar3 = *(undefined4 *)((this->SpringLengths).AllocatorInstance.Data + lVar27 * 4);
      uVar17 = uVar24;
      if ((int)local_e8[0] < local_c0.ArrayNum) {
        uVar17 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = local_e8[0];
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar23 * 4) = uVar3;
      uVar13 = uVar24;
      if ((int)uVar14 < local_b0.ArrayNum) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar15 = (ulonglong)local_res18;
      *(uint *)(local_b0.AllocatorInstance.Data + lVar27 * 4) = uVar17;
      local_e8[0] = local_e8[0] + 1;
      pFVar19 = local_90 + 4;
      FVar22.Data = (FScriptContainerElement *)local_88;
    }
    FVar22.Data = FVar22.Data + 0x10;
    uVar15 = (ulonglong)local_res20;
    piVar26 = local_78;
  } while( true );
}

// InitColorAndRemap @ 143f6ef80

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,1>::InitColorAndRemap
          (TXPBDEmbeddedSpringConstraints<1,1> *this,FSolverParticlesRange *param_1)

{
  int iVar1;
  
  InitColor(this,param_1);
  iVar1 = (this->Constraints).ArrayNum;
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->ExtensionStiffness,&this->OrigMapToReordered,iVar1);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->CompressionStiffness,&this->OrigMapToReordered,iVar1);
  FPBDFlatWeightMap::ReorderIndicesAndShrink(&this->DampingRatio,&this->OrigMapToReordered,iVar1);
  return;
}

// InitColorAndRemap @ 143f6eff0

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<1,3>::InitColorAndRemap
          (TXPBDEmbeddedSpringConstraints<1,3> *this,FSolverParticlesRange *param_1)

{
  int iVar1;
  
  InitColor(this,param_1);
  iVar1 = (this->Constraints).ArrayNum;
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->ExtensionStiffness,&this->OrigMapToReordered,iVar1);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->CompressionStiffness,&this->OrigMapToReordered,iVar1);
  FPBDFlatWeightMap::ReorderIndicesAndShrink(&this->DampingRatio,&this->OrigMapToReordered,iVar1);
  return;
}

// InitColorAndRemap @ 143f6f060

void __thiscall
Chaos::Softs::TXPBDEmbeddedSpringConstraints<3,3>::InitColorAndRemap
          (TXPBDEmbeddedSpringConstraints<3,3> *this,FSolverParticlesRange *param_1)

{
  int iVar1;
  
  InitColor(this,param_1);
  iVar1 = (this->Constraints).ArrayNum;
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->ExtensionStiffness,&this->OrigMapToReordered,iVar1);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->CompressionStiffness,&this->OrigMapToReordered,iVar1);
  FPBDFlatWeightMap::ReorderIndicesAndShrink(&this->DampingRatio,&this->OrigMapToReordered,iVar1);
  return;
}

