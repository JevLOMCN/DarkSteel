// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 27

// FindOrAddImpl<int_const_&> @ 14a076dc0

TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> * __thiscall
TMapBase<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,0>_>
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
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<unsigned_int_const_&,unsigned_int> @ 14a076e70

uint * __thiscall
TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::FindOrAddImpl<unsigned_int_const_&,unsigned_int>
          (TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           *this,uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [8];
  uint *local_18;
  uint *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return puVar2 + 1;
          }
          break;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (uint *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<FRigVMDispatchFactory_const_*_const_&> @ 14a076f20

TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FRigVMDispatchFactory_const_*_const_&>
          (TMapBase<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FRigVMDispatchFactory **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FRigVMDispatchFactory **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FRigVMDispatchFactory *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRigVMDispatchFactory_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FRigVMDispatchFactory_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FString_const_&> @ 14a076fd0

TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_> *)
         (lVar2 + 0x10);
}

// Find @ 14a093cf0

TRigVMTypeIndex * __thiscall
TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
::Find(TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
       *this,FName param_1)

{
  uint uVar1;
  TRigVMTypeIndex *pTVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pTVar2 = (TRigVMTypeIndex *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pTVar2 = (TRigVMTypeIndex *)(pFVar4 + 1);
          }
          return pTVar2;
        }
        uVar1 = pFVar4[2].Number;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TRigVMTypeIndex *)0x0;
}

// Find @ 14a093d90

FUserData ** __thiscall
TMapBase<FString,UNameSpacedUserData::FUserData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>_>
::Find(TMapBase<FString,UNameSpacedUserData::FUserData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FUserData **ppFVar6;
  
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
  iVar2 = TSet<TTuple<FString,UNameSpacedUserData::FUserData_*>,TDefaultMapHashableKeyFuncs<FString,UNameSpacedUserData::FUserData_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppFVar6 = (FUserData **)0x0;
    if (lVar4 != 0) {
      ppFVar6 = (FUserData **)(lVar4 + 0x10);
    }
    return ppFVar6;
  }
  return (FUserData **)0x0;
}

// Emplace<FSoftObjectPath> @ 14a0b4230

TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> * __thiscall
TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
::Emplace<FSoftObjectPath>
          (TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
           *this,FSoftObjectPath *param_1)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>
  *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar8 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  pTVar7 = (TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>
            *)0x0;
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>
       *)0x0) {
    FVar3 = (param_1->AssetPath).AssetName;
    local_38 = 0;
    uStack_30 = 0;
    *(FName *)local_48.Pointer = (param_1->AssetPath).PackageName;
    *(FName *)((longlong)local_48.Pointer + 8) = FVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = 0;
    *(FScriptContainerElement **)((longlong)local_48.Pointer + 0x10) =
         (param_1->SubPathString).Data.AllocatorInstance.Data;
    (param_1->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_48.Pointer + 0x18) = (param_1->SubPathString).Data.ArrayNum;
    *(int *)((longlong)local_48.Pointer + 0x1c) = (param_1->SubPathString).Data.ArrayMax;
    (param_1->SubPathString).Data.ArrayNum = 0;
    (param_1->SubPathString).Data.ArrayMax = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x28) = 0;
    local_28 = 0;
    uStack_20 = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x30) = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x38) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x40) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x48) = 0xffffffff;
    pTVar7 = local_48.Pointer;
  }
  local_res8[0] = local_48.Index;
  uVar6 = ::GetTypeHash((FSoftObjectPath *)pTVar7);
  bVar4 = TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar7,local_res8[0]);
  }
  return (TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *)
         (*(longlong *)&(this->Pairs).Elements + 0x20 + lVar8 * 0x50);
}

// Emplace<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_> @ 14a0b60d0

TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>
          (TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
           *this,FName *param_1,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
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
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar8 = (TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_> *)
           0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_> *)0x0)
  {
    *(FName *)local_28.Pointer = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 8) =
         (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x10) = param_2->ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x14) = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  uVar3 = *(undefined8 *)pTVar8;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar8,local_res8[0]);
  }
  return (TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<FName_const_&> @ 14a0b6220

FString * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
EmplaceByHash<FName_const_&>
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,FString>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,FString>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FString>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<FSoftObjectPath> @ 14a0b6350

TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> * __thiscall
TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
::EmplaceByHash<FSoftObjectPath>
          (TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
           *this,uint param_1,FSoftObjectPath *param_2)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>
            *)0x0;
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>
       *)0x0) {
    FVar3 = (param_2->AssetPath).AssetName;
    local_38 = 0;
    uStack_30 = 0;
    *(FName *)local_48.Pointer = (param_2->AssetPath).PackageName;
    *(FName *)((longlong)local_48.Pointer + 8) = FVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = 0;
    *(FScriptContainerElement **)((longlong)local_48.Pointer + 0x10) =
         (param_2->SubPathString).Data.AllocatorInstance.Data;
    (param_2->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_48.Pointer + 0x18) = (param_2->SubPathString).Data.ArrayNum;
    *(int *)((longlong)local_48.Pointer + 0x1c) = (param_2->SubPathString).Data.ArrayMax;
    (param_2->SubPathString).Data.ArrayNum = 0;
    (param_2->SubPathString).Data.ArrayMax = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x28) = 0;
    local_28 = 0;
    uStack_20 = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x30) = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x38) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x40) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x48) = 0xffffffff;
    pTVar6 = local_48.Pointer;
  }
  local_res8[0] = local_48.Index;
  bVar4 = TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *)
         (*(longlong *)&(this->Pairs).Elements + 0x20 + lVar7 * 0x50);
}

// EmplaceByHash<FName> @ 14a0b7360

TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FName>
          (TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar5);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_> *)0x0)
  {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_> *)
         0x0;
  }
  else {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    DestructItems<FRigVMFunction,int>((FRigVMFunction *)0x0,0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar5 * 0x20);
}

// FindOrAddImpl<FName_const_&> @ 14a0b7a90

FString * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FString *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FString *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<TRigVMTypeIndex_const_&> @ 14a0b7b10

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TRigVMTypeIndex_const_&>
          (TMapBase<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TRigVMTypeIndex *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  TRigVMTypeIndex *local_res20;
  
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
        if (*(int *)(lVar1 + 8 + (longlong)iVar2 * 0x28) == param_2->Index) {
          if (lVar3 != 0) goto LAB_14a0b7ba3;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TRigVMTypeIndex_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TRigVMTypeIndex_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14a0b7ba3:
  return (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14a0b7ca0

void __thiscall
TMapBase<FRigVMNameOp,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FRigVMNameOp,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>_>
           *this,TArray<FRigVMNameOp,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
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
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a0b7d82;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14a0b7d82:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + 8) = uVar7;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14a0b7f00

void __thiscall
TMapBase<FRigVMNameOp,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>_>::
GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FRigVMNameOp,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>_>
           *this,TArray<FRigVMNameOp,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
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
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a0b7fe2;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14a0b7fe2:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x1c + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + 8) = uVar7;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14a0b8160

void __thiscall
TMapBase<FRigVMNameOp,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FRigVMNameOp,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>_>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14a0b8242;
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
LAB_14a0b8242:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
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

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14a0b83b0

void __thiscall
TMapBase<FRigVMNameOp,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>_>::
GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FRigVMNameOp,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>_>
           *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

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
              (1,1,uVar11,&param_1->AllocatorInstance,0,piVar1);
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14a0b8483;
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
LAB_14a0b8483:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0x1c);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + *piVar1)) &&
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
                          (0x101,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      (param_1->AllocatorInstance).Data[iVar9] = *pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14a0d8200

TRigVMTypeIndex * __thiscall
TMapBase<FRigVMTemplateArgumentType,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>_>
::Find(TMapBase<FRigVMTemplateArgumentType,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>_>
       *this,FRigVMTemplateArgumentType *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  ForElementType<FSetElementId> FVar8;
  FString local_18;
  
  pFVar5 = ::FName::ToString(&param_1->CPPType,&local_18);
  iVar2 = (pFVar5->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 + (ulonglong)((this->Pairs).HashSize - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar6 * 0x28;
        if (*(FName *)(lVar3 + (longlong)iVar6 * 0x28) == param_1->CPPType) {
          if (lVar1 != 0) {
            return (TRigVMTypeIndex *)(lVar1 + 0x10);
          }
          return (TRigVMTypeIndex *)0x0;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  return (TRigVMTypeIndex *)0x0;
}

// Find @ 14a0d82e0

TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> * __thiscall
TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
::Find(TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
       *this,FSoftObjectPath *param_1)

{
  uint uVar1;
  int iVar2;
  TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *pTVar3;
  longlong lVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x50 + *(longlong *)&(this->Pairs).Elements;
    pTVar3 = (TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *)0x0;
    if (lVar4 != 0) {
      pTVar3 = (TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *)(lVar4 + 0x20);
    }
    return pTVar3;
  }
  return (TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *)0x0;
}

// Find @ 14a0d8340

FRigVMDispatchFactory ** __thiscall
TMapBase<FName,FRigVMDispatchFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>_>
::Find(TMapBase<FName,FRigVMDispatchFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FRigVMDispatchFactory **ppFVar5;
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
          ppFVar5 = (FRigVMDispatchFactory **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FRigVMDispatchFactory **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FRigVMDispatchFactory **)0x0;
}

// Find @ 14a0d83e0

TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
          pTVar4 = (TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindChecked @ 14a0d8670

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,ETypeCategory param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  ETypeCategory *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (ETypeCategory *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (ETypeCategory *)0x0) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14a0d8710

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,ETypeCategory param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  ETypeCategory *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (ETypeCategory *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (ETypeCategory *)0x0) {
            return (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// Emplace<FName_const_&,TRigVMTypeIndex_const_&> @ 14a182450

TRigVMTypeIndex * __thiscall
TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
::Emplace<FName_const_&,TRigVMTypeIndex_const_&>
          (TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
           *this,FName *param_1,TRigVMTypeIndex *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(FName *)((longlong)local_28.Pointer + 8) = param_2->Name;
    *(int *)((longlong)local_28.Pointer + 0x10) = param_2->Index;
    *(undefined4 *)((longlong)local_28.Pointer + 0x14) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TRigVMTypeIndex *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x1c + 8);
}

// Emplace<FName,TRigVMTypeIndex_const_&> @ 14a182990

TRigVMTypeIndex * __thiscall
TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
::Emplace<FName,TRigVMTypeIndex_const_&>
          (TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
           *this,FName *param_1,TRigVMTypeIndex *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(FName *)((longlong)local_28.Pointer + 8) = param_2->Name;
    *(int *)((longlong)local_28.Pointer + 0x10) = param_2->Index;
    *(undefined4 *)((longlong)local_28.Pointer + 0x14) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TRigVMTypeIndex *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x1c + 8);
}

// Emplace<FName,TRigVMTypeIndex> @ 14a182ad0

TRigVMTypeIndex * __thiscall
TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
::Emplace<FName,TRigVMTypeIndex>
          (TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
           *this,FName *param_1,TRigVMTypeIndex *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(FName *)((longlong)local_28.Pointer + 8) = param_2->Name;
    *(int *)((longlong)local_28.Pointer + 0x10) = param_2->Index;
    *(undefined4 *)((longlong)local_28.Pointer + 0x14) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (TRigVMTypeIndex *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x1c + 8);
}

// Find @ 14a1a98f0

FSoftObjectPath * __thiscall
TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
::Find(TMapBase<FString,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FSoftObjectPath *pFVar6;
  
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
  iVar2 = TSet<TTuple<FString,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FString,FSoftObjectPath,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FSoftObjectPath *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FSoftObjectPath *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FSoftObjectPath *)0x0;
}

