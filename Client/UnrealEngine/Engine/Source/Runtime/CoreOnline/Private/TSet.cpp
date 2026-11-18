// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 22

// Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_&&>_> @ 1446125d0

FSetElementId __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_&&>_>
          (void *this,
          TPairInitializer<UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar4 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar4;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  if (local_38.Pointer != (byte *)0x0) {
    lVar8 = *(longlong *)(param_2 + 8);
    bVar3 = **(byte **)param_2;
    *(undefined ***)((longlong)local_38.Pointer + 8) =
         &
         ___7__FOnlineIdRegistryAndPriority_UFAccount_OnlineIdHandleTags_Online_UE___FOnlineIdRegistryRegistry_Online_UE__6B_
    ;
    *(byte *)local_38.Pointer = bVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *(undefined8 *)(lVar8 + 8);
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(lVar8 + 0x10);
    pbVar2 = (byte *)((longlong)local_38.Pointer + 0x20);
    pbVar2[0] = 0xff;
    pbVar2[1] = 0xff;
    pbVar2[2] = 0xff;
    pbVar2[3] = 0xff;
  }
  bVar10 = false;
  bVar3 = *(byte *)local_38.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar8 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar8 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar8 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)bVar3) *
                             4);
    if (iVar5 != -1) {
      lVar8 = *(longlong *)this;
      do {
        if (*(byte *)(lVar8 + (longlong)iVar5 * 0x28) == bVar3) {
          bVar10 = iVar5 != -1;
          if (bVar10) {
            memmove((void *)(lVar8 + (longlong)iVar5 * 0x28),local_38.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x20 + (longlong)iVar5 * 0x28);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar7 = *(int *)((longlong)this + 0x48) - 1U & (uint)bVar3;
      *(uint *)((longlong)local_38.Pointer + 0x24) = uVar7;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x20) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_&&>_> @ 1446127f0

FSetElementId __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_&&>_>
          (void *this,
          TPairInitializer<UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar4 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar4;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  if (local_38.Pointer != (byte *)0x0) {
    lVar8 = *(longlong *)(param_2 + 8);
    bVar3 = **(byte **)param_2;
    *(undefined ***)((longlong)local_38.Pointer + 8) =
         &
         ___7__FOnlineIdRegistryAndPriority_UFSession_OnlineIdHandleTags_Online_UE___FOnlineIdRegistryRegistry_Online_UE__6B_
    ;
    *(byte *)local_38.Pointer = bVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *(undefined8 *)(lVar8 + 8);
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(lVar8 + 0x10);
    pbVar2 = (byte *)((longlong)local_38.Pointer + 0x20);
    pbVar2[0] = 0xff;
    pbVar2[1] = 0xff;
    pbVar2[2] = 0xff;
    pbVar2[3] = 0xff;
  }
  bVar10 = false;
  bVar3 = *(byte *)local_38.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar8 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar8 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar8 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)bVar3) *
                             4);
    if (iVar5 != -1) {
      lVar8 = *(longlong *)this;
      do {
        if (*(byte *)(lVar8 + (longlong)iVar5 * 0x28) == bVar3) {
          bVar10 = iVar5 != -1;
          if (bVar10) {
            memmove((void *)(lVar8 + (longlong)iVar5 * 0x28),local_38.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x20 + (longlong)iVar5 * 0x28);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar7 = *(int *)((longlong)this + 0x48) - 1U & (uint)bVar3;
      *(uint *)((longlong)local_38.Pointer + 0x24) = uVar7;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x20) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_&&>_> @ 144612a10

FSetElementId __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_&&>_>
          (void *this,
          TPairInitializer<UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar4 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar4;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar5);
  if (local_38.Pointer != (byte *)0x0) {
    lVar8 = *(longlong *)(param_2 + 8);
    bVar3 = **(byte **)param_2;
    *(undefined ***)((longlong)local_38.Pointer + 8) =
         &
         ___7__FOnlineIdRegistryAndPriority_UFSessionInvite_OnlineIdHandleTags_Online_UE___FOnlineIdRegistryRegistry_Online_UE__6B_
    ;
    *(byte *)local_38.Pointer = bVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *(undefined8 *)(lVar8 + 8);
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(lVar8 + 0x10);
    pbVar2 = (byte *)((longlong)local_38.Pointer + 0x20);
    pbVar2[0] = 0xff;
    pbVar2[1] = 0xff;
    pbVar2[2] = 0xff;
    pbVar2[3] = 0xff;
  }
  bVar10 = false;
  bVar3 = *(byte *)local_38.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar8 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar8 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar8 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)bVar3) *
                             4);
    if (iVar5 != -1) {
      lVar8 = *(longlong *)this;
      do {
        if (*(byte *)(lVar8 + (longlong)iVar5 * 0x28) == bVar3) {
          bVar10 = iVar5 != -1;
          if (bVar10) {
            memmove((void *)(lVar8 + (longlong)iVar5 * 0x28),local_38.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x20 + (longlong)iVar5 * 0x28);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar7 = *(int *)((longlong)this + 0x48) - 1U & (uint)bVar3;
      *(uint *)((longlong)local_38.Pointer + 0x24) = uVar7;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x20) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>_> @ 144612c30

FSetElementId __thiscall
TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>_>
          (TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>
                 *param_1,bool *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>
  *pTVar11;
  byte *pbVar12;
  uint uVar13;
  bool *in_R9;
  TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>
  *pTVar14;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FSparseArrayAllocationInfo local_48;
  
  iVar2 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar2 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar4 = *(longlong *)&this->Elements;
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar4);
    iVar2 = iVar2 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  pTVar11 = (TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>
             *)0x0;
  pTVar14 = pTVar11;
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>
       *)0x0) {
    TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>
    ::
    operator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>
                *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    pTVar14 = local_48.Pointer;
  }
  pbVar12 = *(byte **)pTVar14;
  iVar2 = *(int *)&pTVar14->field_0x8;
  local_res10[0] = local_48.Index;
  pbVar1 = pbVar12 + iVar2;
  while( true ) {
    if (*(int *)&pTVar14->field_0x8 != iVar2) {
      `TCheckedPointerIterator<unsigned_char_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    uVar13 = (uint)pTVar11;
    if (pbVar12 == pbVar1) break;
    pTVar11 = (TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>
               *)(ulonglong)
                 (uVar13 ^ uVar13 * 0x40 + (int)((ulonglong)pTVar11 >> 2) + -0x61c88647 +
                           (uint)*pbVar12);
    pbVar12 = pbVar12 + 1;
  }
  bVar5 = TryReplaceExisting(this,uVar13,pTVar14,local_res10,in_R9);
  if (!bVar5) {
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
      uVar13 = this->HashSize - 1U & uVar13;
      *(uint *)&pTVar14->field_0x1c = uVar13;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar13;
      *(undefined4 *)&pTVar14->field_0x18 = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res10[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res10[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>_> @ 144612e10

FSetElementId __thiscall
TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>_>
          (TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>
  *pTVar12;
  bool *in_R9;
  int iVar13;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  pTVar12 = (TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>
             *)0x0;
  iVar13 = 0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>
       *)0x0) {
    pTVar3 = *(TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
               **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
    ::
    TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
              ((TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                *)((longlong)local_38.Pointer + 0x10),pTVar3);
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
    pTVar12 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar12->field_0x8 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)pTVar12;
    iVar13 = *(int *)&pTVar12->field_0x8 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar9);
  bVar4 = TryReplaceExisting(this,uVar6,pTVar12,local_res8,in_R9);
  if (!bVar4) {
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
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)&pTVar12->field_0x2c = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&pTVar12->field_0x28 = *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<enum_UE::Online::EOnlineServices_const_&>_> @ 144612fd0

FSetElementId __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<enum_UE::Online::EOnlineServices_const_&>_>
          (void *this,uint param_1,TKeyInitializer<UE::Online::EOnlineServices_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  longlong lVar7;
  int iVar8;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar4 * 0x70 + 4 + *(longlong *)this);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x70 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_>
       *)0x0) {
    TKeyInitializer<enum_UE::Online::EOnlineServices_const_&>::
    operator<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>
              (param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x68) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar3 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar3) {
    uVar6 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)((longlong)this + 0x48))) {
      uVar6 = *(int *)((longlong)this + 0x48) - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x6c) = uVar6;
      lVar7 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar7 = (longlong)this + 0x38;
      }
      uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x68) = *(undefined4 *)(lVar7 + uVar5 * 4);
      *(int *)(lVar7 + uVar5 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 144613150

int __thiscall
TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
::FindIndexByHash<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
           *this,uint param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      iVar1 = param_2->ArrayNum;
      do {
        lVar5 = (longlong)iVar4 * 0x20;
        iVar3 = *(int *)(lVar5 + 8 + lVar2);
        if (iVar3 == iVar1) {
          if (iVar3 == 0) {
            return iVar4;
          }
          iVar3 = memcmp(*(void **)(lVar5 + lVar2),(param_2->AllocatorInstance).Data,(longlong)iVar3
                        );
          if (iVar3 == 0) {
            return iVar4;
          }
        }
        iVar4 = *(int *)(lVar5 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  return -1;
}

// RemoveImpl<enum_UE::Online::EOnlineServices> @ 144613590

int __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
::RemoveImpl<enum_UE::Online::EOnlineServices>(void *this,uint param_1,EOnlineServices *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar9 = (longlong)this + 0x38;
  }
  uVar6 = *(uint *)(lVar9 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)param_1
                            ) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar9 = (longlong)(int)uVar6 * 0x28,
        *(EOnlineServices *)(lVar9 + *(longlong *)this) != *param_2) {
    uVar6 = *(uint *)(lVar9 + 0x20 + *(longlong *)this);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)this + 0x28))) {
    lVar8 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar8 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_144613677;
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
LAB_144613677:
  lVar8 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar5 = (longlong)this + 0x38;
  }
  puVar7 = (uint *)(lVar5 + (longlong)*(int *)(lVar8 + lVar9 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + lVar9 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this,uVar6,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<enum_UE::Online::EOnlineServices> @ 144613720

int __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
::RemoveImpl<enum_UE::Online::EOnlineServices>(void *this,uint param_1,EOnlineServices *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar9 = (longlong)this + 0x38;
  }
  uVar6 = *(uint *)(lVar9 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)param_1
                            ) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar9 = (longlong)(int)uVar6 * 0x28,
        *(EOnlineServices *)(lVar9 + *(longlong *)this) != *param_2) {
    uVar6 = *(uint *)(lVar9 + 0x20 + *(longlong *)this);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)this + 0x28))) {
    lVar8 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar8 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_144613807;
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
LAB_144613807:
  lVar8 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar5 = (longlong)this + 0x38;
  }
  puVar7 = (uint *)(lVar5 + (longlong)*(int *)(lVar8 + lVar9 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + lVar9 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this,uVar6,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<enum_UE::Online::EOnlineServices> @ 1446138b0

int __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>,FDefaultSetAllocator>
::RemoveImpl<enum_UE::Online::EOnlineServices>(void *this,uint param_1,EOnlineServices *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar9 = (longlong)this + 0x38;
  }
  uVar6 = *(uint *)(lVar9 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)param_1
                            ) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar9 = (longlong)(int)uVar6 * 0x28,
        *(EOnlineServices *)(lVar9 + *(longlong *)this) != *param_2) {
    uVar6 = *(uint *)(lVar9 + 0x20 + *(longlong *)this);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)this + 0x28))) {
    lVar8 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar8 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_144613997;
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
LAB_144613997:
  lVar8 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar5 = (longlong)this + 0x38;
  }
  puVar7 = (uint *)(lVar5 + (longlong)*(int *)(lVar8 + lVar9 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + lVar9 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this,uVar6,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator> @ 144615730

TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
::
TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
          (TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// operator= @ 144616170

TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  *pTVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
  *pTVar7;
  ForElementType<FSetElementId> _Dst;
  ForElementType<FSetElementId> _Src;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  *this_00;
  uint uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  
  if (this == param_1) {
    return this;
  }
  uVar10 = param_1->HashSize;
  uVar12 = uVar10;
  if (uVar10 < 2) {
    if ((this->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1446161d6;
    uVar12 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar12,4);
LAB_1446161d6:
  _Src = (param_1->Hash).SecondaryData;
  _Dst = (this->Hash).SecondaryData;
  if (uVar10 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&this->Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar10 << 2);
  }
  this->HashSize = uVar10;
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar3 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar3 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar9 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    this_00 = (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
               *)(*(longlong *)&this->Elements + 0x10);
    lVar14 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if (((iVar9 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
                  *)(*pcVar4)();
        return pTVar7;
      }
      puVar3 = *(undefined1 **)&(param_1->Elements).field_0x20;
      pTVar2 = (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                *)(lVar14 + (longlong)this_00);
      puVar13 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar13 = puVar3;
      }
      pFVar8 = (FString *)(lVar14 + -0x10 + (longlong)this_00);
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if ((*(uint *)(puVar13 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)&this_00[-1]._padding_ =
             *(undefined4 *)&(pFVar8->Data).AllocatorInstance.Data;
        *(undefined4 *)((longlong)&this_00[-1]._padding_ + 4) =
             *(undefined4 *)((longlong)&pTVar2[-1]._padding_ + 4);
      }
      else {
        ::FString::FString((FString *)&this_00[-1]._padding_,pFVar8);
        TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
        ::
        TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                  (this_00,pTVar2);
        *(int *)&this_00[1]._padding_ = (int)pTVar2[1]._padding_;
        *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) =
             *(undefined4 *)((longlong)&pTVar2[1]._padding_ + 4);
      }
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      this_00 = this_00 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Rehash @ 1446193c0

void __thiscall
TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  ForElementType<FSetElementId> local_res10;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  piVar1 = &this->HashSize;
  local_res10 = (ForElementType<FSetElementId>)&this->Hash;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)local_res10,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_88 = 0;
    uStack_84 = 1;
    iStack_74 = 0;
    iStack_70 = 0;
    if (iVar3 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_60.Array;
      }
      uVar10 = *puVar11;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar10 == 0) {
        iStack_70 = iStack_70 + 0x20;
        lVar6 = (longlong)local_88;
        local_88 = local_88 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_144619499;
        uVar10 = puVar11[lVar6 + 1];
      }
      uStack_84 = -uVar10 & uVar10;
      uVar5 = (ulonglong)uStack_84 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_74 = (int)lVar6 + -1 + iStack_70;
      if (iVar3 < iStack_74) {
LAB_144619499:
        iStack_74 = iVar3;
      }
    }
    local_60._padding_ = CONCAT44(uStack_84,local_88);
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60.CurrentBitIndex = iStack_74;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = iStack_70;
    if (iStack_74 < iVar3) {
      do {
        iVar4 = local_60.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_60.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar5 = 0;
        pbVar8 = (byte *)*puVar9;
        iVar3 = *(int *)(puVar9 + 1);
        pbVar2 = pbVar8 + iVar3;
        while( true ) {
          if (*(int *)(puVar9 + 1) != iVar3) {
            `TCheckedPointerIterator<unsigned_char_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          uVar10 = (uint)uVar5;
          if (pbVar8 == pbVar2) break;
          uVar5 = (ulonglong)
                  (uVar10 ^ uVar10 * 0x40 + (int)(uVar5 >> 2) + -0x61c88647 + (uint)*pbVar8);
          pbVar8 = pbVar8 + 1;
        }
        uVar10 = *piVar1 - 1U & uVar10;
        *(uint *)((longlong)puVar9 + 0x1c) = uVar10;
        FVar7 = local_res10;
        if (*(ForElementType<FSetElementId> *)((longlong)local_res10 + 8) !=
            (ForElementType<FSetElementId>)0x0) {
          FVar7 = *(ForElementType<FSetElementId> *)((longlong)local_res10 + 8);
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
        *(int *)((longlong)FVar7 + uVar5 * 4) = iVar4;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1446195b0

void __thiscall
TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_144619687;
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
LAB_144619687:
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

// Rehash @ 144619760

void __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14461983c;
        uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14461983c:
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
        lVar3 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x28;
        uVar6 = *piVar1 - 1U &
                (uint)*(byte *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x28);
        *(uint *)(lVar3 + 0x24) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 144619900

void __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1446199dc;
        uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1446199dc:
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
        lVar3 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x28;
        uVar6 = *piVar1 - 1U &
                (uint)*(byte *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x28);
        *(uint *)(lVar3 + 0x24) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 144619aa0

void __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_144619b7c;
        uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_144619b7c:
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
        lVar3 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x28;
        uVar6 = *piVar1 - 1U &
                (uint)*(byte *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x28);
        *(uint *)(lVar3 + 0x24) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 144619c40

void __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_144619d1c;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_144619d1c:
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
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0x70 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0x6c) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 0x68) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reserve @ 144619dd0

void __thiscall
TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
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
    TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// TryReplaceExisting @ 14461b990

bool __thiscall
TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined8 *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar10 = FindIndexByHash<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (this,param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)param_2);
    bVar14 = iVar10 != -1;
    if (bVar14) {
      _Dst = (undefined8 *)((longlong)iVar10 * 0x20 + *(longlong *)&this->Elements);
      pvVar4 = (void *)*_Dst;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(_Dst,param_2,0x18);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar5 = *(longlong *)&this->Elements;
      bVar7 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar5) = iVar3;
      }
      uVar11 = 0xffffffff;
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)((longlong)iVar3 * 0x20 + 4 + lVar5) = uVar11;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar10;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14461bb80

bool __thiscall
TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ForElementType<FSetElementId> FVar10;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
  *this_00;
  bool bVar11;
  undefined1 *puVar12;
  uint uVar13;
  bool bVar14;
  
  iVar2 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if ((iVar2 - iVar6 != 1) && (iVar2 != iVar6)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar8 = (longlong)iVar2;
      iVar6 = *(int *)(*(longlong *)&this->Elements + 8 + lVar8 * 0x30);
      if (iVar6 == *(int *)&param_2->field_0x8) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar8 * 0x30),
                             *(wchar_t **)param_2);
          bVar14 = iVar6 == 0;
          goto LAB_14461bc24;
        }
LAB_14461bc3c:
        bVar11 = true;
        this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
                   *)((longlong)iVar2 * 0x30 + *(longlong *)&this->Elements);
        UE::Core::Private::Tuple::
        TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
        ::
        ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
                  (this_00);
        memmove(this_00,param_2,0x28);
        iVar6 = *param_3;
        puVar1 = &(this->Elements).field_0x10;
        lVar8 = *(longlong *)&this->Elements;
        bVar4 = (byte)iVar6 & 0x1f;
        uVar13 = 1 << bVar4 | 1U >> 0x20 - bVar4;
        if (((iVar6 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar6)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        if (((*(uint *)(puVar12 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4) &
             uVar13) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (*(int *)&(this->Elements).field_0x34 != 0) {
          *(int *)(lVar8 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar6;
        }
        uVar7 = 0xffffffff;
        puVar9 = (undefined4 *)((longlong)iVar6 * 0x30 + lVar8);
        *puVar9 = 0xffffffff;
        if (0 < *(int *)&(this->Elements).field_0x34) {
          uVar7 = *(undefined4 *)&(this->Elements).field_0x30;
        }
        puVar9[1] = uVar7;
        puVar12 = &(this->Elements).field_0x34;
        *(int *)puVar12 = *(int *)puVar12 + 1;
        *(int *)&(this->Elements).field_0x30 = iVar6;
        if (((iVar6 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar6)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        *(uint *)(puVar12 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4) =
             *(uint *)(puVar12 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4) &
             ~uVar13;
        *param_3 = iVar2;
        break;
      }
      bVar14 = iVar6 + *(int *)&param_2->field_0x8 == 1;
LAB_14461bc24:
      if (bVar14) goto LAB_14461bc3c;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 0x28 + lVar8 * 0x30);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar11;
  }
  return bVar11;
}

// TryReplaceExisting @ 14461bde0

bool __thiscall
TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_>
          *param_2,int *param_3,bool *param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  void *_Dst;
  uint uVar12;
  bool bVar13;
  
  bVar13 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar10 != -1) {
      lVar9 = *(longlong *)this;
      do {
        if (*(char *)((longlong)iVar10 * 0x70 + lVar9) == *(char *)param_2) {
          bVar13 = iVar10 != -1;
          if (bVar13) {
            _Dst = (void *)((longlong)iVar10 * 0x70 + lVar9);
            DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                      (*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
                        ((longlong)_Dst + 0x58),*(int *)((longlong)_Dst + 0x60));
            if (*(void **)((longlong)_Dst + 0x58) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x58));
            }
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x48));
            }
            TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 8));
            memmove(_Dst,param_2,0x68);
            iVar3 = *param_3;
            lVar9 = *(longlong *)this;
            bVar5 = (byte)iVar3 & 0x1f;
            uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar11 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar11 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar11 + lVar2) & uVar12) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)((longlong)*(int *)((longlong)this + 0x30) * 0x70 + lVar9) = iVar3;
            }
            uVar8 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x70 + lVar9) = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar8 = *(undefined4 *)((longlong)this + 0x30);
            }
            *(undefined4 *)((longlong)iVar3 * 0x70 + 4 + lVar9) = uVar8;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar3;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar9 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar9 = (longlong)this + 0x10;
            }
            puVar1 = (uint *)(lVar9 + lVar2);
            *puVar1 = *puVar1 & ~uVar12;
            *param_3 = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x70 + 0x68 + lVar9);
      } while (iVar10 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar13;
  }
  return bVar13;
}

