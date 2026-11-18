// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 25

// Alloc<> @ 1437d5810

FCharacterGroundConstraintHandle * __thiscall
Chaos::TObjectPool<Chaos::FCharacterGroundConstraintHandle>::Alloc<>
          (TObjectPool<Chaos::FCharacterGroundConstraintHandle> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  FBlock *this_00;
  FCharacterGroundConstraintHandle *pFVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  
  if (this->FreeCount == 0) {
    this_00 = AddBlock(this);
    goto LAB_1437d5a6d;
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Blocks.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                       ,0x4d,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FCharacterGroundConstraintHandle *)(*pcVar2)();
      return pFVar10;
    }
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FCharacterGroundConstraintHandle *)(*pcVar2)();
      return pFVar10;
    }
  }
  if (*(int *)((this->Blocks).AllocatorInstance.Data + 0x14) == 0) {
    iVar11 = (this->Blocks).ArrayNum;
    uVar12 = 0;
    uVar15 = 0xffffffff;
    iVar16 = 0x7fffffff;
    if (iVar11 < 1) {
LAB_1437d5946:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectedIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x5f,L"Could not find an empty block");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FCharacterGroundConstraintHandle *)(*pcVar2)();
        return pFVar10;
      }
    }
    else {
      lVar14 = 0;
      uVar15 = 0xffffffff;
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar11) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FCharacterGroundConstraintHandle *)(*pcVar2)();
            return pFVar10;
          }
        }
        iVar11 = *(int *)((this->Blocks).AllocatorInstance.Data + lVar14 + 0x14);
        if ((0 < iVar11) && (iVar11 < iVar16)) {
          iVar16 = iVar11;
          uVar15 = uVar12;
        }
        iVar11 = (this->Blocks).ArrayNum;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x20;
      } while ((int)uVar12 < iVar11);
      if (uVar15 == 0xffffffff) goto LAB_1437d5946;
    }
    uVar12 = 0;
    if ((int)uVar15 < (this->Blocks).ArrayNum) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FCharacterGroundConstraintHandle *)(*pcVar2)();
        return pFVar10;
      }
    }
    pFVar13 = (this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x20;
    if ((this->Blocks).ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FCharacterGroundConstraintHandle *)(*pcVar2)();
        return pFVar10;
      }
    }
    pFVar1 = (this->Blocks).AllocatorInstance.Data;
    uVar3 = *(undefined8 *)(pFVar13 + 8);
    uVar4 = *(undefined8 *)pFVar1;
    uVar5 = *(undefined8 *)(pFVar1 + 8);
    uVar6 = *(undefined8 *)(pFVar1 + 0x10);
    uVar7 = *(undefined8 *)(pFVar1 + 0x18);
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar13;
    *(undefined8 *)(pFVar1 + 8) = uVar3;
    uVar3 = *(undefined8 *)(pFVar13 + 0x18);
    *(undefined8 *)(pFVar1 + 0x10) = *(undefined8 *)(pFVar13 + 0x10);
    *(undefined8 *)(pFVar1 + 0x18) = uVar3;
    *(undefined8 *)pFVar13 = uVar4;
    *(undefined8 *)(pFVar13 + 8) = uVar5;
    *(undefined8 *)(pFVar13 + 0x10) = uVar6;
    *(undefined8 *)(pFVar13 + 0x18) = uVar7;
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FCharacterGroundConstraintHandle *)(*pcVar2)();
      return pFVar10;
    }
  }
  this_00 = (FBlock *)(this->Blocks).AllocatorInstance.Data;
LAB_1437d5a6d:
  pFVar10 = FBlock::GetNextFree(this_00);
  Construct<Chaos::FCharacterGroundConstraintHandle,0>(pFVar10);
  this->FreeCount = this->FreeCount + -1;
  return pFVar10;
}

// Construct<Chaos::FCharacterGroundConstraintHandle,0> @ 1437da1e0

FCharacterGroundConstraintHandle * __cdecl
Chaos::TObjectPool<Chaos::FCharacterGroundConstraintHandle>::
Construct<Chaos::FCharacterGroundConstraintHandle,0>(FCharacterGroundConstraintHandle *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  param_1->_padding_ = (longlong)&___7FCharacterGroundConstraintHandle_Chaos__6B_;
  *(undefined8 *)&(param_1->Settings).VerticalAxis = 0;
  (param_1->Settings).RadialForceLimit = 1500.0;
  *(undefined8 *)&(param_1->Settings).VerticalAxis.field_0x8 = 0;
  (param_1->Settings).FrictionForceLimit = 100.0;
  (param_1->Settings).TwistTorqueLimit = 1000.0;
  (param_1->Settings).SwingTorqueLimit = 5000.0;
  (param_1->Settings).AssumedOnGroundHeight = 2.0;
  (param_1->Settings).MaxCharacterGroundMassRatio = -1.0;
  *(undefined8 *)&(param_1->Settings).VerticalAxis.field_0x10 = 0x3ff0000000000000;
  (param_1->Settings).TargetHeight = 0.0;
  (param_1->Settings).CosMaxWalkableSlopeAngle = 0.633;
  (param_1->Settings).DampingFactor = 0.0;
  (param_1->Settings).MotionTargetMassBias = 1.0;
  (param_1->Settings).RadialForceMotionTargetScaling = 1.0;
  (param_1->Settings).UserData = (void *)0x0;
  param_1->_padding_ = 0;
  param_1->_padding_ = 0;
  uVar2 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  *(double *)&(param_1->Data).GroundNormal =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  *(undefined8 *)&(param_1->Data).GroundNormal.field_0x8 = uVar2;
  *(double *)&(param_1->Data).GroundNormal.field_0x10 =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&(param_1->Data).TargetDeltaPosition =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(param_1->Data).TargetDeltaPosition.field_0x8 = uVar2;
  *(double *)&(param_1->Data).TargetDeltaPosition.field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (param_1->Data).GroundDistance = 10000000000.0;
  (param_1->Data).TargetDeltaFacing = 0.0;
  (param_1->Data).CosMaxWalkableSlopeAngle = 0.633;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&param_1->SolverAppliedForce = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(param_1->SolverAppliedForce).field_0x8 = uVar2;
  *(double *)&(param_1->SolverAppliedForce).field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&param_1->SolverAppliedTorque = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  *(undefined8 *)&(param_1->SolverAppliedTorque).field_0x8 = uVar2;
  *(double *)&(param_1->SolverAppliedTorque).field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&param_1->LocalCharacterPosition =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(param_1->LocalCharacterPosition).field_0x8 = uVar2;
  *(double *)&(param_1->LocalCharacterPosition).field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pbVar1 = (byte *)((longlong)&param_1[1]._padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  param_1->bDisabled = false;
  param_1->ResimType = FullResim;
  param_1->SyncState = InSync;
  return param_1;
}

// ~TObjectPool<Chaos::FCharacterGroundConstraintHandle> @ 14388c140

void __thiscall
Chaos::TObjectPool<Chaos::FCharacterGroundConstraintHandle>::
~TObjectPool<Chaos::FCharacterGroundConstraintHandle>
          (TObjectPool<Chaos::FCharacterGroundConstraintHandle> *this)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Blocks).ArrayNum;
  pFVar8 = (this->Blocks).AllocatorInstance.Data;
  pFVar6 = pFVar8 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TObjectPool<Chaos::FCharacterGroundConstraintHandle>::FBlock,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar6) break;
    iVar7 = 0;
    if (0 < *(int *)(pFVar8 + 0x18)) {
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)pFVar8;
        if ((*(byte *)(lVar9 + 0x144 + lVar3) & 1) != 0) {
          *(undefined ***)(lVar9 + lVar3) = &___7FConstraintHandle_Chaos__6B_;
          if (*(longlong *)(lVar9 + 0x10 + lVar3) != 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("GraphEdge == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                               ,0x79,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pbVar1 = (byte *)(lVar9 + 0x144 + lVar3);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 0x148;
      } while (iVar7 < *(int *)(pFVar8 + 0x18));
    }
    *(longlong *)(pFVar8 + 8) = *(longlong *)pFVar8;
    *(undefined4 *)(pFVar8 + 0x14) = *(undefined4 *)(pFVar8 + 0x10);
    *(undefined4 *)(pFVar8 + 0x1c) = 0xffffffff;
    *(undefined4 *)(pFVar8 + 0x18) = 0;
    pFVar8 = pFVar8 + 0x20;
  }
  iVar2 = (this->Blocks).ArrayNum;
  this->FreeCount = iVar2 * this->NumPerBlock;
  DestructItems<Chaos::TObjectPool<Chaos::FCharacterGroundConstraintHandle>::FBlock,int>
            ((FBlock *)(this->Blocks).AllocatorInstance.Data,iVar2);
  pFVar8 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// AddBlock @ 143899b50

FBlock * __thiscall
Chaos::TObjectPool<Chaos::FCharacterGroundConstraintHandle>::AddBlock
          (TObjectPool<Chaos::FCharacterGroundConstraintHandle> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FBlock *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar5 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Blocks).ArrayNum = iVar5 + 1;
  iVar2 = this->NumPerBlock;
  pFVar10 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  pvVar6 = FMemory::Malloc((longlong)(iVar2 * 0x148),8);
  *(void **)pFVar10 = pvVar6;
  *(void **)(pFVar10 + 8) = pvVar6;
  *(undefined4 *)(pFVar10 + 0x18) = 0;
  *(int *)(pFVar10 + 0x10) = iVar2;
  *(int *)(pFVar10 + 0x14) = iVar2;
  *(undefined4 *)(pFVar10 + 0x1c) = 0xffffffff;
  this->Capacity = this->Capacity + this->NumPerBlock;
  this->FreeCount = this->FreeCount + this->NumPerBlock;
  iVar5 = (this->Blocks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar5) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBlock *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FBlock *)
         ((this->Blocks).AllocatorInstance.Data + (longlong)((this->Blocks).ArrayNum + -1) * 0x20);
}

// Free @ 1438b5f30

void __thiscall
Chaos::TObjectPool<Chaos::FCharacterGroundConstraintHandle>::Free
          (TObjectPool<Chaos::FCharacterGroundConstraintHandle> *this,
          FCharacterGroundConstraintHandle *param_1)

{
  byte *pbVar1;
  FCharacterGroundConstraintHandle *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  iVar7 = (this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (this->Blocks).AllocatorInstance.Data;
      pFVar2 = *(FCharacterGroundConstraintHandle **)(pFVar9 + lVar10);
      if ((pFVar2 <= param_1) &&
         (param_1 < (FCharacterGroundConstraintHandle *)
                    ((longlong)*(int *)(pFVar9 + lVar10 + 0x10) * 0x148 + (longlong)pFVar2))) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Blocks).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) goto LAB_1438b6007;
        goto LAB_1438b603d;
      }
      iVar7 = (this->Blocks).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar8 < iVar7);
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                     ,0x1d9,L"A pointer was passed to an object pool method that it does not own.");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = 0xffffffff;
LAB_1438b6007:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1438b603d:
  pFVar9 = (this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
  if (((param_1 < *(FCharacterGroundConstraintHandle **)pFVar9) ||
      ((FCharacterGroundConstraintHandle *)
       ((longlong)*(int *)(pFVar9 + 0x10) * 0x148 +
       (longlong)*(FCharacterGroundConstraintHandle **)pFVar9) <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owns(Object)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x173,
                         L"A pointer was passed to an object pool block that it does not own."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1[1]._padding_ & 0x100000000) != 0) {
    param_1->_padding_ = (longlong)&___7FConstraintHandle_Chaos__6B_;
    if ((param_1->_padding_ != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GraphEdge == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                           ,0x79,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pbVar1 = (byte *)((longlong)&param_1[1]._padding_ + 4);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  uVar3 = *(ulonglong *)pFVar9;
  if (*(int *)(pFVar9 + 0x1c) != -1) {
    *(int *)&param_1[1]._padding_ = *(int *)(pFVar9 + 0x1c);
  }
  *(int *)(pFVar9 + 0x14) = *(int *)(pFVar9 + 0x14) + 1;
  *(int *)(pFVar9 + 0x1c) = (int)(((longlong)param_1 - uVar3) / 0x148);
  this->FreeCount = this->FreeCount + 1;
  return;
}

// Alloc<> @ 14397b450

FPBDCollisionConstraint * __thiscall
Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>::Alloc<>
          (TObjectPool<Chaos::FPBDCollisionConstraint> *this)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FBlock *this_00;
  FPBDCollisionConstraint *pFVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  
  if (this->FreeCount == 0) {
    this_00 = AddBlock(this);
    goto LAB_14397b6ad;
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Blocks.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                       ,0x4d,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FPBDCollisionConstraint *)(*pcVar3)();
      return pFVar11;
    }
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FPBDCollisionConstraint *)(*pcVar3)();
      return pFVar11;
    }
  }
  if (*(int *)((this->Blocks).AllocatorInstance.Data + 0x14) == 0) {
    iVar12 = (this->Blocks).ArrayNum;
    uVar13 = 0;
    uVar16 = 0xffffffff;
    iVar17 = 0x7fffffff;
    if (iVar12 < 1) {
LAB_14397b586:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectedIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x5f,L"Could not find an empty block");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPBDCollisionConstraint *)(*pcVar3)();
        return pFVar11;
      }
    }
    else {
      lVar15 = 0;
      uVar16 = 0xffffffff;
      do {
        uVar10 = 0;
        if ((int)uVar13 < iVar12) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPBDCollisionConstraint *)(*pcVar3)();
            return pFVar11;
          }
        }
        iVar12 = *(int *)((this->Blocks).AllocatorInstance.Data + lVar15 + 0x14);
        if ((0 < iVar12) && (iVar12 < iVar17)) {
          iVar17 = iVar12;
          uVar16 = uVar13;
        }
        iVar12 = (this->Blocks).ArrayNum;
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x20;
      } while ((int)uVar13 < iVar12);
      if (uVar16 == 0xffffffff) goto LAB_14397b586;
    }
    uVar13 = 0;
    if ((int)uVar16 < (this->Blocks).ArrayNum) {
      uVar13 = ~uVar16 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPBDCollisionConstraint *)(*pcVar3)();
        return pFVar11;
      }
    }
    pFVar14 = (this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x20;
    if ((this->Blocks).ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPBDCollisionConstraint *)(*pcVar3)();
        return pFVar11;
      }
    }
    pFVar2 = (this->Blocks).AllocatorInstance.Data;
    uVar4 = *(undefined8 *)(pFVar14 + 8);
    uVar5 = *(undefined8 *)pFVar2;
    uVar6 = *(undefined8 *)(pFVar2 + 8);
    uVar7 = *(undefined8 *)(pFVar2 + 0x10);
    uVar8 = *(undefined8 *)(pFVar2 + 0x18);
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar14;
    *(undefined8 *)(pFVar2 + 8) = uVar4;
    uVar4 = *(undefined8 *)(pFVar14 + 0x18);
    *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
    *(undefined8 *)(pFVar2 + 0x18) = uVar4;
    *(undefined8 *)pFVar14 = uVar5;
    *(undefined8 *)(pFVar14 + 8) = uVar6;
    *(undefined8 *)(pFVar14 + 0x10) = uVar7;
    *(undefined8 *)(pFVar14 + 0x18) = uVar8;
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FPBDCollisionConstraint *)(*pcVar3)();
      return pFVar11;
    }
  }
  this_00 = (FBlock *)(this->Blocks).AllocatorInstance.Data;
LAB_14397b6ad:
  pFVar11 = FBlock::GetNextFree(this_00);
  FPBDCollisionConstraint::FPBDCollisionConstraint(pFVar11);
  pbVar1 = (byte *)((longlong)&pFVar11[1]._padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  this->FreeCount = this->FreeCount + -1;
  return pFVar11;
}

// AddBlock @ 1439c5490

FBlock * __thiscall
Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>::AddBlock
          (TObjectPool<Chaos::FPBDCollisionConstraint> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FBlock *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar5 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Blocks).ArrayNum = iVar5 + 1;
  iVar2 = this->NumPerBlock;
  pFVar10 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  pvVar6 = FMemory::Malloc((longlong)(iVar2 * 0x670),0x10);
  *(void **)pFVar10 = pvVar6;
  *(void **)(pFVar10 + 8) = pvVar6;
  *(undefined4 *)(pFVar10 + 0x18) = 0;
  *(int *)(pFVar10 + 0x10) = iVar2;
  *(int *)(pFVar10 + 0x14) = iVar2;
  *(undefined4 *)(pFVar10 + 0x1c) = 0xffffffff;
  this->Capacity = this->Capacity + this->NumPerBlock;
  this->FreeCount = this->FreeCount + this->NumPerBlock;
  iVar5 = (this->Blocks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar5) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBlock *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FBlock *)
         ((this->Blocks).AllocatorInstance.Data + (longlong)((this->Blocks).ArrayNum + -1) * 0x20);
}

// Free @ 1439cef50

void __thiscall
Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>::Free
          (TObjectPool<Chaos::FPBDCollisionConstraint> *this,FPBDCollisionConstraint *param_1)

{
  byte *pbVar1;
  FPBDCollisionConstraint *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  iVar8 = (this->Blocks).ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (this->Blocks).AllocatorInstance.Data;
      pFVar2 = *(FPBDCollisionConstraint **)(pFVar10 + lVar11);
      if ((pFVar2 <= param_1) &&
         (param_1 < (FPBDCollisionConstraint *)
                    ((longlong)*(int *)(pFVar10 + lVar11 + 0x10) * 0x670 + (longlong)pFVar2))) {
        uVar7 = 0;
        if ((int)uVar9 < (this->Blocks).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) goto LAB_1439cf027;
        goto LAB_1439cf05d;
      }
      iVar8 = (this->Blocks).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x20;
    } while ((int)uVar9 < iVar8);
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                     ,0x1d9,L"A pointer was passed to an object pool method that it does not own.");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = 0xffffffff;
LAB_1439cf027:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1439cf05d:
  pFVar10 = (this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20;
  if (((param_1 < *(FPBDCollisionConstraint **)pFVar10) ||
      ((FPBDCollisionConstraint *)
       ((longlong)*(int *)(pFVar10 + 0x10) * 0x670 + (longlong)*(FPBDCollisionConstraint **)pFVar10)
       <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owns(Object)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x173,
                         L"A pointer was passed to an object pool block that it does not own."),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1[1]._padding_ & 0x100000000) != 0) {
    FPBDCollisionConstraint::~FPBDCollisionConstraint(param_1);
    pbVar1 = (byte *)((longlong)&param_1[1]._padding_ + 4);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  uVar3 = *(ulonglong *)pFVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)param_1 - uVar3;
  lVar11 = SUB168(ZEXT816(0x3e22cbce4a9027c5) * auVar5,8);
  if (*(int *)(pFVar10 + 0x1c) != -1) {
    *(int *)&param_1[1]._padding_ = *(int *)(pFVar10 + 0x1c);
  }
  *(int *)(pFVar10 + 0x14) = *(int *)(pFVar10 + 0x14) + 1;
  *(int *)(pFVar10 + 0x1c) = (int)((((longlong)param_1 - uVar3) - lVar11 >> 1) + lVar11 >> 10);
  this->FreeCount = this->FreeCount + 1;
  return;
}

// Alloc<> @ 143b508c0

FPBDIsland * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIsland>::Alloc<>
          (TObjectPool<Chaos::Private::FPBDIsland> *this)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FBlock *this_00;
  FPBDIsland *pFVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  int iVar18;
  
  if (this->FreeCount == 0) {
    this_00 = AddBlock(this);
    pFVar11 = FBlock::GetNextFree(this_00);
    goto LAB_143b50b25;
  }
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Blocks.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x4d,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIsland *)(*pcVar3)();
    return pFVar11;
  }
  uVar13 = 0;
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIsland *)(*pcVar3)();
    return pFVar11;
  }
  if (*(int *)((this->Blocks).AllocatorInstance.Data + 0x14) == 0) {
    iVar12 = (this->Blocks).ArrayNum;
    uVar14 = 0xffffffff;
    uVar10 = 0xffffffff;
    iVar18 = 0x7fffffff;
    uVar17 = uVar13;
    if (iVar12 < 1) {
LAB_143b509fc:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectedIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x5f,L"Could not find an empty block");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPBDIsland *)(*pcVar3)();
        return pFVar11;
      }
    }
    else {
      do {
        uVar15 = (uint)uVar13;
        uVar10 = 0;
        if ((int)uVar15 < iVar12) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FPBDIsland *)(*pcVar3)();
          return pFVar11;
        }
        iVar12 = *(int *)((this->Blocks).AllocatorInstance.Data + uVar17 + 0x14);
        if ((0 < iVar12) && (iVar12 < iVar18)) {
          uVar14 = uVar13;
          iVar18 = iVar12;
        }
        uVar10 = (uint)uVar14;
        iVar12 = (this->Blocks).ArrayNum;
        uVar13 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x20;
      } while ((int)(uVar15 + 1) < iVar12);
      if (uVar10 == 0xffffffff) goto LAB_143b509fc;
    }
    uVar15 = 0;
    if ((int)uVar10 < (this->Blocks).ArrayNum) {
      uVar15 = ~uVar10 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FPBDIsland *)(*pcVar3)();
      return pFVar11;
    }
    pFVar16 = (this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
    if (((this->Blocks).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FPBDIsland *)(*pcVar3)();
      return pFVar11;
    }
    pFVar2 = (this->Blocks).AllocatorInstance.Data;
    uVar4 = *(undefined8 *)(pFVar16 + 8);
    uVar5 = *(undefined8 *)pFVar2;
    uVar6 = *(undefined8 *)(pFVar2 + 8);
    uVar7 = *(undefined8 *)(pFVar2 + 0x10);
    uVar8 = *(undefined8 *)(pFVar2 + 0x18);
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar16;
    *(undefined8 *)(pFVar2 + 8) = uVar4;
    uVar4 = *(undefined8 *)(pFVar16 + 0x18);
    *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)(pFVar16 + 0x10);
    *(undefined8 *)(pFVar2 + 0x18) = uVar4;
    *(undefined8 *)pFVar16 = uVar5;
    *(undefined8 *)(pFVar16 + 8) = uVar6;
    *(undefined8 *)(pFVar16 + 0x10) = uVar7;
    *(undefined8 *)(pFVar16 + 0x18) = uVar8;
  }
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIsland *)(*pcVar3)();
    return pFVar11;
  }
  pFVar11 = FBlock::GetNextFree((FBlock *)(this->Blocks).AllocatorInstance.Data);
LAB_143b50b25:
  (pFVar11->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar11->Nodes).ArrayNum = 0;
  (pFVar11->Nodes).ArrayMax = 0;
  (pFVar11->ContainerEdges).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>)
       0x0;
  (pFVar11->ContainerEdges).ArrayNum = 0;
  (pFVar11->ContainerEdges).ArrayMax = 5;
  (pFVar11->Iterations).NumPositionIterations = -1;
  (pFVar11->Iterations).NumVelocityIterations = -1;
  (pFVar11->Iterations).NumProjectionIterations = -1;
  (pFVar11->Flags).Bits = 0x6c;
  pFVar11->MergeSet = (FPBDIslandMergeSet *)0x0;
  pFVar11->MergeSetIslandIndex = -1;
  pFVar11->ArrayIndex = -1;
  pFVar11->NumEdges = 0;
  pFVar11->SleepCounter = 0;
  pFVar11->DisableCounter = 0;
  pFVar11->SleepTypeSwitchCounter = 0;
  pFVar11->ResimFrame = -1;
  pbVar1 = (byte *)((longlong)&pFVar11[1].Nodes.AllocatorInstance.Data + 4);
  *pbVar1 = *pbVar1 | 1;
  this->FreeCount = this->FreeCount + -1;
  return pFVar11;
}

// Alloc<> @ 143b50b90

FPBDIslandMergeSet * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandMergeSet>::Alloc<>
          (TObjectPool<Chaos::Private::FPBDIslandMergeSet> *this)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FBlock *this_00;
  FPBDIslandMergeSet *pFVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  int iVar18;
  
  if (this->FreeCount == 0) {
    this_00 = AddBlock(this);
    pFVar11 = FBlock::GetNextFree(this_00);
    goto LAB_143b50df5;
  }
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Blocks.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x4d,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIslandMergeSet *)(*pcVar3)();
    return pFVar11;
  }
  uVar14 = 0;
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIslandMergeSet *)(*pcVar3)();
    return pFVar11;
  }
  if (*(int *)((this->Blocks).AllocatorInstance.Data + 0x14) == 0) {
    iVar12 = (this->Blocks).ArrayNum;
    uVar13 = 0xffffffff;
    uVar10 = 0xffffffff;
    iVar18 = 0x7fffffff;
    uVar17 = uVar14;
    if (iVar12 < 1) {
LAB_143b50ccc:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectedIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x5f,L"Could not find an empty block");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPBDIslandMergeSet *)(*pcVar3)();
        return pFVar11;
      }
    }
    else {
      do {
        uVar15 = (uint)uVar14;
        uVar10 = 0;
        if ((int)uVar15 < iVar12) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FPBDIslandMergeSet *)(*pcVar3)();
          return pFVar11;
        }
        iVar12 = *(int *)((this->Blocks).AllocatorInstance.Data + uVar17 + 0x14);
        if ((0 < iVar12) && (iVar12 < iVar18)) {
          uVar13 = uVar14;
          iVar18 = iVar12;
        }
        uVar10 = (uint)uVar13;
        iVar12 = (this->Blocks).ArrayNum;
        uVar14 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x20;
      } while ((int)(uVar15 + 1) < iVar12);
      if (uVar10 == 0xffffffff) goto LAB_143b50ccc;
    }
    uVar15 = 0;
    if ((int)uVar10 < (this->Blocks).ArrayNum) {
      uVar15 = ~uVar10 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FPBDIslandMergeSet *)(*pcVar3)();
      return pFVar11;
    }
    pFVar16 = (this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
    if (((this->Blocks).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FPBDIslandMergeSet *)(*pcVar3)();
      return pFVar11;
    }
    pFVar2 = (this->Blocks).AllocatorInstance.Data;
    uVar4 = *(undefined8 *)(pFVar16 + 8);
    uVar5 = *(undefined8 *)pFVar2;
    uVar6 = *(undefined8 *)(pFVar2 + 8);
    uVar7 = *(undefined8 *)(pFVar2 + 0x10);
    uVar8 = *(undefined8 *)(pFVar2 + 0x18);
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar16;
    *(undefined8 *)(pFVar2 + 8) = uVar4;
    uVar4 = *(undefined8 *)(pFVar16 + 0x18);
    *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)(pFVar16 + 0x10);
    *(undefined8 *)(pFVar2 + 0x18) = uVar4;
    *(undefined8 *)pFVar16 = uVar5;
    *(undefined8 *)(pFVar16 + 8) = uVar6;
    *(undefined8 *)(pFVar16 + 0x10) = uVar7;
    *(undefined8 *)(pFVar16 + 0x18) = uVar8;
  }
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIslandMergeSet *)(*pcVar3)();
    return pFVar11;
  }
  pFVar11 = FBlock::GetNextFree((FBlock *)(this->Blocks).AllocatorInstance.Data);
LAB_143b50df5:
  (pFVar11->Islands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar11->Islands).ArrayNum = 0;
  (pFVar11->Islands).ArrayMax = 0;
  pFVar11->NumEdges = 0;
  pFVar11->ArrayIndex = -1;
  pbVar1 = (byte *)((longlong)&pFVar11[1].Islands.AllocatorInstance.Data + 4);
  *pbVar1 = *pbVar1 | 1;
  this->FreeCount = this->FreeCount + -1;
  return pFVar11;
}

// Alloc<Chaos::TGeometryParticleHandleImp<double,3,1>_*_&> @ 143b50e20

FPBDIslandParticle * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::
Alloc<Chaos::TGeometryParticleHandleImp<double,3,1>_*_&>
          (TObjectPool<Chaos::Private::FPBDIslandParticle> *this,
          TGeometryParticleHandleImp<double,3,1> **param_1)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FBlock *this_01;
  FPBDIslandParticle *pFVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  
  if (this->FreeCount == 0) {
    this_01 = AddBlock(this);
    pFVar11 = FBlock::GetNextFree(this_01);
    Construct<Chaos::Private::FPBDIslandParticle,0,Chaos::TGeometryParticleHandleImp<double,3,1>_*_&>
              (pFVar11,param_1);
    this->FreeCount = this->FreeCount + -1;
    return pFVar11;
  }
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Blocks.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x4d,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIslandParticle *)(*pcVar3)();
    return pFVar11;
  }
  uVar14 = 0;
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIslandParticle *)(*pcVar3)();
    return pFVar11;
  }
  if (*(int *)((this->Blocks).AllocatorInstance.Data + 0x14) != 0) goto code_r0x000143b5105f;
  iVar12 = (this->Blocks).ArrayNum;
  uVar17 = 0xffffffff;
  uVar10 = 0xffffffff;
  iVar18 = 0x7fffffff;
  uVar16 = uVar14;
  if (iVar12 < 1) {
LAB_143b50f7a:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SelectedIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                       ,0x5f,L"Could not find an empty block");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FPBDIslandParticle *)(*pcVar3)();
      return pFVar11;
    }
  }
  else {
    do {
      uVar13 = (uint)uVar14;
      uVar10 = 0;
      if ((int)uVar13 < iVar12) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPBDIslandParticle *)(*pcVar3)();
        return pFVar11;
      }
      iVar12 = *(int *)((this->Blocks).AllocatorInstance.Data + uVar16 + 0x14);
      if ((0 < iVar12) && (iVar12 < iVar18)) {
        uVar17 = uVar14;
        iVar18 = iVar12;
      }
      uVar10 = (uint)uVar17;
      iVar12 = (this->Blocks).ArrayNum;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x20;
    } while ((int)(uVar13 + 1) < iVar12);
    if (uVar10 == 0xffffffff) goto LAB_143b50f7a;
  }
  uVar13 = 0;
  if ((int)uVar10 < (this->Blocks).ArrayNum) {
    uVar13 = ~uVar10 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIslandParticle *)(*pcVar3)();
    return pFVar11;
  }
  pFVar15 = (this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIslandParticle *)(*pcVar3)();
    return pFVar11;
  }
  pFVar2 = (this->Blocks).AllocatorInstance.Data;
  uVar4 = *(undefined8 *)(pFVar15 + 8);
  uVar5 = *(undefined8 *)pFVar2;
  uVar6 = *(undefined8 *)(pFVar2 + 8);
  uVar7 = *(undefined8 *)(pFVar2 + 0x10);
  uVar8 = *(undefined8 *)(pFVar2 + 0x18);
  *(undefined8 *)pFVar2 = *(undefined8 *)pFVar15;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  uVar4 = *(undefined8 *)(pFVar15 + 0x18);
  *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)(pFVar15 + 0x10);
  *(undefined8 *)(pFVar2 + 0x18) = uVar4;
  *(undefined8 *)pFVar15 = uVar5;
  *(undefined8 *)(pFVar15 + 8) = uVar6;
  *(undefined8 *)(pFVar15 + 0x10) = uVar7;
  *(undefined8 *)(pFVar15 + 0x18) = uVar8;
code_r0x000143b5105f:
  if (((this->Blocks).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPBDIslandParticle *)(*pcVar3)();
    return pFVar11;
  }
  pFVar11 = FBlock::GetNextFree((FBlock *)(this->Blocks).AllocatorInstance.Data);
  this_00 = *param_1;
  (pFVar11->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar11->Edges).ArrayNum = 0;
  (pFVar11->Edges).ArrayMax = 0;
  pFVar11->Flags = (FFlags)0x0;
  pFVar11->Level = 0;
  pFVar11->Island = (FPBDIsland *)0x0;
  pFVar11->SleepLinearThresholdSq = 0.0;
  pFVar11->SleepAngularThresholdSq = 0.0;
  pFVar11->SleepCounterThreshold = 0;
  pFVar11->WakeLinearThresholdSq = 0.0;
  pFVar11->WakeAngularThresholdSq = 0.0;
  pFVar11->DisableLinearThresholdSq = 0.0;
  pFVar11->DisableAngularThresholdSq = 0.0;
  pFVar11->Particle = this_00;
  pFVar11->VisitEpoch = -1;
  pFVar11->ArrayIndex = -1;
  pFVar11->IslandArrayIndex = -1;
  pFVar11->ResimFrame = -1;
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode(this_00,pFVar11);
  }
  pbVar1 = (byte *)((longlong)&pFVar11[1].Particle + 4);
  *pbVar1 = *pbVar1 | 1;
  this->FreeCount = this->FreeCount + -1;
  return pFVar11;
}

// Alloc<int_const_&,Chaos::FConstraintHandle_*_&> @ 143b51110

FPBDIslandConstraint * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::
Alloc<int_const_&,Chaos::FConstraintHandle_*_&>
          (TObjectPool<Chaos::Private::FPBDIslandConstraint> *this,int *param_1,
          FConstraintHandle **param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  FBlock *this_00;
  FPBDIslandConstraint *pFVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  
  if (this->FreeCount == 0) {
    this_00 = AddBlock(this);
    goto LAB_143b51372;
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Blocks.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                       ,0x4d,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FPBDIslandConstraint *)(*pcVar2)();
      return pFVar10;
    }
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FPBDIslandConstraint *)(*pcVar2)();
      return pFVar10;
    }
  }
  if (*(int *)((this->Blocks).AllocatorInstance.Data + 0x14) == 0) {
    iVar11 = (this->Blocks).ArrayNum;
    uVar12 = 0;
    uVar15 = 0xffffffff;
    iVar16 = 0x7fffffff;
    if (iVar11 < 1) {
LAB_143b5124b:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectedIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                         ,0x5f,L"Could not find an empty block");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FPBDIslandConstraint *)(*pcVar2)();
        return pFVar10;
      }
    }
    else {
      lVar14 = 0;
      uVar15 = 0xffffffff;
      do {
        uVar9 = 0;
        if ((int)uVar12 < iVar11) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FPBDIslandConstraint *)(*pcVar2)();
            return pFVar10;
          }
        }
        iVar11 = *(int *)((this->Blocks).AllocatorInstance.Data + lVar14 + 0x14);
        if ((0 < iVar11) && (iVar11 < iVar16)) {
          iVar16 = iVar11;
          uVar15 = uVar12;
        }
        iVar11 = (this->Blocks).ArrayNum;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x20;
      } while ((int)uVar12 < iVar11);
      if (uVar15 == 0xffffffff) goto LAB_143b5124b;
    }
    uVar12 = 0;
    if ((int)uVar15 < (this->Blocks).ArrayNum) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FPBDIslandConstraint *)(*pcVar2)();
        return pFVar10;
      }
    }
    pFVar13 = (this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x20;
    if ((this->Blocks).ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FPBDIslandConstraint *)(*pcVar2)();
        return pFVar10;
      }
    }
    pFVar1 = (this->Blocks).AllocatorInstance.Data;
    uVar3 = *(undefined8 *)(pFVar13 + 8);
    uVar4 = *(undefined8 *)pFVar1;
    uVar5 = *(undefined8 *)(pFVar1 + 8);
    uVar6 = *(undefined8 *)(pFVar1 + 0x10);
    uVar7 = *(undefined8 *)(pFVar1 + 0x18);
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar13;
    *(undefined8 *)(pFVar1 + 8) = uVar3;
    uVar3 = *(undefined8 *)(pFVar13 + 0x18);
    *(undefined8 *)(pFVar1 + 0x10) = *(undefined8 *)(pFVar13 + 0x10);
    *(undefined8 *)(pFVar1 + 0x18) = uVar3;
    *(undefined8 *)pFVar13 = uVar4;
    *(undefined8 *)(pFVar13 + 8) = uVar5;
    *(undefined8 *)(pFVar13 + 0x10) = uVar6;
    *(undefined8 *)(pFVar13 + 0x18) = uVar7;
  }
  if ((this->Blocks).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FPBDIslandConstraint *)(*pcVar2)();
      return pFVar10;
    }
  }
  this_00 = (FBlock *)(this->Blocks).AllocatorInstance.Data;
LAB_143b51372:
  pFVar10 = FBlock::GetNextFree(this_00);
  Construct<Chaos::Private::FPBDIslandConstraint,0,int_const_&,Chaos::FConstraintHandle_*_&>
            (pFVar10,param_1,param_2);
  this->FreeCount = this->FreeCount + -1;
  return pFVar10;
}

// ConditionalDestruct<Chaos::Private::FPBDIsland,0> @ 143b51560

void __cdecl
Chaos::TObjectPool<Chaos::Private::FPBDIsland>::ConditionalDestruct<Chaos::Private::FPBDIsland,0>
          (FPBDIsland *param_1)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar3;
  
  if (((ulonglong)param_1[1].Nodes.AllocatorInstance.Data & 0x100000000) != 0) {
    Chaos::Private::FPBDIsland::Trash(param_1);
    FVar3 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )0x0) {
      FVar3 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
               )&param_1->ContainerEdges;
    }
    DestructItems<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int>
              ((TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_> *)FVar3,
               (param_1->ContainerEdges).ArrayNum);
    FVar3 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar3);
    }
    pFVar2 = (param_1->Nodes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pbVar1 = (byte *)((longlong)&param_1[1].Nodes.AllocatorInstance.Data + 4);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  return;
}

// Construct<Chaos::Private::FPBDIslandConstraint,0,int_const_&,Chaos::FConstraintHandle_*_&> @ 143b515d0

FPBDIslandConstraint * __cdecl
Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::
Construct<Chaos::Private::FPBDIslandConstraint,0,int_const_&,Chaos::FConstraintHandle_*_&>
          (FPBDIslandConstraint *param_1,int *param_2,FConstraintHandle **param_3)

{
  byte *pbVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  FPBDIslandConstraint *pFVar7;
  
  pFVar3 = *param_3;
  iVar2 = *param_2;
  (param_1->Flags).Bits = 0;
  param_1->Constraint = pFVar3;
  param_1->Island = (FPBDIsland *)0x0;
  param_1->Nodes[0] = (FPBDIslandParticle *)0x0;
  param_1->Nodes[1] = (FPBDIslandParticle *)0x0;
  param_1->VisitEpoch = -1;
  param_1->ArrayIndex = -1;
  param_1->NodeArrayIndices[0] = -1;
  param_1->NodeArrayIndices[1] = -1;
  param_1->IslandArrayIndex = -1;
  param_1->Level = 0;
  param_1->LevelSortKey = 0;
  param_1->ContainerIndex = iVar2;
  if (pFVar3 != (FConstraintHandle *)0x0) {
    if (pFVar3->GraphEdge != (FPBDIslandConstraint *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InEdge == nullptr) || (GraphEdge == nullptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                         ,0x99,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPBDIslandConstraint *)(*pcVar4)();
        return pFVar7;
      }
    }
    pFVar3->GraphEdge = param_1;
    bVar6 = (**(code **)(param_1->Constraint->_padding_ + 0x40))();
    (param_1->Flags).Bits = (param_1->Flags).Bits ^ ((param_1->Flags).Bits ^ (uint)bVar6) & 1;
  }
  pbVar1 = (byte *)((longlong)&param_1[1].Constraint + 4);
  *pbVar1 = *pbVar1 | 1;
  return param_1;
}

// Construct<Chaos::Private::FPBDIslandParticle,0,Chaos::TGeometryParticleHandleImp<double,3,1>_*_&> @ 143b51680

FPBDIslandParticle * __cdecl
Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::
Construct<Chaos::Private::FPBDIslandParticle,0,Chaos::TGeometryParticleHandleImp<double,3,1>_*_&>
          (FPBDIslandParticle *param_1,TGeometryParticleHandleImp<double,3,1> **param_2)

{
  byte *pbVar1;
  TGeometryParticleHandleImp<double,3,1> *this;
  
  this = *param_2;
  (param_1->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->Edges).ArrayNum = 0;
  (param_1->Edges).ArrayMax = 0;
  param_1->Flags = (FFlags)0x0;
  param_1->Level = 0;
  param_1->Particle = this;
  param_1->Island = (FPBDIsland *)0x0;
  param_1->VisitEpoch = -1;
  param_1->ArrayIndex = -1;
  param_1->IslandArrayIndex = -1;
  param_1->SleepLinearThresholdSq = 0.0;
  param_1->SleepAngularThresholdSq = 0.0;
  param_1->SleepCounterThreshold = 0;
  param_1->WakeLinearThresholdSq = 0.0;
  param_1->WakeAngularThresholdSq = 0.0;
  param_1->DisableLinearThresholdSq = 0.0;
  param_1->DisableAngularThresholdSq = 0.0;
  param_1->ResimFrame = -1;
  if (this != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode(this,param_1);
  }
  pbVar1 = (byte *)((longlong)&param_1[1].Particle + 4);
  *pbVar1 = *pbVar1 | 1;
  return param_1;
}

// ~TObjectPool<Chaos::Private::FPBDIsland> @ 143b57b00

void __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIsland>::~TObjectPool<Chaos::Private::FPBDIsland>
          (TObjectPool<Chaos::Private::FPBDIsland> *this)

{
  byte *pbVar1;
  int iVar2;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar5;
  FPBDIsland *this_00;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Blocks).ArrayNum;
  pFVar7 = (this->Blocks).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TObjectPool<Chaos::Private::FPBDIsland>::FBlock,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    iVar6 = 0;
    if (0 < *(int *)(pFVar7 + 0x18)) {
      lVar9 = 0;
      do {
        this_00 = (FPBDIsland *)(*(longlong *)pFVar7 + lVar9);
        if (((ulonglong)this_00[1].Nodes.AllocatorInstance.Data & 0x100000000) != 0) {
          Chaos::Private::FPBDIsland::Trash(this_00);
          FVar3 = (this_00->ContainerEdges).AllocatorInstance.SecondaryData;
          FVar5 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                   )&this_00->ContainerEdges;
          if (FVar3 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                        )0x0) {
            FVar5 = FVar3;
          }
          DestructItems<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_> *)
                     FVar5,(this_00->ContainerEdges).ArrayNum);
          FVar3 = (this_00->ContainerEdges).AllocatorInstance.SecondaryData;
          if (FVar3 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                        )0x0) {
            FMemory::Free((void *)FVar3);
          }
          pFVar4 = (this_00->Nodes).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pbVar1 = (byte *)((longlong)&this_00[1].Nodes.AllocatorInstance.Data + 4);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 0xa8;
      } while (iVar6 < *(int *)(pFVar7 + 0x18));
    }
    *(longlong *)(pFVar7 + 8) = *(longlong *)pFVar7;
    *(undefined4 *)(pFVar7 + 0x14) = *(undefined4 *)(pFVar7 + 0x10);
    *(undefined4 *)(pFVar7 + 0x1c) = 0xffffffff;
    *(undefined4 *)(pFVar7 + 0x18) = 0;
    pFVar7 = pFVar7 + 0x20;
  }
  iVar2 = (this->Blocks).ArrayNum;
  this->FreeCount = iVar2 * this->NumPerBlock;
  DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIsland>::FBlock,int>
            ((FBlock *)(this->Blocks).AllocatorInstance.Data,iVar2);
  pFVar7 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// ~TObjectPool<Chaos::Private::FPBDIslandConstraint> @ 143b57c30

void __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::
~TObjectPool<Chaos::Private::FPBDIslandConstraint>
          (TObjectPool<Chaos::Private::FPBDIslandConstraint> *this)

{
  byte *pbVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  FPBDIslandConstraint *this_00;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Blocks).ArrayNum;
  pFVar3 = (this->Blocks).AllocatorInstance.Data;
  pFVar7 = pFVar3 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::FBlock,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar7) break;
    uVar4 = 0;
    uVar6 = 0;
    if (0 < *(int *)(pFVar3 + 0x18)) {
      do {
        this_00 = (FPBDIslandConstraint *)(*(longlong *)pFVar3 + uVar4);
        if (((ulonglong)this_00[1].Constraint & 0x100000000) != 0) {
          Chaos::Private::FPBDIslandConstraint::Trash(this_00);
          pbVar1 = (byte *)((longlong)&this_00[1].Constraint + 4);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 0x50;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(pFVar3 + 0x18));
    }
    *(longlong *)(pFVar3 + 8) = *(longlong *)pFVar3;
    *(undefined4 *)(pFVar3 + 0x14) = *(undefined4 *)(pFVar3 + 0x10);
    *(undefined4 *)(pFVar3 + 0x1c) = 0xffffffff;
    *(undefined4 *)(pFVar3 + 0x18) = 0;
    pFVar3 = pFVar3 + 0x20;
  }
  iVar2 = (this->Blocks).ArrayNum;
  this->FreeCount = iVar2 * this->NumPerBlock;
  DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::FBlock,int>
            ((FBlock *)(this->Blocks).AllocatorInstance.Data,iVar2);
  pFVar3 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TObjectPool<Chaos::Private::FPBDIslandMergeSet> @ 143b57d10

void __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandMergeSet>::
~TObjectPool<Chaos::Private::FPBDIslandMergeSet>
          (TObjectPool<Chaos::Private::FPBDIslandMergeSet> *this)

{
  byte *pbVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  FPBDIslandMergeSet *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Blocks).ArrayNum;
  pFVar4 = (this->Blocks).AllocatorInstance.Data;
  pFVar8 = pFVar4 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TObjectPool<Chaos::Private::FPBDIslandMergeSet>::FBlock,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar8) break;
    uVar5 = 0;
    uVar7 = 0;
    if (0 < *(int *)(pFVar4 + 0x18)) {
      do {
        this_00 = (FPBDIslandMergeSet *)(*(longlong *)pFVar4 + uVar5);
        if (((ulonglong)this_00[1].Islands.AllocatorInstance.Data & 0x100000000) != 0) {
          Chaos::Private::FPBDIslandMergeSet::Trash(this_00);
          pFVar3 = (this_00->Islands).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pbVar1 = (byte *)((longlong)&this_00[1].Islands.AllocatorInstance.Data + 4);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        uVar6 = (int)uVar7 + 1;
        uVar5 = uVar5 + 0x20;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(pFVar4 + 0x18));
    }
    *(longlong *)(pFVar4 + 8) = *(longlong *)pFVar4;
    *(undefined4 *)(pFVar4 + 0x14) = *(undefined4 *)(pFVar4 + 0x10);
    *(undefined4 *)(pFVar4 + 0x1c) = 0xffffffff;
    *(undefined4 *)(pFVar4 + 0x18) = 0;
    pFVar4 = pFVar4 + 0x20;
  }
  iVar2 = (this->Blocks).ArrayNum;
  this->FreeCount = iVar2 * this->NumPerBlock;
  DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandMergeSet>::FBlock,int>
            ((FBlock *)(this->Blocks).AllocatorInstance.Data,iVar2);
  pFVar4 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// ~TObjectPool<Chaos::Private::FPBDIslandParticle> @ 143b57e00

void __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::
~TObjectPool<Chaos::Private::FPBDIslandParticle>
          (TObjectPool<Chaos::Private::FPBDIslandParticle> *this)

{
  byte *pbVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  FPBDIslandParticle *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Blocks).ArrayNum;
  pFVar4 = (this->Blocks).AllocatorInstance.Data;
  pFVar8 = pFVar4 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::FBlock,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar8) break;
    uVar5 = 0;
    uVar7 = 0;
    if (0 < *(int *)(pFVar4 + 0x18)) {
      do {
        this_00 = (FPBDIslandParticle *)(*(longlong *)pFVar4 + uVar5);
        if (((ulonglong)this_00[1].Particle & 0x100000000) != 0) {
          Chaos::Private::FPBDIslandParticle::Trash(this_00);
          pFVar3 = (this_00->Edges).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          pbVar1 = (byte *)((longlong)&this_00[1].Particle + 4);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        uVar6 = (int)uVar7 + 1;
        uVar5 = uVar5 + 0x60;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(pFVar4 + 0x18));
    }
    *(longlong *)(pFVar4 + 8) = *(longlong *)pFVar4;
    *(undefined4 *)(pFVar4 + 0x14) = *(undefined4 *)(pFVar4 + 0x10);
    *(undefined4 *)(pFVar4 + 0x1c) = 0xffffffff;
    *(undefined4 *)(pFVar4 + 0x18) = 0;
    pFVar4 = pFVar4 + 0x20;
  }
  iVar2 = (this->Blocks).ArrayNum;
  this->FreeCount = iVar2 * this->NumPerBlock;
  DestructItems<Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::FBlock,int>
            ((FBlock *)(this->Blocks).AllocatorInstance.Data,iVar2);
  pFVar4 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AddBlock @ 143b5c410

FBlock * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIsland>::AddBlock
          (TObjectPool<Chaos::Private::FPBDIsland> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FBlock *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar5 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Blocks).ArrayNum = iVar5 + 1;
  iVar2 = this->NumPerBlock;
  pFVar10 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  pvVar6 = FMemory::Malloc((longlong)(iVar2 * 0xa8),8);
  *(void **)pFVar10 = pvVar6;
  *(void **)(pFVar10 + 8) = pvVar6;
  *(undefined4 *)(pFVar10 + 0x18) = 0;
  *(int *)(pFVar10 + 0x10) = iVar2;
  *(int *)(pFVar10 + 0x14) = iVar2;
  *(undefined4 *)(pFVar10 + 0x1c) = 0xffffffff;
  this->Capacity = this->Capacity + this->NumPerBlock;
  this->FreeCount = this->FreeCount + this->NumPerBlock;
  iVar5 = (this->Blocks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar5) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBlock *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FBlock *)
         ((this->Blocks).AllocatorInstance.Data + (longlong)((this->Blocks).ArrayNum + -1) * 0x20);
}

// AddBlock @ 143b5c500

FBlock * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::AddBlock
          (TObjectPool<Chaos::Private::FPBDIslandConstraint> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FBlock *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar5 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Blocks).ArrayNum = iVar5 + 1;
  iVar2 = this->NumPerBlock;
  pFVar10 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  pvVar6 = FMemory::Malloc((longlong)(iVar2 * 0x50),8);
  *(void **)pFVar10 = pvVar6;
  *(void **)(pFVar10 + 8) = pvVar6;
  *(undefined4 *)(pFVar10 + 0x18) = 0;
  *(int *)(pFVar10 + 0x10) = iVar2;
  *(int *)(pFVar10 + 0x14) = iVar2;
  *(undefined4 *)(pFVar10 + 0x1c) = 0xffffffff;
  this->Capacity = this->Capacity + this->NumPerBlock;
  this->FreeCount = this->FreeCount + this->NumPerBlock;
  iVar5 = (this->Blocks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar5) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBlock *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FBlock *)
         ((this->Blocks).AllocatorInstance.Data + (longlong)((this->Blocks).ArrayNum + -1) * 0x20);
}

// AddBlock @ 143b5c5f0

FBlock * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandMergeSet>::AddBlock
          (TObjectPool<Chaos::Private::FPBDIslandMergeSet> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FBlock *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar5 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Blocks).ArrayNum = iVar5 + 1;
  iVar2 = this->NumPerBlock;
  pFVar10 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  pvVar6 = FMemory::Malloc((longlong)(iVar2 << 5),8);
  *(void **)pFVar10 = pvVar6;
  *(void **)(pFVar10 + 8) = pvVar6;
  *(undefined4 *)(pFVar10 + 0x18) = 0;
  *(int *)(pFVar10 + 0x10) = iVar2;
  *(int *)(pFVar10 + 0x14) = iVar2;
  *(undefined4 *)(pFVar10 + 0x1c) = 0xffffffff;
  this->Capacity = this->Capacity + this->NumPerBlock;
  this->FreeCount = this->FreeCount + this->NumPerBlock;
  iVar5 = (this->Blocks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar5) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBlock *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FBlock *)
         ((this->Blocks).AllocatorInstance.Data + (longlong)((this->Blocks).ArrayNum + -1) * 0x20);
}

// AddBlock @ 143b5c6e0

FBlock * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::AddBlock
          (TObjectPool<Chaos::Private::FPBDIslandParticle> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FBlock *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar5 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Blocks).ArrayNum = iVar5 + 1;
  iVar2 = this->NumPerBlock;
  pFVar10 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  pvVar6 = FMemory::Malloc((longlong)(iVar2 * 0x60),8);
  *(void **)pFVar10 = pvVar6;
  *(void **)(pFVar10 + 8) = pvVar6;
  *(undefined4 *)(pFVar10 + 0x18) = 0;
  *(int *)(pFVar10 + 0x10) = iVar2;
  *(int *)(pFVar10 + 0x14) = iVar2;
  *(undefined4 *)(pFVar10 + 0x1c) = 0xffffffff;
  this->Capacity = this->Capacity + this->NumPerBlock;
  this->FreeCount = this->FreeCount + this->NumPerBlock;
  iVar5 = (this->Blocks).ArrayNum;
  uVar9 = iVar5 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar5) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBlock *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FBlock *)
         ((this->Blocks).AllocatorInstance.Data + (longlong)((this->Blocks).ArrayNum + -1) * 0x20);
}

// ReserveBlocks @ 143b73f30

void __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::ReserveBlocks
          (TObjectPool<Chaos::Private::FPBDIslandParticle> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  iVar4 = (this->Blocks).ArrayNum;
  while( true ) {
    if (param_1 <= iVar4) {
      return;
    }
    if (iVar4 == (this->Blocks).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)this,&(this->Blocks).ArrayMax);
    }
    (this->Blocks).ArrayNum = iVar4 + 1;
    iVar1 = this->NumPerBlock;
    pFVar8 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar4 * 0x20;
    pvVar6 = FMemory::Malloc((longlong)(iVar1 * 0x60),8);
    *(void **)pFVar8 = pvVar6;
    *(void **)(pFVar8 + 8) = pvVar6;
    *(int *)(pFVar8 + 0x10) = iVar1;
    *(int *)(pFVar8 + 0x14) = iVar1;
    *(undefined4 *)(pFVar8 + 0x18) = 0;
    *(undefined4 *)(pFVar8 + 0x1c) = 0xffffffff;
    this->Capacity = this->Capacity + this->NumPerBlock;
    this->FreeCount = this->FreeCount + this->NumPerBlock;
    iVar4 = (this->Blocks).ArrayNum;
    uVar7 = iVar4 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar4) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    iVar4 = (this->Blocks).ArrayNum;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ~TObjectPool<Chaos::FPBDCollisionConstraint> @ 143c44ef0

void __thiscall
Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>::~TObjectPool<Chaos::FPBDCollisionConstraint>
          (TObjectPool<Chaos::FPBDCollisionConstraint> *this)

{
  byte *pbVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  FPBDCollisionConstraint *this_00;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Blocks).ArrayNum;
  pFVar3 = (this->Blocks).AllocatorInstance.Data;
  pFVar7 = pFVar3 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>::FBlock,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar7) break;
    uVar4 = 0;
    uVar6 = 0;
    if (0 < *(int *)(pFVar3 + 0x18)) {
      do {
        this_00 = (FPBDCollisionConstraint *)(*(longlong *)pFVar3 + uVar4);
        if ((this_00[1]._padding_ & 0x100000000) != 0) {
          FPBDCollisionConstraint::~FPBDCollisionConstraint(this_00);
          pbVar1 = (byte *)((longlong)&this_00[1]._padding_ + 4);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 0x670;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(pFVar3 + 0x18));
    }
    *(longlong *)(pFVar3 + 8) = *(longlong *)pFVar3;
    *(undefined4 *)(pFVar3 + 0x14) = *(undefined4 *)(pFVar3 + 0x10);
    *(undefined4 *)(pFVar3 + 0x1c) = 0xffffffff;
    *(undefined4 *)(pFVar3 + 0x18) = 0;
    pFVar3 = pFVar3 + 0x20;
  }
  iVar2 = (this->Blocks).ArrayNum;
  this->FreeCount = iVar2 * this->NumPerBlock;
  DestructItems<Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>::FBlock,int>
            ((FBlock *)(this->Blocks).AllocatorInstance.Data,iVar2);
  pFVar3 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

