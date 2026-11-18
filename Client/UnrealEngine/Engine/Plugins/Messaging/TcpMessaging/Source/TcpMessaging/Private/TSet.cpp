// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 4

// Emplace<TPairInitializer<FGuid_const_&,TSharedPtr<FTcpMessageTransportConnection,1>_const_&>_> @ 14eac6ef0

FSetElementId __thiscall
TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,TSharedPtr<FTcpMessageTransportConnection,1>_const_&>_>
          (TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,TSharedPtr<FTcpMessageTransportConnection,1>_const_&>
                 *param_1,bool *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  int iVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar11 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar11 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (int *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar4 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar4;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = *puVar3;
    lVar2 = puVar3[1];
    *(longlong *)((longlong)local_48.Pointer + 0x18) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(int *)((longlong)local_48.Pointer + 0x20) = -1;
  }
  uVar6 = CityHash64(local_48.Pointer,0x10);
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar13 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar11 = local_48.Index;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + ((ulonglong)(this->HashSize - 1) & uVar6 & 0xffffffff) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        piVar1 = (int *)(lVar2 + (longlong)iVar10 * 0x28);
        if (((*(int *)((longlong)local_48.Pointer + 0xc) == piVar1[3] &&
             *(int *)((longlong)local_48.Pointer + 8) ==
             *(int *)(lVar2 + 8 + (longlong)iVar10 * 0x28)) &&
            *(int *)((longlong)local_48.Pointer + 4) == piVar1[1]) &&
            *(int *)local_48.Pointer == *piVar1) {
          bVar13 = iVar10 != -1;
          if (bVar13) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(lVar2 + 0x18 + (longlong)iVar10 * 0x28));
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x28),local_48.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar10;
          }
          break;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(int *)((longlong)local_48.Pointer + 0x20) = *(int *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FGuid> @ 14eac7170

int __thiscall
TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar2 * 0x28);
        if (((param_2->D == puVar1[3] &&
             param_2->C == *(uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar2 * 0x28)
             ) && param_2->B == puVar1[1]) && param_2->A == *puVar1) {
          return uVar2;
        }
        uVar2 = puVar1[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  return -1;
}

// RemoveImpl<FGuid> @ 14eac7320

int __thiscall
TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
::RemoveImpl<FGuid>(TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
                    *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (lVar8 = (longlong)(int)uVar7 * 0x28,
        ((param_2->D != *(uint *)(lVar8 + 0xc + lVar2) || param_2->C != *(uint *)(lVar8 + 8 + lVar2)
         ) || param_2->B != *(uint *)(lVar8 + 4 + lVar2)) || param_2->A != *(uint *)(lVar8 + lVar2))
  {
    uVar7 = *(uint *)(lVar8 + 0x20 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14eac7436;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14eac7436:
  FVar6 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar10 = *(uint *)(lVar8 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// Rehash @ 14eacca20

void __thiscall
TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
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
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14eaccaf7;
        uVar9 = puVar10[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14eaccaf7:
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
        pcVar2 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = CityHash64(pcVar2,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar2 + 0x24) = uVar9;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar2 + 0x20) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

