// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 28

// Emplace<TPairInitializer<int_const_&,UE::Tasks::Private::FTaskHandle_&&>_> @ 14b2a35b0

FSetElementId __thiscall
TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,UE::Tasks::Private::FTaskHandle_&&>_>
          (TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,UE::Tasks::Private::FTaskHandle_&&> *param_1,
          bool *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (uint *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar11 = **(uint **)param_2;
    ((uint *)((longlong)local_48.Pointer + 8))[0] = 0;
    ((uint *)((longlong)local_48.Pointer + 8))[1] = 0;
    *(uint *)local_48.Pointer = uVar11;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar4;
    *puVar4 = 0;
    *(uint *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar11 = *(uint *)local_48.Pointer;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar11) * 4);
    if (iVar10 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar10 * 0x18) == uVar11) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            puVar4 = *(undefined8 **)(lVar3 + 8 + (longlong)iVar10 * 0x18);
            if (puVar4 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar4 + 6);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)*puVar4)(puVar4,1);
              }
            }
            memmove((void *)(lVar3 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar3 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar11;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(uint *)((longlong)local_48.Pointer + 0x10) = *(uint *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_const_&,Metasound::FOperatorPoolEntryID_const_&>_> @ 14b2a3800

FSetElementId __thiscall
TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,Metasound::FOperatorPoolEntryID_const_&>_>
          (TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,Metasound::FOperatorPoolEntryID_const_&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar1);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x38 + lVar1) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (int *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar3 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar3;
    uVar3 = puVar2[1];
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = *puVar2;
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = uVar3;
    uVar3 = puVar2[3];
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = puVar2[2];
    *(undefined8 *)((longlong)local_48.Pointer + 0x28) = uVar3;
    *(int *)((longlong)local_48.Pointer + 0x30) = -1;
  }
  uVar5 = CityHash64(local_48.Pointer,0x10);
  iVar10 = *(int *)puVar12;
  bVar14 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  iVar11 = local_48.Index;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + ((ulonglong)(this->HashSize - 1) & uVar5 & 0xffffffff) * 4);
    if (iVar10 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar10 * 0x38 + *(longlong *)&this->Elements);
        if (((*(int *)((longlong)local_48.Pointer + 0xc) == piVar8[3] &&
             *(int *)((longlong)local_48.Pointer + 8) == piVar8[2]) &&
            *(int *)((longlong)local_48.Pointer + 4) == piVar8[1]) &&
            *(int *)local_48.Pointer == *piVar8) {
          bVar14 = iVar10 != -1;
          if (bVar14) {
            memmove((void *)((longlong)iVar10 * 0x38 + *(longlong *)&this->Elements),
                    local_48.Pointer,0x30);
            TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar10;
          }
          goto LAB_14b2a397b;
        }
        iVar10 = piVar8[0xc];
      } while (iVar10 != -1);
    }
    bVar14 = false;
  }
LAB_14b2a397b:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar7 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar13 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x34) = uVar7;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(int *)((longlong)local_48.Pointer + 0x30) = *(int *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry_&&>_> @ 14b2a3a60

FSetElementId __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry_&&>_>
          (TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry_&&>
                 *param_1,bool *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  char *in_R9;
  undefined1 *puVar15;
  bool bVar16;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar8 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x44,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x44 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x44 + lVar3) = 0xffffffff;
    }
  }
  puVar15 = &(this->Elements).field_0x8;
  TSparseArrayBase<68,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<68,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer != (FOperatorPoolEntryID *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    puVar5 = *(undefined8 **)(param_2 + 8);
    uVar1 = *puVar4;
    uVar6 = puVar4[1];
    (local_48.Pointer)->A = (int)uVar1;
    (local_48.Pointer)->B = (int)((ulonglong)uVar1 >> 0x20);
    (local_48.Pointer)->C = (int)uVar6;
    (local_48.Pointer)->D = (int)((ulonglong)uVar6 >> 0x20);
    uVar1 = puVar4[2];
    uVar6 = puVar4[3];
    ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->SampleRate = (int)uVar1;
    ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->TargetBlockRate =
         (float)(int)((ulonglong)uVar1 >> 0x20);
    ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->ActualBlockRate = (float)(int)uVar6;
    ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->NumFramesPerBlock =
         (int)((ulonglong)uVar6 >> 0x20);
    uVar1 = *puVar5;
    uVar6 = puVar5[1];
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).A = (int)uVar1;
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).B =
         (int)((ulonglong)uVar1 >> 0x20);
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).C = (int)uVar6;
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).D =
         (int)((ulonglong)uVar6 >> 0x20);
    uVar1 = puVar5[2];
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorSettings).SampleRate =
         (int)uVar1;
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorSettings).
    TargetBlockRate = (float)(int)((ulonglong)uVar1 >> 0x20);
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorSettings).
    ActualBlockRate = *(float *)(puVar5 + 3);
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorSettings).
    NumFramesPerBlock = -1;
  }
  uVar14 = ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->SampleRate;
  iVar8 = ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->NumFramesPerBlock;
  uVar9 = CityHash64(local_48.Pointer,0x10);
  bVar16 = false;
  uVar14 = (uint)uVar9 * 0x40 + -0x61c88647 +
           (iVar8 + uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14) +
           ((uint)(uVar9 >> 2) & 0x3fffffff) ^ (uint)uVar9;
  if (*(int *)puVar15 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<Metasound::FOperatorPoolEntryID>(this,uVar14,local_48.Pointer);
    bVar16 = iVar8 != -1;
    if (bVar16) {
      memmove((void *)((longlong)iVar8 * 0x44 + *(longlong *)&this->Elements),local_48.Pointer,0x3c)
      ;
      TSparseArrayBase<68,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<68,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar16;
  }
  if (bVar16 == false) {
    uVar11 = *(int *)puVar15 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= this->HashSize)) {
      uVar14 = this->HashSize - 1U & uVar14;
      (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x40))->OperatorID).A = uVar14;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar14;
      (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorSettings).
      NumFramesPerBlock = *(int *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_&&>_> @ 14b2a3c90

FSetElementId __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_&&>_>
          (TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  uint uVar11;
  FOperatorPoolEntryID *_Src;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  float fVar14;
  uint uVar15;
  char *in_R9;
  undefined1 *puVar16;
  void *_Dst;
  bool bVar17;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar8 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar7 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  puVar16 = &(this->Elements).field_0x8;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  _Src = (FOperatorPoolEntryID *)0x0;
  if (local_48.Pointer != (FOperatorPoolEntryID *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    (local_48.Pointer)->A = (int)uVar5;
    (local_48.Pointer)->B = (int)((ulonglong)uVar5 >> 0x20);
    (local_48.Pointer)->C = (int)uVar6;
    (local_48.Pointer)->D = (int)((ulonglong)uVar6 >> 0x20);
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->SampleRate = (int)uVar5;
    ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->TargetBlockRate =
         (float)(int)((ulonglong)uVar5 >> 0x20);
    ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->ActualBlockRate = (float)(int)uVar6;
    ((FOperatorSettings *)((longlong)local_48.Pointer + 0x10))->NumFramesPerBlock =
         (int)((ulonglong)uVar6 >> 0x20);
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).A = 0;
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).B = 0;
    uVar5 = *puVar4;
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).A = (int)uVar5;
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).B =
         (int)((ulonglong)uVar5 >> 0x20);
    *puVar4 = 0;
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).C =
         *(uint *)(puVar4 + 1);
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorID).D =
         *(uint *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    (((FOperatorPoolEntryID *)((longlong)local_48.Pointer + 0x20))->OperatorSettings).SampleRate =
         -1;
    _Src = local_48.Pointer;
  }
  uVar15 = (_Src->OperatorSettings).SampleRate;
  iVar8 = (_Src->OperatorSettings).NumFramesPerBlock;
  uVar9 = CityHash64((char *)_Src,0x10);
  bVar17 = false;
  uVar15 = (uint)uVar9 * 0x40 + -0x61c88647 +
           (iVar8 + uVar15 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar15) +
           ((uint)(uVar9 >> 2) & 0x3fffffff) ^ (uint)uVar9;
  if (*(int *)puVar16 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<Metasound::FOperatorPoolEntryID>(this,uVar15,_Src);
    bVar17 = iVar8 != -1;
    if (bVar17) {
      _Dst = (void *)((longlong)iVar8 * 0x38 + *(longlong *)&this->Elements);
      DestructItems<Metasound::FOperatorAndInputs,int>
                (*(FOperatorAndInputs **)((longlong)_Dst + 0x20),*(int *)((longlong)_Dst + 0x28));
      if (*(void **)((longlong)_Dst + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x20));
      }
      memmove(_Dst,_Src,0x30);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar17;
  }
  if (bVar17 == false) {
    uVar11 = *(int *)puVar16 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= this->HashSize)) {
      fVar14 = (float)(this->HashSize - 1U & uVar15);
      _Src[1].OperatorSettings.TargetBlockRate = fVar14;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)fVar14;
      _Src[1].OperatorSettings.SampleRate = *(int *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&>_> @ 14b2a3f00

FSetElementId __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
::Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&>_>
          (TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&> *param_1,
          bool *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  undefined1 *in_R9;
  FSparseArrayAllocationInfo local_38;
  
  iVar2 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar2 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar2 = iVar2 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar3 = *(int *)((longlong)iVar8 * 0x38 + 4 + lVar4);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x38 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar8);
  if (local_38.Pointer != (char *)0x0) {
    puVar5 = *(undefined8 **)param_2;
    puVar6 = *(undefined8 **)(param_2 + 8);
    uVar7 = puVar5[1];
    *(undefined8 *)local_38.Pointer = *puVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar7;
    uVar7 = puVar5[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar5[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar7;
    uVar7 = puVar6[1];
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = *puVar6;
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = uVar7;
    pcVar1 = (char *)((longlong)local_38.Pointer + 0x30);
    pcVar1[0] = -1;
    pcVar1[1] = -1;
    pcVar1[2] = -1;
    pcVar1[3] = -1;
  }
  uVar14 = *(uint *)((longlong)local_38.Pointer + 0x10);
  iVar2 = *(int *)((longlong)local_38.Pointer + 0x1c);
  uVar9 = CityHash64(local_38.Pointer,0x10);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar11 < 1) || (iVar13 <= this->HashSize)) {
    uVar14 = this->HashSize - 1U &
             ((uint)uVar9 * 0x40 + -0x61c88647 +
              (iVar2 + uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14) +
              ((uint)(uVar9 >> 2) & 0x3fffffff) ^ (uint)uVar9);
    *(uint *)((longlong)local_38.Pointer + 0x34) = uVar14;
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar14;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) =
         *(undefined4 *)((longlong)FVar12 + uVar10 * 4);
    *(int *)((longlong)FVar12 + uVar10 * 4) = local_38.Index;
  }
  else {
    this->HashSize = iVar13;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FTopLevelAssetPath_const_&,Metasound::FConcurrentInstanceCounterManager::FStats_&&>_> @ 14b2a40d0

FSetElementId __thiscall
TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FTopLevelAssetPath_const_&,Metasound::FConcurrentInstanceCounterManager::FStats_&&>_>
          (TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FTopLevelAssetPath_const_&,Metasound::FConcurrentInstanceCounterManager::FStats_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  int iVar12;
  char *in_R9;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar11 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 8);
    lVar2 = (*(longlong **)param_2)[1];
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = *plVar3;
    *plVar3 = 0;
    *(longlong *)((longlong)local_48.Pointer + 0x18) = plVar3[1];
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
  }
  lVar2 = *(longlong *)((longlong)local_48.Pointer + 8);
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  lVar8 = *(longlong *)local_48.Pointer;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar8);
  uVar7 = uVar7 + (int)((ulonglong)lVar8 >> 0x20);
  iVar11 = *(int *)&(this->Elements).field_0x8;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  bVar13 = false;
  uVar7 = uVar7 * 0x40 + -0x61c88647 + uVar6 + (int)((ulonglong)lVar2 >> 0x20) + (uVar7 >> 2) ^
          uVar7;
  if ((iVar11 - iVar5 != 1) && (iVar11 != iVar5)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar8 = (longlong)iVar11;
        if ((*(longlong *)(lVar2 + lVar8 * 0x28) == *(longlong *)local_48.Pointer) &&
           (*(longlong *)(lVar2 + 8 + lVar8 * 0x28) == *(longlong *)((longlong)local_48.Pointer + 8)
           )) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            pvVar4 = *(void **)(lVar2 + 0x10 + (longlong)iVar11 * 0x28);
            if (pvVar4 != (void *)0x0) {
              if ((*(byte *)((longlong)pvVar4 + 0x14) & 0x20) != 0) {
                FCountersTrace::FreeCounterName(*(wchar_t **)((longlong)pvVar4 + 8));
              }
              ::operator_delete(pvVar4,0x18);
            }
            memmove((void *)(lVar2 + (longlong)iVar11 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 0x20 + lVar8 * 0x28);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar9 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_48.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar10 + uVar9 * 4);
      *(int *)((longlong)FVar10 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter_const_&>_> @ 14b2a4390

FSetElementId __thiscall
TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FName_const_&,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter_const_&>_>
          (TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    *(longlong *)((longlong)local_48.Pointer + 0x18) = plVar2[2];
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x28) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x20 + (longlong)iVar8 * 0x28);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FGuid> @ 14b2a4710

int __thiscall
TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[0xc];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<Metasound::FOperatorPoolEntryID> @ 14b2a47b0

int __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::FOperatorPoolEntryID>
          (TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
           *this,uint param_1,FOperatorPoolEntryID *param_2)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x44 + 0x3c + *(longlong *)&this->Elements))
    {
      puVar3 = (uint *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x44);
      if ((((puVar3[3] == (param_2->OperatorID).D && puVar3[2] == (param_2->OperatorID).C) &&
           puVar3[1] == (param_2->OperatorID).B) && *puVar3 == (param_2->OperatorID).A) &&
         (bVar2 = Metasound::operator==
                            ((FOperatorSettings *)(puVar3 + 4),&param_2->OperatorSettings), bVar2))
      {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<Metasound::FOperatorPoolEntryID> @ 14b2a4880

int __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::FOperatorPoolEntryID>
          (TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOperatorPoolEntryID *param_2)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      puVar3 = (uint *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x38);
      if ((((puVar3[3] == (param_2->OperatorID).D && puVar3[2] == (param_2->OperatorID).C) &&
           puVar3[1] == (param_2->OperatorID).B) && *puVar3 == (param_2->OperatorID).A) &&
         (bVar2 = Metasound::operator==
                            ((FOperatorSettings *)(puVar3 + 4),&param_2->OperatorSettings), bVar2))
      {
        return iVar1;
      }
    }
  }
  return -1;
}

// Move<TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>_> @ 14b2a4be0

void __cdecl
TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// RemoveImpl<int> @ 14b2a54a0

int __thiscall
TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar7 = (longlong)(int)uVar6 * 0x18,
        *(int *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 0x10 + *(longlong *)&this->Elements);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14b2a5587;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14b2a5587:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x10);
      TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FGuid> @ 14b2a5630

int __thiscall
TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
::RemoveImpl<FGuid>(TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
                    *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (lVar7 = (longlong)(int)uVar9 * 0x38,
        ((param_2->D != *(uint *)(lVar7 + 0xc + lVar2) || param_2->C != *(uint *)(lVar7 + 8 + lVar2)
         ) || param_2->B != *(uint *)(lVar7 + 4 + lVar2)) || param_2->A != *(uint *)(lVar7 + lVar2))
  {
    uVar9 = *(uint *)(lVar7 + 0x30 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14b2a573d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14b2a573d:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x34) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x30);
      TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar1 * 0x38);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<Metasound::FOperatorPoolEntryID> @ 14b2a57d0

int __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::FOperatorPoolEntryID>
          (TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOperatorPoolEntryID *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while ((puVar8 = (uint *)((longlong)(int)uVar6 * 0x38 + *(longlong *)&this->Elements),
         ((puVar8[2] != (param_2->OperatorID).C || puVar8[1] != (param_2->OperatorID).B) ||
         puVar8[3] != (param_2->OperatorID).D) || (param_2->OperatorID).A != *puVar8 ||
         (bVar3 = Metasound::operator==
                            ((FOperatorSettings *)(puVar8 + 4),&param_2->OperatorSettings), !bVar3))
        ) {
    uVar6 = puVar8[0xc];
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14b2a5907;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14b2a5907:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = (longlong)(int)uVar6 * 0x38 + *(longlong *)&this->Elements;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x34) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x30);
      TSparseArray<TSparseSetElement<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar1 * 0x38);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FName> @ 14b2a59c0

int __thiscall
TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar7 = (longlong)(int)uVar6 * 0x28,
        *(FName *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 0x20 + *(longlong *)&this->Elements);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14b2a5aa7;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14b2a5aa7:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Find @ 14b2b0800

TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry> *
__thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
       *this,FOperatorPoolEntryID *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  
  uVar1 = (param_1->OperatorSettings).SampleRate;
  iVar2 = (param_1->OperatorSettings).NumFramesPerBlock;
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = FindIndexByHash<Metasound::FOperatorPoolEntryID>
                    (this,((uint)(uVar3 >> 2) & 0x3fffffff) + 0x9e3779b9 +
                          (uint)uVar3 * 0x40 +
                          (iVar2 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) ^ (uint)uVar3,
                     param_1);
  if (iVar2 != -1) {
    return (TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
            *)((longlong)iVar2 * 0x44 + *(longlong *)&this->Elements);
  }
  return (TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>
          *)0x0;
}

// Find @ 14b2b08a0

TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> * __thiscall
TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
       *this,FTopLevelAssetPath *param_1)

{
  TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *pTVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  
  FVar2 = param_1->AssetName;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = param_1->PackageName;
  uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    (this->HashSize - 1U &
                    (uVar5 * 0x40 + uVar4 + FVar2.Number + -0x61c88647 + (uVar5 >> 2) ^ uVar5)) * 4)
    ;
    if (iVar7 != -1) {
      do {
        pTVar1 = (TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *)
                 (*(longlong *)&this->Elements + (longlong)iVar7 * 0x28);
        if ((*(FName *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x28) ==
             param_1->PackageName) &&
           (FVar2.ComparisonIndex.Value = *(uint *)&pTVar1->field_0x8,
           FVar2.Number = *(uint *)&pTVar1->field_0xc, FVar2 == param_1->AssetName)) {
          if (iVar7 == -1) {
            return (TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>
                    *)0x0;
          }
          return pTVar1;
        }
        iVar7 = *(int *)(pTVar1 + 1);
      } while (iVar7 != -1);
    }
  }
  return (TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats> *)0x0;
}

// Rehash @ 14b2b55e0

void __thiscall
TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14b2b56bc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14b2b56bc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b2b5780

void __thiscall
TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,Metasound::FOperatorPoolEntryID>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FOperatorPoolEntryID,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14b2b5857;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14b2b5857:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x34) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x30) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b2b5920

void __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar10 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar10 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14b2b59f7;
        uVar10 = puVar11[lVar6 + 1];
      }
      uStack_64 = -uVar10 & uVar10;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14b2b59f7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar4 = local_40.CurrentBitIndex;
        pcVar9 = (char *)((longlong)local_40.CurrentBitIndex * 0x38 + *(longlong *)&this->Elements);
        uVar10 = *(uint *)(pcVar9 + 0x10);
        iVar2 = *(int *)(pcVar9 + 0x1c);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar10 = (((uint)(uVar5 >> 2) & 0x3fffffff) +
                  (iVar2 + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10) + 0x9e3779b9 +
                  (uint)uVar5 * 0x40 ^ (uint)uVar5) & *piVar1 - 1U;
        *(uint *)(pcVar9 + 0x34) = uVar10;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(pcVar9 + 0x30) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar4;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b2b5b00

void __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar10 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar10 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14b2b5bd7;
        uVar10 = puVar11[lVar6 + 1];
      }
      uStack_64 = -uVar10 & uVar10;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14b2b5bd7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar4 = local_40.CurrentBitIndex;
        pcVar9 = (char *)((longlong)local_40.CurrentBitIndex * 0x44 + *(longlong *)&this->Elements);
        uVar10 = *(uint *)(pcVar9 + 0x10);
        iVar2 = *(int *)(pcVar9 + 0x1c);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar10 = (((uint)(uVar5 >> 2) & 0x3fffffff) +
                  (iVar2 + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10) + 0x9e3779b9 +
                  (uint)uVar5 * 0x40 ^ (uint)uVar5) & *piVar1 - 1U;
        *(uint *)(pcVar9 + 0x40) = uVar10;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(pcVar9 + 0x3c) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar4;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b2b5ce0

void __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar10 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar10 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14b2b5db7;
        uVar10 = puVar11[lVar6 + 1];
      }
      uStack_64 = -uVar10 & uVar10;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14b2b5db7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar4 = local_40.CurrentBitIndex;
        pcVar9 = (char *)((longlong)local_40.CurrentBitIndex * 0x38 + *(longlong *)&this->Elements);
        uVar10 = *(uint *)(pcVar9 + 0x10);
        iVar2 = *(int *)(pcVar9 + 0x1c);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar10 = (((uint)(uVar5 >> 2) & 0x3fffffff) +
                  (iVar2 + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10) + 0x9e3779b9 +
                  (uint)uVar5 * 0x40 ^ (uint)uVar5) & *piVar1 - 1U;
        *(uint *)(pcVar9 + 0x34) = uVar10;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(pcVar9 + 0x30) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar4;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b2b5ec0

void __thiscall
TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar7 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14b2b5f97;
        uVar7 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar10 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar3 < iStack_54) {
LAB_14b2b5f97:
        iStack_54 = iVar3;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        uVar4 = *(undefined8 *)
                 (*(longlong *)&this->Elements + 8 + (longlong)local_40.CurrentBitIndex * 0x28);
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28);
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar5 = *puVar2;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
        uVar8 = uVar8 + (int)((ulonglong)uVar5 >> 0x20);
        uVar7 = ((uVar8 >> 2) + uVar7 + (int)((ulonglong)uVar4 >> 0x20) + uVar8 * 0x40 + -0x61c88647
                ^ uVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x24) = uVar7;
        FVar6 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar6;
        }
        uVar10 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar11 + uVar10 * 4);
        *(int *)((longlong)FVar11 + uVar10 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14b2b60b0

void __thiscall
TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14b2b6187;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14b2b6187:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x24) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RemoveByIndex @ 14b2b6c70

void __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,Metasound::Engine::FOperatorCacheStatTracker::FStatEntry,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14b2b6ce2;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14b2b6ce2:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x44 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x40) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x3c + (longlong)iVar1 * 0x44);
  }
  *piVar7 = *(int *)(lVar5 + 0x3c);
  TSparseArrayBase<68,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<68,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reset @ 14b2b7380

void __thiscall
TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// UnhashElements @ 14b2b9ee0

void __thiscall
TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,UE::Tasks::Private::FTaskHandle>,TDefaultMapHashableKeyFuncs<int,UE::Tasks::Private::FTaskHandle,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14b2b9fdb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14b2b9fdb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14b2ba0d0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14b2ba0d0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Tasks::Private::FTaskHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14b2ba170

void __thiscall
TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14b2ba26b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14b2ba26b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14b2ba360;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14b2ba360:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x24 + (longlong)local_60.CurrentBitIndex * 0x28) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

