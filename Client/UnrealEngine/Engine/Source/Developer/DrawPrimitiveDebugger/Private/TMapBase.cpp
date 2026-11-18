// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 7

// Emplace<FPrimitiveComponentId_const_&,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry> @ 146cfca70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveDebuggerEntry * __thiscall
TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
::Emplace<FPrimitiveComponentId_const_&,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>
          (TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
           *this,FPrimitiveComponentId *param_1,FPrimitiveDebuggerEntry *param_2)

{
  TPairInitializer<FPrimitiveComponentId_const_&,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry_&&>
  local_res8 [2];
  FPrimitiveComponentId *local_18;
  FPrimitiveDebuggerEntry *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FPrimitiveComponentId_const_&,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry_&&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FPrimitiveDebuggerEntry *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8[0].Key * 0x30);
}

// GetKeys<DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> @ 146cfe8c0

int __thiscall
TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
::GetKeys<DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          (TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
           *this,TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  FPrimitiveComponentId local_res8 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    UnhashElements(param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::Reserve
            (param_1,*(int *)&(this->Pairs).Elements.field_0x8 -
                     *(int *)&(this->Pairs).Elements.field_0x34);
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_146cfe9a9;
      uVar3 = puVar6[lVar4 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_146cfe9a9:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Emplace<FPrimitiveComponentId_const_&>
                (param_1,local_res8,
                 (bool *)((longlong)TStack_70.CurrentBitIndex * 0x30 +
                         *(longlong *)&(this->Pairs).Elements));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// ~TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_> @ 146d04030

void __thiscall
TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
::
~TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
          (TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
           *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->Pairs).HashSize = 0;
  FVar1 = (this->Pairs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Find @ 146d17cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)0x0;
}

// Find @ 146d17d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 146d17e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveDebuggerEntry * __thiscall
TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
::Find(TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
       *this,FPrimitiveComponentId *param_1)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  FPrimitiveDebuggerEntry *pFVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1->PrimIDValue) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1->PrimIDValue) {
          pFVar4 = (FPrimitiveDebuggerEntry *)0x0;
          if (puVar2 != (uint *)0x0) {
            pFVar4 = (FPrimitiveDebuggerEntry *)(puVar2 + 2);
          }
          return pFVar4;
        }
        uVar1 = puVar2[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPrimitiveDebuggerEntry *)0x0;
}

// Remove @ 146d301f0

int __thiscall
TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
::Remove(TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
         *this,FPrimitiveComponentId *param_1)

{
  int iVar1;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar1 = TSet<TTuple<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>,FDefaultSetAllocator>
            ::RemoveImpl<FPrimitiveComponentId>(&this->Pairs,param_1->PrimIDValue,param_1);
    return iVar1;
  }
  return 0;
}

