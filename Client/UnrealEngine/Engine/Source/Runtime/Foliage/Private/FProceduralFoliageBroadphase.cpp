// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 9

// FProceduralFoliageBroadphase @ 145ed87c0

FProceduralFoliageBroadphase * __thiscall
FProceduralFoliageBroadphase::FProceduralFoliageBroadphase
          (FProceduralFoliageBroadphase *this,FProceduralFoliageBroadphase *param_1)

{
  undefined7 uStack_17;
  
  (this->QuadTree).Nodes.ArrayNum = 0;
  (this->QuadTree).Nodes.ArrayMax = 0;
  (this->QuadTree).Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuadTree).TreeBox.Min.field0_0x0._s_0.X = 0.0;
  (this->QuadTree).TreeBox.Min.field0_0x0._s_0.Y = 0.0;
  (this->QuadTree).bInternal = false;
  (this->QuadTree).TreeBox.Max.field0_0x0._s_0.X = 0.0;
  (this->QuadTree).TreeBox.Max.field0_0x0._s_0.Y = 0.0;
  (this->QuadTree).MinimumQuadSize = 100.0;
  *(ulonglong *)&(this->QuadTree).TreeBox.bIsValid = CONCAT71(uStack_17,1);
  (this->QuadTree).Position.field0_0x0._s_0.X = 0.0;
  (this->QuadTree).Position.field0_0x0._s_0.Y = 0.0;
  (this->QuadTree).SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->QuadTree).SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->QuadTree).SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->QuadTree).SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  TQuadTree<FProceduralFoliageInstance_*,4>::Duplicate(&param_1->QuadTree,&this->QuadTree);
  return this;
}

// FProceduralFoliageBroadphase @ 145ed8830

FProceduralFoliageBroadphase * __thiscall
FProceduralFoliageBroadphase::FProceduralFoliageBroadphase
          (FProceduralFoliageBroadphase *this,float param_1,float param_2)

{
  TVector2<double>_u_0 TVar1;
  TVector2<double>_u_0 TVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  undefined7 uStack_17;
  
  (this->QuadTree).Nodes.ArrayNum = 0;
  (this->QuadTree).Nodes.ArrayMax = 0;
  (this->QuadTree).Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar5 = param_1 * __real_c0000000;
  (this->QuadTree).bInternal = false;
  (this->QuadTree).MinimumQuadSize = param_2;
  dVar4 = (double)fVar5;
  dVar6 = (double)(param_1 + param_1);
  TVar1._8_4_ = SUB84(dVar4,0);
  TVar1._s_0.X = dVar4;
  TVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  (this->QuadTree).TreeBox.Min.field0_0x0 = TVar1;
  TVar2._8_4_ = SUB84(dVar6,0);
  TVar2._s_0.X = dVar6;
  TVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  (this->QuadTree).TreeBox.Max.field0_0x0 = TVar2;
  *(ulonglong *)&(this->QuadTree).TreeBox.bIsValid = CONCAT71(uStack_17,1);
  dVar4 = (dVar4 + dVar6) * __real_3fe0000000000000;
  (this->QuadTree).SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->QuadTree).SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->QuadTree).SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->QuadTree).SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  TVar3._8_4_ = SUB84(dVar4,0);
  TVar3._s_0.X = dVar4;
  TVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  (this->QuadTree).Position.field0_0x0 = TVar3;
  return this;
}

// operator= @ 145eda7d0

FProceduralFoliageBroadphase * __thiscall
FProceduralFoliageBroadphase::operator=
          (FProceduralFoliageBroadphase *this,FProceduralFoliageBroadphase *param_1)

{
  TQuadTree<FProceduralFoliageInstance_*,4>::Duplicate(&param_1->QuadTree,&this->QuadTree);
  return this;
}

// Empty @ 145ee06c0

void __thiscall FProceduralFoliageBroadphase::Empty(FProceduralFoliageBroadphase *this)

{
  int *piVar1;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar2;
  
  pTVar2 = (this->QuadTree).SubTrees[0];
  if (pTVar2 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar2);
    ::operator_delete(pTVar2,0x70);
    (this->QuadTree).SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar2 = (this->QuadTree).SubTrees[1];
  if (pTVar2 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar2);
    ::operator_delete(pTVar2,0x70);
    (this->QuadTree).SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar2 = (this->QuadTree).SubTrees[2];
  if (pTVar2 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar2);
    ::operator_delete(pTVar2,0x70);
    (this->QuadTree).SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar2 = (this->QuadTree).SubTrees[3];
  if (pTVar2 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar2);
    ::operator_delete(pTVar2,0x70);
    (this->QuadTree).SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  piVar1 = &(this->QuadTree).Nodes.ArrayMax;
  (this->QuadTree).Nodes.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  (this->QuadTree).bInternal = false;
  return;
}

// GetInstancesInBox @ 145ee3c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FProceduralFoliageBroadphase::GetInstancesInBox
          (FProceduralFoliageBroadphase *this,TBox2<double> *param_1,
          TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  TQuadTree<FProceduralFoliageInstance_*,4> *apTStack_48 [4];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar1 = TQuadTree<FProceduralFoliageInstance_*,4>::GetQuads(&this->QuadTree,param_1,apTStack_48);
  TQuadTree<FProceduralFoliageInstance_*,4>::GetIntersectingElements<TSizedDefaultAllocator<32>_>
            (&this->QuadTree,param_1,param_2);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      TQuadTree<FProceduralFoliageInstance_*,4>::GetElements<TSizedDefaultAllocator<32>_>
                (apTStack_48[lVar2],param_1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}

// GetOverlaps @ 145ee4800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FProceduralFoliageBroadphase::GetOverlaps
          (FProceduralFoliageBroadphase *this,FProceduralFoliageInstance *param_1,
          TArray<FProceduralFoliageOverlap,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  UFoliageType *pUVar7;
  FProceduralFoliageInstance *pFVar8;
  bool bVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined1 local_c8 [8];
  TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> local_c0;
  uint local_b0;
  FScriptContainerElement *local_a8;
  TVector2<double>_u_0 local_a0;
  double local_90;
  double local_88;
  undefined1 local_80;
  TQuadTree<FProceduralFoliageInstance_*,4> *local_78 [8];
  
  fVar3 = param_1->Scale;
  uVar17 = 0;
  dVar21 = (param_1->Location).field0_0x0._s_0.X;
  dVar24 = (param_1->Location).field0_0x0._s_0.Y;
  pUVar7 = (param_1->Type).field0_0x0.DebugPtr;
  uVar14 = 0;
  fVar4 = pUVar7->ShadeRadius;
  fVar5 = pUVar7->CollisionRadius;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  fVar20 = fVar3 * pUVar7->ShadeRadius;
  fVar22 = fVar3 * pUVar7->CollisionRadius;
  local_80 = 1;
  if (fVar20 <= fVar22) {
    fVar20 = fVar22;
  }
  dVar23 = (double)fVar20;
  local_90 = dVar21 + dVar23;
  local_88 = dVar23 + dVar24;
  local_a0._s_0.Y = dVar24 - dVar23;
  local_a0._s_0.X = dVar21 - dVar23;
  if ((this->QuadTree).bInternal != false) {
    dVar21 = (this->QuadTree).Position.field0_0x0._s_0.X;
    dVar24 = (this->QuadTree).Position.field0_0x0._s_0.Y;
    uVar15 = uVar17;
    if ((local_a0._s_0.X <= dVar21) && (uVar15 = 0, local_a0._s_0.Y <= dVar24)) {
      local_78[0] = (this->QuadTree).SubTrees[2];
      uVar15 = 1;
    }
    uVar16 = uVar15;
    if ((dVar21 <= local_90) && (local_a0._s_0.Y <= dVar24)) {
      uVar16 = (ulonglong)((int)uVar15 + 1);
      local_78[uVar15] = (this->QuadTree).SubTrees[3];
    }
    uVar15 = uVar16;
    if ((local_a0._s_0.X <= dVar21) && (dVar24 <= local_88)) {
      uVar15 = (ulonglong)((int)uVar16 + 1);
      local_78[uVar16] = (this->QuadTree).SubTrees[0];
    }
    uVar14 = (uint)uVar15;
    if ((dVar21 <= local_90) && (dVar24 <= local_88)) {
      uVar14 = uVar14 + 1;
      local_78[uVar15] = (this->QuadTree).SubTrees[1];
    }
  }
  TQuadTree<FProceduralFoliageInstance_*,4>::GetIntersectingElements<TSizedDefaultAllocator<32>_>
            (&this->QuadTree,(TBox2<double> *)&local_a0._s_0,&local_c0);
  if (uVar14 != 0) {
    do {
      TQuadTree<FProceduralFoliageInstance_*,4>::GetElements<TSizedDefaultAllocator<32>_>
                (local_78[uVar17],(TBox2<double> *)&local_a0._s_0,&local_c0);
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)(ulonglong)uVar14);
  }
  uVar14 = local_c0.ArrayNum + param_2->ArrayNum;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar14,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  uVar17 = (ulonglong)local_c0.ArrayNum;
  local_b0 = local_c0.ArrayNum;
  pFVar18 = local_c0.AllocatorInstance.Data + uVar17 * 8;
  FVar19.Data = local_c0.AllocatorInstance.Data;
  local_a8 = pFVar18;
  do {
    if (local_c0.ArrayNum != (int)uVar17) {
      local_c8[0] = 0;
      `TCheckedPointerIterator<FProceduralFoliageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_c8);
    }
    if (FVar19.Data == pFVar18) {
      iVar6 = param_2->ArrayNum;
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      return 0 < iVar6;
    }
    pFVar8 = *(FProceduralFoliageInstance **)FVar19.Data;
    if (pFVar8 != param_1) {
      dVar21 = (param_1->Location).field0_0x0._s_0.X - (pFVar8->Location).field0_0x0._s_0.X;
      pUVar7 = (pFVar8->Type).field0_0x0.DebugPtr;
      dVar24 = (param_1->Location).field0_0x0._s_0.Y - (pFVar8->Location).field0_0x0._s_0.Y;
      dVar21 = dVar24 * dVar24 + dVar21 * dVar21;
      fVar20 = pFVar8->Scale * pUVar7->CollisionRadius + fVar3 * fVar5;
      fVar22 = pFVar8->Scale * pUVar7->ShadeRadius + fVar3 * fVar4;
      bVar9 = dVar21 <= (double)(fVar20 * fVar20);
      if ((bVar9) || (dVar21 <= (double)(fVar22 * fVar22))) {
        uVar14 = param_2->ArrayNum;
        if (uVar14 == *piVar1) {
          uVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = uVar14 + 1;
        uVar13 = 0;
        if ((int)uVar14 < (int)(uVar14 + 1)) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x18;
        pFVar18 = local_a8;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          *(FProceduralFoliageInstance **)pFVar2 = param_1;
          *(uint *)(pFVar2 + 0x10) = bVar9 ^ 1;
          *(FProceduralFoliageInstance **)(pFVar2 + 8) = pFVar8;
        }
      }
    }
    uVar17 = (ulonglong)local_b0;
    FVar19.Data = FVar19.Data + 8;
  } while( true );
}

// Insert @ 145ee6e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FProceduralFoliageBroadphase::Insert
          (FProceduralFoliageBroadphase *this,FProceduralFoliageInstance *param_1)

{
  double dVar1;
  UFoliageType *pUVar2;
  float fVar3;
  float fVar4;
  FProceduralFoliageInstance *local_res10 [3];
  TVector2<double>_u_0 local_38;
  double local_28;
  double local_20;
  undefined1 local_18;
  
  pUVar2 = (param_1->Type).field0_0x0.DebugPtr;
  local_28 = (param_1->Location).field0_0x0._s_0.X;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  fVar3 = param_1->Scale * pUVar2->ShadeRadius;
  fVar4 = param_1->Scale * pUVar2->CollisionRadius;
  local_18 = 1;
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  local_20 = (double)fVar3;
  local_38._s_0.X = local_28 - local_20;
  local_38._s_0.Y = dVar1 - local_20;
  local_28 = local_20 + local_28;
  local_20 = local_20 + dVar1;
  local_res10[0] = param_1;
  TQuadTree<FProceduralFoliageInstance_*,4>::Insert
            (&this->QuadTree,local_res10,(TBox2<double> *)&local_38._s_0,(wchar_t *)0x0);
  return;
}

// Remove @ 145eea070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FProceduralFoliageBroadphase::Remove
          (FProceduralFoliageBroadphase *this,FProceduralFoliageInstance *param_1)

{
  double dVar1;
  double dVar2;
  UFoliageType *pUVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  FProceduralFoliageInstance *local_68;
  TQuadTree<FProceduralFoliageInstance_*,4> *local_60 [4];
  TVector2<double>_u_0 local_40;
  double local_30;
  double local_28;
  undefined1 local_20;
  
  uVar6 = 0;
  pUVar3 = (param_1->Type).field0_0x0.DebugPtr;
  dVar1 = (param_1->Location).field0_0x0._s_0.X;
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  fVar8 = param_1->Scale * pUVar3->ShadeRadius;
  fVar9 = param_1->Scale * pUVar3->CollisionRadius;
  local_20 = 1;
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  dVar10 = (double)fVar8;
  local_30 = dVar10 + dVar1;
  local_28 = dVar10 + dVar2;
  local_40._s_0.X = dVar1 - dVar10;
  local_40._s_0.Y = dVar2 - dVar10;
  uVar7 = uVar6;
  if ((this->QuadTree).bInternal != false) {
    dVar1 = (this->QuadTree).Position.field0_0x0._s_0.X;
    dVar2 = (this->QuadTree).Position.field0_0x0._s_0.Y;
    if ((local_40._s_0.X <= dVar1) && (uVar7 = 0, local_40._s_0.Y <= dVar2)) {
      local_60[0] = (this->QuadTree).SubTrees[2];
      uVar7 = 1;
    }
    if ((dVar1 <= local_30) && (local_40._s_0.Y <= dVar2)) {
      local_60[uVar7] = (this->QuadTree).SubTrees[3];
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    if ((local_40._s_0.X <= dVar1) && (dVar2 <= local_28)) {
      local_60[uVar7] = (this->QuadTree).SubTrees[0];
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    if ((dVar1 <= local_30) && (dVar2 <= local_28)) {
      local_60[uVar7] = (this->QuadTree).SubTrees[1];
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
  }
  local_68 = param_1;
  bVar5 = TQuadTree<FProceduralFoliageInstance_*,4>::RemoveNodeForElement(&this->QuadTree,&local_68)
  ;
  if (uVar7 != 0) {
    do {
      if (bVar5 != false) {
        return;
      }
      bVar5 = TQuadTree<FProceduralFoliageInstance_*,4>::Remove
                        (local_60[uVar6],&local_68,(TBox2<double> *)&local_40._s_0);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)uVar7);
  }
  if ((bVar5 == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRemoved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\ProceduralFoliageBroadphase.cpp"
                         ,0x55,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// TestAgainstAABB @ 145eed560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FProceduralFoliageBroadphase::TestAgainstAABB
          (FProceduralFoliageBroadphase *this,FProceduralFoliageInstance *param_1)

{
  TVector2<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  UFoliageType *pUVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pUVar5 = (param_1->Type).field0_0x0.DebugPtr;
  dVar3 = (param_1->Location).field0_0x0._s_0.X;
  dVar4 = (param_1->Location).field0_0x0._s_0.Y;
  fVar6 = param_1->Scale * pUVar5->ShadeRadius;
  fVar7 = param_1->Scale * pUVar5->CollisionRadius;
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  dVar8 = (double)fVar6;
  dVar9 = dVar3 - dVar8;
  dVar10 = dVar4 - dVar8;
  pTVar1 = &(this->QuadTree).TreeBox.Max;
  if ((((dVar9 < (pTVar1->field0_0x0)._s_0.X || dVar9 == (pTVar1->field0_0x0)._s_0.X) &&
       ((this->QuadTree).TreeBox.Min.field0_0x0._s_0.X <= dVar8 + dVar3)) &&
      (pdVar2 = &(this->QuadTree).TreeBox.Max.field0_0x0._s_0.Y,
      dVar10 < *pdVar2 || dVar10 == *pdVar2)) &&
     ((this->QuadTree).TreeBox.Min.field0_0x0._s_0.Y <= dVar8 + dVar4)) {
    return true;
  }
  return false;
}

