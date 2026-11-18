// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 85

// Append<FDefaultSetAllocator> @ 14e34a1f0

void __thiscall
TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
Append<FDefaultSetAllocator>
          (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this,
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  ulong64 local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar6 = 1;
  uVar9 = (uVar12 - *(int *)&(param_1->Elements).field_0x34) +
          *(int *)&(param_1->Elements).field_0x8;
  if (uVar12 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar5)) {
      this->HashSize = iVar5;
      Rehash(this);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iVar10 = 0;
  puVar2 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e34a2fd;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_14e34a2fd:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar10);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e34a401;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14e34a401:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    Emplace<unsigned___int64_const_&>
              (this,&local_res20,
               (bool *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements
                       ));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// Emplace<UE::Interchange::FAttributeKey_const_&> @ 14e374220

FSetElementId __thiscall
TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
::Emplace<UE::Interchange::FAttributeKey_const_&>
          (TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
           *this,FAttributeKey *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FString *_Src;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  _Src = (FString *)0x0;
  iVar6 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    ::FString::FString(local_48.Pointer,(FString *)param_2);
    *(undefined4 *)&(((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data
         = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar4 = (_Src->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)
             (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(_Src->Data).AllocatorInstance)->
             AllocatorInstance).Data;
    iVar6 = iVar4 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  bVar12 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<UE::Interchange::FAttributeKey>(this,uVar5,(FAttributeKey *)_Src);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      lVar2 = *(longlong *)&this->Elements;
      pvVar3 = *(void **)(lVar2 + (longlong)iVar6 * 0x18);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove((void *)(lVar2 + (longlong)iVar6 * 0x18),_Src,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
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
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)
                &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&_Src[1].Data.AllocatorInstance)->
                 AllocatorInstance).Data + 4) = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)
       &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&_Src[1].Data.AllocatorInstance)->
        AllocatorInstance).Data = *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&(param_1->Key).Data.AllocatorInstance.Data = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<enum_UE::Interchange::EAttributeTypes_const_&> @ 14e374430

FSetElementId __thiscall
TSet<enum_UE::Interchange::EAttributeTypes,DefaultKeyFuncs<enum_UE::Interchange::EAttributeTypes,0>,FDefaultSetAllocator>
::Emplace<enum_UE::Interchange::EAttributeTypes_const_&>
          (void *this,EAttributeTypes *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  bool *in_R9;
  EAttributeTypes local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0xc);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<UE::Interchange::EAttributeTypes> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  uVar9 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar3 = TryReplaceExisting(this,uVar9,local_38.Pointer,(int *)local_res8,in_R9);
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
      uVar9 = *(int *)((longlong)this + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_38.Pointer + 8) = uVar9;
      lVar7 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar7 = (longlong)this + 0x38;
      }
      uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 4) = *(undefined4 *)(lVar7 + uVar5 * 4);
      *(EAttributeTypes *)(lVar7 + uVar5 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar8;
      Rehash(this);
    }
  }
  *param_1 = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UE::Interchange::FAttributeKey_const_&>_> @ 14e3745c0

FSetElementId __thiscall
TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UE::Interchange::FAttributeKey_const_&>_>
          (TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<UE::Interchange::FAttributeKey_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  FString *_Src;
  undefined8 *_Dst;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_88 [3];
  undefined8 local_50;
  FScriptContainerElement *pFStack_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_88,iVar3);
  _Src = (FString *)0x0;
  iVar5 = 0;
  if (local_88[0].Pointer != (FString *)0x0) {
    local_50 = 0;
    pFStack_48 = (FScriptContainerElement *)0x0;
    ::FString::FString(local_88[0].Pointer,*(FString **)param_2);
    (((FString *)((longlong)local_88[0].Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FString *)((longlong)local_88[0].Pointer + 0x10))->Data).ArrayNum = 0;
    (((FString *)((longlong)local_88[0].Pointer + 0x10))->Data).ArrayMax = 0;
    (((FString *)((longlong)local_88[0].Pointer + 0x20))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FString *)((longlong)local_88[0].Pointer + 0x20))->Data).ArrayNum = 0;
    (((FString *)((longlong)local_88[0].Pointer + 0x20))->Data).ArrayMax = 0;
    (((FString *)((longlong)local_88[0].Pointer + 0x30))->Data).ArrayNum = (undefined4)local_50;
    (((FString *)((longlong)local_88[0].Pointer + 0x30))->Data).ArrayMax = local_50._4_4_;
    (((FString *)((longlong)local_88[0].Pointer + 0x40))->Data).AllocatorInstance.Data = pFStack_48;
    (((FString *)((longlong)local_88[0].Pointer + 0x30))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FString *)((longlong)local_88[0].Pointer + 0x40))->Data).ArrayNum = -1;
    _Src = local_88[0].Pointer;
  }
  iVar3 = (_Src->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)
             (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(_Src->Data).AllocatorInstance)->
             AllocatorInstance).Data;
    iVar5 = iVar3 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  bVar11 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<UE::Interchange::FAttributeKey>(this,uVar4,(FAttributeKey *)_Src);
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _Dst = (undefined8 *)((longlong)iVar5 * 0x50 + *(longlong *)&this->Elements);
      if ((void *)_Dst[4] != (void *)0x0) {
        FMemory::Free((void *)_Dst[4]);
      }
      if ((void *)_Dst[2] != (void *)0x0) {
        FMemory::Free((void *)_Dst[2]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x48);
      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_88[0].Index,1);
      local_88[0].Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      _Src[4].Data.ArrayMax = uVar4;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      _Src[4].Data.ArrayNum = *(int *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_88[0].Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_88[0].Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,float_&&>_> @ 14e374830

FSetElementId __thiscall
TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<FString_&&,float_&&>_>
          (TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,float_&&> *param_1,bool *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  char cVar11;
  longlong lVar12;
  char *in_R9;
  int iVar13;
  int iVar14;
  undefined8 *_Dst;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar12 = *(longlong *)&this->Elements;
    iVar13 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar12);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar13;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar13 * 0x20 + lVar12) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  puVar10 = (undefined8 *)0x0;
  iVar5 = 0;
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)param_2;
    puVar1 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = 0;
    *(undefined8 *)local_48.Pointer = *puVar10;
    *puVar10 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = *(undefined4 *)((longlong)puVar10 + 0xc);
    puVar10[1] = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = *puVar1;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    puVar10 = local_48.Pointer;
  }
  if (*(int *)(puVar10 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*puVar10;
    iVar5 = *(int *)(puVar10 + 1) + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  iVar5 = *(int *)&(this->Elements).field_0x8;
  cVar11 = '\0';
  iVar3 = *(int *)&(this->Elements).field_0x34;
  iVar13 = local_48.Index;
  if ((iVar5 - iVar3 != 1) && (iVar5 != iVar3)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    while (iVar13 != -1) {
      lVar12 = (longlong)iVar13 * 0x20;
      iVar5 = *(int *)(*(longlong *)&this->Elements + 8 + lVar12);
      if (iVar5 == *(int *)(puVar10 + 1)) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar12),
                             (wchar_t *)*puVar10);
          bVar15 = iVar5 == 0;
          goto LAB_14e3749a3;
        }
LAB_14e374a12:
        cVar11 = '\x01';
        _Dst = (undefined8 *)((longlong)iVar13 * 0x20 + *(longlong *)&this->Elements);
        pvVar2 = (void *)*_Dst;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        memmove(_Dst,puVar10,0x18);
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this,local_48.Index,1);
        goto LAB_14e3749c0;
      }
      bVar15 = iVar5 + *(int *)(puVar10 + 1) == 1;
LAB_14e3749a3:
      if (bVar15) goto LAB_14e374a12;
      iVar13 = *(int *)(lVar12 + 0x18 + *(longlong *)&this->Elements);
    }
    cVar11 = '\0';
    iVar13 = local_48.Index;
  }
LAB_14e3749c0:
  if (in_R9 != (char *)0x0) {
    *in_R9 = cVar11;
  }
  if (cVar11 == '\0') {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar14 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = iVar13;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar13;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,UClass_*_const_&>_> @ 14e374ab0

FSetElementId __thiscall
TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,UClass_*_const_&>_>
          (TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,UClass_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FString *_Src;
  char *in_R9;
  undefined8 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  _Src = (FString *)0x0;
  iVar7 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar13 = *(undefined8 **)param_2;
    puVar3 = *(undefined8 **)(param_2 + 8);
    ((local_48.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    ((local_48.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)*puVar13;
    *puVar13 = 0;
    (local_48.Pointer)->ArrayNum = *(int *)(puVar13 + 1);
    (local_48.Pointer)->ArrayMax = *(int *)((longlong)puVar13 + 0xc);
    puVar13[1] = 0;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar3;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar5 = (_Src->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar7 = iVar5 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FString>(this,uVar6,_Src);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      puVar13 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)&this->Elements);
      pvVar4 = (void *)*puVar13;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar13,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      _Src[1].Data.ArrayMax = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_> @ 14e374ce0

FSetElementId __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_>
          (TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
  *_Src;
  char *in_R9;
  void *_Dst;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x40 + 4 + lVar3);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
       *)0x0) {
    _Src = (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
            *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    uVar5 = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar4[1];
    puVar4[1] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(puVar4 + 2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x1c) = *(undefined4 *)((longlong)puVar4 + 0x14);
    puVar4[2] = 0;
    uVar5 = puVar4[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = puVar4[4];
    puVar4[4] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = *(undefined4 *)(puVar4 + 5);
    *(undefined4 *)((longlong)local_38.Pointer + 0x34) = *(undefined4 *)((longlong)puVar4 + 0x2c);
    puVar4[5] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar2 = *(uint *)_Src;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar8 * 0x40 + lVar3) == uVar2) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x40 + lVar3);
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,_Src,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x40 + 0x38 + lVar3);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar2,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_> @ 14e374f10

FSetElementId __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_>
          (TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
  *_Src;
  char *in_R9;
  void *_Dst;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x40 + 4 + lVar3);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
       *)0x0) {
    _Src = (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
            *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    uVar5 = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar4[1];
    puVar4[1] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(puVar4 + 2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x1c) = *(undefined4 *)((longlong)puVar4 + 0x14);
    puVar4[2] = 0;
    uVar5 = puVar4[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = puVar4[4];
    puVar4[4] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = *(undefined4 *)(puVar4 + 5);
    *(undefined4 *)((longlong)local_38.Pointer + 0x34) = *(undefined4 *)((longlong)puVar4 + 0x2c);
    puVar4[5] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar2 = *(uint *)_Src;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar8 * 0x40 + lVar3) == uVar2) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x40 + lVar3);
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,_Src,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x40 + 0x38 + lVar3);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar2,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_> @ 14e375140

FSetElementId __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_>
          (TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
  *_Src;
  char *in_R9;
  void *_Dst;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x40 + 4 + lVar3);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
       *)0x0) {
    _Src = (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
            *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    uVar5 = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar4[1];
    puVar4[1] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(puVar4 + 2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x1c) = *(undefined4 *)((longlong)puVar4 + 0x14);
    puVar4[2] = 0;
    uVar5 = puVar4[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = puVar4[4];
    puVar4[4] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = *(undefined4 *)(puVar4 + 5);
    *(undefined4 *)((longlong)local_38.Pointer + 0x34) = *(undefined4 *)((longlong)puVar4 + 0x2c);
    puVar4[5] = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar2 = *(uint *)_Src;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar8 * 0x40 + lVar3) == uVar2) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x40 + lVar3);
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,_Src,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x40 + 0x38 + lVar3);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar2,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TObjectPtr<UInterchangeBaseNode>_&&>_> @ 14e375370

FSetElementId __thiscall
TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UInterchangeBaseNode>_&&>_>
          (TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TObjectPtr<UInterchangeBaseNode>_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FString *_Src;
  char *in_R9;
  undefined8 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  _Src = (FString *)0x0;
  iVar7 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar13 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    pUVar3 = (UObject *)*puVar13;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar5 = (_Src->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar7 = iVar5 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FString>(this,uVar6,_Src);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      puVar13 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)&this->Elements);
      pvVar4 = (void *)*puVar13;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar13,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      _Src[1].Data.ArrayMax = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TObjectPtr<UObject>_&&>_> @ 14e3755a0

FSetElementId __thiscall
TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UObject>_&&>_>
          (TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TObjectPtr<UObject>_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FString *_Src;
  char *in_R9;
  undefined8 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  _Src = (FString *)0x0;
  iVar7 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar13 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    pUVar3 = (UObject *)*puVar13;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar5 = (_Src->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar7 = iVar5 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FString>(this,uVar6,_Src);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      puVar13 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)&this->Elements);
      pvVar4 = (void *)*puVar13;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar13,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      _Src[1].Data.ArrayMax = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_> @ 14e3757d0

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
                 *param_1,bool *param_2)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
  *_Src;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
          *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
                *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar6 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)_Src;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar8 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,(FString *)_Src);
    bVar8 = iVar6 != -1;
    if (bVar8) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar6 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_> @ 14e3759a0

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
                 *param_1,bool *param_2)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
  *_Src;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
          *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
                *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar6 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)_Src;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar8 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,(FString *)_Src);
    bVar8 = iVar6 != -1;
    if (bVar8) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar6 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_> @ 14e375b70

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
                 *param_1,bool *param_2)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
  *_Src;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
          *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
                *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar6 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)_Src;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar8 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,(FString *)_Src);
    bVar8 = iVar6 != -1;
    if (bVar8) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar6 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<unsigned___int64_const_&,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_const_&>_> @ 14e375d40

FSetElementId __thiscall
TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<unsigned___int64_const_&,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_const_&>_>
          (TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned___int64_const_&,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  char *in_R9;
  int iVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar9 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar3;
    lVar2 = plVar3[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  bVar12 = false;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar10 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  if ((iVar9 - iVar5 != 1) && (iVar9 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar9 * 0x20 + lVar4) == lVar2) {
          bVar12 = iVar9 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar4);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar4);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar11 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<UClass_*_const_&>_> @ 14e376510

FSetElementId __thiscall
TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
          (TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UClass_*_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  longlong *_Src;
  bool bVar9;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar2);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer == (longlong *)0x0) {
    _Src = (longlong *)0x0;
  }
  else {
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(longlong *)((longlong)local_38.Pointer + 8) = 0;
    *(longlong *)((longlong)local_38.Pointer + 0x10) = 0;
    DestructItems<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,int>
              ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)0x0,0);
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar2) == *_Src) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar2);
            DestructItems<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,int>
                      (*(TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> **)
                        ((longlong)_Dst + 8),*(int *)((longlong)_Dst + 0x10));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar2);
      } while (iVar8 != -1);
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
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)_Src + 0x1c) = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FName_const_&>_> @ 14e376770

FSetElementId __thiscall
TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FName_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_3;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0x1010000;
    *(undefined1 *)((longlong)local_38.Pointer + 0xc) = 1;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_> @ 14e376900

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
          *param_2,bool *param_3)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 in_register_00000014;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
                *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
  }
  bVar6 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FString>(this,(uint)param_2,local_38.Pointer);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar5 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,local_38.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar5;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,local_38.Pointer,local_38.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_> @ 14e376aa0

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
          *param_2,bool *param_3)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 in_register_00000014;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
                *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
  }
  bVar6 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FString>(this,(uint)param_2,local_38.Pointer);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar5 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,local_38.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar5;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,local_38.Pointer,local_38.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_> @ 14e376c40

FSetElementId __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
          *param_2,bool *param_3)

{
  undefined8 *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 in_register_00000014;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
    ::
    operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
              ((TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
                *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
  }
  bVar6 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FString>(this,(uint)param_2,local_38.Pointer);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x48);
      pvVar3 = *(void **)(*(longlong *)&this->Elements + 0x30 + (longlong)iVar5 * 0x48);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if ((void *)_Dst[3] != (void *)0x0) {
        FMemory::Free((void *)_Dst[3]);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,local_38.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar5;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,(uint)param_2,local_38.Pointer,local_38.Index);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<UE::Interchange::FAttributeKey> @ 14e3883f0

int __thiscall
TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::Interchange::FAttributeKey>
          (TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,FAttributeKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      iVar1 = (param_2->Key).Data.ArrayNum;
      do {
        lVar4 = (longlong)iVar5;
        iVar3 = *(int *)(lVar2 + 8 + lVar4 * 0x50);
        if (iVar3 == iVar1) {
          if (iVar3 < 2) {
            return iVar5;
          }
          iVar3 = wcscmp(*(wchar_t **)(lVar2 + lVar4 * 0x50),
                         (wchar_t *)(param_2->Key).Data.AllocatorInstance.Data);
          bVar7 = iVar3 == 0;
        }
        else {
          bVar7 = iVar3 + iVar1 == 1;
        }
        if (bVar7) {
          return iVar5;
        }
        iVar5 = *(int *)(lVar2 + 0x48 + lVar4 * 0x50);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<UE::Interchange::FAttributeKey> @ 14e3884c0

int __thiscall
TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::Interchange::FAttributeKey>
          (TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
           *this,uint param_1,FAttributeKey *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      iVar2 = (param_2->Key).Data.ArrayNum;
      do {
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar5 * 0x18);
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar5 * 0x18);
        if (iVar4 == iVar2) {
          if (iVar4 < 2) {
            return iVar5;
          }
          iVar4 = wcscmp((wchar_t *)*puVar1,(wchar_t *)(param_2->Key).Data.AllocatorInstance.Data);
          bVar7 = iVar4 == 0;
        }
        else {
          bVar7 = iVar4 + iVar2 == 1;
        }
        if (bVar7) {
          return iVar5;
        }
        iVar5 = *(int *)(puVar1 + 2);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e388590

int __thiscall
TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e388650

int __thiscall
TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e388710

int __thiscall
TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e3887d0

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x48);
      lVar1 = (longlong)iVar2 * 0x48;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return iVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x40 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e3888a0

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x48);
      lVar1 = (longlong)iVar2 * 0x48;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return iVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x40 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e388970

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x48);
      lVar1 = (longlong)iVar2 * 0x48;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return iVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x40 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<int> @ 14e3cd390

int __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

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
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x40;
    if (*(int *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x38);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14e3cd471;
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
LAB_14e3cd471:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x3c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x38);
      TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x38 + (longlong)(int)uVar1 * 0x40);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<int> @ 14e3cd530

int __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

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
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x40;
    if (*(int *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x38);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14e3cd611;
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
LAB_14e3cd611:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x3c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x38);
      TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x38 + (longlong)(int)uVar1 * 0x40);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<int> @ 14e3cd6d0

int __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

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
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x40;
    if (*(int *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x38);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14e3cd7b1;
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
LAB_14e3cd7b1:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x3c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x38);
      TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x38 + (longlong)(int)uVar1 * 0x40);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<UClass_const_*> @ 14e3cd870

int __thiscall
TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<UClass_const_*>
          (TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,UClass **param_2)

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
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(UClass **)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14e3cd951;
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
LAB_14e3cd951:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<UE::Interchange::FAttributeKey> @ 14e3cda10

int __thiscall
TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
::RemoveImpl<UE::Interchange::FAttributeKey>
          (TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,FAttributeKey *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  iVar5 = (param_2->Key).Data.ArrayNum;
  while( true ) {
    lVar7 = (longlong)(int)uVar9 * 0x50;
    iVar4 = *(int *)(lVar7 + 8 + lVar2);
    if (iVar4 == iVar5) break;
    bVar11 = iVar4 + iVar5 == 1;
LAB_14e3cda9d:
    if (bVar11) goto LAB_14e3cdace;
    uVar9 = *(uint *)(lVar7 + 0x48 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar4) {
    iVar4 = wcscmp(*(wchar_t **)(lVar7 + lVar2),
                   (wchar_t *)(param_2->Key).Data.AllocatorInstance.Data);
    bVar11 = iVar4 == 0;
    goto LAB_14e3cda9d;
  }
LAB_14e3cdace:
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14e3cdb29;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14e3cdb29:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x4c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x48);
      TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar9,1);
      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x48 + (longlong)(int)uVar1 * 0x50);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FString> @ 14e3cdbd0

int __thiscall
TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint *puVar10;
  bool bVar11;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar3 = *(longlong *)&this->Elements;
    iVar5 = (param_2->Data).ArrayNum;
    lVar9 = (longlong)(int)uVar7 * 0x20;
    iVar1 = *(int *)(lVar3 + 8 + lVar9);
    if (iVar1 == iVar5) break;
    bVar11 = iVar1 + iVar5 == 1;
LAB_14e3cdc43:
    if (bVar11) goto LAB_14e3cdc69;
    uVar7 = *(uint *)(lVar3 + 0x18 + lVar9);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar1) {
    iVar5 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar3 + lVar9),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar5 == 0;
    goto LAB_14e3cdc43;
  }
LAB_14e3cdc69:
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14e3cdcc8;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
LAB_14e3cdcc8:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
  while( true ) {
    uVar2 = *puVar10;
    if ((uVar2 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar2 == uVar7) {
      *puVar10 = *(uint *)(lVar9 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar2 * 0x20);
  }
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

// RemoveImpl<FString> @ 14e3cdd70

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  FVar7 = (this->Hash).SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar8 = *(uint *)((longlong)FVar7 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar4 = *(longlong *)&this->Elements;
    iVar6 = *(int *)(lVar4 + 8 + (longlong)(int)uVar8 * 0x48);
    lVar1 = (longlong)(int)uVar8 * 0x48;
    iVar2 = (param_2->Data).ArrayNum;
    if (iVar6 == iVar2) break;
    bVar11 = iVar6 + iVar2 == 1;
LAB_14e3cdde9:
    if (bVar11) goto LAB_14e3cde0f;
    uVar8 = *(uint *)(lVar4 + 0x40 + lVar1);
    if (uVar8 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar6) {
    iVar6 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar4 + lVar1),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar6 == 0;
    goto LAB_14e3cdde9;
  }
LAB_14e3cde0f:
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_14e3cde6f;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
LAB_14e3cde6f:
  FVar7 = (this->Hash).SecondaryData;
  lVar4 = *(longlong *)&this->Elements;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar4 + 0x44 + lVar1) * 4);
  while( true ) {
    uVar3 = *puVar9;
    if ((uVar3 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar3 == uVar8) {
      *puVar9 = *(uint *)(lVar4 + 0x40 + lVar1);
      TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar8,1);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar8,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar3 * 0x48 + 0x40);
  }
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

// RemoveImpl<FString> @ 14e3cdf20

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  FVar7 = (this->Hash).SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar8 = *(uint *)((longlong)FVar7 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar4 = *(longlong *)&this->Elements;
    iVar6 = *(int *)(lVar4 + 8 + (longlong)(int)uVar8 * 0x48);
    lVar1 = (longlong)(int)uVar8 * 0x48;
    iVar2 = (param_2->Data).ArrayNum;
    if (iVar6 == iVar2) break;
    bVar11 = iVar6 + iVar2 == 1;
LAB_14e3cdf99:
    if (bVar11) goto LAB_14e3cdfbf;
    uVar8 = *(uint *)(lVar4 + 0x40 + lVar1);
    if (uVar8 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar6) {
    iVar6 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar4 + lVar1),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar6 == 0;
    goto LAB_14e3cdf99;
  }
LAB_14e3cdfbf:
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_14e3ce01f;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
LAB_14e3ce01f:
  FVar7 = (this->Hash).SecondaryData;
  lVar4 = *(longlong *)&this->Elements;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar4 + 0x44 + lVar1) * 4);
  while( true ) {
    uVar3 = *puVar9;
    if ((uVar3 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar3 == uVar8) {
      *puVar9 = *(uint *)(lVar4 + 0x40 + lVar1);
      TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar8,1);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar8,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar3 * 0x48 + 0x40);
  }
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

// RemoveImpl<FString> @ 14e3ce0d0

int __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  FVar7 = (this->Hash).SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar8 = *(uint *)((longlong)FVar7 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar4 = *(longlong *)&this->Elements;
    iVar6 = *(int *)(lVar4 + 8 + (longlong)(int)uVar8 * 0x48);
    lVar1 = (longlong)(int)uVar8 * 0x48;
    iVar2 = (param_2->Data).ArrayNum;
    if (iVar6 == iVar2) break;
    bVar11 = iVar6 + iVar2 == 1;
LAB_14e3ce149:
    if (bVar11) goto LAB_14e3ce16f;
    uVar8 = *(uint *)(lVar4 + 0x40 + lVar1);
    if (uVar8 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar6) {
    iVar6 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar4 + lVar1),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar6 == 0;
    goto LAB_14e3ce149;
  }
LAB_14e3ce16f:
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_14e3ce1cf;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
LAB_14e3ce1cf:
  FVar7 = (this->Hash).SecondaryData;
  lVar4 = *(longlong *)&this->Elements;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar4 + 0x44 + lVar1) * 4);
  while( true ) {
    uVar3 = *puVar9;
    if ((uVar3 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar3 == uVar8) {
      *puVar9 = *(uint *)(lVar4 + 0x40 + lVar1);
      TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar8,1);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar8,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar3 * 0x48 + 0x40);
  }
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

// RemoveImpl<unsigned___int64> @ 14e3ce280

int __thiscall
TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
::RemoveImpl<unsigned___int64>
          (TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,ulong64 *param_2)

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
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(ulong64 *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14e3ce361;
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
LAB_14e3ce361:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// TSet<enum_UE::Interchange::EAttributeTypes,DefaultKeyFuncs<enum_UE::Interchange::EAttributeTypes,0>,FDefaultSetAllocator> @ 14e400400

TSet<UE::Interchange::EAttributeTypes,DefaultKeyFuncs<UE::Interchange::EAttributeTypes,0>,FDefaultSetAllocator>
* __thiscall
TSet<enum_UE::Interchange::EAttributeTypes,DefaultKeyFuncs<enum_UE::Interchange::EAttributeTypes,0>,FDefaultSetAllocator>
::
TSet<enum_UE::Interchange::EAttributeTypes,DefaultKeyFuncs<enum_UE::Interchange::EAttributeTypes,0>,FDefaultSetAllocator>
          (void *this,initializer_list<UE::Interchange::EAttributeTypes> *param_1)

{
  bool *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  bool *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  EAttributeTypes local_res8 [2];
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pbVar1 = (bool *)param_1->_Last;
  uVar4 = 0;
  pbVar8 = (bool *)param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pbVar1 - (longlong)pbVar8 >> 2);
  if (uVar12 == 0) goto joined_r0x00014e400671;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar5 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014e400671;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar9 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar9 = 0;
        goto LAB_14e4004e5;
      }
    }
    else {
LAB_14e4004e5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar9,4);
    }
    if (0 < (int)uVar12) {
      uVar10 = (ulonglong)uVar12;
      uVar5 = uVar4;
      do {
        lVar3 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar3 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar5 & (longlong)(int)uVar12 - 1U;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = local_50.Array;
      }
      uVar9 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar5 = uVar4;
      while (uVar9 == 0) {
        iVar7 = (int)uVar4;
        uStack_60 = (int)uVar5 + 0x20;
        uVar5 = (ulonglong)uStack_60;
        local_78 = iVar7 + 1;
        uVar4 = (ulonglong)local_78;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14e4005db;
        uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar7 * 4 + 4);
      }
      uStack_74 = -uVar9 & uVar9;
      uVar4 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar4 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_14e4005db:
        uVar4 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar4 < (int)uVar12) {
      do {
        iVar7 = (int)uVar4;
        uVar12 = *(int *)((longlong)this + 0x48) - 1U &
                 *(uint *)(*(longlong *)this + (longlong)iVar7 * 0xc);
        lVar3 = *(longlong *)this + (longlong)iVar7 * 0xc;
        *(uint *)(lVar3 + 8) = uVar12;
        lVar6 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar6 = *(longlong *)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar6 + uVar4 * 4);
        *(int *)(lVar6 + uVar4 * 4) = iVar7;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar4 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014e400671:
  for (; pbVar8 != pbVar1; pbVar8 = pbVar8 + 4) {
    Emplace<enum_UE::Interchange::EAttributeTypes_const_&>(this,local_res8,pbVar8);
  }
  return this;
}

// Compact @ 14e417440

void __thiscall
TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
::Compact(TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
          *this)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  
  bVar3 = TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Compact((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this);
  if (!bVar3) {
    return;
  }
  uVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar4) {
    uVar1 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    this->HashSize = 1 << ((byte)lVar2 & 0x1f);
    Rehash(this);
    return;
  }
  this->HashSize = 1;
  Rehash(this);
  return;
}

// Empty @ 14e42ff00

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 14e42ff90

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 14e430020

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 14e4300b0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 14e430140

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Empty @ 14e4301d0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Find @ 14e435920

TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
* __thiscall
TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
       *this,FAttributeKey *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Key).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Key).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = FindIndexByHash<UE::Interchange::FAttributeKey>(this,uVar2,param_1);
  if (iVar3 == -1) {
    return (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
            *)0x0;
  }
  return (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
          *)((longlong)iVar3 * 0x50 + *(longlong *)&this->Elements);
}

// Rehash @ 14e44fed0

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
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
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e44ffac;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e44ffac:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0xf] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0xe] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e450060

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
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
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e45013c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e45013c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0xf] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0xe] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e4501f0

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
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
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e4502cc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e4502cc:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0xf] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0xe] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e450380

void __thiscall
TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e45045c;
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
LAB_14e45045c:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e450540

void __thiscall
TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e450617;
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
LAB_14e450617:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x50);
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
        *(uint *)((longlong)puVar10 + 0x4c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 9) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e4506f0

void __thiscall
TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
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
  uint *puVar9;
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
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e4507c7;
        uVar5 = puVar9[lVar6 + 1];
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
LAB_14e4507c7:
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
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e4508a0

void __thiscall
TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e450977;
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
LAB_14e450977:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
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
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e450a50

void __thiscall
TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e450b27;
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
LAB_14e450b27:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
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
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e450c00

void __thiscall
TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e450cd7;
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
LAB_14e450cd7:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
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
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e450db0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
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
    iVar7 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e450e87;
        uVar6 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar7 < iStack_54) {
LAB_14e450e87:
        iStack_54 = iVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar7) {
      do {
        iVar5 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x48);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar10 = L"";
          iVar7 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x44) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e450f60

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
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
    iVar7 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e451037;
        uVar6 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar7 < iStack_54) {
LAB_14e451037:
        iStack_54 = iVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar7) {
      do {
        iVar5 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x48);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar10 = L"";
          iVar7 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x44) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e451110

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
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
    iVar7 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e4511e7;
        uVar6 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar7 < iStack_54) {
LAB_14e4511e7:
        iStack_54 = iVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar7) {
      do {
        iVar5 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x48);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar10 = L"";
          iVar7 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x44) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e4512c0

void __thiscall
TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined8 *puVar8;
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
      uVar7 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e45139c;
        uVar7 = puVar9[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e45139c:
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
        puVar8 = (undefined8 *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = (int)((ulonglong)*puVar8 >> 0x20) * 0x17 + (int)*puVar8 & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e451460

void __thiscall
TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
::Rehash(TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
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
    iVar7 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e451537;
        uVar6 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar7 < iStack_54) {
LAB_14e451537:
        iStack_54 = iVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar7) {
      do {
        iVar5 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x18);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar10 = L"";
          iVar7 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x14) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e451610

void __thiscall
TSet<enum_UE::Interchange::EAttributeTypes,DefaultKeyFuncs<enum_UE::Interchange::EAttributeTypes,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e4516ec;
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
LAB_14e4516ec:
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
        uVar6 = *piVar1 - 1U &
                *(uint *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0xc);
        lVar3 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0xc;
        *(uint *)(lVar3 + 8) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14e4517b0

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x3c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x38 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e451840

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x3c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x38 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e4518d0

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x3c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x38 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e451960

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x44 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x40 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e4519f0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x44 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x40 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e451a80

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x44 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x40 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Reserve @ 14e455a60

void __thiscall
TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
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
    TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Reset @ 14e455b60

void __thiscall
TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14e455be0

void __thiscall
TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14e465320

bool __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  void *_Dst;
  bool bVar5;
  
  iVar4 = *(int *)&(this->Elements).field_0x8;
  bVar5 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar4 * 0x40 + lVar2) == *(int *)param_2) {
          bVar5 = iVar4 != -1;
          if (bVar5) {
            _Dst = (void *)((longlong)iVar4 * 0x40 + lVar2);
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,param_2,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + lVar2);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar5;
  }
  return bVar5;
}

// TryReplaceExisting @ 14e465440

bool __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  void *_Dst;
  bool bVar5;
  
  iVar4 = *(int *)&(this->Elements).field_0x8;
  bVar5 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar4 * 0x40 + lVar2) == *(int *)param_2) {
          bVar5 = iVar4 != -1;
          if (bVar5) {
            _Dst = (void *)((longlong)iVar4 * 0x40 + lVar2);
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,param_2,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + lVar2);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar5;
  }
  return bVar5;
}

// TryReplaceExisting @ 14e465560

bool __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  void *_Dst;
  bool bVar5;
  
  iVar4 = *(int *)&(this->Elements).field_0x8;
  bVar5 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar4 * 0x40 + lVar2) == *(int *)param_2) {
          bVar5 = iVar4 != -1;
          if (bVar5) {
            _Dst = (void *)((longlong)iVar4 * 0x40 + lVar2);
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,param_2,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + lVar2);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar5;
  }
  return bVar5;
}

// TryReplaceExisting @ 14e465680

bool __thiscall
TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_> *param_2,int *param_3
          ,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  iVar12 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar4 != 1) && (iVar12 != iVar4)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar5 + (longlong)iVar12 * 0x18) == *(longlong *)param_2) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            memmove((void *)(lVar5 + (longlong)iVar12 * 0x18),param_2,0x10);
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x18) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar5 + 0x10 + (longlong)iVar12 * 0x18);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14e4658b0

bool __thiscall
TSet<enum_UE::Interchange::EAttributeTypes,DefaultKeyFuncs<enum_UE::Interchange::EAttributeTypes,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,TSparseSetElement<UE::Interchange::EAttributeTypes> *param_2,
          int *param_3,bool *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar10 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar10 = (longlong)this + 0x38;
    }
    iVar11 = *(int *)(lVar10 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar11 != -1) {
      lVar10 = *(longlong *)this;
      do {
        if (*(int *)(lVar10 + (longlong)iVar11 * 0xc) == *(int *)param_2) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            *(int *)(lVar10 + (longlong)iVar11 * 0xc) = *(int *)param_2;
            iVar4 = *param_3;
            lVar10 = *(longlong *)this;
            bVar6 = (byte)iVar4 & 0x1f;
            uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar4 < 0) || (*(int *)((longlong)this + 0x28) <= iVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar12 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar12 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar12 + lVar3) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)(lVar10 + (longlong)*(int *)((longlong)this + 0x30) * 0xc) = iVar4;
            }
            puVar1 = (undefined4 *)(lVar10 + (longlong)iVar4 * 0xc);
            uVar9 = 0xffffffff;
            *puVar1 = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar9 = *(undefined4 *)((longlong)this + 0x30);
            }
            puVar1[1] = uVar9;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar4;
            if (((iVar4 < 0) || (*(int *)((longlong)this + 0x28) <= iVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            lVar10 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar10 = (longlong)this + 0x10;
            }
            puVar2 = (uint *)(lVar10 + lVar3);
            *puVar2 = *puVar2 & ~uVar13;
            *param_3 = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar10 + 4 + (longlong)iVar11 * 0xc);
      } while (iVar11 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// UnhashElements @ 14e465ac0

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e465bbb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e465bbb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e465cb0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e465cb0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x40 + 0x3c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e465d50

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e465e4b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e465e4b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e465f40;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e465f40:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x40 + 0x3c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e465fe0

void __thiscall
TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e4660db;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e4660db:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e4661d0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e4661d0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x40 + 0x3c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e466270

void __thiscall
TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e46636b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e46636b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e466460;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e466460:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e466500

void __thiscall
TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e4665fb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e4665fb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e4666f0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e4666f0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e466790

void __thiscall
TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e46688b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e46688b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e466980;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e466980:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e466a20

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e466b1b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e466b1b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e466c10;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e466c10:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x44 + (longlong)local_60.CurrentBitIndex * 0x48) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e466cb0

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e466dab;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e466dab:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e466ea0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e466ea0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x44 + (longlong)local_60.CurrentBitIndex * 0x48) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e466f40

void __thiscall
TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e46703b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e46703b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e467130;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e467130:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x44 + (longlong)local_60.CurrentBitIndex * 0x48) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

