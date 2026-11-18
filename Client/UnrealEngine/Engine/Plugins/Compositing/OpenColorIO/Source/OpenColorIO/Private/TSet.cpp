// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 5

// Emplace<TPairInitializer<FOpenColorIOShaderMapId_const_&,FOpenColorIOShaderMap_*_&&>_> @ 14d766f20

FSetElementId __thiscall
TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOpenColorIOShaderMapId_const_&,FOpenColorIOShaderMap_*_&&>_>
          (TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOpenColorIOShaderMapId_const_&,FOpenColorIOShaderMap_*_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  void *_Dst;
  char *in_R9;
  int iVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer != (FOpenColorIOShaderMapId *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    FOpenColorIOShaderMapId::FOpenColorIOShaderMapId
              (local_48.Pointer,*(FOpenColorIOShaderMapId **)param_2);
    uVar5 = *puVar4;
    ((FOpenColorIOShaderMapId *)((longlong)local_48.Pointer + 0x30))->FeatureLevel = (int)uVar5;
    ((FOpenColorIOShaderMapId *)((longlong)local_48.Pointer + 0x30))->_padding_ =
         (int)((ulonglong)uVar5 >> 0x20);
    *(undefined4 *)
     &(((FOpenColorIOShaderMapId *)((longlong)local_48.Pointer + 0x30))->ShaderCodeAndConfigHash).
      Data.AllocatorInstance = 0xffffffff;
  }
  if ((((FMemoryImageString *)((longlong)local_48.Pointer + 8))->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)
              &(((FMemoryImageString *)((longlong)local_48.Pointer + 8))->Data).AllocatorInstance;
    if (((ulonglong)pwVar9 & 1) != 0) {
      pwVar9 = (wchar_t *)
               ((longlong)
                &(((FMemoryImageString *)((longlong)local_48.Pointer + 8))->Data).AllocatorInstance.
                 field_0x0 + ((longlong)pwVar9 >> 0x18));
    }
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(pwVar9);
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar7 != 1) && (iVar1 != iVar7)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & uVar8) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x40 + 0x38 + *(longlong *)&this->Elements))
    {
      bVar6 = FOpenColorIOShaderMapId::operator==
                        ((FOpenColorIOShaderMapId *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x40),local_48.Pointer);
      if (bVar6) {
        bVar14 = iVar1 != -1;
        if (bVar14) {
          _Dst = (void *)((longlong)iVar1 * 0x40 + *(longlong *)&this->Elements);
          FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                    ((FMemoryImageAllocatorBase *)((longlong)_Dst + 0x18));
          FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                    ((FMemoryImageAllocatorBase *)((longlong)_Dst + 8));
          memmove(_Dst,local_48.Pointer,0x38);
          TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar1;
        }
        break;
      }
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)&(((FOpenColorIOShaderMapId *)((longlong)local_48.Pointer + 0x30))->
                ShaderCodeAndConfigHash).Data.AllocatorInstance.field_0x4 = uVar8;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)
       &(((FOpenColorIOShaderMapId *)((longlong)local_48.Pointer + 0x30))->ShaderCodeAndConfigHash).
        Data.AllocatorInstance = *(undefined4 *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FOpenColorIOShaderMapId> @ 14d767f90

int __thiscall
TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FOpenColorIOShaderMapId>
          (TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenColorIOShaderMapId *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x40 + 0x38 + *(longlong *)&this->Elements))
    {
      bVar2 = FOpenColorIOShaderMapId::operator==
                        ((FOpenColorIOShaderMapId *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x40),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// RemoveImpl<FOpenColorIOShaderMapId> @ 14d7689b0

int __thiscall
TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
::RemoveImpl<FOpenColorIOShaderMapId>
          (TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenColorIOShaderMapId *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FOpenColorIOShaderMapId *this_00;
  undefined1 *puVar8;
  uint *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    this_00 = (FOpenColorIOShaderMapId *)
              (*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x40);
    bVar3 = FOpenColorIOShaderMapId::operator==(this_00,param_2);
    if (bVar3) break;
    uVar6 = *(uint *)&this_00[1].ShaderCodeAndConfigHash.Data.AllocatorInstance;
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d768a98;
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
LAB_14d768a98:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x40;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x3c) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar9 = *(uint *)(lVar7 + 0x38);
      TSparseArray<TSparseSetElement<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + 0x38 + (longlong)(int)uVar1 * 0x40);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Find @ 14d76fc40

TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*> * __thiscall
TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
       *this,FOpenColorIOShaderMapId *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  if ((param_1->ShaderCodeAndConfigHash).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = *(wchar_t **)&(param_1->ShaderCodeAndConfigHash).Data.AllocatorInstance;
    if (((ulonglong)pwVar3 & 1) != 0) {
      pwVar3 = (wchar_t *)
               ((longlong)&(param_1->ShaderCodeAndConfigHash).Data.AllocatorInstance.field_0x0 +
               ((longlong)pwVar3 >> 0x18));
    }
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(pwVar3);
  iVar2 = FindIndexByHash<FOpenColorIOShaderMapId>(this,uVar1,param_1);
  if (iVar2 != -1) {
    return (TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*> *)
           ((longlong)iVar2 * 0x40 + *(longlong *)&this->Elements);
  }
  return (TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*> *)0x0;
}

// Rehash @ 14d774a50

void __thiscall
TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d774b27;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14d774b27:
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
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x40;
        if (*(int *)(lVar5 + 0x10) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)(lVar5 + 8);
          if (((ulonglong)pwVar6 & 1) != 0) {
            pwVar6 = (wchar_t *)(((longlong)pwVar6 >> 0x18) + 8 + lVar5);
          }
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(pwVar6);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)(lVar5 + 0x3c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

