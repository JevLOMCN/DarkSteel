// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// AddInitialValue @ 14d607500

FInitialValueIndex __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::
AddInitialValue(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
                *this,FKeyType *param_1,FCameraFramingZone *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *in_R9;
  undefined2 local_res8 [8];
  FSparseArrayAllocationInfo local_48;
  FCameraFramingZone *local_38;
  undefined2 *local_30;
  
  iVar1 = *(int *)&(this->PropertyValues).field_0x34;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)&this->PropertyValues,
                       (int *)&(this->PropertyValues).field_0x8,
                       (int *)&(this->PropertyValues).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyValues).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->PropertyValues).field_0x30;
    lVar3 = *(longlong *)&this->PropertyValues;
    iVar2 = *(int *)((longlong)iVar8 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->PropertyValues).field_0x30 = iVar2;
    *(int *)&(this->PropertyValues).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,&local_48,
             iVar8);
  if (local_48.Pointer != (undefined8 *)0x0) {
    uVar5 = in_R9[1];
    *(undefined8 *)local_48.Pointer = *in_R9;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    uVar5 = in_R9[3];
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = in_R9[2];
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = uVar5;
  }
  if (0xfffe < local_48.Index) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex < int32(uint16(0xFFFF))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                       ,0x184,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FInitialValueIndex)uVar7;
    }
  }
  local_30 = local_res8;
  local_res8[0] = (undefined2)local_48.Index;
  local_38 = param_2;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToPropertyIndex,
             (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType_const_&,unsigned_short_const_&>
              *)(local_res8 + 4),(bool *)&local_38);
  *(undefined2 *)&(param_1->Object).ObjectIndex = local_res8[0];
  return (FInitialValueIndex)(ushort)param_1;
}

// CleanupStaleEntries @ 14d60e400

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::
CleanupStaleEntries(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
                    *this)

{
  TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>_>
  *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (this->bLUTContainsInvalidEntries != false) {
    pTVar1 = &this->KeyToPropertyIndex;
    TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar2 = *(ushort *)((longlong)(int)uVar8 * 0x20 + 0x14 + *local_48);
        if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
          if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
          puVar9 = &(this->PropertyValues).field_0x10;
          if (puVar3 != (undefined1 *)0x0) {
            puVar9 = puVar3;
          }
          if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14d60e4f7;
        }
        else {
LAB_14d60e4f7:
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uStack_2c);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues);
    this->bLUTContainsInvalidEntries = false;
  }
  return;
}

// FindPropertyIndex @ 14d6165c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
                  *this,UObject *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *in_R9;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  FName *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (param_2 != (FName *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property._0_8_ = *in_R9;
  local_48.Property.TypeIndex = '\x02';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14d6166cd;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14d6166cd:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 14d616710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
                  *this,UObject *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\0';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14d61681d;
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this->KeyToPropertyIndex + 0x18 + lVar6);
    }
  }
  param_1->field_0x2 = 0;
LAB_14d61681d:
  return SUB84(param_1,0);
}

// FindPropertyIndex @ 14d616860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::
FindPropertyIndex(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
                  *this,UObject *param_1,FCustomPropertyIndex param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined6 in_register_00000082;
  UObject *pUVar7;
  undefined1 auStack_78 [32];
  FWeakObjectPtr local_58;
  UObject *local_50;
  FKeyType local_48;
  ulonglong local_30;
  
  pUVar7 = (UObject *)CONCAT62(in_register_00000082,param_2.Value);
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  CleanupStaleEntries(this);
  local_48.Object.ObjectIndex = 0;
  local_48.Object.ObjectSerialNumber = 0;
  if (pUVar7 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_50 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
    local_48.Object = (FObjectKey)local_58;
  }
  local_48.Property.TypeIndex = '\x01';
  CleanupStaleEntries(this);
  uVar3 = MovieScene::GetTypeHash(&local_48);
  if (*(int *)&(this->KeyToPropertyIndex).field_0x8 !=
      *(int *)&(this->KeyToPropertyIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->KeyToPropertyIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KeyToPropertyIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KeyToPropertyIndex).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      lVar6 = (longlong)iVar1 * 0x20;
      bVar2 = MovieScene::operator==
                        ((FKeyType *)(*(longlong *)&this->KeyToPropertyIndex + lVar6),&local_48);
      if (bVar2) {
        lVar6 = *(longlong *)&this->KeyToPropertyIndex + lVar6;
        puVar5 = (undefined2 *)(lVar6 + 0x14);
        if (lVar6 == 0) {
          puVar5 = (undefined2 *)0x0;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 *)param_1 = *puVar5;
          param_1->field_0x2 = 1;
          goto LAB_14d61696d;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->KeyToPropertyIndex);
    }
  }
  param_1->field_0x2 = 0;
LAB_14d61696d:
  return SUB84(param_1,0);
}

// Reset @ 14d632490

void __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>::
Reset(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
      *this,TArrayView<UE::MovieScene::FInitialValueIndex_const_,int> *param_1)

{
  FInitialValueIndex *pFVar1;
  ushort uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  FInitialValueIndex *pFVar13;
  
  pFVar13 = param_1->DataPtr;
  pFVar1 = pFVar13 + param_1->ArrayNum;
  if (pFVar13 == pFVar1) {
    this->bLUTContainsInvalidEntries = true;
    return;
  }
  do {
    uVar2 = pFVar13->Index;
    if ((int)(uint)uVar2 < *(int *)&(this->PropertyValues).field_0x28) {
      puVar11 = &(this->PropertyValues).field_0x10;
      if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)(uint)uVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
      puVar9 = puVar11;
      if (puVar3 != (undefined1 *)0x0) {
        puVar9 = puVar3;
      }
      if ((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
        lVar4 = *(longlong *)&this->PropertyValues;
        bVar6 = (byte)uVar2 & 0x1f;
        uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        uVar12 = (uint)uVar2;
        if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar12) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
        puVar9 = puVar11;
        if (puVar3 != (undefined1 *)0x0) {
          puVar9 = puVar3;
        }
        if (((*(uint *)(puVar9 + (ulonglong)(uVar2 >> 5) * 4) & uVar10) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)&(this->PropertyValues).field_0x34 != 0) {
          *(uint *)((longlong)*(int *)&(this->PropertyValues).field_0x30 * 0x20 + lVar4) = uVar12;
        }
        *(undefined4 *)((ulonglong)uVar2 * 0x20 + lVar4) = 0xffffffff;
        if (*(int *)&(this->PropertyValues).field_0x34 < 1) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(undefined4 *)&(this->PropertyValues).field_0x30;
        }
        *(undefined4 *)((ulonglong)uVar2 * 0x20 + 4 + lVar4) = uVar8;
        puVar3 = &(this->PropertyValues).field_0x34;
        *(int *)puVar3 = *(int *)puVar3 + 1;
        *(uint *)&(this->PropertyValues).field_0x30 = uVar12;
        if ((*(int *)&(this->PropertyValues).field_0x28 <= (int)uVar12) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar3 = *(undefined1 **)&(this->PropertyValues).field_0x20;
        if (puVar3 != (undefined1 *)0x0) {
          puVar11 = puVar3;
        }
        *(uint *)(puVar11 + (ulonglong)(uVar2 >> 5) * 4) =
             *(uint *)(puVar11 + (ulonglong)(uVar2 >> 5) * 4) & ~uVar10;
      }
    }
    pFVar13 = pFVar13 + 1;
    if (pFVar13 == pFVar1) {
      this->bLUTContainsInvalidEntries = true;
      return;
    }
  } while( true );
}

