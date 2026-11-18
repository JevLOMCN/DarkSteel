// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 6

// Emplace<unsigned___int64_const_&,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_const_&> @ 146af85f0

TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy> *
__thiscall
TMapBase<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
::
Emplace<unsigned___int64_const_&,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_const_&>
          (TMapBase<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
           *this,ulong64 *param_1,
          TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_>
       *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_>
          *)0x0;
  }
  else {
    *(ulong64 *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0;
    TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
                *)((longlong)local_18.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar5 = (int)((ulonglong)*(undefined8 *)local_18.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_18.Pointer;
  bVar3 = TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_18.Pointer,local_res8[0]);
  }
  return (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 8);
}

// EmplaceByHash<unsigned___int64_const_&> @ 146af8e00

TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy> *
__thiscall
TMapBase<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
::EmplaceByHash<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_>
       *)0x0) {
    TKeyInitializer<unsigned___int64_const_&>::
    operator<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>,FSourceControlFileStatusMonitor::FUintptrHash,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x28 + 8);
}

// FindByHash<TStringView<wchar_t>_> @ 146af92a0

FString * __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
FindByHash<TStringView<wchar_t>_>
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,uint param_1,TStringView<wchar_t> *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      lVar1 = (longlong)iVar2 * 0x28;
      iVar6 = *(int *)(lVar1 + 8 + lVar3);
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      iVar6 = (int)*(undefined8 *)&param_2->Size;
      if (iVar6 == iVar5) {
        if ((iVar6 != 0) && (iVar5 != 0)) {
          iVar4 = iVar5;
          if (iVar6 < iVar5) {
            iVar4 = iVar6;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (param_2->DataPtr,*(wchar_t **)(lVar1 + lVar3),(longlong)iVar4);
          if (iVar4 != 0) goto LAB_146af9357;
        }
        if (iVar6 == iVar5) {
          lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
          if (lVar1 == 0) {
            return (FString *)0x0;
          }
          return (FString *)(lVar1 + 0x10);
        }
      }
LAB_146af9357:
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FString *)0x0;
}

// Find @ 146b15b60

FSourceControlAssetDataEntry * __thiscall
TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
::Find(TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FSourceControlAssetDataEntry *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FSourceControlAssetDataEntry *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FSourceControlAssetDataEntry *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FSourceControlAssetDataEntry *)0x0;
}

// Find @ 146b15bf0

TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> * __thiscall
TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
::Find(TMapBase<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *pTVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)
               (lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TSharedPtr<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1> *)0x0;
}

// Remove @ 146b22ed0

int __thiscall
TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
::Remove(TMapBase<FString,FSourceControlAssetDataEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>_>
         *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,FSourceControlAssetDataEntry>,TDefaultMapHashableKeyFuncs<FString,FSourceControlAssetDataEntry,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

