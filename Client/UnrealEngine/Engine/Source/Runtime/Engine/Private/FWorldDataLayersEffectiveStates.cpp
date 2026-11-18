// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FWorldDataLayersEffectiveStates @ 148a41b70

FWorldDataLayersEffectiveStates * __thiscall
FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates
          (FWorldDataLayersEffectiveStates *this)

{
  *(undefined8 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  (this->ReplicatedEffectiveActiveDataLayerNames).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ReplicatedEffectiveActiveDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  (this->ReplicatedEffectiveLoadedDataLayerNames).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ReplicatedEffectiveLoadedDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->LocalEffectiveActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  (this->LocalEffectiveActiveDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
  ;
  (this->LocalEffectiveActiveDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  (this->LocalEffectiveLoadedDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
  ;
  (this->LocalEffectiveLoadedDataLayerNames).HashSize = 0;
  this->UpdateEpoch = 0;
  *(undefined8 *)&(this->AllEffectiveActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x20 = 0;
  this->AllEffectiveActiveDataLayerNamesEpoch = 0x7fffffff;
  this->AllEffectiveLoadedDataLayerNamesEpoch = 0x7fffffff;
  *(undefined4 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  (this->AllEffectiveActiveDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllEffectiveActiveDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->AllEffectiveLoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  (this->AllEffectiveLoadedDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllEffectiveLoadedDataLayerNames).HashSize = 0;
  return this;
}

// ~FWorldDataLayersEffectiveStates @ 148a44220

void __thiscall
FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates
          (FWorldDataLayersEffectiveStates *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->AllEffectiveLoadedDataLayerNames).HashSize = 0;
  FVar1 = (this->AllEffectiveLoadedDataLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllEffectiveLoadedDataLayerNames).Elements);
  (this->AllEffectiveActiveDataLayerNames).HashSize = 0;
  FVar1 = (this->AllEffectiveActiveDataLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllEffectiveActiveDataLayerNames).Elements);
  (this->LocalEffectiveLoadedDataLayerNames).HashSize = 0;
  FVar1 = (this->LocalEffectiveLoadedDataLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LocalEffectiveLoadedDataLayerNames).Elements);
  (this->LocalEffectiveActiveDataLayerNames).HashSize = 0;
  FVar1 = (this->LocalEffectiveActiveDataLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LocalEffectiveActiveDataLayerNames).Elements);
  (this->ReplicatedEffectiveLoadedDataLayerNames).HashSize = 0;
  FVar1 = (this->ReplicatedEffectiveLoadedDataLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements);
  (this->ReplicatedEffectiveActiveDataLayerNames).HashSize = 0;
  FVar1 = (this->ReplicatedEffectiveActiveDataLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetAllEffectiveActiveDataLayerNames @ 148a53fb0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FWorldDataLayersEffectiveStates::GetAllEffectiveActiveDataLayerNames
          (FWorldDataLayersEffectiveStates *this)

{
  if (this->AllEffectiveActiveDataLayerNamesEpoch != this->UpdateEpoch) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              (&this->AllEffectiveActiveDataLayerNames,
               &this->ReplicatedEffectiveActiveDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (&this->AllEffectiveActiveDataLayerNames,&this->LocalEffectiveActiveDataLayerNames);
    this->AllEffectiveActiveDataLayerNamesEpoch = this->UpdateEpoch;
    return &this->AllEffectiveActiveDataLayerNames;
  }
  return &this->AllEffectiveActiveDataLayerNames;
}

// GetAllEffectiveLoadedDataLayerNames @ 148a54030

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames
          (FWorldDataLayersEffectiveStates *this)

{
  if (this->AllEffectiveLoadedDataLayerNamesEpoch != this->UpdateEpoch) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              (&this->AllEffectiveLoadedDataLayerNames,
               &this->ReplicatedEffectiveLoadedDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (&this->AllEffectiveLoadedDataLayerNames,&this->LocalEffectiveLoadedDataLayerNames);
    this->AllEffectiveLoadedDataLayerNamesEpoch = this->UpdateEpoch;
    return &this->AllEffectiveLoadedDataLayerNames;
  }
  return &this->AllEffectiveLoadedDataLayerNames;
}

// GetDataLayerEffectiveRuntimeStateByName @ 148a55350

EDataLayerRuntimeState __thiscall
FWorldDataLayersEffectiveStates::GetDataLayerEffectiveRuntimeStateByName
          (FWorldDataLayersEffectiveStates *this,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  EDataLayerRuntimeState EVar5;
  uint uVar6;
  FNameEntryId FVar7;
  char *pcVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  
  FVar7 = param_1.ComparisonIndex.Value;
  uVar6 = ::GetTypeHash(FVar7);
  uVar3 = param_1.Number;
  if (*(int *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x8 !=
      *(int *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x34) {
    FVar9 = (this->ReplicatedEffectiveActiveDataLayerNames).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->ReplicatedEffectiveActiveDataLayerNames).Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((this->ReplicatedEffectiveActiveDataLayerNames).HashSize - 1U & uVar3 + uVar6)
                     * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements;
LAB_148a553b0:
      if (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) goto code_r0x000148a553c0;
      if (iVar10 != -1) {
        uVar6 = ::GetTypeHash(FVar7);
        if (*(int *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x8 ==
            *(int *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x34) {
          return Activated;
        }
        FVar9 = (this->ReplicatedEffectiveLoadedDataLayerNames).Hash.SecondaryData;
        if (FVar9 == (ForElementType<FSetElementId>)0x0) {
          FVar9 = (ForElementType<FSetElementId>)
                  &(this->ReplicatedEffectiveLoadedDataLayerNames).Hash;
        }
        iVar10 = *(int *)((longlong)FVar9 +
                         (ulonglong)
                         ((this->ReplicatedEffectiveLoadedDataLayerNames).HashSize - 1U &
                         uVar6 + uVar3) * 4);
        if (iVar10 == -1) {
          return Activated;
        }
        lVar1 = *(longlong *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements;
        while (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) {
          iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
          if (iVar10 == -1) {
            return Activated;
          }
        }
        iVar10 = 0x6d5;
        pcVar8 = "!ReplicatedEffectiveLoadedDataLayerNames.Contains(InDataLayerName)";
        goto LAB_148a556a3;
      }
    }
  }
LAB_148a553cd:
  uVar6 = ::GetTypeHash(FVar7);
  if (*(int *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x8 !=
      *(int *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x34) {
    FVar9 = (this->ReplicatedEffectiveLoadedDataLayerNames).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->ReplicatedEffectiveLoadedDataLayerNames).Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((this->ReplicatedEffectiveLoadedDataLayerNames).HashSize - 1U & uVar6 + uVar3)
                     * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements;
LAB_148a55410:
      if (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) goto code_r0x000148a5541f;
      uVar6 = ::GetTypeHash(FVar7);
      if (*(int *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x8 ==
          *(int *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x34) {
        return Loaded;
      }
      FVar9 = (this->ReplicatedEffectiveActiveDataLayerNames).Hash.SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&(this->ReplicatedEffectiveActiveDataLayerNames).Hash
        ;
      }
      iVar10 = *(int *)((longlong)FVar9 +
                       (ulonglong)
                       ((this->ReplicatedEffectiveActiveDataLayerNames).HashSize - 1U &
                       uVar6 + uVar3) * 4);
      if (iVar10 == -1) {
        return Loaded;
      }
      lVar1 = *(longlong *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements;
      while (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) {
        iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
        if (iVar10 == -1) {
          return Loaded;
        }
      }
      iVar10 = 0x6da;
      pcVar8 = "!ReplicatedEffectiveActiveDataLayerNames.Contains(InDataLayerName)";
      goto LAB_148a55753;
    }
  }
LAB_148a55428:
  uVar6 = ::GetTypeHash(FVar7);
  if (*(int *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x8 !=
      *(int *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x34) {
    FVar9 = (this->LocalEffectiveActiveDataLayerNames).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->LocalEffectiveActiveDataLayerNames).Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((this->LocalEffectiveActiveDataLayerNames).HashSize - 1U & uVar3 + uVar6) * 4)
    ;
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&(this->LocalEffectiveActiveDataLayerNames).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) == param_1) {
          if (iVar10 != -1) {
            uVar6 = ::GetTypeHash(FVar7);
            if (*(int *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x8 !=
                *(int *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x34) {
              FVar9 = (this->LocalEffectiveLoadedDataLayerNames).Hash.SecondaryData;
              if (FVar9 == (ForElementType<FSetElementId>)0x0) {
                FVar9 = (ForElementType<FSetElementId>)
                        &(this->LocalEffectiveLoadedDataLayerNames).Hash;
              }
              iVar10 = *(int *)((longlong)FVar9 +
                               (ulonglong)
                               ((this->LocalEffectiveLoadedDataLayerNames).HashSize - 1U &
                               uVar6 + uVar3) * 4);
              if (iVar10 != -1) {
                lVar1 = *(longlong *)&(this->LocalEffectiveLoadedDataLayerNames).Elements;
                while (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) {
                  iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
                  if (iVar10 == -1) {
                    return Activated;
                  }
                }
                iVar10 = 0x6df;
                pcVar8 = "!LocalEffectiveLoadedDataLayerNames.Contains(InDataLayerName)";
LAB_148a556a3:
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  (pcVar8,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                                   ,iVar10,L"");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  EVar5 = (*pcVar2)();
                  return EVar5;
                }
              }
            }
            return Activated;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  uVar6 = ::GetTypeHash(FVar7);
  if (*(int *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x8 !=
      *(int *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x34) {
    FVar9 = (this->LocalEffectiveLoadedDataLayerNames).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->LocalEffectiveLoadedDataLayerNames).Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((this->LocalEffectiveLoadedDataLayerNames).HashSize - 1U & uVar6 + uVar3) * 4)
    ;
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&(this->LocalEffectiveLoadedDataLayerNames).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) == param_1) {
          uVar6 = ::GetTypeHash(FVar7);
          if (*(int *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x8 !=
              *(int *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x34) {
            FVar9 = (this->LocalEffectiveActiveDataLayerNames).Hash.SecondaryData;
            if (FVar9 == (ForElementType<FSetElementId>)0x0) {
              FVar9 = (ForElementType<FSetElementId>)
                      &(this->LocalEffectiveActiveDataLayerNames).Hash;
            }
            iVar10 = *(int *)((longlong)FVar9 +
                             (ulonglong)
                             ((this->LocalEffectiveActiveDataLayerNames).HashSize - 1U &
                             uVar6 + uVar3) * 4);
            if (iVar10 != -1) {
              lVar1 = *(longlong *)&(this->LocalEffectiveActiveDataLayerNames).Elements;
              while (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) {
                iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
                if (iVar10 == -1) {
                  return Loaded;
                }
              }
              iVar10 = 0x6e4;
              pcVar8 = "!LocalEffectiveActiveDataLayerNames.Contains(InDataLayerName)";
LAB_148a55753:
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                (pcVar8,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                                 ,iVar10,L"");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                EVar5 = (*pcVar2)();
                return EVar5;
              }
            }
          }
          return Loaded;
        }
        iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  return Unloaded;
code_r0x000148a553c0:
  iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
  if (iVar10 == -1) goto LAB_148a553cd;
  goto LAB_148a553b0;
code_r0x000148a5541f:
  iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
  if (iVar10 == -1) goto LAB_148a55428;
  goto LAB_148a55410;
}

// Reset @ 148a671a0

void __thiscall FWorldDataLayersEffectiveStates::Reset(FWorldDataLayersEffectiveStates *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&this->ReplicatedEffectiveActiveDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&this->ReplicatedEffectiveLoadedDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&this->LocalEffectiveActiveDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&this->LocalEffectiveLoadedDataLayerNames);
  this->UpdateEpoch = this->UpdateEpoch + 1;
  return;
}

// SetDataLayerEffectiveRuntimeState @ 148a682c0

bool __thiscall
FWorldDataLayersEffectiveStates::SetDataLayerEffectiveRuntimeState
          (FWorldDataLayersEffectiveStates *this,FName param_1,bool param_2,
          EDataLayerRuntimeState param_3,EDataLayerRuntimeState *param_4)

{
  EDataLayerRuntimeState EVar1;
  FWorldDataLayersEffectiveStates *this_00;
  FWorldDataLayersEffectiveStates *this_01;
  longlong lVar2;
  FName local_res10 [2];
  FName local_res20;
  
  local_res10[0] = param_1;
  EVar1 = GetDataLayerEffectiveRuntimeStateByName(this,param_1);
  *param_4 = EVar1;
  if (EVar1 != param_3) {
    lVar2 = 0xf0;
    if (!param_2) {
      lVar2 = 0x50;
    }
    this_00 = (FWorldDataLayersEffectiveStates *)
              ((this->ReplicatedEffectiveActiveDataLayerNames).Hash.InlineData + lVar2 + -0x38);
    this_01 = (FWorldDataLayersEffectiveStates *)&this->LocalEffectiveActiveDataLayerNames;
    if (!param_2) {
      this_01 = this;
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,param_1);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (&this_01->ReplicatedEffectiveActiveDataLayerNames,param_1);
    if ((param_3 == Loaded) || (this_00 = this_01, param_3 == Activated)) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&this_00->ReplicatedEffectiveActiveDataLayerNames,&local_res20,(bool *)local_res10)
      ;
    }
    this->UpdateEpoch = this->UpdateEpoch + 1;
    return true;
  }
  return false;
}

// SetReplicatedEffectiveActiveDataLayerNames @ 148a691f0

void __thiscall
FWorldDataLayersEffectiveStates::SetReplicatedEffectiveActiveDataLayerNames
          (FWorldDataLayersEffectiveStates *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&this->ReplicatedEffectiveActiveDataLayerNames);
  local_18.DataPtr = (FName *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
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
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (&this->ReplicatedEffectiveActiveDataLayerNames,&local_18);
  this->UpdateEpoch = this->UpdateEpoch + 1;
  return;
}

// SetReplicatedEffectiveLoadedDataLayerNames @ 148a69270

void __thiscall
FWorldDataLayersEffectiveStates::SetReplicatedEffectiveLoadedDataLayerNames
          (FWorldDataLayersEffectiveStates *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&this->ReplicatedEffectiveLoadedDataLayerNames);
  local_18.DataPtr = (FName *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
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
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (&this->ReplicatedEffectiveLoadedDataLayerNames,&local_18);
  this->UpdateEpoch = this->UpdateEpoch + 1;
  return;
}

// FWorldDataLayersEffectiveStates @ 148ab3d10

FWorldDataLayersEffectiveStates * __thiscall
FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates
          (FWorldDataLayersEffectiveStates *this,FWorldDataLayersEffectiveStates *param_1)

{
  *(undefined8 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicatedEffectiveActiveDataLayerNames).Elements.field_0x34 = 0;
  (this->ReplicatedEffectiveActiveDataLayerNames).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ReplicatedEffectiveActiveDataLayerNames).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->ReplicatedEffectiveActiveDataLayerNames,
             &param_1->ReplicatedEffectiveActiveDataLayerNames);
  *(undefined8 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicatedEffectiveLoadedDataLayerNames).Elements.field_0x34 = 0;
  (this->ReplicatedEffectiveLoadedDataLayerNames).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ReplicatedEffectiveLoadedDataLayerNames).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->ReplicatedEffectiveLoadedDataLayerNames,
             &param_1->ReplicatedEffectiveLoadedDataLayerNames);
  *(undefined8 *)&(this->LocalEffectiveActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalEffectiveActiveDataLayerNames).Elements.field_0x34 = 0;
  (this->LocalEffectiveActiveDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
  ;
  (this->LocalEffectiveActiveDataLayerNames).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->LocalEffectiveActiveDataLayerNames,&param_1->LocalEffectiveActiveDataLayerNames)
  ;
  *(undefined8 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalEffectiveLoadedDataLayerNames).Elements.field_0x34 = 0;
  (this->LocalEffectiveLoadedDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
  ;
  (this->LocalEffectiveLoadedDataLayerNames).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->LocalEffectiveLoadedDataLayerNames,&param_1->LocalEffectiveLoadedDataLayerNames)
  ;
  this->UpdateEpoch = param_1->UpdateEpoch;
  this->AllEffectiveActiveDataLayerNamesEpoch = param_1->AllEffectiveActiveDataLayerNamesEpoch;
  this->AllEffectiveLoadedDataLayerNamesEpoch = param_1->AllEffectiveLoadedDataLayerNamesEpoch;
  *(undefined8 *)&(this->AllEffectiveActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllEffectiveActiveDataLayerNames).Elements.field_0x34 = 0;
  (this->AllEffectiveActiveDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllEffectiveActiveDataLayerNames).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->AllEffectiveActiveDataLayerNames,&param_1->AllEffectiveActiveDataLayerNames);
  *(undefined8 *)&(this->AllEffectiveLoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllEffectiveLoadedDataLayerNames).Elements.field_0x34 = 0;
  (this->AllEffectiveLoadedDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllEffectiveLoadedDataLayerNames).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->AllEffectiveLoadedDataLayerNames,&param_1->AllEffectiveLoadedDataLayerNames);
  return this;
}

