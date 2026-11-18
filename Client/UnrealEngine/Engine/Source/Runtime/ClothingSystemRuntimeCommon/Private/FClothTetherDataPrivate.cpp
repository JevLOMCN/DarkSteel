// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 12

// FClothTetherDataPrivate @ 148c19190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FClothTetherDataPrivate * __thiscall
FClothTetherDataPrivate::FClothTetherDataPrivate
          (FClothTetherDataPrivate *this,
          TArray<TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  <lambda_1> local_res8;
  FClothTetherDataPrivate *local_38;
  TArray<TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_30;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FClothTetherDataPrivate **local_10;
  
  *(undefined8 *)&this->NodeToNeighbors = 0;
  *(undefined8 *)&(this->NodeToNeighbors).field_0x8 = 0;
  *(undefined8 *)&(this->NodeToNeighbors).field_0x20 = 0;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x28 = 0;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x34 = 0;
  *(undefined8 *)&(this->NodeToNeighbors).field_0x40 = 0;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x48 = 0;
  (this->AllDynamicNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllDynamicNodes).ArrayNum = 0;
  (this->AllDynamicNodes).ArrayMax = 0;
  (this->DynamicTetherNodesDynamicIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicTetherNodesDynamicIndex).ArrayNum = 0;
  (this->DynamicTetherNodesDynamicIndex).ArrayMax = 0;
  (this->KinematicTetherNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KinematicTetherNodes).ArrayNum = 0;
  (this->KinematicTetherNodes).ArrayMax = 0;
  (this->KinematicNodeIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KinematicNodeIslands).ArrayNum = 0;
  (this->KinematicNodeIslands).ArrayMax = 0;
  (this->TetherNums).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TetherNums).ArrayNum = 0;
  (this->TetherNums).ArrayMax = 0;
  (this->TetherSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TetherSlots).ArrayNum = 0;
  (this->TetherSlots).ArrayMax = 0;
  TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  SetNum(&this->TetherSlots,param_1->ArrayNum,Default);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FClothTetherDataPrivate::FClothTetherDataPrivate'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_38;
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_38 = this;
  local_30 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_18,
             local_res8,None,&local_28);
  UpdateCounts(this);
  return this;
}

// FClothTetherDataPrivate @ 148c192a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FClothTetherDataPrivate * __thiscall
FClothTetherDataPrivate::FClothTetherDataPrivate
          (FClothTetherDataPrivate *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,TFunctionRef<bool___cdecl(int)> *param_3,
          TFunctionRef<bool___cdecl(int)> *param_4,TFunctionRef<bool___cdecl(int)> *param_5,
          bool param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  FClothTetherDataPrivate *pFVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  bool *pbVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  uint *puVar22;
  <lambda_1> local_res10;
  undefined4 local_148;
  undefined1 local_144;
  undefined1 local_143 [3];
  uint local_140;
  uint local_13c;
  uint local_138;
  int local_134;
  TArray<int,TSizedDefaultAllocator<32>_> *local_130;
  undefined4 local_128 [2];
  undefined4 local_120 [2];
  undefined4 local_118 [2];
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  undefined1 local_100 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  int local_e8;
  uint uStack_e4;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8 [2];
  int *local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  FClothTetherDataPrivate *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98;
  FClothTetherDataPrivate *local_78;
  TArrayView<UE::Math::TVector<float>_const_,int> *local_70;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FClothTetherDataPrivate **local_50;
  TFunctionRef<bool___cdecl(int)> local_48;
  
  local_130 = &this->AllDynamicNodes;
  *(undefined8 *)&this->NodeToNeighbors = 0;
  local_a8 = &this->DynamicTetherNodesDynamicIndex;
  *(undefined8 *)&(this->NodeToNeighbors).field_0x8 = 0;
  pTVar1 = &this->KinematicTetherNodes;
  *(undefined8 *)&(this->NodeToNeighbors).field_0x20 = 0;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x28 = 0;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x34 = 0;
  *(undefined8 *)&(this->NodeToNeighbors).field_0x40 = 0;
  *(undefined4 *)&(this->NodeToNeighbors).field_0x48 = 0;
  (local_130->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllDynamicNodes).ArrayNum = 0;
  local_b0 = &(this->AllDynamicNodes).ArrayMax;
  (local_a8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DynamicTetherNodesDynamicIndex).ArrayNum = 0;
  (this->DynamicTetherNodesDynamicIndex).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_b0 = 0;
  (this->KinematicTetherNodes).ArrayNum = 0;
  (this->KinematicTetherNodes).ArrayMax = 0;
  (this->KinematicNodeIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KinematicNodeIslands).ArrayNum = 0;
  (this->KinematicNodeIslands).ArrayMax = 0;
  (this->TetherSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TetherSlots).ArrayNum = 0;
  (this->TetherSlots).ArrayMax = 0;
  (this->TetherNums).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TetherNums).ArrayNum = 0;
  (this->TetherNums).ArrayMax = 0;
  uVar15 = param_1->ArrayNum;
  if (uVar15 <= (uint)(*(int *)&(this->NodeToNeighbors).field_0x8 -
                      *(int *)&(this->NodeToNeighbors).field_0x34)) goto LAB_148c1957c;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar15);
  if (uVar15 < 4) {
    uVar15 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_c8 = (undefined4)lVar14;
    uVar15 = 1 << ((byte)lVar14 & 0x1f);
  }
  iVar12 = *(int *)&(this->NodeToNeighbors).field_0x48;
  if ((iVar12 != 0) && ((int)uVar15 <= iVar12)) goto LAB_148c1957c;
  *(uint *)&(this->NodeToNeighbors).field_0x48 = uVar15;
  if (*(longlong *)&(this->NodeToNeighbors).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->NodeToNeighbors).field_0x40,0,0,4);
  }
  if (uVar15 != 0) {
    uVar6 = uVar15;
    if (uVar15 < 2) {
      if (*(longlong *)&(this->NodeToNeighbors).field_0x40 != 0) {
        uVar6 = 0;
        goto LAB_148c193e9;
      }
    }
    else {
LAB_148c193e9:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->NodeToNeighbors).field_0x40,0,uVar6,4);
    }
    if (0 < (int)uVar15) {
      uVar13 = 0;
      uVar21 = (ulonglong)uVar15;
      do {
        puVar2 = *(undefined1 **)&(this->NodeToNeighbors).field_0x40;
        puVar11 = &(this->NodeToNeighbors).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        uVar8 = (longlong)(int)uVar15 - 1U & uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(puVar11 + uVar8 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (*(int *)&(this->NodeToNeighbors).field_0x48 != 0) {
    iVar12 = *(int *)&(this->NodeToNeighbors).field_0x28;
    puStack_e0 = &(this->NodeToNeighbors).field_0x10;
    uStack_e4 = 1;
    local_e8 = 0;
    iStack_d4 = 0;
    iStack_d0 = 0;
    if (iVar12 != 0) {
      puVar22 = *(uint **)&(this->NodeToNeighbors).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puStack_e0;
      }
      uVar15 = *puVar22;
      iStack_d0 = 0;
      local_e8 = 0;
      while (uVar15 == 0) {
        iStack_d0 = iStack_d0 + 0x20;
        lVar14 = (longlong)local_e8;
        local_e8 = local_e8 + 1;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < local_e8) goto LAB_148c194df;
        uVar15 = puVar22[lVar14 + 1];
      }
      uStack_e4 = -uVar15 & uVar15;
      uVar13 = (ulonglong)uStack_e4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_c4 = (int)lVar14;
      iStack_d4 = local_c4 + -1 + iStack_d0;
      if (iVar12 < iStack_d4) {
LAB_148c194df:
        iStack_d4 = iVar12;
      }
    }
    local_d8 = 0xffffffff;
    local_98._padding_ = CONCAT44(uStack_e4,local_e8);
    local_98.CurrentBitIndex = iStack_d4;
    local_98.UnvisitedBitMask = 0xffffffff;
    local_98._28_4_ = uStack_cc;
    local_98.BaseBitIndex = iStack_d0;
    iVar7 = iStack_d4;
    local_a0 = this;
    local_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_e0;
    if (iStack_d4 < iVar12) {
      do {
        puVar22 = (uint *)((longlong)iVar7 * 0x60 + *(longlong *)&local_a0->NodeToNeighbors);
        uVar15 = *(int *)&(this->NodeToNeighbors).field_0x48 - 1U & *puVar22;
        puVar22[0x17] = uVar15;
        puVar2 = *(undefined1 **)&(this->NodeToNeighbors).field_0x40;
        puVar11 = &(this->NodeToNeighbors).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        uVar13 = (longlong)*(int *)&(this->NodeToNeighbors).field_0x48 - 1U & (longlong)(int)uVar15;
        puVar22[0x16] = *(uint *)(puVar11 + uVar13 * 4);
        *(int *)(puVar11 + uVar13 * 4) = iVar7;
        local_98.UnvisitedBitMask = local_98.UnvisitedBitMask & ~local_98._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_98);
        iVar7 = local_98.CurrentBitIndex;
      } while (local_98.CurrentBitIndex < (local_98.Array)->NumBits);
    }
  }
LAB_148c1957c:
  iVar12 = param_2->ArrayNum;
  if (0 < iVar12) {
    lVar14 = 8;
    uVar15 = 2;
    do {
      uVar6 = 0;
      if ((int)(uVar15 - 2) < iVar12) {
        uVar6 = ~(uVar15 - 2) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FClothTetherDataPrivate *)(*pcVar3)();
        return pFVar9;
      }
      local_13c = *(uint *)((longlong)param_2->DataPtr + lVar14 + -8);
      uVar6 = 0;
      if ((int)(uVar15 - 1) < param_2->ArrayNum) {
        uVar6 = ~(uVar15 - 1) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FClothTetherDataPrivate *)(*pcVar3)();
        return pFVar9;
      }
      local_138 = *(uint *)((longlong)param_2->DataPtr + lVar14 + -4);
      uVar6 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar6 = ~uVar15 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FClothTetherDataPrivate *)(*pcVar3)();
        return pFVar9;
      }
      local_140 = *(uint *)(lVar14 + (longlong)param_2->DataPtr);
      pTVar10 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<int_const_&>
                          ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                            *)this,local_13c,(int *)&local_13c);
      local_110 = local_138;
      local_10c = local_140;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
                (pTVar10,(*(int *)&(pTVar10->Elements).field_0x8 -
                         *(int *)&(pTVar10->Elements).field_0x34) + 2);
      pbVar16 = (bool *)&local_110;
      do {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar10,&local_c0,pbVar16);
        pbVar16 = pbVar16 + 4;
      } while (pbVar16 != (bool *)&local_108);
      pTVar10 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<int_const_&>
                          ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                            *)this,local_138,(int *)&local_138);
      local_108 = local_13c;
      local_104 = local_140;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
                (pTVar10,(*(int *)&(pTVar10->Elements).field_0x8 -
                         *(int *)&(pTVar10->Elements).field_0x34) + 2);
      pbVar16 = (bool *)&local_108;
      do {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar10,&local_bc,pbVar16);
        pbVar16 = pbVar16 + 4;
      } while (pbVar16 != (bool *)local_100);
      pTVar10 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<int_const_&>
                          ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                            *)this,local_140,(int *)&local_140);
      local_100._0_4_ = local_13c;
      local_100._4_4_ = local_138;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
                (pTVar10,(*(int *)&(pTVar10->Elements).field_0x8 -
                         *(int *)&(pTVar10->Elements).field_0x34) + 2);
      pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_100;
      do {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar10,local_b8,(bool *)pTVar17);
        pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  ((longlong)&(pTVar17->AllocatorInstance).Data + 4);
      } while (pTVar17 != &local_f8);
      iVar12 = param_2->ArrayNum;
      lVar14 = lVar14 + 0xc;
      iVar7 = uVar15 + 1;
      uVar15 = uVar15 + 3;
    } while (iVar7 < iVar12);
  }
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
              *)this,&local_f8);
  uVar15 = param_1->ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*local_b0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&(this->AllDynamicNodes).AllocatorInstance,
               (this->AllDynamicNodes).ArrayNum,local_b0);
  }
  uVar15 = param_1->ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if ((this->DynamicTetherNodesDynamicIndex).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&(this->DynamicTetherNodesDynamicIndex).AllocatorInstance,
               (this->DynamicTetherNodesDynamicIndex).ArrayNum,
               &(this->DynamicTetherNodesDynamicIndex).ArrayMax);
  }
  uVar15 = param_1->ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if ((this->KinematicTetherNodes).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&pTVar1->AllocatorInstance,(this->KinematicTetherNodes).ArrayNum,
               &(this->KinematicTetherNodes).ArrayMax);
  }
  pTVar17 = local_a8;
  iVar12 = local_f8.ArrayNum;
  uVar13 = (ulonglong)local_f8.ArrayNum;
  pFVar19 = local_f8.AllocatorInstance.Data + uVar13 * 4;
  FVar18.Data = local_f8.AllocatorInstance.Data;
LAB_148c198b7:
  do {
    if ((int)uVar13 != iVar12) {
      local_144 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_144);
    }
    if (FVar18.Data == pFVar19) {
      if ((this->KinematicTetherNodes).ArrayNum != 0) {
        ComputeKinematicNodeIslands(this);
        TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::SetNum(&this->TetherSlots,(this->DynamicTetherNodesDynamicIndex).ArrayNum,Default);
        iVar12 = (this->TetherSlots).ArrayNum;
        pFVar19 = (this->TetherSlots).AllocatorInstance.Data;
        pFVar20 = pFVar19 + (longlong)iVar12 * 0x10;
        while( true ) {
          if ((this->TetherSlots).ArrayNum != iVar12) {
            local_143[0] = 0;
            `TCheckedPointerIterator<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_143);
          }
          if (pFVar19 == pFVar20) break;
          if (*(int *)(pFVar19 + 0xc) < 4) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,4,(ForAnyElementType *)pFVar19,*(int *)&pFVar19[8].field_0x0,
                       (int *)(pFVar19 + 0xc));
          }
          pFVar19 = pFVar19 + 0x10;
        }
        if (param_6) {
          local_48._0_8_ = *(undefined8 *)param_3;
          local_48._8_8_ = *(undefined8 *)&param_3->field_0x8;
          GenerateGeodesicTethers(this,param_1,&local_48);
        }
        else {
          if (((this->KinematicNodeIslands).ArrayNum == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("KinematicNodeIslands.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                                 ,0x1a5,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FClothTetherDataPrivate *)(*pcVar3)();
            return pFVar9;
          }
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FClothTetherDataPrivate::GenerateEuclideanTethers'::__l2::<lambda_1>,void,int>
                     ::Call;
          local_50 = &local_78;
          local_68.DataPtr = (void **)0x0;
          local_res10 = SUB81(param_1,0);
          local_68.ArrayNum = 0;
          local_78 = this;
          local_70 = param_1;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",(this->DynamicTetherNodesDynamicIndex).ArrayNum,1,
                     (TFunctionRef<void___cdecl(int)> *)&local_58,local_res10,None,&local_68);
        }
        UpdateCounts(this);
      }
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      return this;
    }
    local_148 = *(undefined4 *)FVar18.Data;
    local_128[0] = local_148;
    cVar5 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_128);
    if (cVar5 == '\0') {
      pFVar20 = (local_130->AllocatorInstance).Data;
      if (((pFVar20 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 < pFVar20 + (longlong)local_130->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FClothTetherDataPrivate *)(*pcVar3)();
        return pFVar9;
      }
      iVar7 = local_130->ArrayNum;
      if (iVar7 == local_130->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_130->AllocatorInstance,&local_130->ArrayMax);
      }
      pFVar20 = (local_130->AllocatorInstance).Data;
      local_130->ArrayNum = iVar7 + 1;
      *(undefined4 *)(pFVar20 + (longlong)iVar7 * 4) = local_148;
      local_120[0] = local_148;
      local_134 = iVar7;
      cVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_120);
      if (cVar5 != '\0') {
        pFVar20 = (pTVar17->AllocatorInstance).Data;
        if (((pFVar20 <= (FScriptContainerElement *)&local_134) &&
            ((FScriptContainerElement *)&local_134 < pFVar20 + (longlong)pTVar17->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FClothTetherDataPrivate *)(*pcVar3)();
          return pFVar9;
        }
        iVar7 = pTVar17->ArrayNum;
        if (iVar7 == pTVar17->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
        }
        FVar18.Data = FVar18.Data + 4;
        pTVar17->ArrayNum = iVar7 + 1;
        *(int *)((pTVar17->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_134;
        uVar13 = local_f8._8_8_ & 0xffffffff;
        goto LAB_148c198b7;
      }
    }
    else {
      local_118[0] = local_148;
      cVar5 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_118);
      if (cVar5 != '\0') {
        pFVar20 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar20 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar20 + (longlong)(this->KinematicTetherNodes).ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FClothTetherDataPrivate *)(*pcVar3)();
          return pFVar9;
        }
        iVar7 = (this->KinematicTetherNodes).ArrayNum;
        if (iVar7 == (this->KinematicTetherNodes).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar1->AllocatorInstance,&(this->KinematicTetherNodes).ArrayMax
                            );
        }
        (this->KinematicTetherNodes).ArrayNum = iVar7 + 1;
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_148;
      }
    }
    uVar13 = local_f8._8_8_ & 0xffffffff;
    FVar18.Data = FVar18.Data + 4;
  } while( true );
}

// ~FClothTetherDataPrivate @ 148c1a970

void __thiscall FClothTetherDataPrivate::~FClothTetherDataPrivate(FClothTetherDataPrivate *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->TetherNums).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
             (this->TetherSlots).AllocatorInstance.Data,(this->TetherSlots).ArrayNum);
  pFVar1 = (this->TetherSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->KinematicNodeIslands).AllocatorInstance.Data,
             (this->KinematicNodeIslands).ArrayNum);
  pFVar1 = (this->KinematicNodeIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KinematicTetherNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicTetherNodesDynamicIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllDynamicNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NodeToNeighbors).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NodeToNeighbors).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 148c1b5c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FClothTetherDataPrivate::FClothTetherDataPrivate'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType *pFVar14;
  uint uVar15;
  TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_> *this_00;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined4 local_58;
  
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = uVar15;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar12 = (longlong)param_1 * 0x10;
  this_00 = (TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_> *)(*plVar4 + lVar12);
  local_res20 = lVar12;
  if (4 < this_00->ArrayNum) {
    AlgoImpl::
    IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,TLess<void>_>_>
              ((TTuple<float,int> *)(this_00->AllocatorInstance).Data,this_00->ArrayNum,
               local_res10[0],(TLess<void> *)local_res18);
    TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_>::SetNum(this_00,4,No);
  }
  lVar5 = *(longlong *)this;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar5 + 0x98)) {
    uVar10 = uVar15;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar10 = this_00->ArrayNum;
  pFVar14 = (ForAnyElementType *)(*(longlong *)(lVar5 + 0x90) + lVar12);
  if (-1 < (int)uVar10) {
    piVar1 = (int *)((longlong)&pFVar14[1].Data + 4);
    if (*piVar1 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar10,pFVar14,*(int *)&pFVar14[1].Data,piVar1);
    }
    pFVar13 = (this_00->AllocatorInstance).Data;
    iVar3 = this_00->ArrayNum;
    pFVar2 = pFVar13 + (longlong)iVar3 * 8;
    while( true ) {
      if (this_00->ArrayNum != iVar3) {
        local_res10[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<TTuple<float,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar13 == pFVar2) break;
      uVar6 = *(undefined8 *)pFVar13;
      lVar12 = *(longlong *)this;
      uVar10 = 0;
      if (param_1 < *(int *)(lVar12 + 0x98)) {
        uVar10 = uVar15;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar14 = (ForAnyElementType *)(local_res20 + *(longlong *)(lVar12 + 0x90));
      iVar11 = *(int *)&pFVar14[1].Data;
      piVar1 = (int *)((longlong)&pFVar14[1].Data + 4);
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar14,piVar1);
      }
      local_58 = (undefined4)uVar6;
      *(int *)&pFVar14[1].Data = iVar11 + 1;
      pFVar13 = pFVar13 + 8;
      lVar12 = (longlong)iVar11;
      pFVar7 = pFVar14->Data;
      *(int *)(pFVar7 + lVar12 * 0xc) = (int)((ulonglong)uVar6 >> 0x20);
      *(int *)(pFVar7 + lVar12 * 0xc + 4) = param_1;
      *(undefined4 *)(pFVar7 + lVar12 * 0xc + 8) = local_58;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
}

// operator() @ 148c1b8a0

void __thiscall
`FClothTetherDataPrivate::GenerateEuclideanTethers'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  TTuple<float,int> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  TTuple<float,int> TVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  uint *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint *puVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  ForAnyElementType *pFVar23;
  undefined8 *puVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  FIdentityFunctor local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined1 local_9c [4];
  uint local_98;
  uint local_94;
  uint local_90;
  longlong local_88;
  TTuple<float,int> local_80;
  uint *local_78;
  undefined8 *local_70;
  
  lVar19 = *(longlong *)this;
  lVar25 = (longlong)param_1;
  local_94 = (uint)~param_1 >> 0x1f;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar19 + 0x68)) {
    uVar12 = local_94;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = *(uint *)(*(longlong *)(lVar19 + 0x60) + lVar25 * 4);
  uVar13 = 0;
  if ((int)uVar12 < *(int *)(lVar19 + 0x58)) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  local_88 = lVar25;
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar17 = 0;
  local_a0 = *(uint *)(*(longlong *)(lVar19 + 0x50) + (longlong)(int)uVar12 * 4);
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  uVar12 = *(uint *)(*(longlong *)this + 0x88);
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&local_b0,0,(int *)((longlong)&local_a8 + 4));
    uVar17 = local_a8 & 0xffffffff;
  }
  fVar8 = __real_7f7fffff;
  local_80 = *(TTuple<float,int> *)this;
  local_90 = *(uint *)((longlong)local_80 + 0x88);
  uVar22 = (ulonglong)(int)local_90;
  puVar24 = *(undefined8 **)((longlong)local_80 + 0x80);
  local_70 = puVar24 + uVar22 * 2;
  while( true ) {
    puVar10 = local_70;
    if (*(int *)((longlong)local_80 + 0x88) != (int)uVar22) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
      uVar17 = local_a8 & 0xffffffff;
    }
    if (puVar24 == puVar10) break;
    if ((*(int *)(puVar24 + 1) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("KinematicNodeIsland.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                            ,0x1b2,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar20 = (uint *)*puVar24;
    iVar14 = *(int *)(puVar24 + 1);
    local_98 = 0x7fffffff;
    local_78 = puVar20 + iVar14;
    fVar26 = fVar8;
    uVar12 = local_98;
    while( true ) {
      local_98 = uVar12;
      fVar29 = fVar26;
      puVar9 = local_78;
      uVar12 = local_98;
      if (*(int *)(puVar24 + 1) != iVar14) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar20 == puVar9) break;
      uVar12 = *puVar20;
      lVar19 = (longlong)(int)uVar12;
      plVar3 = *(longlong **)((longlong)this + 8);
      uVar13 = 0;
      if ((int)uVar12 < (int)plVar3[1]) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar25 = *plVar3;
      plVar3 = *(longlong **)((longlong)this + 8);
      uVar13 = 0;
      if ((int)local_a0 < (int)plVar3[1]) {
        uVar13 = ~local_a0 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar20 = puVar20 + 1;
      lVar16 = (longlong)(int)local_a0;
      lVar4 = *plVar3;
      fVar28 = *(float *)(lVar25 + 4 + lVar19 * 0xc) - *(float *)(lVar4 + 4 + lVar16 * 0xc);
      fVar27 = *(float *)(lVar25 + lVar19 * 0xc) - *(float *)(lVar4 + lVar16 * 0xc);
      fVar26 = *(float *)(lVar25 + 8 + lVar19 * 0xc) - *(float *)(lVar4 + 8 + lVar16 * 0xc);
      fVar26 = fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26;
      if (fVar29 <= fVar26) {
        fVar26 = fVar29;
        uVar12 = local_98;
      }
    }
    if ((uVar12 == 0x7fffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClosestKinematicNode != TNumericLimits<int32>::Max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                            ,0x1bf,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar14 = (int)local_a8;
    if ((int)local_a8 == local_a8._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_b0,(int *)((longlong)&local_a8 + 4));
    }
    puVar24 = puVar24 + 2;
    uVar22 = (ulonglong)local_90;
    local_a8 = CONCAT44(local_a8._4_4_,iVar14 + 1U);
    *(float *)(local_b0.Data + (longlong)iVar14 * 8) = SQRT(fVar29);
    *(uint *)(local_b0.Data + (longlong)iVar14 * 8 + 4) = uVar12;
    uVar17 = (ulonglong)(iVar14 + 1U);
  }
  if (4 < (int)uVar17) {
    local_res10 = SUB41(param_1,0);
    AlgoImpl::
    IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,TLess<void>_>_>
              ((TTuple<float,int> *)local_b0.Data,(int)uVar17,local_res10,(TLess<void> *)local_9c);
    uVar17 = local_a8 & 0xffffffff;
    if ((int)local_a8 < 4) {
      iVar18 = 4 - (int)local_a8;
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,4,iVar18,&local_b0,(int *)&local_a8,(int *)((longlong)&local_a8 + 4));
      DefaultConstructItems<TTuple<float,int>,int>(local_b0.Data + (longlong)iVar14 * 8,iVar18);
      uVar17 = local_a8 & 0xffffffff;
    }
    else if (4 < (int)local_a8) {
      iVar14 = (int)local_a8 + -4;
      if (iVar14 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else if (iVar14 == 0) goto LAB_148c1bd13;
      iVar15 = ((int)local_a8 - iVar14) + -4;
      iVar18 = (int)local_a8;
      if (iVar15 != 0) {
        memmove((TTuple<float,int> *)(local_b0.Data + 0x20),
                (TTuple<float,int> *)(local_b0.Data + 0x20) + iVar14,(longlong)iVar15 << 3);
        iVar18 = (int)local_a8;
      }
      uVar17 = (ulonglong)(uint)(iVar18 - iVar14);
      local_a8 = CONCAT44(local_a8._4_4_,iVar18 - iVar14);
    }
  }
LAB_148c1bd13:
  lVar25 = local_88;
  lVar19 = *(longlong *)this;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar19 + 0x98)) {
    uVar12 = local_94;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar17 = local_a8 & 0xffffffff;
  }
  pFVar23 = (ForAnyElementType *)(*(longlong *)(lVar19 + 0x90) + lVar25 * 0x10);
  iVar14 = (int)uVar17;
  if (-1 < iVar14) {
    if (*(int *)((longlong)&pFVar23[1].Data + 4) < iVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar14,pFVar23,*(int *)&pFVar23[1].Data,
                 (int *)((longlong)&pFVar23[1].Data + 4));
      uVar17 = local_a8 & 0xffffffff;
    }
    uVar12 = local_a0;
    iVar14 = (int)uVar17;
    pTVar2 = (TTuple<float,int> *)(local_b0.Data + (longlong)iVar14 * 8);
    FVar21.Data = local_b0.Data;
    while( true ) {
      if ((int)uVar17 != iVar14) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<TTuple<float,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_b8);
      }
      if ((TTuple<float,int> *)FVar21.Data == pTVar2) break;
      TVar5 = *(TTuple<float,int> *)FVar21.Data;
      lVar19 = *(longlong *)this;
      uVar13 = 0;
      if (param_1 < *(int *)(lVar19 + 0x98)) {
        uVar13 = local_94;
      }
      local_80 = TVar5;
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar23 = (ForAnyElementType *)(*(longlong *)(lVar19 + 0x90) + lVar25 * 0x10);
      iVar18 = *(int *)&pFVar23[1].Data;
      piVar1 = (int *)((longlong)&pFVar23[1].Data + 4);
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar23,piVar1);
      }
      *(int *)&pFVar23[1].Data = iVar18 + 1;
      FVar21.Data = FVar21.Data + 8;
      lVar19 = (longlong)iVar18;
      pFVar6 = pFVar23->Data;
      *(int *)(pFVar6 + lVar19 * 0xc) = TVar5._4_4_;
      *(uint *)(pFVar6 + lVar19 * 0xc + 4) = uVar12;
      *(undefined4 *)(pFVar6 + lVar19 * 0xc + 8) = local_80._0_4_;
      uVar17 = local_a8 & 0xffffffff;
    }
    if ((TTuple<float,int> *)local_b0.Data != (TTuple<float,int> *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar17);
}

// operator() @ 148c1bec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  <lambda_1> this_00;
  ForAnyElementType FVar9;
  undefined8 *puVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_01;
  float *pfVar15;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar16;
  longlong lVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  ulonglong uVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_1c8 [32];
  FIdentityFunctor local_178 [4];
  uint local_174;
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  FIdentityFunctor local_160 [4];
  uint local_15c;
  uint local_158;
  <lambda_1> local_150;
  uint local_148 [2];
  undefined8 *local_140;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *local_138;
  int local_130;
  int local_12c;
  TDereferenceWrapper<int,_public:___cdecl__private:_void___cdecl_FClothTetherDataPrivate::GenerateGeodesicTethers(TArrayView<UE::Math::TVector<float>_const_,int>_const_&,TFunctionRef<bool___cdecl(int)>)_::_2_::<lambda_1>::operator()(int)const_::_2_::<lambda_1>_>
  local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_120;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  ForElementType<unsigned_int> local_90;
  uint local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar19 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  local_140 = this;
  if ((uVar19 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_15c = *(uint *)(*plVar4 + (longlong)param_1 * 4);
  this_01 = TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
            ::FindChecked(*(TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
                            **)((longlong)this + 0x10),local_15c);
  local_78 = *(uint *)(*(longlong *)((longlong)this + 0x18) + 8);
  local_90.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_74 = 0x80;
  uVar19 = local_78 + 0x1f >> 5;
  local_138 = this_01;
  if (local_78 + 0x1f >> 5 != 0) {
    if (4 < uVar19) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_90,0,uVar19,4);
      local_74 = uVar19 << 5;
    }
    FVar18 = (ForElementType<unsigned_int>)&local_90;
    if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_90.SecondaryData;
    }
    memset((void *)FVar18,0,(ulonglong)uVar19 << 2);
    uVar19 = local_78 & 0x8000001f;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xffffffe0) + 1;
    }
    if (uVar19 != 0) {
      FVar18 = (ForElementType<unsigned_int>)&local_90;
      if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_90.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar18 +
                       (longlong)((int)(local_78 + ((int)local_78 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar19 & 0x1f);
    }
  }
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  local_150.SeedGeodesicDistances = this_01;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x200,&local_170.AllocatorInstance,0,&local_170.ArrayMax);
  AlgoImpl::
  HeapifyInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_>
            ((int *)local_170.AllocatorInstance.Data,local_170.ArrayNum,local_178[0],&local_150);
  uVar19 = local_15c;
  if ((((int)local_15c < 0) || ((int)local_78 <= (int)local_15c)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar18 = (ForElementType<unsigned_int>)&local_90;
  if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar18 = local_90.SecondaryData;
  }
  puVar1 = (uint *)((longlong)FVar18 +
                   (longlong)((int)(uVar19 + ((int)uVar19 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar19 & 0x1f);
  TArray<int,TSizedDefaultAllocator<32>_>::
  HeapPush<__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&local_170,(int *)&local_15c,&local_150);
  bVar11 = local_170.ArrayNum == 0;
  do {
    iVar13 = local_170.ArrayNum;
    if (bVar11 || local_170.ArrayNum < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = local_170.ArrayNum;
    }
    uVar19 = *(uint *)local_170.AllocatorInstance.Data;
    lVar27 = (longlong)(int)uVar19;
    if (iVar13 < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = local_170.ArrayNum;
    }
    iVar20 = iVar13 + -1;
    if (1 < iVar20) {
      iVar20 = 1;
    }
    if (iVar20 != 0) {
      memmove(local_170.AllocatorInstance.Data,
              local_170.AllocatorInstance.Data + (longlong)(iVar13 - iVar20) * 4,
              (longlong)iVar20 << 2);
      iVar13 = local_170.ArrayNum;
    }
    local_128.Predicate = &local_150;
    local_170.ArrayNum = iVar13 + -1;
    AlgoImpl::
    HeapSiftDown<int,int,FIdentityFunctor,TDereferenceWrapper<int,__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_>
              ((int *)local_170.AllocatorInstance.Data,0,iVar13 + -1,local_160,&local_128);
    if ((((int)uVar19 < 0) || ((int)local_78 <= (int)uVar19)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar18 = (ForElementType<unsigned_int>)&local_90;
    if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_90.SecondaryData;
    }
    uVar14 = uVar19;
    if ((int)uVar19 < 0) {
      uVar14 = uVar19 + 0x1f;
    }
    if (((*(uint *)((longlong)FVar18 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar19 & 0x1f) & 1) ==
         0) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("VisitedNodes[ParentNode]",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                                    ,0x234,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (uVar19 == local_15c) {
      fVar31 = 0.0;
    }
    else {
      pfVar15 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
                FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                             *)this_01,uVar19);
      fVar31 = *pfVar15;
    }
    pTVar16 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
              ::FindChecked(*(TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                              **)this,uVar19);
    iVar13 = *(int *)&(pTVar16->Elements).field_0x28;
    iStack_108 = 0;
    pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar16->Elements).field_0x10;
    local_f0 = 0;
    uStack_104 = 1;
    iStack_f4 = iStack_108;
    if (iVar13 != 0) {
      puVar1 = *(uint **)&(pTVar16->Elements).field_0x20;
      puVar24 = (uint *)pTVar26;
      if (puVar1 != (uint *)0x0) {
        puVar24 = puVar1;
      }
      uStack_104 = *puVar24;
      local_f0 = 0;
      iStack_108 = 0;
      while (uStack_104 == 0) {
        lVar17 = (longlong)iStack_108;
        local_f0 = local_f0 + 0x20;
        iStack_108 = iStack_108 + 1;
        uStack_104 = 1;
        iStack_f4 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108)
        goto LAB_148c1c30d;
        uStack_104 = puVar24[lVar17 + 1];
      }
      uStack_104 = -uStack_104 & uStack_104;
      uVar25 = (ulonglong)uStack_104 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_130 = (int)lVar17;
      iStack_f4 = local_130 + -1 + local_f0;
      if (iVar13 < iStack_f4) {
        iStack_f4 = iVar13;
      }
    }
LAB_148c1c30d:
    uVar14 = *(uint *)&(pTVar16->Elements).field_0x28;
    uStack_ec = local_94;
    iStack_e8 = *(int *)&(pTVar16->Elements).field_0x8 - *(int *)&(pTVar16->Elements).field_0x34;
    uVar21 = uVar14 & 0xffffffe0;
    TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
    uStack_f8 = 0xffffffff;
    TStack_d8.CurrentBitIndex = iStack_f4;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar14 >> 5;
    TStack_d8._28_4_ = local_94;
    TStack_d8.BaseBitIndex = local_f0;
    uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
    local_158 = uVar14;
    local_120 = pTVar16;
    local_118 = pTVar26;
    local_110 = pTVar16;
    local_100 = (undefined1 *)pTVar26;
    local_e0 = pTVar16;
    TStack_d8.Array = pTVar26;
    if ((((int)uVar14 < 0) || (iVar13 < (int)uVar14)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar2 = *(uint *)&(pTVar16->Elements).field_0x28;
    if (uVar14 != uVar2) {
      puVar5 = *(undefined1 **)&(pTVar16->Elements).field_0x20;
      puVar23 = (undefined1 *)pTVar26;
      if (puVar5 != (undefined1 *)0x0) {
        puVar23 = puVar5;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
      while (uVar14 == 0) {
        lVar17 = (longlong)iVar20;
        uVar21 = uVar21 + 0x20;
        iVar20 = iVar20 + 1;
        uVar14 = uVar2;
        local_158 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_148c1c430;
        uVar14 = *(uint *)(puVar23 + lVar17 * 4 + 4);
      }
      uVar25 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_12c = (int)lVar17;
      uVar14 = local_12c + -1 + uVar21;
      local_158 = uVar14;
      if ((int)uVar2 < (int)uVar14) {
        uVar14 = uVar2;
        local_158 = uVar2;
      }
    }
LAB_148c1c430:
    while( true ) {
      pTVar16 = local_e0;
      if (*(int *)&(local_e0->Elements).field_0x8 - *(int *)&(local_e0->Elements).field_0x34 !=
          (int)uStack_b8) {
        local_178[0] = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
      }
      if (((TStack_d8.CurrentBitIndex == uVar14) && (TStack_d8.Array == pTVar26)) &&
         (pTVar16 == local_120)) break;
      local_174 = *(uint *)(*(longlong *)&pTVar16->Elements +
                           (longlong)TStack_d8.CurrentBitIndex * 0xc);
      if ((local_174 == uVar19) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NeighborNode != ParentNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                              ,0x23b,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar10 = local_140;
      local_148[0] = local_174;
      cVar12 = (**(code **)local_140[4])(((undefined8 *)local_140[4])[1],local_148);
      if (cVar12 == '\0') {
        plVar4 = (longlong *)puVar10[3];
        lVar17 = (longlong)(int)local_174;
        uVar21 = 0;
        if ((int)local_174 < (int)plVar4[1]) {
          uVar21 = ~local_174 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *plVar4;
        plVar4 = (longlong *)local_140[3];
        uVar21 = 0;
        if ((int)uVar19 < (int)plVar4[1]) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *plVar4;
        fVar30 = *(float *)(lVar6 + 4 + lVar17 * 0xc) - *(float *)(lVar7 + 4 + lVar27 * 0xc);
        fVar29 = *(float *)(lVar6 + lVar17 * 0xc) - *(float *)(lVar7 + lVar27 * 0xc);
        fVar28 = *(float *)(lVar6 + 8 + lVar17 * 0xc) - *(float *)(lVar7 + 8 + lVar27 * 0xc);
        fVar28 = SQRT(fVar30 * fVar30 + fVar29 * fVar29 + fVar28 * fVar28) + fVar31;
        pfVar15 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                  ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                 *)local_138,local_174);
        uVar21 = local_174;
        if (fVar28 < *pfVar15) {
          *pfVar15 = fVar28;
          if ((((int)local_174 < 0) || ((int)local_78 <= (int)local_174)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar2 = local_174;
          FVar18 = (ForElementType<unsigned_int>)&local_90;
          if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_90.SecondaryData;
          }
          uVar22 = uVar21 & 0x1f;
          if ((int)uVar21 < 0) {
            uVar21 = uVar21 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar18 + (longlong)((int)uVar21 >> 5) * 4) >> uVar22 & 1) == 0) {
            if ((((int)local_174 < 0) || ((int)local_78 <= (int)local_174)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar18 = (ForElementType<unsigned_int>)&local_90;
            if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar18 = local_90.SecondaryData;
            }
            uVar21 = uVar2;
            if ((int)uVar2 < 0) {
              uVar21 = uVar2 + 0x1f;
            }
            puVar1 = (uint *)((longlong)FVar18 + (longlong)((int)uVar21 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
            if (((local_170.AllocatorInstance.Data <= (FScriptContainerElement *)&local_174) &&
                ((FScriptContainerElement *)&local_174 <
                 local_170.AllocatorInstance.Data + (longlong)local_170.ArrayMax * 4)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar21 = local_170.ArrayNum;
            if (local_170.ArrayNum == local_170.ArrayMax) {
              uVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_170.AllocatorInstance,&local_170.ArrayMax);
            }
            FVar9.Data = local_170.AllocatorInstance.Data;
            local_170.ArrayNum = uVar21 + 1;
            *(uint *)(local_170.AllocatorInstance.Data + (longlong)(int)uVar21 * 4) = local_174;
            this_00.SeedGeodesicDistances = local_150.SeedGeodesicDistances;
            while (local_150.SeedGeodesicDistances = this_00.SeedGeodesicDistances, 0 < (int)uVar21)
            {
              uVar25 = (ulonglong)uVar21;
              uVar21 = (int)(uVar21 - 1) / 2;
              lVar17 = (longlong)(int)uVar21;
              iVar13 = *(int *)(FVar9.Data + lVar17 * 4);
              pfVar15 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                        ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                       *)this_00.SeedGeodesicDistances,
                                      *(int *)(FVar9.Data + uVar25 * 4));
              fVar28 = *pfVar15;
              pfVar15 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                        ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                       *)this_00.SeedGeodesicDistances,iVar13);
              pTVar26 = local_118;
              uVar14 = local_158;
              if (*pfVar15 <= fVar28) break;
              uVar3 = *(undefined4 *)(FVar9.Data + uVar25 * 4);
              *(undefined4 *)(FVar9.Data + uVar25 * 4) = *(undefined4 *)(FVar9.Data + lVar17 * 4);
              *(undefined4 *)(FVar9.Data + lVar17 * 4) = uVar3;
              this_00.SeedGeodesicDistances = local_150.SeedGeodesicDistances;
            }
          }
        }
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    bVar11 = false;
    this = local_140;
    this_01 = local_138;
    if (local_170.ArrayNum == 0) {
      if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      if (local_90.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_90.SecondaryData);
      }
      return;
    }
  } while( true );
}

// operator() @ 148c1e5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForElementType<int> FVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  ForAnyElementType *pFVar20;
  undefined8 *puVar21;
  ForElementType<int> FVar22;
  float fVar23;
  undefined1 auStackY_188 [32];
  FIdentityFunctor local_138;
  undefined1 local_137;
  undefined1 local_136 [2];
  int local_134;
  int local_130;
  uint local_12c;
  longlong local_128;
  uint local_120;
  int local_11c;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  int local_100;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_188;
  lVar17 = *(longlong *)this;
  lVar18 = (longlong)param_1;
  local_12c = (uint)~param_1 >> 0x1f;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar17 + 0x68)) {
    uVar11 = local_12c;
  }
  local_130 = param_1;
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *(uint *)(*(longlong *)(lVar17 + 0x60) + lVar18 * 4);
  uVar12 = 0;
  if ((int)uVar11 < *(int *)(lVar17 + 0x58)) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  local_128 = lVar18;
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar4 = *(int *)(*(longlong *)(lVar17 + 0x50) + (longlong)(int)uVar11 * 4);
  local_f8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0x20;
  uVar11 = *(uint *)(*(longlong *)this + 0x88);
  local_11c = iVar4;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0x20 < (int)uVar11) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar11,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
  }
  fVar3 = __real_7f7fffff;
  local_118 = *(undefined8 **)((longlong)this + 8);
  local_120 = *(uint *)(local_118 + 1);
  uVar16 = (ulonglong)(int)local_120;
  puVar21 = (undefined8 *)*local_118;
  local_110 = puVar21 + uVar16 * 2;
  while( true ) {
    puVar9 = local_110;
    if (*(int *)(local_118 + 1) != (int)uVar16) {
      local_137 = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_137);
    }
    if (puVar21 == puVar9) break;
    piVar19 = (int *)*puVar21;
    iVar5 = *(int *)(puVar21 + 1);
    local_134 = -1;
    piVar1 = piVar19 + iVar5;
    fVar23 = fVar3;
    while( true ) {
      if (*(int *)(puVar21 + 1) != iVar5) {
        local_136[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_136);
      }
      if (piVar19 == piVar1) break;
      iVar6 = *piVar19;
      pTVar14 = TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
                ::FindChecked(*(TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
                                **)((longlong)this + 0x10),iVar6);
      pfVar15 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
                FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                             *)pTVar14,iVar4);
      if (*pfVar15 < fVar23) {
        fVar23 = *pfVar15;
        local_134 = iVar6;
      }
      piVar19 = piVar19 + 1;
    }
    if (local_134 != -1) {
      FVar22 = (ForElementType<int>)&local_f8;
      if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar22 = local_f8.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar22 <= &local_134) {
        FVar22 = (ForElementType<int>)&local_f8;
        if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar22 = local_f8.AllocatorInstance.SecondaryData;
        }
        if ((&local_134 < (int *)((longlong)FVar22 + (longlong)local_f8.ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_f8.ArrayNum == local_f8.ArrayMax) {
        local_f8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                       (0x404,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
      }
      lVar17 = (longlong)local_f8.ArrayNum;
      FVar22 = (ForElementType<int>)&local_f8;
      if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar22 = local_f8.AllocatorInstance.SecondaryData;
      }
      local_f8.ArrayNum = local_f8.ArrayNum + 1;
      *(int *)((longlong)FVar22 + lVar17 * 4) = local_134;
    }
    puVar21 = puVar21 + 2;
    uVar16 = (ulonglong)local_120;
  }
  local_108 = *(undefined8 *)((longlong)this + 0x10);
  FVar22 = (ForElementType<int>)&local_f8;
  if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar22 = local_f8.AllocatorInstance.SecondaryData;
  }
  local_100 = iVar4;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__FClothTetherDataPrivate::GenerateGeodesicTethers_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>_>
            ((int *)FVar22,local_f8.ArrayNum,local_138,(<lambda_1> *)&local_108);
  if (4 < local_f8.ArrayNum) {
    TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_f8,4,Default);
  }
  iVar5 = local_f8.ArrayNum;
  iVar4 = local_11c;
  FVar22 = (ForElementType<int>)&local_f8;
  if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar22 = local_f8.AllocatorInstance.SecondaryData;
  }
  local_118 = (undefined8 *)(local_128 << 4);
  FVar2 = (ForElementType<int>)((longlong)FVar22 + (longlong)local_f8.ArrayNum * 4);
  while( true ) {
    if (local_f8.ArrayNum != iVar5) {
      local_138 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_138);
    }
    puVar21 = local_118;
    if (FVar22 == FVar2) break;
    iVar6 = *(int *)FVar22;
    pTVar14 = TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
              ::FindChecked(*(TMapBase<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>_>
                              **)((longlong)this + 0x10),iVar6);
    pfVar15 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::
              FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                           *)pTVar14,iVar4);
    lVar17 = *(longlong *)this;
    fVar3 = *pfVar15;
    uVar11 = 0;
    if (local_130 < *(int *)(lVar17 + 0x98)) {
      uVar11 = local_12c;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar20 = (ForAnyElementType *)(*(longlong *)(lVar17 + 0x90) + local_128 * 0x10);
    iVar13 = *(int *)&pFVar20[1].Data;
    piVar1 = (int *)((longlong)&pFVar20[1].Data + 4);
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,pFVar20,piVar1);
    }
    FVar22 = (ForElementType<int>)((longlong)FVar22 + 4);
    *(int *)&pFVar20[1].Data = iVar13 + 1;
    lVar17 = (longlong)iVar13;
    pFVar7 = pFVar20->Data;
    *(int *)(pFVar7 + lVar17 * 0xc) = iVar6;
    *(int *)(pFVar7 + lVar17 * 0xc + 4) = iVar4;
    *(float *)(pFVar7 + lVar17 * 0xc + 8) = fVar3;
  }
  lVar17 = *(longlong *)this;
  uVar11 = 0;
  if (local_130 < *(int *)(lVar17 + 0x98)) {
    uVar11 = local_12c;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((4 < *(int *)(*(longlong *)(lVar17 + 0x90) + 8 + (longlong)puVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TetherSlots[Index].Num() <= MaxNumAttachments",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                          ,0x294,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (local_f8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_f8.AllocatorInstance.SecondaryData);
  }
  return;
}

// ComputeKinematicNodeIslands @ 148c22fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FClothTetherDataPrivate::ComputeKinematicNodeIslands(FClothTetherDataPrivate *this)

{
  int *piVar1;
  uint uVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  int *piVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  ForElementType<unsigned_int> FVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar27;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [2];
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_1c8;
  FClothTetherDataPrivate *local_1c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b8;
  uint local_1a8;
  uint local_1a4;
  int *local_1a0;
  int local_198;
  uint local_194;
  uint local_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_188;
  undefined4 local_180;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  FScriptContainerElement *local_170;
  undefined4 local_168;
  int local_164;
  int local_160;
  int local_15c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_158;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  int *local_148;
  uint *local_140;
  FScriptContainerElement *local_138;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this_00 = &this->KinematicNodeIslands;
  piVar21 = &(this->KinematicNodeIslands).ArrayMax;
  iVar20 = (this->KinematicNodeIslands).ArrayNum;
  piVar1 = &(this->KinematicNodeIslands).ArrayNum;
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data;
  local_1c8 = this_00;
  local_1c0 = this;
  local_1a0 = piVar1;
  local_148 = piVar21;
  if ((this->KinematicNodeIslands).ArrayMax < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar20);
    *piVar1 = 0;
    if (*piVar21 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_00->AllocatorInstance,0,piVar21);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar20);
    *piVar1 = 0;
  }
  pFVar17 = (FScriptContainerElement *)0x0;
  uVar14 = (this->KinematicTetherNodes).ArrayNum;
  uVar27 = 0;
  local_1a4 = 0;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar14 == 0) goto LAB_148c232f0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar22 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_168 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar14 <= (int)local_40)) goto LAB_148c232f0;
  local_40 = uVar14;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar14 != 0) {
    uVar15 = uVar14;
    if (uVar14 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar15 = 0;
        goto LAB_148c23141;
      }
    }
    else {
LAB_148c23141:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar15,4);
    }
    if (0 < (int)uVar14) {
      uVar22 = (ulonglong)uVar14;
      pFVar13 = pFVar17;
      do {
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar8 = (longlong)(int)uVar14 - 1U & (ulonglong)pFVar13;
        pFVar13 = pFVar13 + 1;
        *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_190 = 0;
    uStack_18c = 1;
    uStack_17c = 0;
    uStack_178 = 0;
    pFVar13 = pFVar17;
    if (local_60 != 0) {
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_68;
      }
      uVar14 = *(uint *)FVar25;
      pFVar16 = pFVar17;
      while (uVar14 == 0) {
        uStack_178 = (int)pFVar16 + 0x20;
        pFVar16 = (FScriptContainerElement *)(ulonglong)uStack_178;
        iVar20 = (int)pFVar13;
        local_190 = iVar20 + 1;
        pFVar13 = (FScriptContainerElement *)(ulonglong)local_190;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_190)
        goto LAB_148c2324e;
        uVar14 = ((uint *)((longlong)FVar25 + 4))[iVar20];
      }
      uStack_18c = -uVar14 & uVar14;
      uVar22 = (ulonglong)uStack_18c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_164 = (int)lVar11;
      uStack_17c = local_164 + -1 + uStack_178;
      pFVar13 = (FScriptContainerElement *)(ulonglong)uStack_17c;
      if ((int)local_60 < (int)uStack_17c) {
LAB_148c2324e:
        pFVar13 = (FScriptContainerElement *)(ulonglong)local_60;
        uStack_17c = local_60;
      }
    }
    local_180 = 0xffffffff;
    local_130 = (longlong *)local_88;
    local_128._padding_ = CONCAT44(uStack_18c,local_190);
    local_128.CurrentBitIndex = uStack_17c;
    local_128.UnvisitedBitMask = 0xffffffff;
    local_128._28_4_ = uStack_174;
    local_128.BaseBitIndex = uStack_178;
    local_128.Array = pTStack_188;
    if ((int)pFVar13 < (int)local_60) {
      do {
        puVar24 = (uint *)((longlong)(int)pFVar13 * 0x10 + *local_130);
        uVar14 = local_40 - 1 & *puVar24;
        puVar24[3] = uVar14;
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar22 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
        puVar24[2] = *(uint *)(FVar10.Data + uVar22 * 4);
        *(int *)(FVar10.Data + uVar22 * 4) = (int)pFVar13;
        local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
        pFVar13 = (FScriptContainerElement *)(ulonglong)(uint)local_128.CurrentBitIndex;
      } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
    }
  }
LAB_148c232f0:
  local_194 = (this->KinematicTetherNodes).ArrayNum;
  uVar22 = (ulonglong)(int)local_194;
  pFVar13 = (this->KinematicTetherNodes).AllocatorInstance.Data;
  local_138 = pFVar13 + uVar22 * 4;
  do {
    pFVar16 = local_138;
    local_170 = pFVar13;
    if ((this->KinematicTetherNodes).ArrayNum != (int)uVar22) {
      local_1d8 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    if (pFVar13 == pFVar16) {
      pFVar13 = pFVar17;
      pFVar16 = pFVar17;
      uVar14 = uVar27;
      if (0 < (this->KinematicNodeIslands).ArrayNum) {
        do {
          uVar15 = (uint)pFVar17;
          uVar14 = uVar27;
          if ((int)uVar15 < this_00->ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
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
          if (*(int *)(pFVar13 + (longlong)((this_00->AllocatorInstance).Data + 8)) == 0) {
            uVar14 = uVar27;
            if ((int)uVar15 < this_00->ArrayNum) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
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
            TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
            RemoveAtSwapImpl(this_00,uVar15);
          }
          else {
            pFVar16 = (FScriptContainerElement *)
                      (ulonglong)
                      (uint)((int)pFVar16 +
                            *(int *)(pFVar13 + (longlong)((this_00->AllocatorInstance).Data + 8)));
            pFVar17 = (FScriptContainerElement *)(ulonglong)(uVar15 + 1);
            pFVar13 = pFVar13 + 0x10;
          }
          uVar14 = (uint)pFVar16;
          this = local_1c0;
        } while ((int)pFVar17 < (local_1c0->KinematicNodeIslands).ArrayNum);
      }
      if ((uVar14 != (this->KinematicTetherNodes).ArrayNum) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TotalNumIslandKinematicNodes == KinematicTetherNodes.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                             ,0x1a0,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
      return;
    }
    local_1d4 = *(uint *)pFVar13;
    uVar22 = 0x7fffffff;
    local_1d0 = 0x7fffffff;
    pTVar9 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
             ::FindChecked((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                            *)this,local_1d4);
    uVar14 = *(uint *)&(pTVar9->Elements).field_0x28;
    uStack_fc = 1;
    pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar9->Elements).field_0x10;
    uStack_ec = uVar27;
    uStack_100 = uVar27;
    local_e8 = uVar27;
    if (uVar14 != 0) {
      puVar24 = *(uint **)&(pTVar9->Elements).field_0x20;
      puVar19 = (uint *)pTVar26;
      if (puVar24 != (uint *)0x0) {
        puVar19 = puVar24;
      }
      uVar15 = *puVar19;
      pFVar13 = pFVar17;
      pFVar16 = pFVar17;
      while( true ) {
        uStack_100 = (uint)pFVar13;
        local_e8 = (uint)pFVar16;
        if (uVar15 != 0) break;
        lVar11 = (longlong)(int)uStack_100;
        local_e8 = local_e8 + 0x20;
        pFVar16 = (FScriptContainerElement *)(ulonglong)local_e8;
        uStack_100 = uStack_100 + 1;
        pFVar13 = (FScriptContainerElement *)(ulonglong)uStack_100;
        uStack_ec = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_100)
        goto LAB_148c233dd;
        uVar15 = puVar19[lVar11 + 1];
      }
      uStack_fc = -uVar15 & uVar15;
      uVar8 = (ulonglong)uStack_fc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_160 = (int)lVar11;
      uStack_ec = (local_e8 - 1) + local_160;
      if ((int)uVar14 < (int)uStack_ec) {
        uStack_ec = uVar14;
      }
    }
LAB_148c233dd:
    uVar15 = *(uint *)&(pTVar9->Elements).field_0x28;
    uStack_e4 = local_8c;
    iStack_e0 = *(int *)&(pTVar9->Elements).field_0x8 - *(int *)&(pTVar9->Elements).field_0x34;
    uVar18 = uVar15 & 0xffffffe0;
    TStack_d0._padding_ = CONCAT44(uStack_fc,uStack_100);
    uStack_f0 = 0xffffffff;
    TStack_d0.CurrentBitIndex = uStack_ec;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar15 >> 5;
    TStack_d0._28_4_ = local_8c;
    TStack_d0.BaseBitIndex = local_e8;
    uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
    local_1cc = uVar15;
    local_158 = pTVar9;
    local_150 = pTVar26;
    local_108 = pTVar9;
    local_f8 = (undefined1 *)pTVar26;
    local_d8 = pTVar9;
    TStack_d0.Array = pTVar26;
    if ((((int)uVar15 < 0) || ((int)uVar14 < (int)uVar15)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar14 = *(uint *)&(pTVar9->Elements).field_0x28;
    if (uVar15 != uVar14) {
      puVar4 = *(undefined1 **)&(pTVar9->Elements).field_0x20;
      puVar23 = (undefined1 *)pTVar26;
      if (puVar4 != (undefined1 *)0x0) {
        puVar23 = puVar4;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar20;
        uVar18 = uVar18 + 0x20;
        iVar20 = iVar20 + 1;
        uVar15 = uVar14;
        local_1cc = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_148c234f1;
        uVar15 = *(uint *)(puVar23 + lVar11 * 4 + 4);
      }
      uVar8 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_15c = (int)lVar11;
      uVar15 = (uVar18 - 1) + local_15c;
      local_1cc = uVar15;
      if ((int)uVar14 < (int)uVar15) {
        uVar15 = uVar14;
        local_1cc = uVar14;
      }
    }
LAB_148c234f1:
    while( true ) {
      pTVar9 = local_d8;
      uVar14 = (uint)uVar22;
      if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
          (int)uStack_b0) {
        local_1d7 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d7);
      }
      piVar21 = local_1a0;
      this_00 = local_1c8;
      if (((TStack_d0.CurrentBitIndex == uVar15) && (TStack_d0.Array == pTVar26)) &&
         (pTVar9 == local_158)) break;
      uVar18 = *(uint *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_d0.CurrentBitIndex * 0xc)
      ;
      if (local_88._8_4_ != local_54) {
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar2 = *(uint *)(FVar10.Data + (ulonglong)(local_40 - 1 & uVar18) * 4);
        while (uVar2 != 0xffffffff) {
          pFVar13 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)(int)uVar2 * 0x10);
          if (*(uint *)pFVar13 == uVar18) {
            pFVar16 = pFVar13 + 4;
            if (pFVar13 == (FScriptContainerElement *)0x0) {
              pFVar16 = pFVar17;
            }
            if (pFVar16 != (FScriptContainerElement *)0x0) {
              local_1a8 = *(uint *)pFVar16;
              lVar11 = (longlong)(int)local_1a8;
              if (uVar14 == 0x7fffffff) {
                uVar22 = (ulonglong)local_1a8;
                local_1d0 = local_1a8;
              }
              else if (local_1a8 != uVar14) {
                uVar14 = uVar27;
                if ((int)local_1a8 < *local_1a0) {
                  uVar14 = ~local_1a8 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar13 = (local_1c0->KinematicNodeIslands).AllocatorInstance.Data + lVar11 * 0x10;
                puVar19 = *(uint **)&pFVar13->field_0x0;
                iVar20 = *(int *)&pFVar13[8].field_0x0;
                puVar24 = puVar19 + iVar20;
                while( true ) {
                  if (*(int *)&pFVar13[8].field_0x0 != iVar20) {
                    local_1d6[0] = 0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (local_1d6);
                  }
                  if (puVar19 == puVar24) break;
                  uVar14 = *puVar19;
                  pFVar16 = pFVar17;
                  if (local_88._8_4_ != local_54) {
                    FVar10.Data = local_50;
                    if (local_48.Data != (FScriptContainerElement *)0x0) {
                      FVar10.Data = local_48.Data;
                    }
                    uVar15 = *(uint *)(FVar10.Data + (ulonglong)(local_40 - 1 & uVar14) * 4);
                    while (pFVar16 = pFVar17, uVar15 != 0xffffffff) {
                      pFVar16 = (FScriptContainerElement *)
                                (local_88._0_8_ + (longlong)(int)uVar15 * 0x10);
                      if (*(uint *)pFVar16 == uVar14) {
                        if (pFVar16 != (FScriptContainerElement *)0x0) goto LAB_148c236d7;
                        break;
                      }
                      uVar15 = *(uint *)(pFVar16 + 8);
                    }
                  }
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x288,L"");
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
LAB_148c236d7:
                  if ((*(uint *)(pFVar16 + 4) != local_1a8) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NodeToIslands[NeighborIslandNode] == NeighborIslandIndex",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                                         ,0x16f,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pFVar16 = pFVar17;
                  if (local_88._8_4_ != local_54) {
                    FVar10.Data = local_50;
                    if (local_48.Data != (FScriptContainerElement *)0x0) {
                      FVar10.Data = local_48.Data;
                    }
                    uVar15 = *(uint *)(FVar10.Data + (ulonglong)(local_40 - 1 & uVar14) * 4);
                    while (pFVar16 = pFVar17, uVar15 != 0xffffffff) {
                      pFVar16 = (FScriptContainerElement *)
                                (local_88._0_8_ + (longlong)(int)uVar15 * 0x10);
                      if (*(uint *)pFVar16 == uVar14) {
                        if (pFVar16 != (FScriptContainerElement *)0x0) goto LAB_148c23783;
                        break;
                      }
                      uVar15 = *(uint *)(pFVar16 + 8);
                    }
                  }
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x288,L"");
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
LAB_148c23783:
                  puVar19 = puVar19 + 1;
                  *(uint *)(pFVar16 + 4) = local_1d0;
                }
                uVar22 = (ulonglong)(int)local_1d0;
                uVar14 = uVar27;
                if ((int)local_1d0 < *local_1a0) {
                  uVar14 = ~local_1d0 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar16 = (local_1c0->KinematicNodeIslands).AllocatorInstance.Data + uVar22 * 0x10;
                if ((pFVar16 == pFVar13) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)this != (void*)&Source",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x96e,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar20 = *(int *)&pFVar13[8].field_0x0;
                if (iVar20 != 0) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (4,4,iVar20,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 8),
                                     (int *)(pFVar16 + 0xc));
                  memcpy((void *)(*(longlong *)&pFVar16->field_0x0 + (longlong)iVar7 * 4),
                         *(void **)&pFVar13->field_0x0,(longlong)iVar20 << 2);
                }
                iVar20 = *(int *)(pFVar13 + 0xc);
                *(undefined4 *)&pFVar13[8].field_0x0 = 0;
                if (iVar20 < 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,0,(ForAnyElementType *)pFVar13,0,(int *)(pFVar13 + 0xc));
                }
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                          (&local_1b8,(int *)&local_1a8);
                pTVar26 = local_150;
                uVar15 = local_1cc;
              }
            }
            break;
          }
          uVar2 = *(uint *)(pFVar13 + 8);
        }
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    }
    if (uVar14 == 0x7fffffff) {
      if (local_1b8.ArrayNum == 0) {
        uVar15 = local_1a4 + 1;
        iVar20 = *local_1a0;
        uVar14 = local_1a4;
        local_1a4 = uVar15;
        if (iVar20 < (int)uVar15) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar15 - iVar20,&local_1c8->AllocatorInstance,local_1a0,
                             local_148);
          memset((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
                 (longlong)(int)(uVar15 - iVar20) << 4);
        }
        else {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          if ((int)uVar15 < iVar20) {
            uVar18 = iVar20 - uVar15;
            if (((int)(uVar18 | uVar15) < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            this_00 = local_1c8;
            if (uVar18 != 0) {
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(local_1c8,uVar15,uVar18);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&this_00->AllocatorInstance,*piVar21,&this_00->ArrayMax);
            }
          }
        }
      }
      else {
        if (local_1b8.ArrayNum < 1) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar12 = local_1b8.ArrayNum + -1;
        uVar14 = *(uint *)(local_1b8.AllocatorInstance.Data + (longlong)iVar12 * 4);
        iVar7 = (local_1b8.ArrayNum - iVar12) + -1;
        iVar20 = local_1b8.ArrayNum;
        if (iVar7 != 0) {
          memmove(local_1b8.AllocatorInstance.Data + (longlong)iVar12 * 4,
                  local_1b8.AllocatorInstance.Data + (longlong)iVar12 * 4 + 4,(longlong)iVar7 << 2);
          iVar20 = local_1b8.ArrayNum;
        }
        local_1b8.ArrayNum = iVar20 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_1b8.AllocatorInstance,iVar20 + -1,&local_1b8.ArrayMax);
        piVar21 = local_1a0;
        this_00 = local_1c8;
      }
    }
    if (local_88._8_4_ != local_54) {
      FVar10.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_48.Data;
      }
      uVar15 = *(uint *)(FVar10.Data + (ulonglong)(local_40 - 1 & local_1d4) * 4);
      while (uVar15 != 0xffffffff) {
        pFVar13 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)(int)uVar15 * 0x10);
        if (*(uint *)pFVar13 == local_1d4) {
          if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_148c23b1f;
          break;
        }
        uVar15 = *(uint *)(pFVar13 + 8);
      }
    }
    local_140 = &local_1d4;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_88,(uint)&local_198,(TKeyInitializer<int_const_&> *)(ulonglong)local_1d4,
               (bool *)&local_140);
    pFVar13 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)local_198 * 0x10);
LAB_148c23b1f:
    this = local_1c0;
    *(uint *)(pFVar13 + 4) = uVar14;
    if ((((int)uVar14 < 0) || ((local_1c0->KinematicNodeIslands).ArrayNum <= (int)uVar14)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("KinematicNodeIslands.IsValidIndex(IslandIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                           ,0x18a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar15 = uVar27;
    if ((int)uVar14 < *piVar21) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar16 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
    if (((*(uint **)pFVar16 <= &local_1d4) &&
        (&local_1d4 < *(uint **)pFVar16 + *(int *)(pFVar16 + 0xc))) &&
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
    iVar20 = *(int *)(pFVar16 + 8);
    if (iVar20 == *(int *)(pFVar16 + 0xc)) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
    }
    *(int *)(pFVar16 + 8) = iVar20 + 1;
    pFVar13 = local_170 + 4;
    *(uint *)(*(longlong *)pFVar16 + (longlong)iVar20 * 4) = local_1d4;
    uVar22 = (ulonglong)local_194;
  } while( true );
}

// GenerateEuclideanTethers @ 148c29ad0

void __thiscall
FClothTetherDataPrivate::GenerateEuclideanTethers
          (FClothTetherDataPrivate *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  FClothTetherDataPrivate *local_38;
  TArrayView<UE::Math::TVector<float>_const_,int> *local_30;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FClothTetherDataPrivate **local_10;
  
  if ((this->KinematicNodeIslands).ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KinematicNodeIslands.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                       ,0x1a5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FClothTetherDataPrivate::GenerateEuclideanTethers'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_38;
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_38 = this;
  local_30 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->DynamicTetherNodesDynamicIndex).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res8,None,&local_28);
  return;
}

// GenerateGeodesicTethers @ 148c29b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FClothTetherDataPrivate::GenerateGeodesicTethers
          (FClothTetherDataPrivate *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FClothTetherDataPrivate *pFVar5;
  FClothTetherDataPrivate *pFVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  uint uVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  ForElementType<unsigned_int> FVar30;
  uint *puVar31;
  longlong lVar32;
  ForAnyElementType FVar33;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6;
  <lambda_1> local_2a5;
  <lambda_1> local_2a4 [4];
  int local_2a0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_298;
  undefined1 local_288 [4];
  uint local_284;
  uint local_280;
  uint local_27c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_278;
  longlong local_268;
  FClothTetherDataPrivate *local_260;
  undefined4 local_258 [2];
  uint local_250;
  undefined4 local_24c;
  TKeyInitializer<int_const_&> local_248;
  undefined4 local_240 [2];
  longlong local_238;
  uint local_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_228;
  undefined4 local_220;
  uint uStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  int *local_210;
  int *local_208;
  FScriptContainerElement *local_200;
  undefined4 *local_1f8;
  TArrayView<UE::Math::TVector<float>_const_,int> *local_1f0;
  TFunctionRef<bool___cdecl(int)> *local_1e8;
  int local_1e0;
  int local_1dc;
  TPairInitializer<int_const_&,float_&&> local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TArrayView<std::nullptr_t,int> local_148;
  code *local_138;
  FClothTetherDataPrivate **local_130;
  undefined4 *local_128;
  undefined4 *local_120;
  TArrayView<std::nullptr_t,int> local_118;
  code *local_108;
  FClothTetherDataPrivate **local_100;
  FClothTetherDataPrivate *local_f8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_f0;
  undefined1 *local_e8;
  FClothTetherDataPrivate *local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d8;
  undefined1 *local_d0;
  TArrayView<UE::Math::TVector<float>_const_,int> *local_c8;
  TFunctionRef<bool___cdecl(int)> *local_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_260 = this;
  local_1f0 = param_1;
  local_1e8 = param_2;
  if (((this->KinematicNodeIslands).ArrayNum == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("KinematicNodeIslands.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                         ,0x1de,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar25 = 0;
  local_284 = 0;
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_278,(this->KinematicNodeIslands).ArrayNum,Default);
  local_280 = 0;
  if (0 < (this->KinematicNodeIslands).ArrayNum) {
    local_238 = 0;
    local_268 = 0;
    uVar25 = 0;
    do {
      lVar17 = local_238;
      uVar23 = local_280;
      uVar18 = ~local_280 >> 0x1f;
      uVar11 = 0;
      if ((int)local_280 < (this->KinematicNodeIslands).ArrayNum) {
        uVar11 = uVar18;
      }
      local_250 = uVar18;
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar21 = (this->KinematicNodeIslands).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar23 < local_278.ArrayNum) {
        uVar11 = uVar18;
      }
      local_200 = pFVar21;
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = *(uint *)(pFVar21 + lVar17 + 8);
      pFVar28 = local_278.AllocatorInstance.Data + lVar17;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if (*(int *)(pFVar28 + 0xc) < (int)uVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar11,(ForAnyElementType *)pFVar28,*(int *)(pFVar28 + 8),
                   (int *)(pFVar28 + 0xc));
      }
      local_27c = *(uint *)(pFVar21 + lVar17 + 8);
      uVar16 = (ulonglong)(int)local_27c;
      piVar20 = *(int **)(pFVar21 + lVar17);
      local_208 = piVar20 + uVar16;
LAB_148c29d53:
      local_210 = piVar20;
      if (*(int *)(pFVar21 + lVar17 + 8) != (int)uVar16) {
        local_2a8 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2a8);
      }
      if (piVar20 != local_208) {
        local_2a0[0] = *piVar20;
        pTVar14 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                  ::FindChecked((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                 *)this,local_2a0[0]);
        iVar12 = *(int *)&(pTVar14->Elements).field_0x28;
        iStack_1a0 = 0;
        local_188 = 0;
        uStack_19c = 1;
        puVar1 = &(pTVar14->Elements).field_0x10;
        iStack_18c = 0;
        if (iVar12 != 0) {
          puVar2 = *(uint **)&(pTVar14->Elements).field_0x20;
          puVar31 = (uint *)puVar1;
          if (puVar2 != (uint *)0x0) {
            puVar31 = puVar2;
          }
          uVar25 = *puVar31;
          while (uVar25 == 0) {
            lVar17 = (longlong)iStack_1a0;
            local_188 = local_188 + 0x20;
            iStack_1a0 = iStack_1a0 + 1;
            iStack_18c = iVar12;
            if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
            goto LAB_148c29e0d;
            uVar25 = puVar31[lVar17 + 1];
          }
          uStack_19c = -uVar25 & uVar25;
          uVar16 = (ulonglong)uStack_19c * 2 + 1;
          lVar17 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_1e0 = (int)lVar17;
          iStack_18c = local_1e0 + -1 + local_188;
          if (iVar12 < iStack_18c) {
            iStack_18c = iVar12;
          }
        }
LAB_148c29e0d:
        uVar25 = *(uint *)&(pTVar14->Elements).field_0x28;
        uStack_184 = local_9c;
        uVar23 = uVar25 & 0xffffffe0;
        iStack_180 = *(int *)&(pTVar14->Elements).field_0x8 -
                     *(int *)&(pTVar14->Elements).field_0x34;
        TStack_170._padding_ = CONCAT44(uStack_19c,iStack_1a0);
        uStack_190 = 0xffffffff;
        TStack_170.CurrentBitIndex = iStack_18c;
        TStack_170.UnvisitedBitMask = 0xffffffff;
        iVar19 = (int)uVar25 >> 5;
        TStack_170._28_4_ = local_9c;
        TStack_170.BaseBitIndex = local_188;
        uStack_150 = CONCAT44(uStack_17c,iStack_180);
        local_1a8 = pTVar14;
        local_198 = puVar1;
        local_178 = pTVar14;
        TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar25 < 0) || (iVar12 < (int)uVar25)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = *(uint *)&(pTVar14->Elements).field_0x28;
        if (uVar25 != uVar11) {
          puVar3 = *(undefined1 **)&(pTVar14->Elements).field_0x20;
          puVar26 = puVar1;
          if (puVar3 != (undefined1 *)0x0) {
            puVar26 = puVar3;
          }
          uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar19 * 4);
          while (uVar25 == 0) {
            lVar17 = (longlong)iVar19;
            uVar23 = uVar23 + 0x20;
            iVar19 = iVar19 + 1;
            uVar25 = uVar11;
            if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_148c29f20;
            uVar25 = *(uint *)(puVar26 + lVar17 * 4 + 4);
          }
          uVar16 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_1dc = (int)lVar17;
          uVar25 = (uVar23 - 1) + local_1dc;
          if ((int)uVar11 < (int)uVar25) {
            uVar25 = uVar11;
          }
        }
LAB_148c29f20:
        do {
          pTVar7 = local_178;
          if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34
              != (int)uStack_150) {
            local_2a7 = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a7);
          }
          if (((TStack_170.CurrentBitIndex == uVar25) &&
              (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (lVar17 = local_238, uVar23 = local_280, pTVar7 == pTVar14)) goto LAB_148c2a0a7;
          local_258[0] = *(undefined4 *)
                          (*(longlong *)&pTVar7->Elements +
                          (longlong)TStack_170.CurrentBitIndex * 0xc);
          cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_258);
          uVar23 = local_280;
          if (cVar10 == '\0') goto LAB_148c29f9e;
          TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
        } while( true );
      }
      local_280 = uVar23 + 1;
      local_268 = local_268 + 1;
      local_238 = lVar17 + 0x10;
      if ((this->KinematicNodeIslands).ArrayNum <= (int)local_280) break;
    } while( true );
  }
  uVar16 = 0;
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ArrayNum = 0;
  local_298.ArrayMax = 0;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (0 < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar25,&local_298.AllocatorInstance,0,&local_298.ArrayMax);
  }
  iVar12 = local_278.ArrayNum;
  pTVar24 = (TArray<int,TSizedDefaultAllocator<32>_> *)
            (local_278.AllocatorInstance.Data + (longlong)local_278.ArrayNum * 0x10);
  FVar33.Data = local_278.AllocatorInstance.Data;
  while( true ) {
    if (local_278.ArrayNum != iVar12) {
      local_2a6 = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_2a6);
    }
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar33.Data == pTVar24) break;
    if ((&local_298 == (TArray<int,TSizedDefaultAllocator<32>_> *)FVar33.Data) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar19 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar33.Data)->ArrayNum;
    if (iVar19 != 0) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar19,&local_298.AllocatorInstance,&local_298.ArrayNum,
                          &local_298.ArrayMax);
      memcpy(local_298.AllocatorInstance.Data + (longlong)iVar13 * 4,
             (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar33.Data)->AllocatorInstance).Data,
             (longlong)iVar19 << 2);
    }
    FVar33.Data = FVar33.Data + 0x10;
  }
  if ((local_298.ArrayNum != uVar25) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Seeds.Num() == NumSeeds",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothTetherData.cpp"
                         ,0x201,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = local_298.ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (local_298.ArrayNum == 0) goto LAB_148c2a4b6;
  if (local_298.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)local_298.ArrayNum);
  }
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,local_298.ArrayNum);
  if ((uint)iVar12 < 4) {
    uVar25 = 1;
  }
  else {
    uVar27 = (ulonglong)(((uint)iVar12 >> 1) + 7) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar25 = 1 << ((byte)lVar17 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar25 <= (int)local_50)) goto LAB_148c2a4b6;
  local_50 = uVar25;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar25 != 0) {
    uVar23 = uVar25;
    if (uVar25 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_148c2a2f7;
      }
    }
    else {
LAB_148c2a2f7:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar23,4);
    }
    if (0 < (int)uVar25) {
      uVar29 = (ulonglong)uVar25;
      uVar27 = uVar16;
      do {
        FVar33.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar33.Data = local_58.Data;
        }
        uVar15 = uVar27 & (longlong)(int)uVar25 - 1U;
        uVar27 = uVar27 + 1;
        *(undefined4 *)(FVar33.Data + uVar15 * 4) = 0xffffffff;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_230 = 0;
    uStack_22c = 1;
    uStack_21c = 0;
    uStack_218 = 0;
    if (local_70 != 0) {
      FVar30 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_78;
      }
      uVar25 = *(uint *)FVar30;
      uVar27 = uVar16;
      while (uVar25 == 0) {
        uStack_218 = (int)uVar27 + 0x20;
        uVar27 = (ulonglong)uStack_218;
        iVar12 = (int)uVar16;
        local_230 = iVar12 + 1;
        uVar16 = (ulonglong)local_230;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_230)
        goto LAB_148c2a40c;
        uVar25 = ((uint *)((longlong)FVar30 + 4))[iVar12];
      }
      uStack_22c = -uVar25 & uVar25;
      uVar16 = (ulonglong)uStack_22c * 2 + 1;
      lVar17 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uStack_21c = (uStack_218 - 1) + (int)lVar17;
      uVar16 = (ulonglong)uStack_21c;
      if ((int)local_70 < (int)uStack_21c) {
LAB_148c2a40c:
        uVar16 = (ulonglong)local_70;
        uStack_21c = local_70;
      }
    }
    local_220 = 0xffffffff;
    local_1d8.Value = (float *)local_98;
    local_1c8._padding_ = CONCAT44(uStack_22c,local_230);
    local_1c8.CurrentBitIndex = uStack_21c;
    local_1c8.UnvisitedBitMask = 0xffffffff;
    local_1c8._28_4_ = uStack_214;
    local_1c8.BaseBitIndex = uStack_218;
    local_1c8.Array = pTStack_228;
    if ((int)uVar16 < (int)local_70) {
      do {
        lVar17 = *(longlong *)local_1d8.Value;
        lVar32 = (longlong)(int)uVar16 * 0x60;
        uVar25 = local_50 - 1 & *(uint *)(lVar32 + lVar17);
        *(uint *)(lVar32 + 0x5c + lVar17) = uVar25;
        FVar33.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar33.Data = local_58.Data;
        }
        uVar27 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar25;
        *(undefined4 *)(lVar32 + 0x58 + lVar17) = *(undefined4 *)(FVar33.Data + uVar27 * 4);
        *(int *)(FVar33.Data + uVar27 * 4) = (int)uVar16;
        local_1c8.UnvisitedBitMask = local_1c8.UnvisitedBitMask & ~local_1c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
        uVar16 = (ulonglong)(uint)local_1c8.CurrentBitIndex;
      } while (local_1c8.CurrentBitIndex < (local_1c8.Array)->NumBits);
    }
  }
LAB_148c2a4b6:
  uVar16 = (ulonglong)local_298.ArrayNum;
  local_27c = local_298.ArrayNum;
  pFVar21 = local_298.AllocatorInstance.Data + uVar16 * 4;
  FVar33.Data = local_298.AllocatorInstance.Data;
  while( true ) {
    if (local_298.ArrayNum != (int)uVar16) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_288);
    }
    pFVar5 = local_260;
    if (FVar33.Data == pFVar21) break;
    local_24c = *(undefined4 *)FVar33.Data;
    local_1f8 = &local_24c;
    TSet<TTuple<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>,0>,FDefaultSetAllocator>
                *)local_98,&local_248,(bool *)&local_1f8);
    uVar8 = local_98._0_8_;
    iVar19 = (int)local_248.Key;
    pFVar5 = local_260;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::Reserve
              ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                *)(local_98._0_8_ + (longlong)(int)local_248.Key * 0x60 + 8),
               (local_260->AllDynamicNodes).ArrayNum);
    pFVar6 = local_260;
    pFVar22 = (pFVar5->AllDynamicNodes).AllocatorInstance.Data;
    iVar12 = (pFVar5->AllDynamicNodes).ArrayNum;
    pFVar28 = pFVar22 + (longlong)iVar12 * 4;
    while( true ) {
      if ((pFVar6->AllDynamicNodes).ArrayNum != iVar12) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2a5);
      }
      if (pFVar22 == pFVar28) break;
      local_248.Key._4_4_ = *(undefined4 *)pFVar22;
      local_128 = (undefined4 *)((longlong)&local_248.Key + 4);
      local_240[0] = 0x7f7fffff;
      local_120 = local_240;
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,float_&&>_>
                ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                  *)(uVar8 + (longlong)iVar19 * 0x60 + 8),&local_1d8,(bool *)&local_128);
      pFVar22 = pFVar22 + 4;
    }
    uVar16 = (ulonglong)local_27c;
    FVar33.Data = FVar33.Data + 4;
  }
  local_d8 = &local_298;
  local_e0 = local_260;
  local_d0 = local_98;
  local_118.DataPtr = (void **)0x0;
  local_c8 = local_1f0;
  local_c0 = local_1e8;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_1>,void,int>
              ::Call;
  local_100 = &local_e0;
  local_118.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_298.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_108,
             local_2a5,None,&local_118);
  TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  SetNum(&pFVar5->TetherSlots,(pFVar5->DynamicTetherNodesDynamicIndex).ArrayNum,Default);
  iVar12 = (pFVar5->TetherSlots).ArrayNum;
  pFVar21 = (pFVar5->TetherSlots).AllocatorInstance.Data;
  pFVar28 = pFVar21 + (longlong)iVar12 * 0x10;
  while( true ) {
    if ((pFVar5->TetherSlots).ArrayNum != iVar12) {
      `TCheckedPointerIterator<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2a4);
    }
    if (pFVar21 == pFVar28) break;
    if (*(int *)(pFVar21 + 0xc) < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,4,(ForAnyElementType *)pFVar21,*(int *)&pFVar21[8].field_0x0,
                 (int *)(pFVar21 + 0xc));
    }
    pFVar21 = pFVar21 + 0x10;
  }
  local_f0 = &local_278;
  local_e8 = local_98;
  local_f8 = pFVar5;
  local_148.DataPtr = (void **)0x0;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>,void,int>
              ::Call;
  local_130 = &local_f8;
  local_148.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(pFVar5->DynamicTetherNodesDynamicIndex).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_138,local_2a4[0],None,&local_148);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_278.AllocatorInstance.Data,
             local_278.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_278.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  return;
LAB_148c29f9e:
  uVar25 = 0;
  if ((int)local_280 < local_278.ArrayNum) {
    uVar25 = local_250;
  }
  if ((uVar25 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar17 = local_238;
  pFVar21 = local_278.AllocatorInstance.Data + local_238;
                    /* WARNING: Load size is inaccurate */
  if (((*pFVar21 <= (FScriptContainerElement *)local_2a0) &&
      ((FScriptContainerElement *)local_2a0 < *pFVar21 + (longlong)*(int *)(pFVar21 + 0xc) * 4)) &&
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
  iVar12 = *(int *)(pFVar21 + 8);
  if (iVar12 == *(int *)(pFVar21 + 0xc)) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 0xc));
  }
  *(int *)(pFVar21 + 8) = iVar12 + 1;
  local_284 = local_284 + 1;
                    /* WARNING: Load size is inaccurate */
  *(int *)(*pFVar21 + (longlong)iVar12 * 4) = local_2a0[0];
LAB_148c2a0a7:
  piVar20 = local_210 + 1;
  uVar16 = (ulonglong)local_27c;
  this = local_260;
  pFVar21 = local_200;
  uVar25 = local_284;
  goto LAB_148c29d53;
}

// GetBatchedTetherData @ 148c2b850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FClothTetherDataPrivate::GetBatchedTetherData
          (FClothTetherDataPrivate *this,
          TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  uint uVar2;
  TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_res18;
  longlong local_res20;
  longlong local_58;
  
  uVar2 = (this->TetherNums).ArrayNum;
  lVar16 = (longlong)(this->TetherSlots).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  pTVar3 = (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
           (param_1->AllocatorInstance).Data;
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar2) {
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              (pTVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              (pTVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  SetNum(param_1,uVar2,Default);
  uVar13 = 0;
  if (0 < (int)uVar2) {
    local_res20 = 0;
    local_res18 = 0;
    local_58 = 0;
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (param_1->AllocatorInstance).Data + local_res20;
      uVar14 = 0;
      if ((int)uVar13 < (this->TetherNums).ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = *(uint *)((this->TetherNums).AllocatorInstance.Data + local_res18 * 4);
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      if (*(int *)(pFVar11 + 0xc) < (int)uVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar14,(ForAnyElementType *)pFVar11,*(int *)&pFVar11[8].field_0x0,
                   (int *)(pFVar11 + 0xc));
      }
      uVar14 = 0;
      if (0 < lVar16) {
        lVar17 = 0;
        lVar10 = lVar16;
        do {
          uVar8 = 0;
          if ((int)uVar14 < (this->TetherSlots).ArrayNum) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((-1 < (int)uVar13) &&
             ((int)uVar13 < *(int *)((this->TetherSlots).AllocatorInstance.Data + lVar17 + 8))) {
            uVar8 = 0;
            if ((int)uVar13 < param_1->ArrayNum) {
              uVar8 = uVar15;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar11 = (param_1->AllocatorInstance).Data + local_res20;
            uVar8 = 0;
            if ((int)uVar14 < (this->TetherSlots).ArrayNum) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar4 = (this->TetherSlots).AllocatorInstance.Data;
            uVar8 = 0;
            if ((int)uVar13 < *(int *)(pFVar4 + lVar17 + 8)) {
              uVar8 = uVar15;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar12 = (undefined8 *)(local_58 + *(longlong *)(pFVar4 + lVar17));
            iVar9 = *(int *)&pFVar11[8].field_0x0;
            if (iVar9 == *(int *)(pFVar11 + 0xc)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
            }
            *(int *)&pFVar11[8].field_0x0 = iVar9 + 1;
            lVar5 = *(longlong *)&pFVar11->field_0x0;
            *(undefined8 *)(lVar5 + (longlong)iVar9 * 0xc) = *puVar12;
            *(undefined4 *)(lVar5 + (longlong)iVar9 * 0xc + 8) = *(undefined4 *)(puVar12 + 1);
          }
          uVar14 = uVar14 + 1;
          lVar17 = lVar17 + 0x10;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar13 = uVar13 + 1;
      local_res18 = local_res18 + 1;
      local_58 = local_58 + 0xc;
      local_res20 = local_res20 + 0x10;
    } while (local_res18 < (int)uVar2);
  }
  return;
}

// UpdateCounts @ 148c34bb0

void __thiscall FClothTetherDataPrivate::UpdateCounts(FClothTetherDataPrivate *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  
  pTVar2 = &this->TetherNums;
  piVar1 = &(this->TetherNums).ArrayMax;
  if ((this->TetherNums).ArrayMax < 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,&pTVar2->AllocatorInstance,(this->TetherNums).ArrayNum,piVar1);
  }
  local_res10 = (this->TetherSlots).ArrayNum;
  uVar10 = (ulonglong)(int)local_res10;
  pFVar13 = (this->TetherSlots).AllocatorInstance.Data;
  local_res18 = pFVar13 + uVar10 * 0x10;
  while( true ) {
    pFVar4 = local_res18;
    if ((this->TetherSlots).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar4) break;
    uVar5 = *(uint *)(pFVar13 + 8);
    piVar3 = &(this->TetherNums).ArrayNum;
    uVar11 = *piVar3;
    uVar9 = uVar5;
    if ((int)uVar5 < (int)uVar11) {
      uVar9 = uVar11;
    }
    if ((int)uVar11 < (int)uVar9) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar9 - uVar11,&pTVar2->AllocatorInstance,piVar3,piVar1);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4,0,
             (longlong)(int)(uVar9 - uVar11) << 2);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < (int)uVar11) {
        uVar11 = uVar11 - uVar9;
        if ((int)(uVar11 | uVar9) < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (uVar11 != 0) {
          pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4;
          iVar8 = ((this->TetherNums).ArrayNum - uVar9) - uVar11;
          if (iVar8 != 0) {
            memmove(pFVar4,pFVar4 + (longlong)(int)uVar11 * 4,(longlong)iVar8 << 2);
          }
          piVar3 = &(this->TetherNums).ArrayNum;
          *piVar3 = *piVar3 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar2->AllocatorInstance,(this->TetherNums).ArrayNum,piVar1);
        }
      }
    }
    uVar11 = 0;
    if (0 < (int)uVar5) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < (this->TetherNums).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar11 = uVar11 + 1;
        pFVar4 = (pTVar2->AllocatorInstance).Data + lVar12;
        *(int *)pFVar4 = *(int *)pFVar4 + 1;
        lVar12 = lVar12 + 4;
      } while ((int)uVar11 < (int)uVar5);
    }
    pFVar13 = pFVar13 + 0x10;
    uVar10 = (ulonglong)local_res10;
  }
  return;
}

