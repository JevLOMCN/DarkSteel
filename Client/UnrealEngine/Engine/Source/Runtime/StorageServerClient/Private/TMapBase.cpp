// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 8

// FindOrAddImpl<FIoChunkId_const_&> @ 148cb04a0

TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
* __thiscall
TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
::FindOrAddImpl<FIoChunkId_const_&>
          (TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
           *this,uint param_1,FIoChunkId *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FIoChunkId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar2 == *(longlong *)param_2->Id) && ((int)plVar2[1] == *(int *)(param_2->Id + 8)))
        {
          if (plVar2 != (longlong *)0x0) {
            return (TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
                    *)(plVar2 + 2);
          }
          break;
        }
        iVar1 = (int)plVar2[0xc];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FIoChunkId_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FIoChunkId_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo> @ 148cb0560

FEntryInfo * __thiscall
TMapBase<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>_>
::FindOrAddImpl<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo>
          (TMapBase<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>_>
           *this,uint param_1,FPackageId *param_2,FEntryInfo *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FPackageId *local_18;
  FEntryInfo *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) == param_2->Id) {
          if (lVar3 != 0) goto LAB_148cb05f7;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&> *
             )(ulonglong)param_1,(bool *)&local_18);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_148cb05f7:
  return (FEntryInfo *)(lVar3 + 8);
}

// FindOrAddImpl<FPackageId> @ 148cb0610

FStoreEntry * __thiscall
TMapBase<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>_>
::FindOrAddImpl<FPackageId>
          (TMapBase<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>_>
           *this,uint param_1,FPackageId *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FPackageId *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_2->Id) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FStoreEntry *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[5];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPackageId_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FPackageId_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FStoreEntry *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// Find @ 148cc3b50

FCacheChunkInfo * __thiscall
TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
::Find(TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
       *this,FIoChunkId *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  FCacheChunkInfo *pFVar7;
  
  uVar2 = *(uint *)(param_1->Id + 8);
  uVar1 = *(undefined8 *)param_1->Id;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar2 >> 0x18) + 0x58a2c485 +
                    ((((((uVar3 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)) *
                        0x21 + (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 + (uVar2 & 0xff)) *
                      0x21 + (uVar2 >> 8 & 0xff)) * 0x21 + (uVar2 >> 0x10 & 0xff)) * 0x21 +
                    (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 +
                    ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)) * 0x40a9121 +
                    (uVar3 & 0xff) * -0x13be2b1f +
                    ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 +
                    ((uint)uVar1 & 0xff) * 0x30f35d61) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar5 == *(longlong *)param_1->Id) && ((int)plVar5[1] == *(int *)(param_1->Id + 8)))
        {
          pFVar7 = (FCacheChunkInfo *)0x0;
          if (plVar5 != (longlong *)0x0) {
            pFVar7 = (FCacheChunkInfo *)(plVar5 + 2);
          }
          return pFVar7;
        }
        iVar4 = (int)plVar5[7];
      } while (iVar4 != -1);
    }
  }
  return (FCacheChunkInfo *)0x0;
}

// Find @ 148cc3ca0

TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
* __thiscall
TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
::Find(TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
       *this,FIoChunkId *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
  *pTVar7;
  
  uVar2 = *(uint *)(param_1->Id + 8);
  uVar1 = *(undefined8 *)param_1->Id;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar2 >> 0x18) + 0x58a2c485 +
                    ((((((uVar3 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)) *
                        0x21 + (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 + (uVar2 & 0xff)) *
                      0x21 + (uVar2 >> 8 & 0xff)) * 0x21 + (uVar2 >> 0x10 & 0xff)) * 0x21 +
                    (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 +
                    ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)) * 0x40a9121 +
                    (uVar3 & 0xff) * -0x13be2b1f +
                    ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 +
                    ((uint)uVar1 & 0xff) * 0x30f35d61) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar5 == *(longlong *)param_1->Id) && ((int)plVar5[1] == *(int *)(param_1->Id + 8)))
        {
          pTVar7 = (TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
                    *)0x0;
          if (plVar5 != (longlong *)0x0) {
            pTVar7 = (TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
                      *)(plVar5 + 2);
          }
          return pTVar7;
        }
        iVar4 = (int)plVar5[0xc];
      } while (iVar4 != -1);
    }
  }
  return (TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
          *)0x0;
}

// Find @ 148cc3df0

TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
* __thiscall
TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
::Find(TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
       *this,FIoChunkId *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
  *pTVar7;
  
  uVar2 = *(uint *)(param_1->Id + 8);
  uVar1 = *(undefined8 *)param_1->Id;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar2 >> 0x18) + 0x58a2c485 +
                    ((((((uVar3 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)) *
                        0x21 + (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 + (uVar2 & 0xff)) *
                      0x21 + (uVar2 >> 8 & 0xff)) * 0x21 + (uVar2 >> 0x10 & 0xff)) * 0x21 +
                    (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 +
                    ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)) * 0x40a9121 +
                    (uVar3 & 0xff) * -0x13be2b1f +
                    ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 +
                    ((uint)uVar1 & 0xff) * 0x30f35d61) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar5 == *(longlong *)param_1->Id) && ((int)plVar5[1] == *(int *)(param_1->Id + 8)))
        {
          pTVar7 = (TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
                    *)0x0;
          if (plVar5 != (longlong *)0x0) {
            pTVar7 = (TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
                      *)(plVar5 + 2);
          }
          return pTVar7;
        }
        iVar4 = (int)plVar5[0xc];
      } while (iVar4 != -1);
    }
  }
  return (TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
          *)0x0;
}

// FindRef @ 148cc4d20

FDirectory * __thiscall
TMapBase<FString,FStorageServerFileSystemTOC::FDirectory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>_>
::FindRef(TMapBase<FString,FStorageServerFileSystemTOC::FDirectory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>_>
          *this,FString *param_1)

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
  iVar3 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if ((iVar3 != -1) &&
     (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar4 != 0)) {
    return *(FDirectory **)(lVar4 + 0x10);
  }
  return (FDirectory *)0x0;
}

// Remove @ 148cd9b90

int __thiscall
TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
::Remove(TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
         *this,FIoChunkId *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = *(uint *)(param_1->Id + 8);
    uVar1 = *(undefined8 *)param_1->Id;
    uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
    iVar4 = TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
            ::RemoveImpl<FIoChunkId>
                      (&this->Pairs,
                       (uVar2 >> 0x18) + 0x58a2c485 +
                       ((((((uVar3 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)
                           ) * 0x21 + (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 +
                         (uVar2 & 0xff)) * 0x21 + (uVar2 >> 8 & 0xff)) * 0x21 +
                       (uVar2 >> 0x10 & 0xff)) * 0x21 +
                       (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 +
                       ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)) * 0x40a9121 +
                       (uVar3 & 0xff) * -0x13be2b1f +
                       ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 +
                       ((uint)uVar1 & 0xff) * 0x30f35d61,param_1);
    return iVar4;
  }
  return 0;
}

