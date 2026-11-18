// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 13

// Emplace<FMessageAddress_const_&> @ 14cfe8720

FSetElementId __thiscall
TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator>::
Emplace<FMessageAddress_const_&>
          (TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator> *this,
          FMessageAddress *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<FMessageAddress> *)0x0) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar7 = FCrc::MemCrc_DEPRECATED(local_38.Pointer,0x10,0);
  bVar5 = TryReplaceExisting(this,uVar7,local_38.Pointer,(int *)local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(uint *)((longlong)FVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  (param_1->UniqueId).A = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FMessageAddress_const_&,bool_const_&>_> @ 14cfe88b0

FSetElementId __thiscall
TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FMessageAddress_const_&,bool_const_&>_>
          (TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FMessageAddress_const_&,bool_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x1c + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FMessageAddress,bool>_> *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    *(undefined1 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x14) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar8 = FCrc::MemCrc_DEPRECATED(local_38.Pointer,0x10,0);
  bVar6 = TryReplaceExisting(this,uVar8,local_38.Pointer,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
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
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_38.Pointer + 0x18) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0x14) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FName_const_&>_> @ 14cfe8a50

FSetElementId __thiscall
TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FName_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  void *_Dst;
  int iVar7;
  int iVar8;
  bool bVar9;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar7 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xb8,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0xb8 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xb8 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (TTuple<FName,FTrackedSubject> *)0x0) {
    TKeyInitializer<FName_const_&>::operator<FName,FTrackedSubject>_TTuple<FName,FTrackedSubject>
              ((TKeyInitializer<FName_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0xb0) = 0xffffffff;
  }
  iVar7 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar7 - iVar3 != 1) && (iVar7 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar7 * 0xb8 + lVar2) == *(longlong *)local_38.Pointer) {
          bVar9 = iVar7 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar7 * 0xb8 + lVar2);
            FTrackedSubject::~FTrackedSubject((FTrackedSubject *)((longlong)_Dst + 8));
            memmove(_Dst,local_38.Pointer,0xb0);
            TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0xb8 + 0xb0 + lVar2);
      } while (iVar7 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar9;
  }
  if (bVar9 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<FName,FTrackedSubject> *)((longlong)local_38.Pointer + 0xb0))->field_0x4 =
           uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_38.Pointer + 0xb0) =
           *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<FMessageAddress> @ 14cfe8d40

int __thiscall
TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
::FindIndexByHash<FMessageAddress>
          (TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
           *this,uint param_1,FMessageAddress *param_2)

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
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x1c + *(longlong *)&this->Elements);
        if ((((param_2->UniqueId).D == puVar2[3] && (param_2->UniqueId).C == puVar2[2]) &&
            (param_2->UniqueId).B == puVar2[1]) && (param_2->UniqueId).A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[5];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FName> @ 14cfe8de0

int __thiscall
TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
FindIndexByHash<FName>
          (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar2 = (this->Hash).SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar2 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(FName *)((longlong)iVar1 * 0x20 + *(longlong *)&this->Elements) == *param_2) {
          return iVar1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar1 != -1);
    }
  }
  return -1;
}

// RemoveImpl<FName> @ 14cfe8f80

int __thiscall
TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
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
  while (lVar8 = (longlong)(int)uVar6 * 0xb8,
        *(FName *)(lVar8 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar8 + 0xb0 + *(longlong *)&this->Elements);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14cfe9064;
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
LAB_14cfe9064:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0xb4) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0xb0);
      TSparseArray<TSparseSetElement<TTuple<FName,FTrackedSubject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0xb0 + (longlong)(int)uVar1 * 0xb8);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Array @ 14cfea700

TArray<FMessageAddress,TSizedDefaultAllocator<32>_> * __thiscall
TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator>::Array
          (TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator> *this,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

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
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar13 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar13,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar13 = 1;
  iVar14 = iVar12;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar15;
    iVar14 = 0;
    iVar12 = 0;
    while (uVar5 == 0) {
      lVar11 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cfea7e2;
      uVar5 = puVar15[lVar11 + 1];
    }
    uVar13 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar11 + -1 + iVar14;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14cfea7e2:
  TStack_40._padding_ = CONCAT44(uVar13,iVar12);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&this->Elements + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar10;
      }
      iVar12 = __return_storage_ptr__->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar12 + 1;
      uVar8 = *(undefined8 *)(pFVar2 + 8);
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar6 + 8) = uVar8;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Rehash @ 14cfee610

void __thiscall
TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14cfee6e7;
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
LAB_14cfee6e7:
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
        pvVar8 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x1c);
        uVar4 = FCrc::MemCrc_DEPRECATED(pvVar8,0x10,0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pvVar8 + 0x18) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)((longlong)pvVar8 + 0x14) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14cfee7b0

void __thiscall
TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14cfee887;
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
LAB_14cfee887:
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
                 ((longlong)local_40.CurrentBitIndex * 0xb8 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0xb4) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 0x16) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14cfee960

void __thiscall
TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator>::Rehash
          (TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator> *this)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
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
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14cfeea37;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14cfeea37:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pvVar2 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar5 = FCrc::MemCrc_DEPRECATED(pvVar2,0x10,0);
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)((longlong)pvVar2 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)((longlong)pvVar2 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reserve @ 14cfeee60

void __thiscall
TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
Reserve(TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// TryReplaceExisting @ 14cff0780

bool __thiscall
TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FMessageAddress,bool>_> *param_2,int *param_3
          ,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar3 != 1) && (iVar14 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      do {
        piVar13 = (int *)((longlong)iVar14 * 0x1c + *(longlong *)&this->Elements);
        if (((*(int *)&param_2->field_0xc == piVar13[3] && *(int *)&param_2->field_0x8 == piVar13[2]
             ) && *(int *)&param_2->field_0x4 == piVar13[1]) && *(int *)param_2 == *piVar13) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            memmove((void *)((longlong)iVar14 * 0x1c + *(longlong *)&this->Elements),param_2,0x14);
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar15 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar15) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x1c + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0x1c + lVar4);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar15;
            *param_3 = iVar14;
          }
          goto LAB_14cff082c;
        }
        iVar14 = piVar13[5];
      } while (iVar14 != -1);
    }
    bVar16 = false;
  }
LAB_14cff082c:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// TryReplaceExisting @ 14cff09b0

bool __thiscall
TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator>::TryReplaceExisting
          (TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator> *this,
          uint param_1,TSparseSetElement<FMessageAddress> *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar5 != 1) && (iVar14 != iVar5)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar6 = *(longlong *)&this->Elements;
      do {
        piVar2 = (int *)(lVar6 + (longlong)iVar14 * 0x18);
        if (((*(int *)&param_2->field_0xc == piVar2[3] &&
             *(int *)&param_2->field_0x8 == *(int *)(lVar6 + 8 + (longlong)iVar14 * 0x18)) &&
            *(int *)&param_2->field_0x4 == piVar2[1]) && *(int *)param_2 == *piVar2) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            memmove((void *)(lVar6 + (longlong)iVar14 * 0x18),param_2,0x10);
            iVar5 = *param_3;
            lVar6 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar8 = (byte)iVar5 & 0x1f;
            uVar15 = 1 << bVar8 | 1U >> 0x20 - bVar8;
            if (((iVar5 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar5)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar4 = (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar4) & uVar15) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar6 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x18) = iVar5;
            }
            puVar3 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x18);
            uVar11 = 0xffffffff;
            *puVar3 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar3[1] = uVar11;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar5;
            if (((iVar5 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar5)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + lVar4) = *(uint *)(puVar12 + lVar4) & ~uVar15;
            *param_3 = iVar14;
          }
          goto LAB_14cff0a60;
        }
        iVar14 = piVar2[4];
      } while (iVar14 != -1);
    }
    bVar16 = false;
  }
LAB_14cff0a60:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

