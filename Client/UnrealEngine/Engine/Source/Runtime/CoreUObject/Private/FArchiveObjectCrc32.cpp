// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// FArchiveObjectCrc32 @ 141ed1ae0

FArchiveObjectCrc32 * __thiscall FArchiveObjectCrc32::FArchiveObjectCrc32(FArchiveObjectCrc32 *this)

{
  byte *pbVar1;
  FMemoryWriter *this_00;
  longlong lVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this_00 = &this->MemoryWriter;
  pTVar4 = (TNode *)0x0;
  this->_padding_ = (longlong)&___7FArchiveObjectCrc32__6B_;
  (this->SerializedObjectData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedObjectData).ArrayNum = 0;
  (this->SerializedObjectData).ArrayMax = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x8 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x10 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x18 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x20 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x28 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x30 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x38 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x40 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x48 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x50 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x58 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x60 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x68 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x70 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x78 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x80 = 0;
  *(undefined8 *)&(this->MemoryWriter).field_0x88 = 0;
  FArchiveState::FArchiveState((FArchiveState *)this_00);
  *(undefined8 *)&(this->MemoryWriter).field_0x90 = 0;
  *(undefined ***)&this_00->field_0x0 =
       &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&(this->MemoryWriter).field_0x98 =
       &this->SerializedObjectData;
  *(undefined8 *)&(this->MemoryWriter).field_0xa0 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this_00,true);
  (**(code **)(*(longlong *)&this_00->field_0x0 + 0x108))(this_00,0);
  *(undefined ***)&this_00->field_0x0 = &___7FMemoryWriter__6B_;
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->Item = (UObject *)0x0;
    pTVar3->NextNode = (TNode *)0x0;
    pTVar4 = pTVar3;
  }
  (this->ObjectsToSerialize).Tail = pTVar4;
  (this->ObjectsToSerialize).Head = pTVar4;
  lVar2 = this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  this->ObjectBeingSerialized = (UObject *)0x0;
  this->RootObject = (UObject *)0x0;
  (**(code **)(lVar2 + 0xd8))(this,1);
  return this;
}

// ~FArchiveObjectCrc32 @ 141ed4f90

void __thiscall FArchiveObjectCrc32::~FArchiveObjectCrc32(FArchiveObjectCrc32 *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FArchiveObjectCrc32__6B_;
  pTVar1 = (this->ObjectsToSerialize).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->ObjectsToSerialize).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->ObjectsToSerialize).Tail;
  }
  FArchive::~FArchive((FArchive *)&this->MemoryWriter);
  pFVar2 = (this->SerializedObjectData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 141ed6c60

FArchive * __thiscall FArchiveObjectCrc32::operator<<(FArchiveObjectCrc32 *this,UObject **param_1)

{
  FArchive *pFVar1;
  UObject *local_res8 [4];
  
  local_res8[0] = *param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  pFVar1 = (FArchive *)(**(code **)(this->_padding_ + 0x150))(this,local_res8);
  return pFVar1;
}

// operator<< @ 141ed6cb0

FArchive * __thiscall FArchiveObjectCrc32::operator<<(FArchiveObjectCrc32 *this,FObjectPtr *param_1)

{
  UObject *pUVar1;
  FObjectPtr_u_0 FVar2;
  TNode *pTVar3;
  bool bVar4;
  TNode *pTVar5;
  FString *pFVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).Handle == (UObject *)0x0) {
    ::FString::FString(&local_38,L"None");
    ::operator<<((FArchive *)this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return (FArchive *)this;
    }
  }
  else {
    pUVar1 = this->RootObject;
    if (pUVar1 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      if (((param_1->field0_0x0).Handle != (UObject *)0x0) &&
         (bVar4 = UE::CoreUObject::Private::IsIn((param_1->field0_0x0).Handle,pUVar1), bVar4)) {
        FVar2 = param_1->field0_0x0;
        pTVar5 = ::operator_new(0x10);
        if (pTVar5 == (TNode *)0x0) {
          return (FArchive *)this;
        }
        pTVar5->NextNode = (TNode *)0x0;
        pTVar5->Item = (UObject *)FVar2;
        pTVar3 = (this->ObjectsToSerialize).Head;
        (this->ObjectsToSerialize).Head = pTVar5;
        pTVar3->NextNode = pTVar5;
        return (FArchive *)this;
      }
    }
    bVar4 = (param_1->field0_0x0).Handle == (UObject *)0x0;
    if (bVar4) {
      pFVar6 = ::FString::FString(&local_28,L"None");
    }
    else {
      pFVar6 = UE::CoreUObject::Private::GetPathName
                         (&local_18,(param_1->field0_0x0).Handle,(UObject *)0x0);
    }
    local_38.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((!bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::operator<<((FArchive *)this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 141ed6e40

FArchive * __thiscall FArchiveObjectCrc32::operator<<(FArchiveObjectCrc32 *this,FName *param_1)

{
  FName FVar1;
  
  FVar1.ComparisonIndex.Value = *(uint *)&this->ObjectBeingSerialized->field_0x18;
  FVar1.Number = *(uint *)&this->ObjectBeingSerialized->field_0x1c;
  if (*param_1 != FVar1) {
    (**(code **)(*(longlong *)&this->MemoryWriter + 0x178))();
  }
  return (FArchive *)this;
}

// Crc32 @ 141ee42f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __thiscall
FArchiveObjectCrc32::Crc32(FArchiveObjectCrc32 *this,UObject *param_1,UObject *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  TNode *pTVar3;
  UObject *pUVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  TNode *pTVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  byte bVar11;
  uint uVar12;
  ulonglong *puVar13;
  ForElementType<unsigned_int> FVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStackY_138 [32];
  uint local_108;
  uint local_100;
  uint uStack_fc;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FSparseArrayAllocationInfo local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this->RootObject = param_2;
  local_108 = param_3;
  if (param_1 != (UObject *)0x0) {
    local_6c = 0x80;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70 = 0;
    local_64 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    local_68 = -1;
    pTVar8 = ::operator_new(0x10);
    if (pTVar8 != (TNode *)0x0) {
      pTVar8->NextNode = (TNode *)0x0;
      pTVar8->Item = param_1;
      pTVar3 = (this->ObjectsToSerialize).Head;
      (this->ObjectsToSerialize).Head = pTVar8;
      pTVar3->NextNode = pTVar8;
    }
LAB_141ee43b3:
    puVar13 = (ulonglong *)0x0;
    pTVar8 = ((this->ObjectsToSerialize).Tail)->NextNode;
    if (pTVar8 != (TNode *)0x0) {
      pUVar4 = pTVar8->Item;
      pTVar3 = (this->ObjectsToSerialize).Tail;
      (this->ObjectsToSerialize).Tail = pTVar8;
      pTVar8->Item = (UObject *)0x0;
      ::operator_delete(pTVar3,0x10);
      if (local_64 == 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                           (int *)(local_98 + 0xc));
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
        FVar14 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_78;
        }
        bVar11 = (byte)iVar7 & 0x1f;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0x1f;
          bVar11 = bVar11 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar14 + (longlong)(iVar7 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar11 & 0x1f));
        iVar7 = local_68;
      }
      else {
        local_64 = local_64 + -1;
        iVar7 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
        iVar6 = local_68;
        if (local_64 != 0) {
          *(undefined4 *)(local_98._0_8_ + (longlong)iVar7 * 0x10) = 0xffffffff;
        }
      }
      local_68 = iVar7;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,&local_b0,iVar6);
      if (local_b0.Pointer != (ulonglong *)0x0) {
        *(UObject **)local_b0.Pointer = pUVar4;
        *(undefined4 *)((longlong)local_b0.Pointer + 8) = 0xffffffff;
        puVar13 = local_b0.Pointer;
      }
      uVar17 = *puVar13;
      uVar12 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
        FVar10.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_58.Data;
        }
        for (iVar6 = *(int *)(FVar10.Data + (ulonglong)(local_50 - 1 & uVar12) * 4); iVar6 != -1;
            iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar6 * 0x10) == uVar17) {
            if (iVar6 != -1) {
              *(ulonglong *)(local_98._0_8_ + (longlong)iVar6 * 0x10) = uVar17;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_98,local_b0.Index,1);
              goto LAB_141ee43b3;
            }
            break;
          }
        }
      }
      uVar18 = local_98._8_4_ - local_64;
      uVar17 = 1;
      if (3 < uVar18) {
        uVar17 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar17 = (ulonglong)(uint)(1 << ((byte)lVar15 & 0x1f));
      }
      uVar16 = (uint)uVar17;
      if (((int)uVar18 < 1) || ((int)uVar16 <= (int)local_50)) {
        uVar12 = local_50 - 1 & uVar12;
        *(uint *)((longlong)puVar13 + 0xc) = uVar12;
        FVar10.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(FVar10.Data + uVar17 * 4);
        *(int *)(FVar10.Data + uVar17 * 4) = local_b0.Index;
      }
      else {
        local_50 = uVar16;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar16 != 0) {
          uVar12 = uVar16;
          if (uVar16 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar12 = 0;
              goto LAB_141ee4605;
            }
          }
          else {
LAB_141ee4605:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar12,4);
          }
          if (0 < (int)uVar16) {
            uVar19 = 0;
            do {
              FVar10.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar10.Data = local_58.Data;
              }
              uVar9 = uVar19 & (longlong)(int)uVar16 - 1U;
              uVar19 = uVar19 + 1;
              *(undefined4 *)(FVar10.Data + uVar9 * 4) = 0xffffffff;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        if (local_50 != 0) {
          local_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          uStack_fc = 1;
          local_100 = 0;
          uStack_ec = 0;
          uStack_e8 = 0;
          if (local_70 != 0) {
            FVar14 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_78;
            }
            uVar12 = *(uint *)FVar14;
            while (uVar12 == 0) {
              uStack_e8 = uStack_e8 + 0x20;
              lVar15 = (longlong)(int)local_100;
              local_100 = local_100 + 1;
              if ((int)(local_70 + -1 + ((int)(local_70 + -1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_100) goto LAB_141ee470f;
              uVar12 = ((uint *)((longlong)FVar14 + 4))[lVar15];
            }
            uStack_fc = -uVar12 & uVar12;
            uVar17 = (ulonglong)uStack_fc * 2 + 1;
            lVar15 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uStack_ec = uStack_e8 + -1 + (int)lVar15;
            if ((int)local_70 < (int)uStack_ec) {
LAB_141ee470f:
              uStack_ec = local_70;
            }
          }
          local_d8._padding_ = CONCAT44(uStack_fc,local_100);
          local_d8.CurrentBitIndex = uStack_ec;
          local_d8.UnvisitedBitMask = 0xffffffff;
          local_d8._28_4_ = uStack_e4;
          local_d8.BaseBitIndex = uStack_e8;
          if ((int)uStack_ec < (int)local_70) {
            do {
              pFVar21 = (FScriptContainerElement *)
                        (local_98._0_8_ + (longlong)(int)uStack_ec * 0x10);
              uVar12 = ((uint)(*(ulonglong *)pFVar21 >> 0x14) & 0xffff ^
                       (uint)(*(ulonglong *)pFVar21 >> 4)) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_50 - 1;
              *(uint *)(pFVar21 + 0xc) = uVar12;
              FVar10.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar10.Data = local_58.Data;
              }
              uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
              *(undefined4 *)(pFVar21 + 8) = *(undefined4 *)(FVar10.Data + uVar17 * 4);
              *(uint *)(FVar10.Data + uVar17 * 4) = uStack_ec;
              local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
              uStack_ec = local_d8.CurrentBitIndex;
            } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
          }
        }
      }
      this->ObjectBeingSerialized = pUVar4;
      cVar5 = (**(code **)(this->_padding_ + 0x268))(this,pUVar4);
      if (cVar5 == '\0') {
        (**(code **)(*(longlong *)pUVar4 + 200))(pUVar4,this);
      }
      iVar6 = (this->SerializedObjectData).ArrayNum;
      pFVar21 = (this->SerializedObjectData).AllocatorInstance.Data;
      this->ObjectBeingSerialized = (UObject *)0x0;
      local_108 = (*FCrc::MemCrc32Func)(pFVar21,iVar6,local_108);
      *(undefined8 *)&(this->MemoryWriter).field_0x90 = 0;
      piVar1 = &(this->SerializedObjectData).ArrayMax;
      (this->SerializedObjectData).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->SerializedObjectData).AllocatorInstance,0,piVar1);
      }
      goto LAB_141ee43b3;
    }
    bVar23 = 1 < (int)local_50;
    if (!bVar23) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_98);
    }
    bVar22 = local_98._12_4_ != 0;
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    if (bVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = -1;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (bVar23) {
      local_50 = 1;
      if ((local_58.Data != (FScriptContainerElement *)0x0) &&
         (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4),
         local_58.Data != (FScriptContainerElement *)0x0)) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      FVar10.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_58.Data;
      }
      *(undefined4 *)FVar10.Data = 0xffffffff;
      if (local_50 != 0) {
        local_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_100 = 0;
        uStack_fc = 1;
        uStack_ec = 0;
        uStack_e8 = 0;
        if (local_70 != 0) {
          FVar14 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_78;
          }
          uVar12 = *(uint *)FVar14;
          puVar20 = puVar13;
          while (uVar12 == 0) {
            uStack_e8 = (int)puVar20 + 0x20;
            puVar20 = (ulonglong *)(ulonglong)uStack_e8;
            iVar6 = (int)puVar13;
            local_100 = iVar6 + 1;
            puVar13 = (ulonglong *)(ulonglong)local_100;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_100)
            goto LAB_141ee4a3f;
            uVar12 = ((uint *)((longlong)FVar14 + 4))[iVar6];
          }
          uStack_fc = -uVar12 & uVar12;
          uVar17 = (ulonglong)uStack_fc * 2 + 1;
          lVar15 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uStack_ec = (int)puVar20 + -1 + (int)lVar15;
          puVar13 = (ulonglong *)(ulonglong)uStack_ec;
          if ((int)local_70 < (int)uStack_ec) {
LAB_141ee4a3f:
            puVar13 = (ulonglong *)(ulonglong)local_70;
            uStack_ec = local_70;
          }
        }
        local_d8._padding_ = CONCAT44(uStack_fc,local_100);
        local_d8.CurrentBitIndex = uStack_ec;
        local_d8.UnvisitedBitMask = 0xffffffff;
        local_d8._28_4_ = uStack_e4;
        local_d8.BaseBitIndex = uStack_e8;
        if ((int)puVar13 < (int)local_70) {
          do {
            pFVar21 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)puVar13 * 0x10);
            uVar12 = ((uint)(*(ulonglong *)pFVar21 >> 0x14) & 0xffff ^
                     (uint)(*(ulonglong *)pFVar21 >> 4)) * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_50 - 1;
            *(uint *)(pFVar21 + 0xc) = uVar12;
            FVar10.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_58.Data;
            }
            uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
            *(undefined4 *)(pFVar21 + 8) = *(undefined4 *)(FVar10.Data + uVar17 * 4);
            *(int *)(FVar10.Data + uVar17 * 4) = (int)puVar13;
            local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
            puVar13 = (ulonglong *)(ulonglong)(uint)local_d8.CurrentBitIndex;
          } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
        }
      }
    }
    this->RootObject = (UObject *)0x0;
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    bVar23 = local_98._12_4_ != 0;
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    if (bVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_64 = 0;
    local_70 = 0;
    local_68 = -1;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  return local_108;
}

// Crc32 @ 141ee4bd0

uint __thiscall FArchiveObjectCrc32::Crc32(FArchiveObjectCrc32 *this,UObject *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = Crc32(this,param_1,param_1,param_2);
  return uVar1;
}

// CustomSerialize @ 141ee8260

bool __thiscall FArchiveObjectCrc32::CustomSerialize(FArchiveObjectCrc32 *this,UObject *param_1)

{
  return false;
}

// GetArchiveName @ 141ef8fb0

FString * __thiscall
FArchiveObjectCrc32::GetArchiveName(FArchiveObjectCrc32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveObjectCrc32");
  return __return_storage_ptr__;
}

// Serialize @ 141f0f330

void __thiscall
FArchiveObjectCrc32::Serialize(FArchiveObjectCrc32 *this,void *param_1,long64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141f0f33a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->MemoryWriter + 0x188))();
  return;
}

