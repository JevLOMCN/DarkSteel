// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 16

// Emplace<FString_const_&> @ 142a3d8c0

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
::Emplace<FString_const_&>
          (TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
           *this,FString *param_1)

{
  TKeyInitializer<FString_const_&> local_res8;
  FString *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FString_const_&>_>(&this->Pairs,&local_res8,(bool *)local_res10);
  return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x68 + 0x10);
}

// Emplace<FUtf8String_const_&,FPakEntryLocation_const_&> @ 142a3d900

FPakEntryLocation * __thiscall
TMapBase<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
::Emplace<FUtf8String_const_&,FPakEntryLocation_const_&>
          (TMapBase<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
           *this,FUtf8String *param_1,FPakEntryLocation *param_2)

{
  TPairInitializer<FUtf8String_const_&,FPakEntryLocation_const_&> local_res8 [2];
  FUtf8String *local_18;
  FPakEntryLocation *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FUtf8String_const_&,FPakEntryLocation_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (FPakEntryLocation *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x20 + 0x10);
}

// EmplaceByHash<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle_const_&> @ 142a3f650

FEntryHandle * __thiscall
TMapBase<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>_>
::EmplaceByHash<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle_const_&>
          (TMapBase<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>_>
           *this,uint param_1,FFilePackageStoreEntryRef *param_2,FEntryHandle *param_3)

{
  int iVar1;
  longlong lVar2;
  FFilePackageStoreEntrySoftReferences *pFVar3;
  int iVar4;
  int iVar5;
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>_>
       *)0x0) {
    pFVar3 = param_2->SoftReferences;
    *(FFilePackageStoreEntry **)local_28.Pointer = param_2->Entry;
    *(FFilePackageStoreEntrySoftReferences **)((longlong)local_28.Pointer + 8) = pFVar3;
    *(FEntryHandle *)((longlong)local_28.Pointer + 0x10) = *param_3;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 != 1) {
    iVar5 = TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FFilePackageStoreEntryRef>(&this->Pairs,param_1,local_28.Pointer);
    if (iVar5 != -1) {
      memmove((void *)((longlong)iVar5 * 0x20 + *(longlong *)&(this->Pairs).Elements),
              local_28.Pointer,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_28.Index,1);
      local_28.Index = iVar5;
      goto LAB_142a3f778;
    }
  }
  TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_28.Index);
LAB_142a3f778:
  return (FEntryHandle *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_28.Index * 0x20);
}

// FindByHash<TStringView<wchar_t>_> @ 142a408f0

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
::FindByHash<TStringView<wchar_t>_>
          (TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
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
      lVar7 = (longlong)iVar1 * 0x68;
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
          if (iVar2 != 0) goto LAB_142a4099f;
        }
        if (iVar5 == iVar4) {
          lVar3 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements;
          if (lVar3 == 0) {
            return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                    *)0x0;
          }
          return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                  *)(lVar3 + 0x10);
        }
      }
LAB_142a4099f:
      iVar1 = *(int *)(lVar7 + 0x60 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)0x0;
}

// FindOrAddImpl<FFileIoStoreBlockKey_const_&> @ 142a46e00

FFileIoStoreCompressedBlock ** __thiscall
TMapBase<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>_>
::FindOrAddImpl<FFileIoStoreBlockKey_const_&>
          (TMapBase<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>_>
           *this,uint param_1,FFileIoStoreBlockKey *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FFileIoStoreBlockKey *local_res20;
  
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
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) == (param_2->field0_0x0).Hash) {
          if (lVar3 != 0) goto LAB_142a46e92;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FFileIoStoreBlockKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FFileIoStoreBlockKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_142a46e92:
  return (FFileIoStoreCompressedBlock **)(lVar3 + 8);
}

// FindOrAddImpl<FFileIoStoreBlockKey_const_&> @ 142a46eb0

FFileIoStoreReadRequest ** __thiscall
TMapBase<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>_>
::FindOrAddImpl<FFileIoStoreBlockKey_const_&>
          (TMapBase<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>_>
           *this,uint param_1,FFileIoStoreBlockKey *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FFileIoStoreBlockKey *local_res20;
  
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
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) == (param_2->field0_0x0).Hash) {
          if (lVar3 != 0) goto LAB_142a46f42;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FFileIoStoreBlockKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FFileIoStoreBlockKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_142a46f42:
  return (FFileIoStoreReadRequest **)(lVar3 + 8);
}

// FindOrAddImpl<FPackageId_const_&> @ 142a46f60

TTuple<FName,FPackageId> * __thiscall
TMapBase<FPackageId,TTuple<FName,FPackageId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>_>
::FindOrAddImpl<FPackageId_const_&>
          (TMapBase<FPackageId,TTuple<FName,FPackageId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>_>
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
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_2->Id) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TTuple<FName,FPackageId> *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPackageId_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FPackageId_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (TTuple<FName,FPackageId> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FPackageId_const_&> @ 142a47010

FName * __thiscall
TMapBase<FPackageId,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>_>::
FindOrAddImpl<FPackageId_const_&>
          (TMapBase<FPackageId,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>_>
           *this,uint param_1,FPackageId *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FPackageId *local_res20;
  
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
          if (lVar3 != 0) goto LAB_142a470a2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPackageId_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FPackageId_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_142a470a2:
  return (FName *)(lVar3 + 8);
}

// FindOrAddImpl<FString_const_&> @ 142a470c0

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 142a47150

bool * __thiscall
TMapBase<FString,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,bool,0>_>::
FindOrAddImpl<FString_const_&>
          (TMapBase<FString,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,bool,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (bool *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// Find @ 142a6d870

FIoOffsetAndLength * __thiscall
TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
::Find(TMapBase<FIoChunkId,FIoOffsetAndLength,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoOffsetAndLength,0>_>
       *this,FIoChunkId *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  FIoOffsetAndLength *pFVar7;
  
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
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*plVar5 == *(longlong *)param_1->Id) && ((int)plVar5[1] == *(int *)(param_1->Id + 8)))
        {
          pFVar7 = (FIoOffsetAndLength *)0x0;
          if (plVar5 != (longlong *)0x0) {
            pFVar7 = (FIoOffsetAndLength *)((longlong)plVar5 + 0xc);
          }
          return pFVar7;
        }
        iVar4 = (int)plVar5[3];
      } while (iVar4 != -1);
    }
  }
  return (FIoOffsetAndLength *)0x0;
}

// Find @ 142a6d9c0

/* WARNING: Enum "EVersion": Some values do not have unique names */

TSharedPtr<FPakSignatureFile_const_,1> * __thiscall
TMapBase<FName,TSharedPtr<FPakSignatureFile_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>_>
::Find(TMapBase<FName,TSharedPtr<FPakSignatureFile_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FPakSignatureFile_const_,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FPakSignatureFile_const_,1> *pTVar4;
  
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
          pTVar4 = (TSharedPtr<FPakSignatureFile_const_,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedPtr<FPakSignatureFile_const_,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedPtr<FPakSignatureFile_const_,1> *)0x0;
}

// Find @ 142a6da60

FEntryHandle * __thiscall
TMapBase<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
::Find(TMapBase<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
       *this,FPackageId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FEntryHandle *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uint)param_1->Id) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1->Id) {
          pFVar4 = (FEntryHandle *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FEntryHandle *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FEntryHandle *)0x0;
}

// Find @ 142a6dae0

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
::Find(TMapBase<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar6;
  
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
  iVar2 = TSet<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x68 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)0x0;
}

// Find @ 142a6db70

FPakEntryLocation * __thiscall
TMapBase<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
::Find(TMapBase<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FPakEntryLocation *pFVar4;
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
          pFVar4 = (FPakEntryLocation *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FPakEntryLocation *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FPakEntryLocation *)0x0;
}

// FindChecked @ 142a6e480

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FPakProcessedReadRequest ** __thiscall
TMapBase<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>_>
::FindChecked(TMapBase<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>_>
              *this,FCachedAsyncBlock *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPakProcessedReadRequest **ppFVar6;
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
        if (*(FCachedAsyncBlock **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FPakProcessedReadRequest **)(lVar1 + 8);
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
    return (FPakProcessedReadRequest **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FPakProcessedReadRequest **)(*pcVar3)();
  return ppFVar6;
}

