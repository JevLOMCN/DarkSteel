// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 10

// Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText> @ 144597780

FText * __thiscall
TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity_const_&,FText>
          (void *this,EOnScreenMessageSeverity *param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar3 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar3 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_18,iVar3);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FCoreDelegates::EOnScreenMessageSeverity,FText>_> *)0x0) {
    *(EOnScreenMessageSeverity *)local_18.Pointer = *param_1;
    FText::FText((FText *)((longlong)local_18.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
  ::RehashOrLink(this,(uint)*(byte *)local_18.Pointer,local_18.Pointer,local_18.Index);
  return (FText *)(*(longlong *)this + 8 + (longlong)local_18.Index * 0x20);
}

// Emplace<FString,FIoBuffer> @ 144599b70

FIoBuffer * __thiscall
TMapBase<FString,FIoBuffer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>_>::
Emplace<FString,FIoBuffer>
          (TMapBase<FString,FIoBuffer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>_>
           *this,FString *param_1,FIoBuffer *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,FIoBuffer>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar8);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,FIoBuffer>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FIoBuffer>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(BufCore **)((longlong)local_28.Pointer + 0x10) = (param_2->CorePtr).Reference;
    (param_2->CorePtr).Reference = (BufCore *)0x0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar7;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FIoBuffer *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar8 * 0x20);
}

// Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText> @ 144599ce0

FText * __thiscall
TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>
          (void *this,EOnScreenMessageSeverity *param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar3 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar3 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_18,iVar3);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FCoreDelegates::EOnScreenMessageSeverity,FText>_> *)0x0) {
    *(EOnScreenMessageSeverity *)local_18.Pointer = *param_1;
    FText::FText((FText *)((longlong)local_18.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
  ::RehashOrLink(this,(uint)*(byte *)local_18.Pointer,local_18.Pointer,local_18.Index);
  return (FText *)(*(longlong *)this + 8 + (longlong)local_18.Index * 0x20);
}

// EmplaceByHash<UE::THash<96>_const_&> @ 144599df0

FCasLocation * __thiscall
TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
::EmplaceByHash<UE::THash<96>_const_&>
          (TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
           *this,uint param_1,THash<96> *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x1c + 4 + lVar2);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x1c + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer != (TSparseSetElement<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_> *)0x0
     ) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_2->Hash;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = *(undefined4 *)(param_2->Hash + 8);
    *(undefined8 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff00000000;
    *(undefined4 *)((longlong)local_28.Pointer + 0x14) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar6 - iVar3 != 1) && (iVar6 != iVar3)) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar4 = (longlong)iVar6 * 0x1c;
        if ((*(longlong *)(lVar4 + lVar2) == *(longlong *)local_28.Pointer) &&
           (*(int *)(lVar4 + 8 + lVar2) == *(int *)((longlong)local_28.Pointer + 8))) {
          if (iVar6 != -1) {
            memmove((void *)((longlong)iVar6 * 0x1c + lVar2),local_28.Pointer,0x14);
            TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_144599f7f;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x14 + lVar2);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_28.Index);
  iVar6 = local_28.Index;
LAB_144599f7f:
  return (FCasLocation *)(*(longlong *)&(this->Pairs).Elements + 0xc + (longlong)iVar6 * 0x1c);
}

// FindByHash<UE::THash<96>_> @ 14459af00

FCasLocation * __thiscall
TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
::FindByHash<UE::THash<96>_>
          (TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
           *this,uint param_1,THash<96> *param_2)

{
  int iVar1;
  longlong *plVar2;
  FCasLocation *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar2 == *(longlong *)param_2->Hash) &&
           ((int)plVar2[1] == *(int *)(param_2->Hash + 8))) {
          pFVar3 = (FCasLocation *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar3 = (FCasLocation *)((longlong)plVar2 + 0xc);
          }
          return pFVar3;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return (FCasLocation *)0x0;
}

// FindOrAddImpl<UE::THash<96>_const_&> @ 14459b1d0

FCasLocation * __thiscall
TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
::FindOrAddImpl<UE::THash<96>_const_&>
          (TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
           *this,uint param_1,THash<96> *param_2)

{
  int iVar1;
  FCasLocation *pFVar2;
  longlong *plVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar3 == *(longlong *)param_2->Hash) &&
           ((int)plVar3[1] == *(int *)(param_2->Hash + 8))) {
          if (plVar3 != (longlong *)0x0) {
            return (FCasLocation *)((longlong)plVar3 + 0xc);
          }
          break;
        }
        iVar1 = *(int *)((longlong)plVar3 + 0x14);
      } while (iVar1 != -1);
    }
  }
  pFVar2 = EmplaceByHash<UE::THash<96>_const_&>(this,param_1,param_2);
  return pFVar2;
}

// Find @ 1445cd450

FMapEntry * __thiscall
TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
::Find(TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FMapEntry *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FMapEntry *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FMapEntry *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FMapEntry *)0x0;
}

// Remove @ 1445f5b10

int __thiscall
TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
::Remove(TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
         *this,THash<96> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)(this->Pairs).HashSize - 1U & (longlong)*(int *)param_1->Hash) * 4);
    iVar5 = 0;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while ((lVar2 = (longlong)iVar3 * 0x1c,
             *(longlong *)(lVar2 + lVar1) != *(longlong *)param_1->Hash ||
             (*(int *)(lVar2 + 8 + lVar1) != *(int *)(param_1->Hash + 8)))) {
        iVar3 = *(int *)(lVar2 + 0x14 + lVar1);
        if (iVar3 == -1) {
          return 0;
        }
      }
      TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar3);
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Remove @ 1445f5ba0

int __thiscall
TMapBase<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
::Remove(TMapBase<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
         *this,FCasBlockId *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(this->Pairs).HashSize - 1U & (longlong)(int)param_1->Id) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(uint *)(lVar1 + (longlong)iVar2 * 0x10) != param_1->Id) {
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Remove @ 1445f5c20

int __thiscall
TMapBase<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
::Remove(TMapBase<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
         *this,FIoHash *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)(this->Pairs).HashSize - 1U & (longlong)*(int *)param_1->Hash) * 4);
    iVar5 = 0;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (((lVar2 = (longlong)iVar3,
              *(longlong *)(lVar1 + lVar2 * 0x30) != *(longlong *)param_1->Hash ||
              (*(longlong *)(lVar1 + 8 + lVar2 * 0x30) != *(longlong *)(param_1->Hash + 8))) ||
             (*(int *)(lVar1 + 0x10 + lVar2 * 0x30) != *(int *)(param_1->Hash + 0x10)))) {
        iVar3 = *(int *)(lVar1 + 0x28 + lVar2 * 0x30);
        if (iVar3 == -1) {
          return 0;
        }
      }
      TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar3);
      iVar5 = 1;
    }
  }
  return iVar5;
}

