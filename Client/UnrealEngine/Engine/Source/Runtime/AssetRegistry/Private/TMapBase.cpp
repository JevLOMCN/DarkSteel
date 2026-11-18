// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 46

// Emplace<FAssetIdentifier_const_&,FDependsNode_*_const_&> @ 142ab6270

FDependsNode ** __thiscall
TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
::Emplace<FAssetIdentifier_const_&,FDependsNode_*_const_&>
          (TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
           *this,FAssetIdentifier *param_1,FDependsNode **param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_> *)0x0) {
    FVar3 = (param_1->PrimaryAssetType).Name;
    *(FName *)local_28.Pointer = param_1->PackageName;
    *(FName *)((longlong)local_28.Pointer + 8) = FVar3;
    FVar3 = param_1->ValueName;
    *(FName *)((longlong)local_28.Pointer + 0x10) = param_1->ObjectName;
    *(FName *)((longlong)local_28.Pointer + 0x18) = FVar3;
    *(FDependsNode **)((longlong)local_28.Pointer + 0x20) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash(local_28.Pointer);
  bVar4 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FDependsNode **)(*(longlong *)&(this->Pairs).Elements + 0x20 + lVar7 * 0x30);
}

// Emplace<FName_const_&,TOptional<FString>_> @ 142ab6790

TOptional<FString> * __thiscall
TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
::Emplace<FName_const_&,TOptional<FString>_>
          (TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
           *this,FName *param_1,TOptional<FString> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<FName,TOptional<FString>_>_> *pTVar7;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar7 = (TSparseSetElement<TTuple<FName,TOptional<FString>_>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,TOptional<FString>_>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0xffffffff;
    if (*(int *)((longlong)&param_2->field0_0x0 + 0xc) != -1) {
      *(FScriptContainerElement **)((longlong)local_18.Pointer + 8) =
           (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)local_18.Pointer + 0x10) =
           *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      *(undefined4 *)((longlong)local_18.Pointer + 0x14) =
           *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      *(int *)((longlong)&param_2->field0_0x0 + 8) = 0;
      *(int *)((longlong)&param_2->field0_0x0 + 0xc) = 0;
    }
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  uVar4 = *(undefined8 *)pTVar7;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,pTVar7,local_18.Index);
  return (TOptional<FString> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_18.Index * 0x20);
}

// EmplaceByHash<FAssetIdentifier_const_&> @ 142ab8130

FDependsNode ** __thiscall
TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
::EmplaceByHash<FAssetIdentifier_const_&>
          (TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
           *this,uint param_1,FAssetIdentifier *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FAssetIdentifier,FDependsNode_*>_> *)0x0) {
    FVar3 = (param_2->PrimaryAssetType).Name;
    *(FName *)local_18.Pointer = param_2->PackageName;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar3;
    FVar3 = param_2->ValueName;
    *(FName *)((longlong)local_18.Pointer + 0x10) = param_2->ObjectName;
    *(FName *)((longlong)local_18.Pointer + 0x18) = FVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (FDependsNode **)(*(longlong *)&(this->Pairs).Elements + 0x20 + lVar6 * 0x30);
}

// EmplaceByHash<FName_const_&> @ 142ab8260

TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  bool bVar1;
  TKeyInitializer<FName_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar1 = TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar1) {
    TSet<TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x60);
}

// FindByHash<TStringView<wchar_t>_> @ 142abbf00

FCachedDirScanDir * __thiscall
TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
::FindByHash<TStringView<wchar_t>_>
          (TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
           *this,uint param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      lVar7 = (longlong)iVar1 * 0x58;
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      iVar5 = *(int *)(lVar7 + 8 + lVar3);
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      iVar5 = (int)*(undefined8 *)&param_2->Size;
      if (iVar5 == iVar4) {
        if ((iVar5 != 0) && (iVar4 != 0)) {
          iVar2 = iVar4;
          if (iVar5 < iVar4) {
            iVar2 = iVar5;
          }
          iVar2 = FGenericPlatformStricmp::Strnicmp
                            (param_2->DataPtr,*(wchar_t **)(lVar7 + lVar3),(longlong)iVar2);
          if (iVar2 != 0) goto LAB_142abbfaf;
        }
        if (iVar5 == iVar4) {
          lVar3 = (longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements;
          if (lVar3 == 0) {
            return (FCachedDirScanDir *)0x0;
          }
          return (FCachedDirScanDir *)(lVar3 + 0x10);
        }
      }
LAB_142abbfaf:
      iVar1 = *(int *)(lVar7 + 0x50 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FCachedDirScanDir *)0x0;
}

// FindOrAddImpl<FDependsNode_*_const_&> @ 142abc5e0

TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FDependsNode_*_const_&>
          (TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FDependsNode **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FDependsNode **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((FDependsNode *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FDependsNode_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FDependsNode_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FTopLevelAssetPath_const_&> @ 142abc690

TArray<FAssetData_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FTopLevelAssetPath_const_&>
          (TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FTopLevelAssetPath *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if ((*(FName *)(lVar2 + (longlong)iVar3 * 0x28) == param_2->PackageName) &&
           (*(FName *)(lVar1 + 8) == param_2->AssetName)) {
          if ((iVar3 != -1) && (lVar1 != 0)) {
            return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FTopLevelAssetPath_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FTopLevelAssetPath_const_&> *)(ulonglong)param_1,(bool *)&local_res20)
  ;
  return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28 + 0x10);
}

// FindOrAddImpl<FTopLevelAssetPath_const_&> @ 142abc760

TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FTopLevelAssetPath_const_&>
          (TMapBase<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  FName *pFVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FTopLevelAssetPath *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar1 = (FName *)((longlong)(int)uVar2 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar1 == param_2->PackageName) && (pFVar1[1] == param_2->AssetName)) {
          if ((uVar2 != 0xffffffff) && (pFVar1 != (FName *)0x0)) {
            return (TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator> *)
                   (pFVar1 + 2);
          }
          break;
        }
        uVar2 = pFVar1[0xc].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FTopLevelAssetPath_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FTopLevelAssetPath_const_&> *)(ulonglong)param_1,(bool *)&local_res20)
  ;
  return (TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 142abc830

FAssetPackageData ** __thiscall
TMapBase<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
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
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_142abc8c2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_142abc8c2:
  return (FAssetPackageData **)(lVar3 + 8);
}

// FindOrAddImpl<FName_const_&> @ 142abc8e0

TArray<FAssetData_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 142abc990

TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_142abca22;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_142abca22:
  return (TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
         (lVar3 + 8);
}

// FindOrAddImpl<FName_const_&> @ 142abca40

TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pTVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pTVar3;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 142abe1d0

void __thiscall
TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar14;
    while (uVar5 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142abe2b2;
      uVar5 = puVar14[lVar10 + 1];
    }
    uVar12 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142abe2b2:
  TStack_40._padding_ = CONCAT44(uVar12,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x28);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      uVar8 = *(undefined8 *)(pFVar2 + 8);
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar6 + 8) = uVar8;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 142abe440

void __thiscall
TMapBase<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142abe522;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142abe522:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 142abe6a0

void __thiscall
TMapBase<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142abe782;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142abe782:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 142abe900

void __thiscall
TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_142abe9e2;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_142abe9e2:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 142abeb50

void __thiscall
TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142abec32;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142abec32:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x28);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 142abedb0

void __thiscall
TMapBase<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_142abee92;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_142abee92:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x60 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 142abf000

void __thiscall
TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
           *this,TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_142abf0d3;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_142abf0d3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 0x20 +
                (longlong)TStack_40.CurrentBitIndex * 0x30);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 142abf570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
           *this,TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
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
  TMapBase<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>,0>_>
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
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar10 == 0) goto LAB_142abf850;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar10);
  uVar11 = 1;
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_120 = (undefined4)lVar3;
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar11 <= (int)local_50)) goto LAB_142abf850;
  local_50 = uVar11;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar11 != 0) {
    uVar10 = uVar11;
    if (uVar11 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_142abf681;
      }
    }
    else {
LAB_142abf681:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar10,4);
    }
    if (0 < (int)uVar11) {
      uVar13 = (ulonglong)uVar11;
      uVar9 = uVar16;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
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
    uVar9 = uVar16;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar10 = *(uint *)FVar17;
      uVar13 = uVar16;
      while (uVar10 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar6 = (int)uVar9;
        local_168 = iVar6 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_142abf792;
        uVar10 = ((uint *)((longlong)FVar17 + 4))[iVar6];
      }
      uStack_164 = -uVar10 & uVar10;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_11c = (int)lVar3;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_142abf792:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (ulonglong *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar10 = ((uint)(*puVar15 >> 0x14) & 0xffff ^ (uint)(*puVar15 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        uVar10 = (uVar10 >> 0x10 ^ uVar10) & local_50 - 1;
        *(uint *)((longlong)puVar15 + 0xc) = uVar10;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar13 * 4);
        *(int *)(FVar8.Data + uVar13 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_142abf850:
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar10 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = uVar16;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar10 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar9 = (ulonglong)uVar10;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_140.Array;
    }
    uVar11 = *puVar18;
    uVar13 = uVar16;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar11 == 0) {
      iVar6 = (int)uVar16;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar6 + 1;
      uVar16 = (ulonglong)uVar14;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_142abf8fe;
      uVar11 = puVar18[(longlong)iVar6 + 1];
    }
    uStack_dc = -uVar11 & uVar11;
    uVar16 = (ulonglong)uStack_dc * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_118 = (int)lVar3;
    uVar11 = (local_c8 - 1) + local_118;
    if ((int)uVar10 < (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar9 = (ulonglong)uVar11;
  }
LAB_142abf8fe:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar9;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar10) {
    do {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      uVar16 = *(ulonglong *)((longlong)(int)uVar9 * 0x60 + lVar3);
      uVar14 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar6 = *(int *)(FVar8.Data + (ulonglong)(local_50 - 1 & (uVar14 >> 0x10 ^ uVar14)) * 4
                             ); iVar6 != -1;
            iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar6 * 0x10) == uVar16) goto LAB_142abfa92;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar12 = (FScriptContainerElement *)((longlong)(int)uVar9 * 0x60 + lVar3);
      if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           *(undefined8 *)pFVar12;
      TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::
      Emplace<FDependsNode_*_const_&>
                ((TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *)
                 local_98,(FDependsNode **)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x60 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_142abfa92:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar9 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 142af5a70

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
       *this,FTopLevelAssetPath *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  FName *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  FVar1 = param_1->AssetName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = param_1->PackageName;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar4 = uVar4 + FVar2.Number;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U &
                     (uVar4 * 0x40 + uVar3 + FVar1.Number + -0x61c88647 + (uVar4 >> 2) ^ uVar4)) * 4
                     );
    if (uVar3 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar3 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar5 == param_1->PackageName) && (pFVar5[1] == param_1->AssetName)) {
          if (uVar3 == 0xffffffff) {
            return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
          }
          if (pFVar5 != (FName *)0x0) {
            return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar5 + 2);
          }
          return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
        }
        uVar3 = pFVar5[0xc].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
}

// FindChecked @ 142af6220

schar * __thiscall
TMapBase<FDependsNode_*,signed_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>_>
::FindChecked(TMapBase<FDependsNode_*,signed_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>_>
              *this,FDependsNode *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  schar *psVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(FDependsNode **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (schar *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return &DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  psVar6 = (schar *)(*pcVar3)();
  return psVar6;
}

// Find @ 142b588d0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pTVar2 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pTVar2 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar4 + 1);
          }
          return pTVar2;
        }
        uVar1 = pFVar4[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
}

// Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&> @ 142b71dd0

FTopLevelAssetPath * __thiscall
TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
::Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&>
          (TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
           *this,FTopLevelAssetPath *param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FSparseArrayAllocationInfo local_28;
  
  iVar11 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar11 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_> *)0x0)
  {
    FVar5 = param_1->AssetName;
    *(FName *)local_28.Pointer = param_1->PackageName;
    *(FName *)((longlong)local_28.Pointer + 8) = FVar5;
    FVar5 = param_2->AssetName;
    *(FName *)((longlong)local_28.Pointer + 0x10) = param_2->PackageName;
    *(FName *)((longlong)local_28.Pointer + 0x18) = FVar5;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 8);
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar4 = *(undefined8 *)local_28.Pointer;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar8 = uVar8 + (int)((ulonglong)uVar4 >> 0x20);
  iVar11 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar8 = uVar8 * 0x40 + -0x61c88647 + uVar7 + (int)((ulonglong)uVar3 >> 0x20) + (uVar8 >> 2) ^
          uVar8;
  if ((iVar11 - iVar6 != 1) && (iVar11 != iVar6)) {
    FVar10 = (this->Pairs).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar11 = *(int *)((longlong)FVar10 + (ulonglong)((this->Pairs).HashSize - 1U & uVar8) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar9 = (longlong)iVar11;
        if ((*(longlong *)(lVar2 + lVar9 * 0x28) == *(longlong *)local_28.Pointer) &&
           (*(longlong *)(lVar2 + 8 + lVar9 * 0x28) == *(longlong *)((longlong)local_28.Pointer + 8)
           )) {
          if (iVar11 != -1) {
            memmove((void *)(lVar2 + (longlong)iVar11 * 0x28),local_28.Pointer,0x20);
            TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_142b71f8d;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 0x20 + lVar9 * 0x28);
      } while (iVar11 != -1);
    }
  }
  TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar8,local_28.Pointer,local_28.Index);
  iVar11 = local_28.Index;
LAB_142b71f8d:
  return (FTopLevelAssetPath *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)iVar11 * 0x28 + 0x10);
}

// Emplace<FName_const_&> @ 142b71fd0

TOptional<FString> * __thiscall
TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
::Emplace<FName_const_&>
          (TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
           *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,TOptional<FString>_>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x14) = 0xffffffffffffffff;
  }
  uVar4 = *(undefined8 *)local_18.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,local_18.Pointer,
                 local_18.Index);
  return (TOptional<FString> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_18.Index * 0x20);
}

// Emplace<FName_const_&,FPackageDependencyData_const_&> @ 142b720f0

FPackageDependencyData * __thiscall
TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
::Emplace<FName_const_&,FPackageDependencyData_const_&>
          (TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
           *this,FName *param_1,FPackageDependencyData *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xf0 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xf0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FPackageDependencyData>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    FPackageDependencyData::FPackageDependencyData
              ((FPackageDependencyData *)((longlong)local_18.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0xe8) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_18.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,local_18.Pointer,
                 local_18.Index);
  return (FPackageDependencyData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0xf0 + 8);
}

// Emplace<FName_const_&,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> @ 142b72220

TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> * __thiscall
TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
::Emplace<FName_const_&,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>
          (TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
           *this,FName *param_1,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_> *)0x0)
  {
    *(FName *)local_18.Pointer = *param_1;
    *(FAssetData **)((longlong)local_18.Pointer + 8) = param_2->Ptr;
    param_2->Ptr = (FAssetData *)0x0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_18.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,local_18.Pointer,
                 local_18.Index);
  return (TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x18 + 8);
}

// Emplace<FName_const_&,FPackageDependencyData> @ 142b72340

FPackageDependencyData * __thiscall
TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
::Emplace<FName_const_&,FPackageDependencyData>
          (TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
           *this,FName *param_1,FPackageDependencyData *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xf0 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xf0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FPackageDependencyData>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    FPackageDependencyData::FPackageDependencyData
              ((FPackageDependencyData *)((longlong)local_18.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0xe8) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_18.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,local_18.Pointer,
                 local_18.Index);
  return (FPackageDependencyData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0xf0 + 8);
}

// Emplace<FTopLevelAssetPath,FTopLevelAssetPath> @ 142b725c0

FTopLevelAssetPath * __thiscall
TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
::Emplace<FTopLevelAssetPath,FTopLevelAssetPath>
          (TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
           *this,FTopLevelAssetPath *param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FSparseArrayAllocationInfo local_28;
  
  iVar11 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar11 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_> *)0x0)
  {
    FVar5 = param_1->AssetName;
    *(FName *)local_28.Pointer = param_1->PackageName;
    *(FName *)((longlong)local_28.Pointer + 8) = FVar5;
    FVar5 = param_2->AssetName;
    *(FName *)((longlong)local_28.Pointer + 0x10) = param_2->PackageName;
    *(FName *)((longlong)local_28.Pointer + 0x18) = FVar5;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 8);
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar4 = *(undefined8 *)local_28.Pointer;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar8 = uVar8 + (int)((ulonglong)uVar4 >> 0x20);
  iVar11 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar8 = uVar8 * 0x40 + -0x61c88647 + uVar7 + (int)((ulonglong)uVar3 >> 0x20) + (uVar8 >> 2) ^
          uVar8;
  if ((iVar11 - iVar6 != 1) && (iVar11 != iVar6)) {
    FVar10 = (this->Pairs).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar11 = *(int *)((longlong)FVar10 + (ulonglong)((this->Pairs).HashSize - 1U & uVar8) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar9 = (longlong)iVar11;
        if ((*(longlong *)(lVar2 + lVar9 * 0x28) == *(longlong *)local_28.Pointer) &&
           (*(longlong *)(lVar2 + 8 + lVar9 * 0x28) == *(longlong *)((longlong)local_28.Pointer + 8)
           )) {
          if (iVar11 != -1) {
            memmove((void *)(lVar2 + (longlong)iVar11 * 0x28),local_28.Pointer,0x20);
            TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_142b7277d;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 0x20 + lVar9 * 0x28);
      } while (iVar11 != -1);
    }
  }
  TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar8,local_28.Pointer,local_28.Index);
  iVar11 = local_28.Index;
LAB_142b7277d:
  return (FTopLevelAssetPath *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)iVar11 * 0x28 + 0x10);
}

// Emplace<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> @ 142b72aa0

TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> * __thiscall
TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
::Emplace<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>
          (TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
           *this,FName *param_1,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_> *)0x0)
  {
    *(FName *)local_18.Pointer = *param_1;
    *(FAssetData **)((longlong)local_18.Pointer + 8) = param_2->Ptr;
    param_2->Ptr = (FAssetData *)0x0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_18.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,local_18.Pointer,
                 local_18.Index);
  return (TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x18 + 8);
}

// Emplace<FName,FPackageDependencyData> @ 142b72bc0

FPackageDependencyData * __thiscall
TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
::Emplace<FName,FPackageDependencyData>
          (TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
           *this,FName *param_1,FPackageDependencyData *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0xf0 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xf0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FPackageDependencyData>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    FPackageDependencyData::FPackageDependencyData
              ((FPackageDependencyData *)((longlong)local_18.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0xe8) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_18.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,local_18.Pointer,
                 local_18.Index);
  return (FPackageDependencyData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0xf0 + 8);
}

// EmplaceByHash<FTopLevelAssetPath_const_&> @ 142b72cf0

TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FTopLevelAssetPath_const_&>
          (TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
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
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    FVar3 = param_2->AssetName;
    *(FName *)local_18.Pointer = param_2->PackageName;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 0x10);
}

// EmplaceByHash<FTopLevelAssetPath_const_&> @ 142b72e10

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<FTopLevelAssetPath_const_&>
          (TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FTopLevelAssetPath_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x68 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<FTopLevelAssetPath_const_&>::
    operator<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x60) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x68 + 0x10);
}

// EmplaceByHash<FTopLevelAssetPath> @ 142b72f30

TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FTopLevelAssetPath>
          (TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
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
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    FVar3 = param_2->AssetName;
    *(FName *)local_18.Pointer = param_2->PackageName;
    *(FName *)((longlong)local_18.Pointer + 8) = FVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar6 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 0x10);
}

// EmplaceByHash<FTopLevelAssetPath> @ 142b73050

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
::EmplaceByHash<FTopLevelAssetPath>
          (TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FTopLevelAssetPath_&&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x68 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    TKeyInitializer<FTopLevelAssetPath_&&>::
    operator<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x60) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x68 + 0x10);
}

// FindOrAddImpl<FDependsNode_*_const_&> @ 142b74060

TPropertyCombinationSet<3> * __thiscall
TMapBase<FDependsNode_*,TPropertyCombinationSet<3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>_>
::FindOrAddImpl<FDependsNode_*_const_&>
          (TMapBase<FDependsNode_*,TPropertyCombinationSet<3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>_>
           *this,uint param_1,FDependsNode **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FDependsNode **local_res20;
  
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
        if (*(FDependsNode **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_142b740f2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FDependsNode_*,TPropertyCombinationSet<3>_>,TDefaultMapHashableKeyFuncs<FDependsNode_*,TPropertyCombinationSet<3>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FDependsNode_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FDependsNode_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_142b740f2:
  return (TPropertyCombinationSet<3> *)(lVar3 + 8);
}

// FindOrAddImpl<FDependsNode_*_const_&> @ 142b74110

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>
* __thiscall
TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
::FindOrAddImpl<FDependsNode_*_const_&>
          (TMapBase<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>_>
           *this,uint param_1,FDependsNode **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FDependsNode **local_res20;
  
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
        if (*(FDependsNode **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_142b741a2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>_>,TDefaultMapHashableKeyFuncs<FDependsNode_*,TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FDependsNode_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FDependsNode_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_142b741a2:
  return (TUniquePtr<UE::AssetRegistry::FSetManageReferencesNodeData,TDefaultDelete<UE::AssetRegistry::FSetManageReferencesNodeData>_>
          *)(lVar3 + 8);
}

// FindOrAddImpl<FTopLevelAssetPath_const_&> @ 142b741c0

long64 * __thiscall
TMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>
::FindOrAddImpl<FTopLevelAssetPath_const_&>
          (TMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  FName *pFVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FTopLevelAssetPath *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar1 = (FName *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar1 == param_2->PackageName) && (pFVar1[1] == param_2->AssetName)) {
          if ((uVar2 != 0xffffffff) && (pFVar1 != (FName *)0x0)) {
            return (long64 *)(pFVar1 + 2);
          }
          break;
        }
        uVar2 = pFVar1[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FTopLevelAssetPath_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FTopLevelAssetPath_const_&> *)(ulonglong)param_1,(bool *)&local_res20)
  ;
  return (long64 *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<FName_const_&,FName> @ 142b74280

FName * __thiscall
TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
FindOrAddImpl<FName_const_&,FName>
          (TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
           *this,uint param_1,FName *param_2,FName *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FName *local_18;
  FName *local_10;
  
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
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_142b74317;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<FName_const_&,FName_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,FName_&&> *)(ulonglong)param_1,(bool *)&local_18);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_142b74317:
  return (FName *)(lVar3 + 8);
}

// FindOrAddImpl<FName> @ 142b74330

FParsedFilterTagRules * __thiscall
TMapBase<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_142b743c2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>,TDefaultMapHashableKeyFuncs<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_142b743c2:
  return (FParsedFilterTagRules *)(lVar3 + 8);
}

// Find @ 142b91270

TArray<FAssetData_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,FTopLevelAssetPath *param_1)

{
  longlong lVar1;
  FName FVar2;
  FName FVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  FVar2 = param_1->AssetName;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = param_1->PackageName;
  uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar3.Number;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar6 * 0x40 + uVar5 + FVar2.Number + -0x61c88647 + (uVar6 >> 2) ^ uVar6)) * 4)
    ;
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar4 + (longlong)iVar8 * 0x28;
        if ((*(FName *)(lVar4 + (longlong)iVar8 * 0x28) == param_1->PackageName) &&
           (*(FName *)(lVar1 + 8) == param_1->AssetName)) {
          if (iVar8 == -1) {
            return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (lVar1 != 0) {
            return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
          }
          return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0;
        }
        iVar8 = *(int *)(lVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 142b91360

TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
       *this,FTopLevelAssetPath *param_1)

{
  longlong lVar1;
  FName FVar2;
  FName FVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  FVar2 = param_1->AssetName;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = param_1->PackageName;
  uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar3.Number;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar6 * 0x40 + uVar5 + FVar2.Number + -0x61c88647 + (uVar6 >> 2) ^ uVar6)) * 4)
    ;
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar4 + (longlong)iVar8 * 0x28;
        if ((*(FName *)(lVar4 + (longlong)iVar8 * 0x28) == param_1->PackageName) &&
           (*(FName *)(lVar1 + 8) == param_1->AssetName)) {
          if (iVar8 == -1) {
            return (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (lVar1 != 0) {
            return (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
          }
          return (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)0x0;
        }
        iVar8 = *(int *)(lVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  return (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 142b91450

TArray<FAssetData_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 142b914f0

TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Find(TMapBase<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
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
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pTVar5 = (TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                   0x0;
          if (lVar1 != 0) {
            pTVar5 = (TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (TArray<FAssetData_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// Find @ 142b91590

FPackageDependencyData * __thiscall
TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
::Find(TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
       *this,FName param_1)

{
  uint uVar1;
  FPackageDependencyData *pFVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0xf0 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FPackageDependencyData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FPackageDependencyData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x1d].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPackageDependencyData *)0x0;
}

// Remove @ 142ba37f0

int __thiscall
TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
::Remove(TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
         *this,FTopLevelAssetPath *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar1 = param_1->AssetName;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    FVar2 = param_1->PackageName;
    uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar4 = uVar4 + FVar2.Number;
    iVar5 = TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
            ::RemoveImpl<FTopLevelAssetPath>
                      (&this->Pairs,
                       uVar4 * 0x40 + uVar3 + FVar1.Number + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4,
                       param_1);
    return iVar5;
  }
  return 0;
}

