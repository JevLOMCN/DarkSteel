// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 42

// Emplace<TPairInitializer<FName_&&,FDelegateHandle_const_&>_> @ 14ec4b3f0

FSetElementId __thiscall
TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_&&,FDelegateHandle_const_&>_>
          (TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&&,FDelegateHandle_const_&> *param_1,bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  char *in_R9;
  int iVar8;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar8 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar8;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FName,FDelegateHandle>_> *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar2;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_38.Pointer;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  iVar6 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
  iVar8 = local_38.Index;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x18) == *(longlong *)local_38.Pointer) {
          bVar9 = iVar6 != -1;
          if (bVar9) {
            memmove((void *)(lVar1 + (longlong)iVar6 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            iVar8 = iVar6;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,iVar8);
  }
  *(int *)&param_1->Key = iVar8;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_> @ 14ec4b5c0

FSetElementId __thiscall
TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
          (TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_char_const_&,FName_const_&> *param_1,bool *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_38;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar3 = *(int *)(lVar4 + 4 + (longlong)iVar6 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (byte *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 8);
    *(byte *)local_38.Pointer = **(byte **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 4) = *puVar5;
    pbVar1 = (byte *)((longlong)local_38.Pointer + 0xc);
    pbVar1[0] = 0xff;
    pbVar1[1] = 0xff;
    pbVar1[2] = 0xff;
    pbVar1[3] = 0xff;
  }
  iVar11 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  bVar2 = *(byte *)local_38.Pointer;
  if ((iVar11 - iVar6 != 1) && (iVar11 != iVar6)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + ((ulonglong)(this->HashSize - 1) & (ulonglong)bVar2) * 4);
    if (iVar11 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(byte *)(lVar4 + (longlong)iVar11 * 0x14) == bVar2) {
          bVar12 = iVar11 != -1;
          if (bVar12) {
            memmove((void *)(lVar4 + (longlong)iVar11 * 0x14),local_38.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar4 + 0xc + (longlong)iVar11 * 0x14);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)bVar2;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (ulonglong)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UNetConnection_*_const_&,AOnlineBeaconHost::FConnectionState_&&>_> @ 14ec4b7d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UNetConnection_*_const_&,AOnlineBeaconHost::FConnectionState_&&>_>
          (TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UNetConnection_*_const_&,AOnlineBeaconHost::FConnectionState_&&>
                 *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  FTimerManager *this_00;
  FTimerData *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    uVar7 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar7;
    *(ulonglong *)((longlong)local_48.Pointer + 0x18) = puVar3[2];
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
  }
  uVar7 = *(ulonglong *)local_48.Pointer;
  bVar12 = false;
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar11 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((iVar11 - iVar4 != 1) && (iVar11 != iVar4)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar11 * 0x28) == uVar7) {
          bVar12 = iVar11 != -1;
          if (bVar12) {
            _Dst = (void *)(lVar2 + (longlong)iVar11 * 0x28);
            this_00 = AActor::GetWorldTimerManager
                                (*(AActor **)(lVar2 + 8 + (longlong)iVar11 * 0x28));
            pFVar5 = FTimerManager::FindTimer(this_00,(FTimerHandle *)((longlong)_Dst + 0x10));
            if (pFVar5 != (FTimerData *)0x0) {
              FTimerManager::InternalClearTimer
                        (this_00,(FTimerHandle)*(ulong64 *)((longlong)_Dst + 0x10));
            }
            *(undefined8 *)((longlong)_Dst + 0x10) = 0;
            memmove(_Dst,local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 0x20 + (longlong)iVar11 * 0x28);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,FDelegateHandle_const_&>_> @ 14ec4ba70

FSetElementId __thiscall
TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,FDelegateHandle_const_&>_>
          (TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,FDelegateHandle_const_&> *param_1,bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  char *in_R9;
  int iVar8;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar8 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar8;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FName,FDelegateHandle>_> *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar2;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_38.Pointer;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  iVar6 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
  iVar8 = local_38.Index;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x18) == *(longlong *)local_38.Pointer) {
          bVar9 = iVar6 != -1;
          if (bVar9) {
            memmove((void *)(lVar1 + (longlong)iVar6 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            iVar8 = iVar6;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,iVar8);
  }
  *(int *)&param_1->Key = iVar8;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,enum_EOnlineKeyValuePairDataType::Type_&&>_> @ 14ec4bc40

FSetElementId __thiscall
TSet<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>,TDefaultMapHashableKeyFuncs<FString,enum_EOnlineKeyValuePairDataType::Type,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,enum_EOnlineKeyValuePairDataType::Type_&&>_>
          (void *this,
          TPairInitializer<FString_const_&,EOnlineKeyValuePairDataType::Type_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  char cVar10;
  FString *_Src;
  longlong lVar11;
  char *in_R9;
  int iVar12;
  undefined8 *_Dst;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + *(longlong *)this);
    iVar6 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar1;
    *(int *)((longlong)this + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar4);
  _Src = (FString *)0x0;
  iVar4 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    *(undefined1 *)&(((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data
         = *puVar2;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar6 = (_Src->Data).ArrayNum;
  if (iVar6 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar4 = iVar6 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar9);
  cVar10 = '\0';
  iVar4 = local_48.Index;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar11 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar11 = (longlong)this + 0x38;
    }
    iVar4 = *(int *)(lVar11 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar5) * 4);
    while (iVar4 != -1) {
      iVar6 = (_Src->Data).ArrayNum;
      lVar11 = (longlong)iVar4 * 0x20;
      iVar1 = *(int *)(*(longlong *)this + 8 + lVar11);
      if (iVar1 == iVar6) {
        if (1 < iVar1) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)this + lVar11),
                             (wchar_t *)(_Src->Data).AllocatorInstance.Data);
          bVar13 = iVar6 == 0;
          goto LAB_14ec4bda0;
        }
LAB_14ec4be0f:
        cVar10 = '\x01';
        _Dst = (undefined8 *)((longlong)iVar4 * 0x20 + *(longlong *)this);
        pvVar3 = (void *)*_Dst;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        memmove(_Dst,_Src,0x18);
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(this,local_48.Index,1);
        goto LAB_14ec4bdbd;
      }
      bVar13 = iVar1 + iVar6 == 1;
LAB_14ec4bda0:
      if (bVar13) goto LAB_14ec4be0f;
      iVar4 = *(int *)(*(longlong *)this + 0x18 + lVar11);
    }
    cVar10 = '\0';
    iVar4 = local_48.Index;
  }
LAB_14ec4bdbd:
  if (in_R9 != (char *)0x0) {
    *in_R9 = cVar10;
  }
  if (cVar10 == '\0') {
    uVar8 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar12 <= *(int *)((longlong)this + 0x48))) {
      uVar5 = *(int *)((longlong)this + 0x48) - 1U & uVar5;
      _Src[1].Data.ArrayMax = uVar5;
      lVar11 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar11 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar5;
      _Src[1].Data.ArrayNum = *(int *)(lVar11 + uVar7 * 4);
      *(int *)(lVar11 + uVar7 * 4) = iVar4;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar4;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>_> @ 14ec4beb0

FSetElementId __thiscall
TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>_>
          (TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> *pTVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FString *_Src;
  char *in_R9;
  undefined8 *_Dst;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  _Src = (FString *)0x0;
  iVar6 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    pTVar3 = *(TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
               **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>::
    TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
              ((TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                *)((longlong)local_48.Pointer + 0x10),pTVar3);
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar4 = (_Src->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar6 = iVar4 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  bVar12 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,_Src);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (undefined8 *)((longlong)iVar6 * 0x30 + *(longlong *)&this->Elements);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(_Dst + 2));
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x28);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      _Src[2].Data.ArrayMax = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      _Src[2].Data.ArrayNum = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>_> @ 14ec4c100

FSetElementId __thiscall
TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>_>
          (TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy> *pTVar3
  ;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FString *_Src;
  char *in_R9;
  undefined8 *_Dst;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  _Src = (FString *)0x0;
  iVar6 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    pTVar3 = *(TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
               **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
                *)((longlong)local_48.Pointer + 0x10),pTVar3);
    (((FString *)((longlong)local_48.Pointer + 0x20))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar4 = (_Src->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar6 = iVar4 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  bVar12 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,_Src);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (undefined8 *)((longlong)iVar6 * 0x30 + *(longlong *)&this->Elements);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(_Dst + 2));
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x28);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      _Src[2].Data.ArrayMax = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      _Src[2].Data.ArrayNum = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FString> @ 14ec4c350

int __thiscall
TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4 * 0x30);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4 * 0x30),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(*(longlong *)&this->Elements + 0x28 + lVar4 * 0x30);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14ec4c410

int __thiscall
TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4 * 0x30);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4 * 0x30),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(*(longlong *)&this->Elements + 0x28 + lVar4 * 0x30);
    }
  }
  return -1;
}

// RemoveImpl<UNetConnection_const_*> @ 14ec50980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
::RemoveImpl<UNetConnection_const_*>
          (TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
           *this,uint param_1,UNetConnection **param_2)

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
        *(UNetConnection **)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ec50a67;
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
LAB_14ec50a67:
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
      TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
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

// operator= @ 14ec579d0

TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  *pTVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar5 = *(int *)&(param_1->Elements).field_0x8;
  lVar10 = (longlong)iVar5;
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar5,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar8 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar8 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar8,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    uVar9 = 1;
    puVar8 = (undefined1 *)(*(longlong *)&this->Elements + 0x28);
    lVar12 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar11 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar11)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar7 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar7 = puVar2;
      }
      iVar5 = iVar11;
      if (iVar11 < 0) {
        iVar5 = iVar11 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        *(undefined4 *)(puVar8 + -0x28) = *(undefined4 *)(puVar8 + lVar12 + -0x28);
        *(undefined4 *)(puVar8 + -0x24) = *(undefined4 *)(puVar8 + lVar12 + -0x24);
      }
      else {
        *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + lVar12 + -0x28);
        FVariantData::FVariantData
                  ((FVariantData *)(puVar8 + -0x20),(FVariantData *)(puVar8 + lVar12 + -0x20));
        *puVar8 = puVar8[lVar12];
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar8 + lVar12 + 4);
        *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar8 + lVar12 + 8);
        *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar8 + lVar12 + 0xc);
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      puVar8 = puVar8 + 0x38;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// Rehash @ 14ec908a0

void __thiscall
TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ec9097c;
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
LAB_14ec9097c:
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
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14;
        uVar7 = *piVar1 - 1U &
                (uint)*(byte *)(*(longlong *)&this->Elements +
                               (longlong)local_30.CurrentBitIndex * 0x14);
        *(uint *)(lVar4 + 0x10) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (ulonglong)uVar7;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ec90a40

void __thiscall
TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
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
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ec90b1c;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ec90b1c:
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
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x24) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ec90c00

void __thiscall
TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ec90cd7;
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
LAB_14ec90cd7:
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
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ec90db0

void __thiscall
TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
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
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ec90e87;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14ec90e87:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x30);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x2c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 5) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ec90f60

void __thiscall
TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
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
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ec91037;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14ec91037:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x30);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x2c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 5) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ec91110

void __thiscall
TSet<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>,TDefaultMapHashableKeyFuncs<FString,enum_EOnlineKeyValuePairDataType::Type,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  ForElementType<FSetElementId> *pFVar8;
  undefined8 *puVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar4 = *(int *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = local_40.Array;
      }
      uVar3 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar3 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ec911e7;
        uVar3 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar6 * 4 + 4);
      }
      uStack_64 = -uVar3 & uVar3;
      uVar5 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar4 < iStack_54) {
LAB_14ec911e7:
        iStack_54 = iVar4;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)(*(longlong *)this + (longlong)local_40.CurrentBitIndex * 0x20);
        iVar4 = *(int *)(puVar9 + 1) + -1;
        if (*(int *)(puVar9 + 1) == 0) {
          pwVar7 = L"";
          iVar4 = 0;
        }
        else {
          pwVar7 = (wchar_t *)*puVar9;
        }
        uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
        uVar3 = *piVar1 - 1U & uVar3;
        *(uint *)((longlong)puVar9 + 0x1c) = uVar3;
        pFVar8 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar8 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar3;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(pFVar8->InlineData + uVar5 * 4);
        *(int *)(pFVar8->InlineData + uVar5 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14ec912c0

void __thiscall
TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<TTuple<FName,FDelegateHandle>_> *param_2,
              int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x14 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x10 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Emplace<TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&>_> @ 14eca9dd0

FSetElementId __thiscall
TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&>_>
          (TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x68 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>_> *)0x0) {
    TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&>::
    operator<FUniqueNetIdRepl,FUniqueNetIdRepl>_TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>
              ((TPairInitializer<FUniqueNetIdRepl_const_&,FUniqueNetIdRepl_const_&> *)param_2,
               local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x60) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar6 = ::GetTypeHash(local_38.Pointer);
  bVar4 = TryReplaceExisting(this,uVar6,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_38.Pointer + 100) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x60) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FUniqueNetIdRepl> @ 14eca9fe0

int __thiscall
TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
::FindIndexByHash<FUniqueNetIdRepl>
          (TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
           *this,uint param_1,FUniqueNetIdRepl *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x68 + 0x60 + *(longlong *)&this->Elements))
    {
      bVar2 = ::operator==((FUniqueNetIdWrapper *)
                           (*(longlong *)&this->Elements + (longlong)iVar1 * 0x68),
                           (FUniqueNetIdWrapper *)param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// Rehash @ 14ecc5c60

void __thiscall
TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FUniqueNetIdRepl *pFVar8;
  uint *puVar9;
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
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ecc5d37;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ecc5d37:
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
        pFVar8 = (FUniqueNetIdRepl *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x68);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)&pFVar8[2]._padding_ + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pFVar8[2]._padding_ = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14eccfd50

bool __thiscall
TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdRepl,FUniqueNetIdRepl,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FUniqueNetIdRepl,FUniqueNetIdRepl>_> *param_2
          ,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  ForElementType<FSetElementId> FVar13;
  FUniqueNetIdRepl *this_00;
  uint uVar14;
  bool bVar15;
  
  iVar3 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar3 - iVar4 != 1) && (iVar3 != iVar4)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar3 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x68 + 0x60 + *(longlong *)&this->Elements))
    {
      bVar8 = ::operator==((FUniqueNetIdWrapper *)
                           (*(longlong *)&this->Elements + (longlong)iVar3 * 0x68),
                           (FUniqueNetIdWrapper *)param_2);
      if (bVar8) {
        bVar15 = iVar3 != -1;
        if (bVar15) {
          this_00 = (FUniqueNetIdRepl *)((longlong)iVar3 * 0x68 + *(longlong *)&this->Elements);
          FUniqueNetIdRepl::~FUniqueNetIdRepl(this_00 + 1);
          FUniqueNetIdRepl::~FUniqueNetIdRepl(this_00);
          memmove(this_00,param_2,0x60);
          iVar4 = *param_3;
          puVar1 = &(this->Elements).field_0x10;
          lVar5 = *(longlong *)&this->Elements;
          bVar7 = (byte)iVar4 & 0x1f;
          uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
          lVar2 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = puVar1;
          }
          if (((*(uint *)(puVar11 + lVar2) & uVar14) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (*(int *)&(this->Elements).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x68 + lVar5) = iVar4;
          }
          uVar10 = 0xffffffff;
          puVar12 = (undefined4 *)((longlong)iVar4 * 0x68 + lVar5);
          *puVar12 = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x34) {
            uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
          }
          puVar12[1] = uVar10;
          puVar11 = &(this->Elements).field_0x34;
          *(int *)puVar11 = *(int *)puVar11 + 1;
          *(int *)&(this->Elements).field_0x30 = iVar4;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = puVar1;
          }
          *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar14;
          *param_3 = iVar3;
        }
        break;
      }
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// Emplace<TPairInitializer<FName_&&,FVariantData_&&>_> @ 14ecd5a30

FSetElementId __thiscall
TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_&&,FVariantData_&&>_>
          (TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&&,FVariantData_&&> *param_1,bool *param_2)

{
  longlong lVar1;
  FVariantData *pFVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar9 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    pFVar2 = *(FVariantData **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    FVariantData::FVariantData((FVariantData *)((longlong)local_48.Pointer + 8),pFVar2);
    *(undefined4 *)((longlong)local_48.Pointer + 0x28) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x30) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x30 + lVar1);
            FVariantData::Empty((FVariantData *)((longlong)_Dst + 8));
            memmove(_Dst,local_48.Pointer,0x28);
            TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x28 + (longlong)iVar8 * 0x30);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x2c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x28) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,FOnlineStatUpdate_&&>_> @ 14ecd5c70

FSetElementId __thiscall
TSet<TTuple<FString,FOnlineStatUpdate>,TDefaultMapHashableKeyFuncs<FString,FOnlineStatUpdate,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,FOnlineStatUpdate_&&>_>
          (TSet<TTuple<FString,FOnlineStatUpdate>,TDefaultMapHashableKeyFuncs<FString,FOnlineStatUpdate,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,FOnlineStatUpdate_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  FVariantData *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int iVar13;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar13 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x40 + 4 + lVar2);
    iVar13 = iVar13 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer == (TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_> *)0x0) {
    local_38.Pointer = (TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_> *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)param_2;
    pFVar4 = *(FVariantData **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)local_38.Pointer = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    FVariantData::FVariantData((FVariantData *)((longlong)local_38.Pointer + 0x10),pFVar4);
    *(Type *)((longlong)local_38.Pointer + 0x30) = pFVar4[1].Type;
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
  }
  iVar13 = 0;
  local_res8[0] = local_38.Index;
  if (*(int *)&((TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_> *)local_38.Pointer)->
               field_0x8 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)local_38.Pointer;
    iVar13 = *(int *)&((TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_> *)local_38.Pointer)->
                      field_0x8 + -1;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar10);
  bVar5 = TryReplaceExisting(this,uVar7,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)&((TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_> *)local_38.Pointer)->
                field_0x3c = uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)
       &((TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_> *)local_38.Pointer)->field_0x38 =
           *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,FVariantData_const_&>_> @ 14ecd5e60

FSetElementId __thiscall
TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,FVariantData_const_&>_>
          (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,FVariantData_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FVariantData *pFVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,FVariantData>_> *_Src;
  char *in_R9;
  undefined8 *puVar8;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TTuple<FString,FVariantData>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FVariantData>_> *)0x0) {
    puVar8 = *(undefined8 **)param_2;
    pFVar3 = *(FVariantData **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)local_38.Pointer = *puVar8;
    *puVar8 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(puVar8 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
    puVar8[1] = 0;
    FVariantData::FVariantData((FVariantData *)((longlong)local_38.Pointer + 0x10),pFVar3);
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar6 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)_Src;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar9 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,(FString *)_Src);
    bVar9 = iVar6 != -1;
    if (bVar9) {
      puVar8 = (undefined8 *)((longlong)iVar6 * 0x38 + *(longlong *)&this->Elements);
      FVariantData::Empty((FVariantData *)(puVar8 + 2));
      if ((void *)*puVar8 != (void *)0x0) {
        FMemory::Free((void *)*puVar8);
      }
      memmove(puVar8,_Src,0x30);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_> @ 14ecd6030

FSetElementId __thiscall
TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_>
          (TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,FDelegateHandle_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(uint *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *(uint *)local_38.Pointer;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar9 * 0x18) == uVar10) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            memmove((void *)(lVar2 + (longlong)iVar9 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x10) = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FUniqueNetIdWrapper_const_&>_> @ 14ecd6240

FSetElementId __thiscall
TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FUniqueNetIdWrapper_const_&>_>
          (TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FUniqueNetIdWrapper_const_&> *param_2,bool *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  ulonglong uVar9;
  uint uVar10;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  undefined1 *puVar13;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_60 [2];
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
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
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_60,iVar7);
  if (local_60[0].Pointer != (FUniqueNetIdWrapper *)0x0) {
    lVar3 = *(longlong *)param_3;
    *(undefined ***)local_60[0].Pointer = &___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)((longlong)local_60[0].Pointer + 8),
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)(lVar3 + 8));
    ((FUniqueNetIdWrapper *)((longlong)local_60[0].Pointer + 0x20))->_padding_ = 0;
    (((FUniqueNetIdWrapper *)((longlong)local_60[0].Pointer + 0x20))->Variant)._padding_ = 0;
    *(undefined4 *)
     &(((FUniqueNetIdWrapper *)((longlong)local_60[0].Pointer + 0x20))->Variant)._padding_ =
         0xffffffff;
  }
  iVar8 = *(int *)puVar13;
  bVar5 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar7 != 1) && (iVar8 != iVar7)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar8 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
        iVar8 != -1; iVar8 = *(int *)((longlong)iVar8 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar5 = ::operator==((FUniqueNetIdWrapper *)
                           (*(longlong *)&this->Elements + (longlong)iVar8 * 0x38),
                           local_60[0].Pointer);
      if (bVar5) {
        bVar5 = iVar8 != -1;
        if (bVar5) {
          _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar8 * 0x38);
          bVar1 = *(byte *)((longlong)_Dst + 0x18);
          if ((1 < (ulonglong)bVar1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return (FSetElementId)iVar8;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar1])((longlong)_Dst + 8);
          memmove(_Dst,local_60[0].Pointer,0x30);
          TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_60[0].Index,1);
          local_60[0].Index = iVar8;
        }
        goto LAB_14ecd63a8;
      }
    }
    bVar5 = false;
  }
LAB_14ecd63a8:
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar5;
  }
  if (bVar5 == false) {
    uVar10 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)
                &(((FUniqueNetIdWrapper *)((longlong)local_60[0].Pointer + 0x20))->Variant).
                 _padding_ + 4) = uVar10;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)
       &(((FUniqueNetIdWrapper *)((longlong)local_60[0].Pointer + 0x20))->Variant)._padding_ =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_60[0].Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_60[0].Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FUniqueNetIdWrapper_const_&>_> @ 14ecd6510

FSetElementId __thiscall
TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FUniqueNetIdWrapper_const_&>_>
          (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FUniqueNetIdWrapper_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdWrapper,FRemoteTalkerDataImpl> *this_00;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x120,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x120 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x120 + lVar2) = 0xffffffff;
    }
  }
  puVar8 = &(this->Elements).field_0x8;
  TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl> *)0x0) {
    TKeyInitializer<FUniqueNetIdWrapper_const_&>::
    operator<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>_TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>
              ((TKeyInitializer<FUniqueNetIdWrapper_const_&> *)param_3,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x118) = 0xffffffff;
  }
  bVar10 = false;
  iVar9 = local_48.Index;
  if (*(int *)puVar8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar3 = FindIndexByHash<FUniqueNetIdWrapper>(this,(uint)param_2,local_48.Pointer);
    bVar10 = iVar3 != -1;
    if (bVar10) {
      this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdWrapper,FRemoteTalkerDataImpl>
                 *)((longlong)iVar3 * 0x120 + *(longlong *)&this->Elements);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdWrapper,FRemoteTalkerDataImpl>::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdWrapper,FRemoteTalkerDataImpl>
                (this_00);
      memmove(this_00,local_48.Pointer,0x118);
      TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar9 = iVar3;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar5 = *(int *)puVar8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl> *)
                ((longlong)local_48.Pointer + 0x118))->field_0x4 = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x118) =
           *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = iVar9;
  return (FSetElementId)param_1;
}

// FindIndexByHash<FUniqueNetIdWrapper> @ 14ecd6700

int __thiscall
TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
::FindIndexByHash<FUniqueNetIdWrapper>
          (TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
           *this,uint param_1,FUniqueNetIdWrapper *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar2 = ::operator==((FUniqueNetIdWrapper *)
                           (*(longlong *)&this->Elements + (longlong)iVar1 * 0x38),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FUniqueNetIdWrapper> @ 14ecd67a0

int __thiscall
TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
::FindIndexByHash<FUniqueNetIdWrapper>
          (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
           *this,uint param_1,FUniqueNetIdWrapper *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x120 + 0x118 + *(longlong *)&this->Elements)) {
      bVar2 = ::operator==((FUniqueNetIdWrapper *)
                           (*(longlong *)&this->Elements + (longlong)iVar1 * 0x120),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// RemoveImpl<int> @ 14ecd6c30

int __thiscall
TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ecd6d17;
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
LAB_14ecd6d17:
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

// RemoveImpl<FUniqueNetIdWrapper> @ 14ecd6db0

int __thiscall
TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
::RemoveImpl<FUniqueNetIdWrapper>
          (TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
           *this,uint param_1,FUniqueNetIdWrapper *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FUniqueNetIdWrapper *pFVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pFVar8 = (FUniqueNetIdWrapper *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x38);
    bVar3 = ::operator==(pFVar8,param_2);
    if (bVar3) break;
    uVar6 = (uint)pFVar8[1].Variant._padding_;
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ecd6e98;
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
LAB_14ecd6e98:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x38;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x34) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar10 = *(uint *)(lVar7 + 0x30);
      TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar1 * 0x38);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FUniqueNetIdWrapper> @ 14ecd6f40

int __thiscall
TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
::RemoveImpl<FUniqueNetIdWrapper>
          (TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
           *this,uint param_1,FUniqueNetIdWrapper *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FUniqueNetIdWrapper *pFVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pFVar8 = (FUniqueNetIdWrapper *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x120);
    bVar3 = ::operator==(pFVar8,param_2);
    if (bVar3) break;
    uVar6 = *(uint *)&pFVar8[8].Variant.TypeIndex;
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ecd702f;
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
LAB_14ecd702f:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x120;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x11c) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar10 = *(uint *)(lVar7 + 0x118);
      TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x118 + (longlong)(int)uVar1 * 0x120);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FName> @ 14ecd70f0

int __thiscall
TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x30;
    if (*(FName *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x28);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ecd71d5;
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
LAB_14ecd71d5:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x2c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x28);
      TSparseArray<TSparseSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x28 + (longlong)(int)uVar1 * 0x30);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Rehash @ 14ecf7f20

void __thiscall
TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ecf7ffc;
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
LAB_14ecf7ffc:
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

// Rehash @ 14ecf80c0

void __thiscall
TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FUniqueNetIdWrapper *pFVar8;
  uint *puVar9;
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
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ecf8197;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ecf8197:
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
        pFVar8 = (FUniqueNetIdWrapper *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)&pFVar8[1].Variant._padding_ + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pFVar8[1].Variant._padding_ = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ecf8250

void __thiscall
TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FUniqueNetIdWrapper *pFVar8;
  uint *puVar9;
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
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ecf8327;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ecf8327:
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
        pFVar8 = (FUniqueNetIdWrapper *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x120);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)&pFVar8[8].Variant.field_0x14 = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)&pFVar8[8].Variant.TypeIndex = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ecf83f0

void __thiscall
TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
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
  undefined8 *puVar9;
  uint *puVar10;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ecf84c7;
        uVar5 = puVar10[lVar6 + 1];
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
LAB_14ecf84c7:
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
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x30 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x2c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 5) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ecf85a0

void __thiscall
TSet<TTuple<FString,FOnlineStatUpdate>,TDefaultMapHashableKeyFuncs<FString,FOnlineStatUpdate,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FOnlineStatUpdate>,TDefaultMapHashableKeyFuncs<FString,FOnlineStatUpdate,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
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
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ecf8677;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14ecf8677:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x40);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x3c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 7) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14ed07ad0

bool __thiscall
TSet<TTuple<FString,FOnlineStatUpdate>,TDefaultMapHashableKeyFuncs<FString,FOnlineStatUpdate,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,FOnlineStatUpdate>,TDefaultMapHashableKeyFuncs<FString,FOnlineStatUpdate,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  ForElementType<FSetElementId> FVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined8 *_Dst;
  bool bVar13;
  
  iVar2 = *(int *)&(this->Elements).field_0x8;
  bVar13 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar2 - iVar7 != 1) && (iVar2 != iVar7)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar10 = (longlong)iVar2 * 0x40;
      iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + lVar10);
      if (iVar7 == *(int *)&param_2->field_0x8) {
        if (1 < iVar7) {
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar10),
                             *(wchar_t **)param_2);
          bVar13 = iVar7 == 0;
          goto LAB_14ed07b61;
        }
LAB_14ed07ba2:
        bVar13 = true;
        _Dst = (undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)&this->Elements);
        FVariantData::Empty((FVariantData *)(_Dst + 2));
        if ((void *)*_Dst != (void *)0x0) {
          FMemory::Free((void *)*_Dst);
        }
        memmove(_Dst,param_2,0x38);
        iVar7 = *param_3;
        puVar1 = &(this->Elements).field_0x10;
        lVar10 = *(longlong *)&this->Elements;
        bVar4 = (byte)iVar7 & 0x1f;
        uVar12 = 1 << bVar4 | 1U >> 0x20 - bVar4;
        if (((iVar7 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = puVar1;
        }
        if (((*(uint *)(puVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) &
             uVar12) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(int *)&(this->Elements).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x40 + lVar10) = iVar7;
        }
        uVar8 = 0xffffffff;
        *(undefined4 *)((longlong)iVar7 * 0x40 + lVar10) = 0xffffffff;
        if (0 < *(int *)&(this->Elements).field_0x34) {
          uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
        }
        *(undefined4 *)((longlong)iVar7 * 0x40 + 4 + lVar10) = uVar8;
        puVar11 = &(this->Elements).field_0x34;
        *(int *)puVar11 = *(int *)puVar11 + 1;
        *(int *)&(this->Elements).field_0x30 = iVar7;
        if (((iVar7 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = puVar1;
        }
        *(uint *)(puVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) &
             ~uVar12;
        *param_3 = iVar2;
        goto LAB_14ed07b7c;
      }
      bVar13 = iVar7 + *(int *)&param_2->field_0x8 == 1;
LAB_14ed07b61:
      if (bVar13) goto LAB_14ed07ba2;
      iVar2 = *(int *)(lVar10 + 0x38 + *(longlong *)&this->Elements);
    }
    bVar13 = false;
  }
LAB_14ed07b7c:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar13;
  }
  return bVar13;
}

// TryReplaceExisting @ 14ed07d20

bool __thiscall
TSet<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>,TDefaultMapHashableKeyFuncs<FString,enum_EOnlineKeyValuePairDataType::Type,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<FString,EOnlineKeyValuePairDataType::Type>_> *param_2,
          int *param_3,bool *param_4)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *_Dst;
  bool bVar13;
  
  bVar13 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar10 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar10 = (longlong)this + 0x38;
    }
    iVar2 = *(int *)(lVar10 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar10 = (longlong)iVar2 * 0x20;
      iVar8 = *(int *)(*(longlong *)this + 8 + lVar10);
      if (iVar8 == *(int *)&param_2->field_0x8) {
        if (1 < iVar8) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)this + lVar10),*(wchar_t **)param_2);
          bVar13 = iVar8 == 0;
          goto LAB_14ed07db1;
        }
LAB_14ed07df2:
        bVar13 = true;
        _Dst = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)this);
        pvVar3 = (void *)*_Dst;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        memmove(_Dst,param_2,0x18);
        iVar8 = *param_3;
        lVar10 = *(longlong *)this;
        bVar5 = (byte)iVar8 & 0x1f;
        uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        if (((iVar8 < 0) || (*(int *)((longlong)this + 0x28) <= iVar8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar11 = *(longlong *)((longlong)this + 0x20);
        if (*(longlong *)((longlong)this + 0x20) == 0) {
          lVar11 = (longlong)this + 0x10;
        }
        if (((*(uint *)(lVar11 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4) &
             uVar12) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if (*(int *)((longlong)this + 0x34) != 0) {
          *(int *)((longlong)*(int *)((longlong)this + 0x30) * 0x20 + lVar10) = iVar8;
        }
        uVar9 = 0xffffffff;
        *(undefined4 *)((longlong)iVar8 * 0x20 + lVar10) = 0xffffffff;
        if (0 < *(int *)((longlong)this + 0x34)) {
          uVar9 = *(undefined4 *)((longlong)this + 0x30);
        }
        *(undefined4 *)((longlong)iVar8 * 0x20 + 4 + lVar10) = uVar9;
        *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
        *(int *)((longlong)this + 0x30) = iVar8;
        if (((iVar8 < 0) || (*(int *)((longlong)this + 0x28) <= iVar8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar10 = *(longlong *)((longlong)this + 0x20);
        if (*(longlong *)((longlong)this + 0x20) == 0) {
          lVar10 = (longlong)this + 0x10;
        }
        puVar1 = (uint *)(lVar10 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 & ~uVar12;
        *param_3 = iVar2;
        goto LAB_14ed07dcc;
      }
      bVar13 = iVar8 + *(int *)&param_2->field_0x8 == 1;
LAB_14ed07db1:
      if (bVar13) goto LAB_14ed07df2;
      iVar2 = *(int *)(lVar10 + 0x18 + *(longlong *)this);
    }
    bVar13 = false;
  }
LAB_14ed07dcc:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar13;
  }
  return bVar13;
}

// UnhashElements @ 14ed07f60

void __thiscall
TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14ed0805b;
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
LAB_14ed0805b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ed08150;
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
LAB_14ed08150:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x2c + (longlong)local_60.CurrentBitIndex * 0x30) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

