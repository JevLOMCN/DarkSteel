// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 6

// FindOrAddImpl<int_const_&> @ 14db88820

FClothSimulData * __thiscall
TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x110 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FClothSimulData *)(piVar2 + 4);
          }
          break;
        }
        iVar1 = piVar2[0x40];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FClothSimulData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x110 + 0x10);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14db899f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
           *this,TArray<Chaos::FClothingSimulationSolver_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
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
  ulonglong uVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar16 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_14db89cd0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_14db89cd0;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14db89b01;
      }
    }
    else {
LAB_14db89b01:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar16;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar16;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar11 = *(uint *)FVar17;
      uVar13 = uVar16;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14db89c12;
        uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14db89c12:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (ulonglong *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar11 = ((uint)(*puVar15 >> 0x14) & 0xffff ^ (uint)(*puVar15 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = (uVar11 >> 0x10 ^ uVar11) & local_50 - 1;
        *(uint *)((longlong)puVar15 + 0xc) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar13 * 4);
        *(int *)(FVar9.Data + uVar13 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14db89cd0:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar16;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar18;
    uVar13 = uVar16;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar16;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar16 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14db89d7e;
      uVar12 = puVar18[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar16 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_14db89d7e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar16 = *(ulonglong *)(lVar4 + (longlong)(int)uVar10 * 0x18);
      uVar14 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & (uVar14 >> 0x10 ^ uVar14)) * 4
                             ); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) == uVar16) goto LAB_14db89f0f;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)(lVar4 + (longlong)(int)uVar10 * 0x18);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar2;
      TSet<Chaos::FClothingSimulationSolver_*,DefaultKeyFuncs<Chaos::FClothingSimulationSolver_*,0>,FDefaultSetAllocator>
      ::Emplace<Chaos::FClothingSimulationSolver_*_const_&>
                ((TSet<Chaos::FClothingSimulationSolver_*,DefaultKeyFuncs<Chaos::FClothingSimulationSolver_*,0>,FDefaultSetAllocator>
                  *)local_98,(FClothingSimulationSolver **)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x18));
LAB_14db89f0f:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<Chaos::FClothingSimulationSolver_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::FClothingSimulationSolver_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Chaos::FClothingSimulationSolver_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// Find @ 14dbf2f10

TObjectPtr<UClothConfigBase> * __thiscall
TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
::Find(TMapBase<FName,TObjectPtr<UClothConfigBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothConfigBase>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UClothConfigBase> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TObjectPtr<UClothConfigBase> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UClothConfigBase> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TObjectPtr<UClothConfigBase> *)0x0;
}

// Find @ 14dbf2fb0

FClothingAccessoryMeshData * __thiscall
TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
::Find(TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FClothingAccessoryMeshData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FClothingAccessoryMeshData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FClothingAccessoryMeshData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x11].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FClothingAccessoryMeshData *)0x0;
}

// FindChecked @ 14dbf33e0

FSolverData * __thiscall
TMapBase<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>_>
::FindChecked(TMapBase<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>_>
              *this,FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar3;
  FSolverData *pFVar4;
  
  pTVar3 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                 *)0x0) {
    return (FSolverData *)&pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSolverData *)(*pcVar1)();
    return pFVar4;
  }
  return (FSolverData *)&DAT_00000008;
}

// FindRef @ 14dbf3480

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
::FindRef(TMapBase<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *this,FString *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if ((iVar3 != -1) &&
     (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar4 != 0)) {
    return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)(lVar4 + 0x10);
  }
  return param_2;
}

