// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 12

// FRigElementKeyRedirector @ 14a220470

FRigElementKeyRedirector * __thiscall
FRigElementKeyRedirector::FRigElementKeyRedirector
          (FRigElementKeyRedirector *this,FRigElementKeyRedirector *param_1)

{
  undefined1 *puVar1;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  
  *(undefined8 *)&this->InternalKeyToExternalKey = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x8 = 0;
  puVar1 = &(this->InternalKeyToExternalKey).field_0x48;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x20 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x28 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x34 = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->InternalKeyToExternalKey).field_0x38,
               (int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->InternalKeyToExternalKey).field_0x38,
               *(int *)&(param_1->InternalKeyToExternalKey).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  this_00 = &this->ExternalKeys;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x20 = 0;
  puVar1 = &(this->ExternalKeys).field_0x48;
  *(undefined4 *)&(this->ExternalKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalKeys).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->ExternalKeys) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ExternalKeys).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->ExternalKeys).field_0x38,
               *(int *)&(param_1->ExternalKeys).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ExternalKeys);
  }
  this->Hash = param_1->Hash;
  return this;
}

// operator= @ 14a229bc0

FRigElementKeyRedirector * __thiscall
FRigElementKeyRedirector::operator=
          (FRigElementKeyRedirector *this,FRigElementKeyRedirector *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->InternalKeyToExternalKey).field_0x8);
    if (*(void **)&this->InternalKeyToExternalKey != (void *)0x0) {
      FMemory::Free(*(void **)&this->InternalKeyToExternalKey);
    }
    _Src = &(param_1->InternalKeyToExternalKey).field_0x10;
    *(undefined8 *)&this->InternalKeyToExternalKey =
         *(undefined8 *)&param_1->InternalKeyToExternalKey;
    _Dst = &(this->InternalKeyToExternalKey).field_0x10;
    *(undefined8 *)&param_1->InternalKeyToExternalKey = 0;
    *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x8 =
         *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x8;
    *(undefined4 *)&(this->InternalKeyToExternalKey).field_0xc =
         *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0xc;
    *(undefined8 *)&(param_1->InternalKeyToExternalKey).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->InternalKeyToExternalKey).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->InternalKeyToExternalKey).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x20 =
           *(undefined8 *)&(param_1->InternalKeyToExternalKey).field_0x20;
      *(undefined8 *)&(param_1->InternalKeyToExternalKey).field_0x20 = 0;
      *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x28 =
           *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x28;
      *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x2c =
           *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x2c;
      *(undefined8 *)&(param_1->InternalKeyToExternalKey).field_0x28 = 0;
    }
    *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x30 =
         *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x30;
    *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x34 =
         *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x34;
    *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x34 = 0;
    if (*(longlong *)&(param_1->InternalKeyToExternalKey).field_0x40 == 0) {
      *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x38 =
           *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x38;
    }
    pvVar1 = *(void **)&(this->InternalKeyToExternalKey).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x40 =
         *(undefined8 *)&(param_1->InternalKeyToExternalKey).field_0x40;
    *(undefined8 *)&(param_1->InternalKeyToExternalKey).field_0x40 = 0;
    *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x48 =
         *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x48;
    *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x48 = 0;
  }
  if (&this->ExternalKeys != &param_1->ExternalKeys) {
    TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                *)&this->ExternalKeys,
               (TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                *)&param_1->ExternalKeys);
  }
  this->Hash = param_1->Hash;
  return this;
}

// operator= @ 14a229cf0

FRigElementKeyRedirector * __thiscall
FRigElementKeyRedirector::operator=
          (FRigElementKeyRedirector *this,FRigElementKeyRedirector *param_1)

{
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->InternalKeyToExternalKey).field_0x38,
               (int *)&(this->InternalKeyToExternalKey).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->InternalKeyToExternalKey).field_0x38,
               *(int *)&(param_1->InternalKeyToExternalKey).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  if (&this->ExternalKeys != &param_1->ExternalKeys) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ExternalKeys).field_0x38,
               (int *)&(this->ExternalKeys).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ExternalKeys).field_0x38,
               *(int *)&(param_1->ExternalKeys).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->ExternalKeys,
                (TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ExternalKeys);
  }
  this->Hash = param_1->Hash;
  return this;
}

// FRigElementKeyRedirector @ 14a2da460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyRedirector * __thiscall
FRigElementKeyRedirector::FRigElementKeyRedirector
          (FRigElementKeyRedirector *this,FModularRigConnections *param_1,URigHierarchy *param_2)

{
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  FRigElementKey *pFVar5;
  bool bVar6;
  FRigElementKeyRedirector *pFVar7;
  ulonglong uVar8;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  char *pcVar17;
  FName *pFVar18;
  byte *pbVar19;
  FModularRigConnections *pFVar20;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  FRigElementKey *pFVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127 [3];
  uint local_124;
  FModularRigConnections *local_120;
  uint local_118;
  uint uStack_114;
  undefined1 *puStack_110;
  undefined4 local_108;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  int local_f8;
  uint uStack_f4;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  FRigElementKeyRedirector *local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  URigHierarchy *local_c0;
  FRigElementKey *local_b8;
  FRigElementKeyRedirector *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_148;
  uVar12 = 0;
  *(undefined8 *)&this->InternalKeyToExternalKey = 0;
  this_00 = &this->ExternalKeys;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x8 = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x20 = 0;
  puVar1 = &(this->ExternalKeys).field_0x48;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x28 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x34 = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x40 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x48 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalKeys).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  local_120 = param_1;
  local_d8 = this;
  local_c0 = param_2;
  if ((param_2 == (URigHierarchy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHierarchy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                         ,0xd7,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRigElementKeyRedirector *)(*pcVar4)();
    return pFVar7;
  }
  uVar16 = (param_1->ConnectionList).ArrayNum;
  if ((uint)(*(int *)&(this->InternalKeyToExternalKey).field_0x8 -
            *(int *)&(this->InternalKeyToExternalKey).field_0x34) < uVar16) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
    }
    TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar16);
    if (uVar16 < 4) {
      uVar16 = 1;
    }
    else {
      uVar14 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_d0 = (undefined4)lVar15;
      uVar16 = 1 << ((byte)lVar15 & 0x1f);
    }
    iVar10 = *(int *)&(this->InternalKeyToExternalKey).field_0x48;
    if ((iVar10 == 0) || (iVar10 < (int)uVar16)) {
      *(uint *)&(this->InternalKeyToExternalKey).field_0x48 = uVar16;
      if (*(longlong *)&(this->InternalKeyToExternalKey).field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->InternalKeyToExternalKey).field_0x40,0,0,4);
      }
      if (uVar16 != 0) {
        uVar22 = uVar16;
        if (uVar16 < 2) {
          if (*(longlong *)&(this->InternalKeyToExternalKey).field_0x40 != 0) {
            uVar22 = 0;
            goto LAB_14a2da5bc;
          }
        }
        else {
LAB_14a2da5bc:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->InternalKeyToExternalKey).field_0x40,0,uVar22,4);
        }
        if (0 < (int)uVar16) {
          uVar23 = (ulonglong)uVar16;
          uVar14 = uVar12;
          do {
            puVar26 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x40;
            puVar11 = &(this->InternalKeyToExternalKey).field_0x38;
            if (puVar26 != (undefined1 *)0x0) {
              puVar11 = puVar26;
            }
            uVar8 = (longlong)(int)uVar16 - 1U & uVar14;
            uVar14 = uVar14 + 1;
            *(undefined4 *)(puVar11 + uVar8 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (*(int *)&(this->InternalKeyToExternalKey).field_0x48 != 0) {
        uVar16 = *(uint *)&(this->InternalKeyToExternalKey).field_0x28;
        puStack_110 = &(this->InternalKeyToExternalKey).field_0x10;
        uStack_114 = 1;
        local_118 = 0;
        uStack_104 = 0;
        uStack_100 = 0;
        if (uVar16 != 0) {
          puVar21 = *(uint **)&(this->InternalKeyToExternalKey).field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)puStack_110;
          }
          uVar22 = *puVar21;
          uVar14 = uVar12;
          while (uVar22 == 0) {
            uStack_100 = (int)uVar14 + 0x20;
            uVar14 = (ulonglong)uStack_100;
            iVar10 = (int)uVar12;
            local_118 = iVar10 + 1;
            uVar12 = (ulonglong)local_118;
            if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
            goto LAB_14a2da6b3;
            uVar22 = puVar21[(longlong)iVar10 + 1];
          }
          uStack_114 = -uVar22 & uVar22;
          uVar12 = (ulonglong)uStack_114 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_cc = (int)lVar15;
          uStack_104 = local_cc + -1 + uStack_100;
          uVar12 = (ulonglong)uStack_104;
          if ((int)uVar16 < (int)uStack_104) {
LAB_14a2da6b3:
            uVar12 = (ulonglong)uVar16;
            uStack_104 = uVar16;
          }
        }
        local_108 = 0xffffffff;
        local_a8._padding_ = CONCAT44(uStack_114,local_118);
        local_a8.CurrentBitIndex = uStack_104;
        local_a8.UnvisitedBitMask = 0xffffffff;
        local_a8._28_4_ = uStack_fc;
        local_a8.BaseBitIndex = uStack_100;
        local_b0 = this;
        local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_110;
        if ((int)uVar12 < (int)uVar16) {
          do {
            iVar10 = (int)uVar12;
            uVar3 = *(undefined8 *)
                     (*(longlong *)&local_b0->InternalKeyToExternalKey + 4 + (longlong)iVar10 * 0x48
                     );
            pbVar19 = (byte *)(*(longlong *)&local_b0->InternalKeyToExternalKey +
                              (longlong)iVar10 * 0x48);
            uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar16 = (uint)*pbVar19 + (uVar16 + (int)((ulonglong)uVar3 >> 0x20)) * 10 &
                     *(int *)&(this->InternalKeyToExternalKey).field_0x48 - 1U;
            *(uint *)(pbVar19 + 0x44) = uVar16;
            puVar26 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x40;
            puVar11 = &(this->InternalKeyToExternalKey).field_0x38;
            if (puVar26 != (undefined1 *)0x0) {
              puVar11 = puVar26;
            }
            uVar12 = (longlong)*(int *)&(this->InternalKeyToExternalKey).field_0x48 - 1U &
                     (longlong)(int)uVar16;
            *(undefined4 *)(pbVar19 + 0x40) = *(undefined4 *)(puVar11 + uVar12 * 4);
            *(int *)(puVar11 + uVar12 * 4) = iVar10;
            local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
            uVar12 = (ulonglong)(uint)local_a8.CurrentBitIndex;
          } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
        }
      }
    }
  }
  pFVar20 = local_120;
  puVar26 = &(this->ExternalKeys).field_0x40;
  uVar16 = (local_120->ConnectionList).ArrayNum;
  if (uVar16 <= (uint)(*(int *)&(this->ExternalKeys).field_0x8 -
                      *(int *)&(this->ExternalKeys).field_0x34)) goto LAB_14a2da9b1;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar12 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_c8 = (undefined4)lVar15;
    uVar16 = 1 << ((byte)lVar15 & 0x1f);
  }
  if ((*(int *)puVar1 != 0) && ((int)uVar16 <= *(int *)puVar1)) goto LAB_14a2da9b1;
  puVar11 = &(this->ExternalKeys).field_0x38;
  *(uint *)puVar1 = uVar16;
  if (*(longlong *)&(this->ExternalKeys).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)puVar26,0,0,4);
  }
  if (uVar16 != 0) {
    uVar22 = uVar16;
    if (uVar16 < 2) {
      if (*(longlong *)&(this->ExternalKeys).field_0x40 != 0) {
        uVar22 = 0;
        goto LAB_14a2da803;
      }
    }
    else {
LAB_14a2da803:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)puVar26,0,uVar22,4);
    }
    if (0 < (int)uVar16) {
      uVar12 = 0;
      uVar14 = (ulonglong)uVar16;
      do {
        puVar26 = *(undefined1 **)&(this->ExternalKeys).field_0x40;
        puVar13 = puVar11;
        if (puVar26 != (undefined1 *)0x0) {
          puVar13 = puVar26;
        }
        uVar23 = (longlong)(int)uVar16 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(puVar13 + uVar23 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (*(int *)puVar1 != 0) {
    iVar10 = *(int *)&(this->ExternalKeys).field_0x28;
    puStack_f0 = &(this->ExternalKeys).field_0x10;
    uStack_f4 = 1;
    local_f8 = 0;
    iStack_e4 = 0;
    iStack_e0 = 0;
    if (iVar10 != 0) {
      puVar21 = *(uint **)&(this->ExternalKeys).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puStack_f0;
      }
      uVar16 = *puVar21;
      iStack_e0 = 0;
      local_f8 = 0;
      while (uVar16 == 0) {
        iStack_e0 = iStack_e0 + 0x20;
        lVar15 = (longlong)local_f8;
        local_f8 = local_f8 + 1;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_f8) goto LAB_14a2da902;
        uVar16 = puVar21[lVar15 + 1];
      }
      uStack_f4 = -uVar16 & uVar16;
      uVar12 = (ulonglong)uStack_f4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_c4 = (int)lVar15;
      iStack_e4 = local_c4 + -1 + iStack_e0;
      if (iVar10 < iStack_e4) {
LAB_14a2da902:
        iStack_e4 = iVar10;
      }
    }
    local_e8 = 0xffffffff;
    local_80._padding_ = CONCAT44(uStack_f4,local_f8);
    local_80.CurrentBitIndex = iStack_e4;
    local_80.UnvisitedBitMask = 0xffffffff;
    local_80._28_4_ = uStack_dc;
    local_80.BaseBitIndex = iStack_e0;
    iVar25 = iStack_e4;
    local_88 = this_00;
    local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_f0;
    if (iStack_e4 < iVar10) {
      do {
        pbVar19 = (byte *)((longlong)iVar25 * 0x38 + *(longlong *)&local_88->field_0x0);
        uVar3 = *(undefined8 *)(pbVar19 + 4);
        uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar16 = (uint)*pbVar19 + (uVar16 + (int)((ulonglong)uVar3 >> 0x20)) * 10 &
                 *(int *)puVar1 - 1U;
        *(uint *)(pbVar19 + 0x34) = uVar16;
        puVar26 = *(undefined1 **)&(this->ExternalKeys).field_0x40;
        puVar13 = puVar11;
        if (puVar26 != (undefined1 *)0x0) {
          puVar13 = puVar26;
        }
        uVar12 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(pbVar19 + 0x30) = *(undefined4 *)(puVar13 + uVar12 * 4);
        *(int *)(puVar13 + uVar12 * 4) = iVar25;
        local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
        pFVar20 = local_120;
        iVar25 = local_80.CurrentBitIndex;
      } while (local_80.CurrentBitIndex < (local_80.Array)->NumBits);
    }
  }
LAB_14a2da9b1:
  this->Hash = 0;
  local_124 = (pFVar20->ConnectionList).ArrayNum;
  uVar12 = (ulonglong)(int)local_124;
  pFVar24 = (FRigElementKey *)(pFVar20->ConnectionList).AllocatorInstance.Data;
  local_b8 = (FRigElementKey *)((longlong)pFVar24 + uVar12 * 0x28);
  pFVar18 = &pFVar24->Name;
  do {
    pFVar5 = local_b8;
    if ((pFVar20->ConnectionList).ArrayNum != (int)uVar12) {
      local_128 = 0;
      `TCheckedPointerIterator<FModularRigSingleConnection_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_128);
    }
    if (pFVar24 == pFVar5) {
      return this;
    }
    bVar6 = ::FName::IsWithinBounds((FNameEntryId)(pFVar18->ComparisonIndex).Value);
    if ((((!bVar6) || (*pFVar18 == (FName)0x0)) || (pFVar24->Type == None)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Connection.Connector.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                           ,0xde,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRigElementKeyRedirector *)(*pcVar4)();
      return pFVar7;
    }
    uVar16 = pFVar18[3].Number;
    if (uVar16 != 0) {
      pcVar17 = *(char **)&pFVar18[2].Number;
      pcVar2 = pcVar17 + (longlong)(int)uVar16 * 0xc;
      puVar21 = (uint *)(pcVar17 + 4);
      while( true ) {
        if (pFVar18[3].Number != uVar16) {
          local_127[0] = 0;
          `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_127);
        }
        this = local_d8;
        if (pcVar17 == pcVar2) goto LAB_14a2daabc;
        bVar6 = ::FName::IsWithinBounds((FNameEntryId)*puVar21);
        this = local_d8;
        if (((!bVar6) || (*(longlong *)puVar21 == 0)) || (*pcVar17 == '\0')) break;
        pcVar17 = pcVar17 + 0xc;
        puVar21 = puVar21 + 3;
      }
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Connection.Targets)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                       ,0xdf,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRigElementKeyRedirector *)(*pcVar4)();
      return pFVar7;
    }
LAB_14a2daabc:
    pTVar9 = Convert(&local_60,
                     (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pFVar18[2].Number);
    Add(this,pFVar24,pTVar9,local_c0);
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    uVar12 = (ulonglong)local_124;
    pFVar24 = (FRigElementKey *)&pFVar24[3].Name;
    pFVar18 = pFVar18 + 5;
    pFVar20 = local_120;
  } while( true );
}

// FRigElementKeyRedirector @ 14a2dab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyRedirector * __thiscall
FRigElementKeyRedirector::FRigElementKeyRedirector
          (FRigElementKeyRedirector *this,FRigElementKeyRedirector *param_1,URigHierarchy *param_2)

{
  FRigElementKey *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  URigHierarchy *pUVar7;
  FRigElementKeyRedirector *pFVar8;
  bool bVar9;
  FRigElementKeyRedirector *pFVar10;
  ulonglong uVar11;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar12;
  byte bVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  undefined1 auStack_208 [32];
  int local_1e8;
  undefined1 local_1e4 [4];
  FRigElementKeyRedirector *local_1e0;
  uint local_1d8;
  uint uStack_1d4;
  undefined1 *puStack_1d0;
  undefined4 local_1c8;
  int iStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  uint uStack_194;
  undefined1 *puStack_190;
  undefined4 local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  uint *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  undefined8 uStack_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  FRigElementKeyRedirector *local_128;
  URigHierarchy *local_120;
  FRigElementKeyRedirector *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  FRigElementKeyRedirector *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  longlong local_90;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_88;
  uint local_80;
  int iStack_7c;
  ulonglong uStack_78;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  uVar17 = 0;
  *(undefined8 *)&this->InternalKeyToExternalKey = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x8 = 0;
  local_178 = (uint *)&(this->ExternalKeys).field_0x48;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x20 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x28 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x34 = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x40 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x48 = 0;
  *(undefined8 *)&this->ExternalKeys = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalKeys).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x40 = 0;
  *local_178 = 0;
  local_1e0 = param_1;
  local_128 = this;
  local_120 = param_2;
  if ((param_2 == (URigHierarchy *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHierarchy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                         ,0xc9,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRigElementKeyRedirector *)(*pcVar5)();
    return pFVar10;
  }
  uVar20 = *(int *)&(param_1->InternalKeyToExternalKey).field_0x8 -
           *(int *)&(param_1->InternalKeyToExternalKey).field_0x34;
  if ((uint)(*(int *)&(this->InternalKeyToExternalKey).field_0x8 -
            *(int *)&(this->InternalKeyToExternalKey).field_0x34) < uVar20) {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
    }
    TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar20);
    if (uVar20 < 4) {
      uVar20 = 1;
    }
    else {
      uVar18 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_140 = (undefined4)lVar19;
      uVar20 = 1 << ((byte)lVar19 & 0x1f);
    }
    iVar2 = *(int *)&(this->InternalKeyToExternalKey).field_0x48;
    if ((iVar2 == 0) || (iVar2 < (int)uVar20)) {
      *(uint *)&(this->InternalKeyToExternalKey).field_0x48 = uVar20;
      if (*(longlong *)&(this->InternalKeyToExternalKey).field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->InternalKeyToExternalKey).field_0x40,0,0,4);
      }
      if (uVar20 != 0) {
        uVar22 = uVar20;
        if (uVar20 < 2) {
          if (*(longlong *)&(this->InternalKeyToExternalKey).field_0x40 != 0) {
            uVar22 = 0;
            goto LAB_14a2dacc0;
          }
        }
        else {
LAB_14a2dacc0:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->InternalKeyToExternalKey).field_0x40,0,uVar22,4);
        }
        if (0 < (int)uVar20) {
          uVar23 = (ulonglong)uVar20;
          uVar18 = uVar17;
          do {
            puVar3 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x40;
            puVar15 = &(this->InternalKeyToExternalKey).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar15 = puVar3;
            }
            uVar11 = uVar18 & (longlong)(int)uVar20 - 1U;
            uVar18 = uVar18 + 1;
            *(undefined4 *)(puVar15 + uVar11 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (*(int *)&(this->InternalKeyToExternalKey).field_0x48 != 0) {
        iVar2 = *(int *)&(this->InternalKeyToExternalKey).field_0x28;
        puStack_1d0 = &(this->InternalKeyToExternalKey).field_0x10;
        uStack_1d4 = 1;
        local_1d8 = 0;
        iStack_1c4 = 0;
        uStack_1c0 = 0;
        if (iVar2 != 0) {
          puVar24 = *(uint **)&(this->InternalKeyToExternalKey).field_0x20;
          if (puVar24 == (uint *)0x0) {
            puVar24 = (uint *)puStack_1d0;
          }
          uVar20 = *puVar24;
          uVar18 = uVar17;
          uVar23 = uVar17;
          while (uVar20 == 0) {
            uStack_1c0 = (int)uVar23 + 0x20;
            uVar23 = (ulonglong)uStack_1c0;
            iVar14 = (int)uVar18;
            local_1d8 = iVar14 + 1;
            uVar18 = (ulonglong)local_1d8;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_1d8)
            goto LAB_14a2dadc1;
            uVar20 = puVar24[(longlong)iVar14 + 1];
          }
          uStack_1d4 = -uVar20 & uVar20;
          uVar18 = (ulonglong)uStack_1d4 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_13c = (int)lVar19;
          iStack_1c4 = local_13c + -1 + uStack_1c0;
          if (iVar2 < iStack_1c4) {
LAB_14a2dadc1:
            iStack_1c4 = iVar2;
          }
        }
        local_1c8 = 0xffffffff;
        local_110._padding_ = CONCAT44(uStack_1d4,local_1d8);
        local_110.CurrentBitIndex = iStack_1c4;
        local_110.UnvisitedBitMask = 0xffffffff;
        local_110._28_4_ = uStack_1bc;
        local_110.BaseBitIndex = uStack_1c0;
        iVar14 = iStack_1c4;
        local_1e8 = iStack_1c4;
        local_118 = this;
        local_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_1d0;
        if (iStack_1c4 < iVar2) {
          do {
            uVar4 = *(undefined8 *)
                     (*(longlong *)&local_118->InternalKeyToExternalKey + 4 +
                     (longlong)iVar14 * 0x48);
            pbVar21 = (byte *)(*(longlong *)&local_118->InternalKeyToExternalKey +
                              (longlong)iVar14 * 0x48);
            uVar20 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
            uVar20 = (uint)*pbVar21 + (uVar20 + (int)((ulonglong)uVar4 >> 0x20)) * 10 &
                     *(int *)&(this->InternalKeyToExternalKey).field_0x48 - 1U;
            *(uint *)(pbVar21 + 0x44) = uVar20;
            puVar3 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x40;
            puVar15 = &(this->InternalKeyToExternalKey).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar15 = puVar3;
            }
            uVar18 = (longlong)*(int *)&(this->InternalKeyToExternalKey).field_0x48 - 1U &
                     (longlong)(int)uVar20;
            *(undefined4 *)(pbVar21 + 0x40) = *(undefined4 *)(puVar15 + uVar18 * 4);
            *(int *)(puVar15 + uVar18 * 4) = iVar14;
            local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
            iVar14 = local_110.CurrentBitIndex;
          } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
        }
      }
    }
  }
  this_00 = &this->ExternalKeys;
  uVar20 = *(int *)&(param_1->ExternalKeys).field_0x8 - *(int *)&(param_1->ExternalKeys).field_0x34;
  pFVar10 = this;
  if (uVar20 <= (uint)(*(int *)&(this->ExternalKeys).field_0x8 -
                      *(int *)&(this->ExternalKeys).field_0x34)) goto LAB_14a2db0e5;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,uVar20);
  puVar24 = local_178;
  if (uVar20 < 4) {
    uVar20 = 1;
  }
  else {
    uVar18 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_138 = (undefined4)lVar19;
    uVar20 = 1 << ((byte)lVar19 & 0x1f);
  }
  if ((*local_178 != 0) && ((int)uVar20 <= (int)*local_178)) goto LAB_14a2db0e5;
  puVar3 = &(this->ExternalKeys).field_0x38;
  *local_178 = uVar20;
  if (*(longlong *)&(this->ExternalKeys).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ExternalKeys).field_0x40,0,0,4);
  }
  if (uVar20 != 0) {
    uVar22 = uVar20;
    if (uVar20 < 2) {
      if (*(longlong *)&(this->ExternalKeys).field_0x40 != 0) {
        uVar22 = 0;
        goto LAB_14a2daf2a;
      }
    }
    else {
LAB_14a2daf2a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->ExternalKeys).field_0x40,0,uVar22,4);
    }
    if (0 < (int)uVar20) {
      uVar23 = (ulonglong)uVar20;
      uVar18 = uVar17;
      do {
        puVar15 = *(undefined1 **)&(this->ExternalKeys).field_0x40;
        puVar16 = puVar3;
        if (puVar15 != (undefined1 *)0x0) {
          puVar16 = puVar15;
        }
        uVar11 = uVar18 & (longlong)(int)uVar20 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(puVar16 + uVar11 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  param_1 = local_1e0;
  if (*puVar24 != 0) {
    iVar2 = *(int *)&(this->ExternalKeys).field_0x28;
    puStack_1b0 = &(this->ExternalKeys).field_0x10;
    uStack_1b4 = 1;
    local_1b8 = 0;
    iStack_1a4 = 0;
    uStack_1a0 = 0;
    if (iVar2 != 0) {
      puVar25 = *(uint **)&(this->ExternalKeys).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)puStack_1b0;
      }
      uVar20 = *puVar25;
      uVar18 = uVar17;
      while (uVar20 == 0) {
        uStack_1a0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1a0;
        iVar14 = (int)uVar17;
        local_1b8 = iVar14 + 1;
        uVar17 = (ulonglong)local_1b8;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_1b8)
        goto LAB_14a2db021;
        uVar20 = puVar25[(longlong)iVar14 + 1];
      }
      uStack_1b4 = -uVar20 & uVar20;
      uVar17 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_134 = (int)lVar19;
      iStack_1a4 = (uStack_1a0 - 1) + local_134;
      if (iVar2 < iStack_1a4) {
LAB_14a2db021:
        iStack_1a4 = iVar2;
      }
    }
    local_1a8 = 0xffffffff;
    local_e8._padding_ = CONCAT44(uStack_1b4,local_1b8);
    local_e8.CurrentBitIndex = iStack_1a4;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_19c;
    local_e8.BaseBitIndex = uStack_1a0;
    iVar14 = iStack_1a4;
    local_1e8 = iStack_1a4;
    local_f0 = this_00;
    local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_1b0;
    if (iStack_1a4 < iVar2) {
      do {
        pbVar21 = (byte *)((longlong)iVar14 * 0x38 + *(longlong *)&local_f0->field_0x0);
        uVar4 = *(undefined8 *)(pbVar21 + 4);
        uVar20 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar20 = (uint)*pbVar21 + (uVar20 + (int)((ulonglong)uVar4 >> 0x20)) * 10 & *puVar24 - 1;
        *(uint *)(pbVar21 + 0x34) = uVar20;
        puVar15 = *(undefined1 **)&(this->ExternalKeys).field_0x40;
        puVar16 = puVar3;
        if (puVar15 != (undefined1 *)0x0) {
          puVar16 = puVar15;
        }
        uVar17 = (longlong)(int)*puVar24 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)(pbVar21 + 0x30) = *(undefined4 *)(puVar16 + uVar17 * 4);
        *(int *)(puVar16 + uVar17 * 4) = iVar14;
        local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        param_1 = local_1e0;
        pFVar10 = local_128;
        iVar14 = local_e8.CurrentBitIndex;
      } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
    }
  }
LAB_14a2db0e5:
  puStack_190 = &(param_1->InternalKeyToExternalKey).field_0x10;
  pFVar10->Hash = 0;
  iVar2 = *(int *)&(param_1->InternalKeyToExternalKey).field_0x28;
  local_198 = 0;
  uStack_194 = 1;
  iStack_184 = 0;
  iStack_180 = 0;
  if (iVar2 != 0) {
    puVar24 = *(uint **)&(param_1->InternalKeyToExternalKey).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puStack_190;
    }
    uVar20 = *puVar24;
    iStack_180 = 0;
    local_198 = 0;
    while (uVar20 == 0) {
      lVar19 = (longlong)local_198;
      iStack_180 = iStack_180 + 0x20;
      local_198 = local_198 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_198) goto LAB_14a2db18c;
      uVar20 = puVar24[lVar19 + 1];
    }
    uStack_194 = -uVar20 & uVar20;
    uVar17 = (ulonglong)uStack_194 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_130 = (int)lVar19;
    iStack_184 = iStack_180 + -1 + local_130;
    if (iVar2 < iStack_184) {
LAB_14a2db18c:
      iStack_184 = iVar2;
    }
  }
  local_188 = 0xffffffff;
  iVar14 = *(int *)&(param_1->InternalKeyToExternalKey).field_0x28;
  TStack_c0._padding_ = CONCAT44(uStack_194,local_198);
  bVar13 = (byte)iVar14 & 0x1f;
  local_148 = *(int *)&(param_1->InternalKeyToExternalKey).field_0x8 -
              *(int *)&(param_1->InternalKeyToExternalKey).field_0x34;
  TStack_c0.CurrentBitIndex = iStack_184;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  uStack_150._4_4_ = uStack_17c;
  uStack_150._0_4_ = iStack_180;
  local_170._padding_ = CONCAT44(1 << bVar13,iVar14 >> 5);
  local_170.CurrentBitIndex = iVar14;
  local_170.UnvisitedBitMask = -1 << bVar13;
  local_170._24_8_ = CONCAT44(iStack_184,iVar14) & 0xffffffffffffffe0;
  uStack_a0 = CONCAT44(uStack_144,local_148);
  local_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_190;
  local_c8 = param_1;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_190;
  TStack_c0._24_8_ = uStack_150;
  if (((iVar14 < 0) || (iVar2 < iVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRigElementKeyRedirector *)(*pcVar5)();
    return pFVar10;
  }
  if (iVar14 != *(int *)&(param_1->InternalKeyToExternalKey).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
  }
  pUVar7 = local_120;
  pTVar6 = local_170.Array;
  local_90 = local_170._padding_;
  pTStack_88 = local_170.Array;
  local_80 = local_170.UnvisitedBitMask;
  iStack_7c = local_170.CurrentBitIndex;
  uVar4 = _local_80;
  uStack_78 = local_170._24_8_;
  iStack_7c = local_170.CurrentBitIndex;
  iVar2 = iStack_7c;
  _local_80 = uVar4;
  while( true ) {
    pFVar8 = local_c8;
    if (*(int *)&(local_c8->InternalKeyToExternalKey).field_0x8 -
        *(int *)&(local_c8->InternalKeyToExternalKey).field_0x34 != (int)uStack_a0) {
      local_1e4[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1e4);
    }
    if (((TStack_c0.CurrentBitIndex == iVar2) && (TStack_c0.Array == pTVar6)) && (pFVar8 == param_1)
       ) break;
    lVar19 = *(longlong *)&pFVar8->InternalKeyToExternalKey;
    pFVar1 = (FRigElementKey *)(lVar19 + (longlong)TStack_c0.CurrentBitIndex * 0x48);
    bVar9 = ::FName::IsWithinBounds
                      ((FNameEntryId)
                       *(uint *)(lVar19 + 4 + (longlong)TStack_c0.CurrentBitIndex * 0x48));
    if ((((!bVar9) || (pFVar1->Name == (FName)0x0)) || (pFVar1->Type == None)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair.Key.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                           ,0xd0,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FRigElementKeyRedirector *)(*pcVar5)();
      return pFVar10;
    }
    pTVar12 = Convert(&local_68,
                      (TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                       *)&pFVar1[1].Name);
    Add(pFVar10,pFVar1,pTVar12,pUVar7);
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  return pFVar10;
}

// FRigElementKeyRedirector @ 14a2db370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyRedirector * __thiscall
FRigElementKeyRedirector::FRigElementKeyRedirector
          (FRigElementKeyRedirector *this,
          TMap<FRigElementKey,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKeyCollection,0>_>
          *param_1,URigHierarchy *param_2)

{
  FRigElementKey *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  URigHierarchy *pUVar7;
  TMap<FRigElementKey,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKeyCollection,0>_>
  *pTVar8;
  bool bVar9;
  FRigElementKeyRedirector *pFVar10;
  ulonglong uVar11;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar12;
  byte bVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  undefined1 auStack_208 [32];
  int local_1e8;
  undefined1 local_1e4 [4];
  TMap<FRigElementKey,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKeyCollection,0>_>
  *local_1e0;
  uint local_1d8;
  uint uStack_1d4;
  undefined1 *puStack_1d0;
  undefined4 local_1c8;
  int iStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  uint uStack_194;
  undefined1 *puStack_190;
  undefined4 local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  uint *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  undefined8 uStack_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  FRigElementKeyRedirector *local_128;
  URigHierarchy *local_120;
  FRigElementKeyRedirector *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  TMap<FRigElementKey,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKeyCollection,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  longlong local_90;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_88;
  uint local_80;
  int iStack_7c;
  ulonglong uStack_78;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  uVar17 = 0;
  *(undefined8 *)&this->InternalKeyToExternalKey = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x8 = 0;
  local_178 = (uint *)&(this->ExternalKeys).field_0x48;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x20 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x28 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x34 = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x40 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x48 = 0;
  *(undefined8 *)&this->ExternalKeys = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalKeys).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x40 = 0;
  *local_178 = 0;
  local_1e0 = param_1;
  local_128 = this;
  local_120 = param_2;
  if ((param_2 == (URigHierarchy *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHierarchy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                         ,0xbb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRigElementKeyRedirector *)(*pcVar5)();
    return pFVar10;
  }
  uVar20 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if ((uint)(*(int *)&(this->InternalKeyToExternalKey).field_0x8 -
            *(int *)&(this->InternalKeyToExternalKey).field_0x34) < uVar20) {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
    }
    TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar20);
    if (uVar20 < 4) {
      uVar20 = 1;
    }
    else {
      uVar18 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_140 = (undefined4)lVar19;
      uVar20 = 1 << ((byte)lVar19 & 0x1f);
    }
    iVar2 = *(int *)&(this->InternalKeyToExternalKey).field_0x48;
    if ((iVar2 == 0) || (iVar2 < (int)uVar20)) {
      *(uint *)&(this->InternalKeyToExternalKey).field_0x48 = uVar20;
      if (*(longlong *)&(this->InternalKeyToExternalKey).field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->InternalKeyToExternalKey).field_0x40,0,0,4);
      }
      if (uVar20 != 0) {
        uVar22 = uVar20;
        if (uVar20 < 2) {
          if (*(longlong *)&(this->InternalKeyToExternalKey).field_0x40 != 0) {
            uVar22 = 0;
            goto LAB_14a2db4e0;
          }
        }
        else {
LAB_14a2db4e0:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->InternalKeyToExternalKey).field_0x40,0,uVar22,4);
        }
        if (0 < (int)uVar20) {
          uVar23 = (ulonglong)uVar20;
          uVar18 = uVar17;
          do {
            puVar3 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x40;
            puVar15 = &(this->InternalKeyToExternalKey).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar15 = puVar3;
            }
            uVar11 = uVar18 & (longlong)(int)uVar20 - 1U;
            uVar18 = uVar18 + 1;
            *(undefined4 *)(puVar15 + uVar11 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (*(int *)&(this->InternalKeyToExternalKey).field_0x48 != 0) {
        iVar2 = *(int *)&(this->InternalKeyToExternalKey).field_0x28;
        puStack_1d0 = &(this->InternalKeyToExternalKey).field_0x10;
        uStack_1d4 = 1;
        local_1d8 = 0;
        iStack_1c4 = 0;
        uStack_1c0 = 0;
        if (iVar2 != 0) {
          puVar24 = *(uint **)&(this->InternalKeyToExternalKey).field_0x20;
          if (puVar24 == (uint *)0x0) {
            puVar24 = (uint *)puStack_1d0;
          }
          uVar20 = *puVar24;
          uVar18 = uVar17;
          uVar23 = uVar17;
          while (uVar20 == 0) {
            uStack_1c0 = (int)uVar23 + 0x20;
            uVar23 = (ulonglong)uStack_1c0;
            iVar14 = (int)uVar18;
            local_1d8 = iVar14 + 1;
            uVar18 = (ulonglong)local_1d8;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_1d8)
            goto LAB_14a2db5e1;
            uVar20 = puVar24[(longlong)iVar14 + 1];
          }
          uStack_1d4 = -uVar20 & uVar20;
          uVar18 = (ulonglong)uStack_1d4 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_13c = (int)lVar19;
          iStack_1c4 = local_13c + -1 + uStack_1c0;
          if (iVar2 < iStack_1c4) {
LAB_14a2db5e1:
            iStack_1c4 = iVar2;
          }
        }
        local_1c8 = 0xffffffff;
        local_110._padding_ = CONCAT44(uStack_1d4,local_1d8);
        local_110.CurrentBitIndex = iStack_1c4;
        local_110.UnvisitedBitMask = 0xffffffff;
        local_110._28_4_ = uStack_1bc;
        local_110.BaseBitIndex = uStack_1c0;
        iVar14 = iStack_1c4;
        local_1e8 = iStack_1c4;
        local_118 = this;
        local_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_1d0;
        if (iStack_1c4 < iVar2) {
          do {
            uVar4 = *(undefined8 *)
                     (*(longlong *)&local_118->InternalKeyToExternalKey + 4 +
                     (longlong)iVar14 * 0x48);
            pbVar21 = (byte *)(*(longlong *)&local_118->InternalKeyToExternalKey +
                              (longlong)iVar14 * 0x48);
            uVar20 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
            uVar20 = (uint)*pbVar21 + (uVar20 + (int)((ulonglong)uVar4 >> 0x20)) * 10 &
                     *(int *)&(this->InternalKeyToExternalKey).field_0x48 - 1U;
            *(uint *)(pbVar21 + 0x44) = uVar20;
            puVar3 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x40;
            puVar15 = &(this->InternalKeyToExternalKey).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar15 = puVar3;
            }
            uVar18 = (longlong)*(int *)&(this->InternalKeyToExternalKey).field_0x48 - 1U &
                     (longlong)(int)uVar20;
            *(undefined4 *)(pbVar21 + 0x40) = *(undefined4 *)(puVar15 + uVar18 * 4);
            *(int *)(puVar15 + uVar18 * 4) = iVar14;
            local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
            iVar14 = local_110.CurrentBitIndex;
          } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
        }
      }
    }
  }
  this_00 = &this->ExternalKeys;
  uVar20 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  pFVar10 = this;
  if (uVar20 <= (uint)(*(int *)&(this->ExternalKeys).field_0x8 -
                      *(int *)&(this->ExternalKeys).field_0x34)) goto LAB_14a2db905;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,uVar20);
  puVar24 = local_178;
  if (uVar20 < 4) {
    uVar20 = 1;
  }
  else {
    uVar18 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_138 = (undefined4)lVar19;
    uVar20 = 1 << ((byte)lVar19 & 0x1f);
  }
  if ((*local_178 != 0) && ((int)uVar20 <= (int)*local_178)) goto LAB_14a2db905;
  puVar3 = &(this->ExternalKeys).field_0x38;
  *local_178 = uVar20;
  if (*(longlong *)&(this->ExternalKeys).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ExternalKeys).field_0x40,0,0,4);
  }
  if (uVar20 != 0) {
    uVar22 = uVar20;
    if (uVar20 < 2) {
      if (*(longlong *)&(this->ExternalKeys).field_0x40 != 0) {
        uVar22 = 0;
        goto LAB_14a2db747;
      }
    }
    else {
LAB_14a2db747:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->ExternalKeys).field_0x40,0,uVar22,4);
    }
    if (0 < (int)uVar20) {
      uVar23 = (ulonglong)uVar20;
      uVar18 = uVar17;
      do {
        puVar15 = *(undefined1 **)&(this->ExternalKeys).field_0x40;
        puVar16 = puVar3;
        if (puVar15 != (undefined1 *)0x0) {
          puVar16 = puVar15;
        }
        uVar11 = uVar18 & (longlong)(int)uVar20 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(puVar16 + uVar11 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  param_1 = local_1e0;
  if (*puVar24 != 0) {
    iVar2 = *(int *)&(this->ExternalKeys).field_0x28;
    puStack_1b0 = &(this->ExternalKeys).field_0x10;
    uStack_1b4 = 1;
    local_1b8 = 0;
    iStack_1a4 = 0;
    uStack_1a0 = 0;
    if (iVar2 != 0) {
      puVar25 = *(uint **)&(this->ExternalKeys).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)puStack_1b0;
      }
      uVar20 = *puVar25;
      uVar18 = uVar17;
      while (uVar20 == 0) {
        uStack_1a0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1a0;
        iVar14 = (int)uVar17;
        local_1b8 = iVar14 + 1;
        uVar17 = (ulonglong)local_1b8;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_1b8)
        goto LAB_14a2db841;
        uVar20 = puVar25[(longlong)iVar14 + 1];
      }
      uStack_1b4 = -uVar20 & uVar20;
      uVar17 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_134 = (int)lVar19;
      iStack_1a4 = (uStack_1a0 - 1) + local_134;
      if (iVar2 < iStack_1a4) {
LAB_14a2db841:
        iStack_1a4 = iVar2;
      }
    }
    local_1a8 = 0xffffffff;
    local_e8._padding_ = CONCAT44(uStack_1b4,local_1b8);
    local_e8.CurrentBitIndex = iStack_1a4;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_19c;
    local_e8.BaseBitIndex = uStack_1a0;
    iVar14 = iStack_1a4;
    local_1e8 = iStack_1a4;
    local_f0 = this_00;
    local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_1b0;
    if (iStack_1a4 < iVar2) {
      do {
        pbVar21 = (byte *)((longlong)iVar14 * 0x38 + *(longlong *)&local_f0->field_0x0);
        uVar4 = *(undefined8 *)(pbVar21 + 4);
        uVar20 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar20 = (uint)*pbVar21 + (uVar20 + (int)((ulonglong)uVar4 >> 0x20)) * 10 & *puVar24 - 1;
        *(uint *)(pbVar21 + 0x34) = uVar20;
        puVar15 = *(undefined1 **)&(this->ExternalKeys).field_0x40;
        puVar16 = puVar3;
        if (puVar15 != (undefined1 *)0x0) {
          puVar16 = puVar15;
        }
        uVar17 = (longlong)(int)*puVar24 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)(pbVar21 + 0x30) = *(undefined4 *)(puVar16 + uVar17 * 4);
        *(int *)(puVar16 + uVar17 * 4) = iVar14;
        local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        param_1 = local_1e0;
        pFVar10 = local_128;
        iVar14 = local_e8.CurrentBitIndex;
      } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
    }
  }
LAB_14a2db905:
  puStack_190 = &param_1->field_0x10;
  pFVar10->Hash = 0;
  iVar2 = *(int *)&param_1->field_0x28;
  local_198 = 0;
  uStack_194 = 1;
  iStack_184 = 0;
  iStack_180 = 0;
  if (iVar2 != 0) {
    puVar24 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar24 = (uint *)puStack_190;
    }
    uVar20 = *puVar24;
    iStack_180 = 0;
    local_198 = 0;
    while (uVar20 == 0) {
      lVar19 = (longlong)local_198;
      iStack_180 = iStack_180 + 0x20;
      local_198 = local_198 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_198) goto LAB_14a2db9ac;
      uVar20 = puVar24[lVar19 + 1];
    }
    uStack_194 = -uVar20 & uVar20;
    uVar17 = (ulonglong)uStack_194 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_130 = (int)lVar19;
    iStack_184 = iStack_180 + -1 + local_130;
    if (iVar2 < iStack_184) {
LAB_14a2db9ac:
      iStack_184 = iVar2;
    }
  }
  local_188 = 0xffffffff;
  iVar14 = *(int *)&param_1->field_0x28;
  TStack_c0._padding_ = CONCAT44(uStack_194,local_198);
  bVar13 = (byte)iVar14 & 0x1f;
  local_148 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  TStack_c0.CurrentBitIndex = iStack_184;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  uStack_150._4_4_ = uStack_17c;
  uStack_150._0_4_ = iStack_180;
  local_170._padding_ = CONCAT44(1 << bVar13,iVar14 >> 5);
  local_170.CurrentBitIndex = iVar14;
  local_170.UnvisitedBitMask = -1 << bVar13;
  local_170._24_8_ = CONCAT44(iStack_184,iVar14) & 0xffffffffffffffe0;
  uStack_a0 = CONCAT44(uStack_144,local_148);
  local_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_190;
  local_c8 = param_1;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_190;
  TStack_c0._24_8_ = uStack_150;
  if (((iVar14 < 0) || (iVar2 < iVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRigElementKeyRedirector *)(*pcVar5)();
    return pFVar10;
  }
  if (iVar14 != *(int *)&param_1->field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
  }
  pUVar7 = local_120;
  pTVar6 = local_170.Array;
  local_90 = local_170._padding_;
  pTStack_88 = local_170.Array;
  local_80 = local_170.UnvisitedBitMask;
  iStack_7c = local_170.CurrentBitIndex;
  uVar4 = _local_80;
  uStack_78 = local_170._24_8_;
  iStack_7c = local_170.CurrentBitIndex;
  iVar2 = iStack_7c;
  _local_80 = uVar4;
  while( true ) {
    pTVar8 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_1e4[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKeyCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1e4);
    }
    if (((TStack_c0.CurrentBitIndex == iVar2) && (TStack_c0.Array == pTVar6)) && (pTVar8 == param_1)
       ) break;
    lVar19 = *(longlong *)pTVar8;
    pFVar1 = (FRigElementKey *)(lVar19 + (longlong)TStack_c0.CurrentBitIndex * 0x28);
    bVar9 = ::FName::IsWithinBounds
                      ((FNameEntryId)
                       *(uint *)(lVar19 + 4 + (longlong)TStack_c0.CurrentBitIndex * 0x28));
    if ((((!bVar9) || (pFVar1->Name == (FName)0x0)) || (pFVar1->Type == None)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair.Key.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                           ,0xc2,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FRigElementKeyRedirector *)(*pcVar5)();
      return pFVar10;
    }
    pTVar12 = Convert(&local_68,
                      (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pFVar1[1].Name);
    Add(pFVar10,pFVar1,pTVar12,pUVar7);
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  return pFVar10;
}

// FRigElementKeyRedirector @ 14a2dbb90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyRedirector * __thiscall
FRigElementKeyRedirector::FRigElementKeyRedirector
          (FRigElementKeyRedirector *this,
          TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
          *param_1,URigHierarchy *param_2)

{
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FRigElementKeyRedirector *pFVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FRigElementKey *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined4 uStack_19c;
  uint local_198;
  uint uStack_194;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  undefined1 local_f0 [12];
  uint uStack_e4;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  TRangedForConstIterator local_c0;
  undefined4 local_74;
  undefined4 local_54;
  
  uVar18 = 0;
  this_00 = &this->ExternalKeys;
  *(undefined8 *)&this->InternalKeyToExternalKey = 0;
  puVar1 = &(this->ExternalKeys).field_0x48;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x8 = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x20 = 0;
  uVar17 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x28 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x34 = 0;
  *(undefined8 *)&(this->InternalKeyToExternalKey).field_0x40 = 0;
  *(undefined4 *)&(this->InternalKeyToExternalKey).field_0x48 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalKeys).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalKeys).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if ((param_2 == (URigHierarchy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHierarchy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                         ,0xad,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRigElementKeyRedirector *)(*pcVar3)();
    return pFVar6;
  }
  uVar13 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar20 = 0;
  if ((uint)(*(int *)&(this->InternalKeyToExternalKey).field_0x8 -
            *(int *)&(this->InternalKeyToExternalKey).field_0x34) < uVar13) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
    }
    TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar13);
    uVar14 = 1;
    if (3 < uVar13) {
      uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar11 & 0x1f);
    }
    iVar15 = *(int *)&(this->InternalKeyToExternalKey).field_0x48;
    if ((iVar15 == 0) || (iVar15 < (int)uVar14)) {
      *(uint *)&(this->InternalKeyToExternalKey).field_0x48 = uVar14;
      if (*(longlong *)&(this->InternalKeyToExternalKey).field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->InternalKeyToExternalKey).field_0x40,0,0,4);
      }
      if (uVar14 != 0) {
        uVar13 = uVar14;
        if (uVar14 < 2) {
          if (*(longlong *)&(this->InternalKeyToExternalKey).field_0x40 != 0) {
            uVar13 = 0;
            goto LAB_14a2dbced;
          }
        }
        else {
LAB_14a2dbced:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->InternalKeyToExternalKey).field_0x40,0,uVar13,4);
        }
        if (0 < (int)uVar14) {
          uVar21 = (ulonglong)uVar14;
          uVar12 = uVar18;
          do {
            puVar22 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x40;
            puVar9 = &(this->InternalKeyToExternalKey).field_0x38;
            if (puVar22 != (undefined1 *)0x0) {
              puVar9 = puVar22;
            }
            uVar7 = uVar12 & (longlong)(int)uVar14 - 1U;
            uVar12 = uVar12 + 1;
            *(undefined4 *)(puVar9 + uVar7 * 4) = 0xffffffff;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (*(int *)&(this->InternalKeyToExternalKey).field_0x48 != 0) {
        uVar13 = *(uint *)&(this->InternalKeyToExternalKey).field_0x28;
        local_138.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->InternalKeyToExternalKey).field_0x10;
        uStack_194 = 1;
        local_198 = 0;
        uStack_184 = 0;
        uStack_180 = 0;
        uVar12 = uVar18;
        if (uVar13 != 0) {
          puVar23 = *(uint **)&(this->InternalKeyToExternalKey).field_0x20;
          if (puVar23 == (uint *)0x0) {
            puVar23 = (uint *)local_138.Array;
          }
          uVar14 = *puVar23;
          uVar21 = uVar18;
          while (uVar14 == 0) {
            uStack_180 = (int)uVar21 + 0x20;
            uVar21 = (ulonglong)uStack_180;
            iVar15 = (int)uVar12;
            local_198 = iVar15 + 1;
            uVar12 = (ulonglong)local_198;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_198)
            goto LAB_14a2dbde3;
            uVar14 = puVar23[(longlong)iVar15 + 1];
          }
          uStack_194 = -uVar14 & uVar14;
          uVar12 = (ulonglong)uStack_194 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uStack_184 = (uStack_180 - 1) + (int)lVar11;
          uVar12 = (ulonglong)uStack_184;
          if ((int)uVar13 < (int)uStack_184) {
LAB_14a2dbde3:
            uVar12 = (ulonglong)uVar13;
            uStack_184 = uVar13;
          }
        }
        local_138._padding_ = CONCAT44(uStack_194,local_198);
        local_138.CurrentBitIndex = uStack_184;
        local_138.UnvisitedBitMask = 0xffffffff;
        local_138._28_4_ = uStack_17c;
        local_138.BaseBitIndex = uStack_180;
        if ((int)uVar12 < (int)uVar13) {
          do {
            iVar15 = (int)uVar12;
            uVar2 = *(undefined8 *)
                     (*(longlong *)&this->InternalKeyToExternalKey + 4 + (longlong)iVar15 * 0x48);
            pbVar19 = (byte *)(*(longlong *)&this->InternalKeyToExternalKey +
                              (longlong)iVar15 * 0x48);
            uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
            uVar13 = (uint)*pbVar19 + (uVar13 + (int)((ulonglong)uVar2 >> 0x20)) * 10 &
                     *(int *)&(this->InternalKeyToExternalKey).field_0x48 - 1U;
            *(uint *)(pbVar19 + 0x44) = uVar13;
            puVar22 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x40;
            puVar9 = &(this->InternalKeyToExternalKey).field_0x38;
            if (puVar22 != (undefined1 *)0x0) {
              puVar9 = puVar22;
            }
            uVar12 = (longlong)*(int *)&(this->InternalKeyToExternalKey).field_0x48 - 1U &
                     (longlong)(int)uVar13;
            *(undefined4 *)(pbVar19 + 0x40) = *(undefined4 *)(puVar9 + uVar12 * 4);
            *(int *)(puVar9 + uVar12 * 4) = iVar15;
            local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
            uVar12 = (ulonglong)(uint)local_138.CurrentBitIndex;
          } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
        }
      }
    }
  }
  uVar13 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if (uVar13 <= (uint)(*(int *)&(this->ExternalKeys).field_0x8 -
                      *(int *)&(this->ExternalKeys).field_0x34)) goto LAB_14a2dc0e8;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,uVar13);
  uStack_174 = 1;
  uVar14 = uStack_174;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((*(int *)puVar1 != 0) && ((int)uVar14 <= *(int *)puVar1)) goto LAB_14a2dc0e8;
  *(uint *)puVar1 = uVar14;
  puVar22 = &(this->ExternalKeys).field_0x38;
  if (*(longlong *)&(this->ExternalKeys).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ExternalKeys).field_0x40,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)&(this->ExternalKeys).field_0x40 != 0) {
        uVar13 = 0;
        goto LAB_14a2dbf35;
      }
    }
    else {
LAB_14a2dbf35:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->ExternalKeys).field_0x40,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar21 = (ulonglong)uVar14;
      uVar12 = uVar18;
      do {
        puVar9 = *(undefined1 **)&(this->ExternalKeys).field_0x40;
        puVar10 = puVar22;
        if (puVar9 != (undefined1 *)0x0) {
          puVar10 = puVar9;
        }
        uVar7 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(puVar10 + uVar7 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (*(int *)puVar1 != 0) {
    uVar13 = *(uint *)&(this->ExternalKeys).field_0x28;
    local_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ExternalKeys).field_0x10;
    local_178 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uVar12 = uVar18;
    if (uVar13 != 0) {
      puVar23 = *(uint **)&(this->ExternalKeys).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)local_110.Array;
      }
      uVar14 = *puVar23;
      uVar21 = uVar18;
      while (uVar14 == 0) {
        uStack_160 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)uStack_160;
        iVar15 = (int)uVar12;
        local_178 = iVar15 + 1;
        uVar12 = (ulonglong)local_178;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_178)
        goto LAB_14a2dc02d;
        uVar14 = puVar23[(longlong)iVar15 + 1];
      }
      uStack_174 = -uVar14 & uVar14;
      uVar12 = (ulonglong)uStack_174 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uStack_164 = (uStack_160 - 1) + (int)lVar11;
      uVar12 = (ulonglong)uStack_164;
      if ((int)uVar13 < (int)uStack_164) {
LAB_14a2dc02d:
        uVar12 = (ulonglong)uVar13;
        uStack_164 = uVar13;
      }
    }
    local_110._padding_ = CONCAT44(uStack_174,local_178);
    local_110.CurrentBitIndex = uStack_164;
    local_110.UnvisitedBitMask = 0xffffffff;
    local_110._28_4_ = uStack_15c;
    local_110.BaseBitIndex = uStack_160;
    local_118 = this_00;
    if ((int)uVar12 < (int)uVar13) {
      do {
        pbVar19 = (byte *)((longlong)(int)uVar12 * 0x38 + *(longlong *)&local_118->field_0x0);
        uVar2 = *(undefined8 *)(pbVar19 + 4);
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar13 = (uint)*pbVar19 + (uVar13 + (int)((ulonglong)uVar2 >> 0x20)) * 10 &
                 *(int *)puVar1 - 1U;
        *(uint *)(pbVar19 + 0x34) = uVar13;
        puVar9 = *(undefined1 **)&(this->ExternalKeys).field_0x40;
        puVar10 = puVar22;
        if (puVar9 != (undefined1 *)0x0) {
          puVar10 = puVar9;
        }
        uVar21 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(pbVar19 + 0x30) = *(undefined4 *)(puVar10 + uVar21 * 4);
        *(int *)(puVar10 + uVar21 * 4) = (int)uVar12;
        local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
        uVar12 = (ulonglong)(uint)local_110.CurrentBitIndex;
      } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
    }
  }
LAB_14a2dc0e8:
  puVar1 = &param_1->field_0x10;
  this->Hash = 0;
  uVar5 = 1;
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar20;
  if (uVar13 != 0) {
    puVar23 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar14 = *puVar23;
    uVar12 = uVar18;
    uVar20 = 0;
    uVar17 = 0;
    while (uVar14 == 0) {
      iVar15 = (int)uVar18;
      uVar20 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uVar20;
      uVar17 = iVar15 + 1;
      uVar18 = (ulonglong)uVar17;
      uVar14 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14a2dc16d;
      uVar14 = puVar23[(longlong)iVar15 + 1];
    }
    uVar5 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uVar5 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (uVar20 - 1) + (int)lVar11;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
  }
LAB_14a2dc16d:
  unique0x10000608 = CONCAT44(uVar5,uVar17);
  uVar17 = *(uint *)&param_1->field_0x28;
  bVar8 = (byte)uVar17 & 0x1f;
  uVar5 = uVar17 & 0xffffffe0;
  uStack_d8 = CONCAT44(uVar14,0xffffffff);
  iVar15 = (int)uVar17 >> 5;
  local_d0 = CONCAT44(local_74,uVar20);
  uStack_c8._4_4_ = uStack_19c;
  uStack_c8._0_4_ = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar14 = 1 << bVar8;
  uVar20 = -1 << bVar8;
  local_f0._0_8_ = param_1;
  local_e0 = puVar1;
  if ((((int)uVar17 < 0) || ((int)uVar13 < (int)uVar17)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FRigElementKeyRedirector *)(*pcVar3)();
    return pFVar6;
  }
  uVar13 = *(uint *)&param_1->field_0x28;
  if (uVar17 != uVar13) {
    puVar22 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar17 = uVar20 & *(uint *)(puVar22 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar15;
      uVar5 = uVar5 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14a2dc291;
      uVar20 = 0xffffffff;
      uVar17 = *(uint *)(puVar22 + lVar11 * 4 + 4);
    }
    uVar14 = -uVar17 & uVar17;
    uVar18 = (ulonglong)uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar17 = (uVar5 - 1) + (int)lVar11;
    if ((int)uVar13 < (int)uVar17) {
      uVar17 = uVar13;
    }
  }
LAB_14a2dc291:
  local_c0._padding_ = CONCAT44(uVar14,iVar15);
  local_c0._padding_ = CONCAT44(uVar17,uVar20);
  local_c0._padding_ = CONCAT44(local_54,uVar5);
  local_c0._44_4_ = uStack_19c;
  local_c0.InitialNum = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  local_c0._padding_ = (longlong)param_1;
  local_c0._padding_ = (longlong)puVar1;
  bVar4 = TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_f0,&local_c0);
  if (bVar4) {
    do {
      pFVar16 = (FRigElementKey *)((longlong)uStack_d8._4_4_ * 0x38 + *(longlong *)local_f0._0_8_);
      bVar4 = ::FName::IsWithinBounds((FNameEntryId)(pFVar16->Name).ComparisonIndex.Value);
      if ((((!bVar4) || (pFVar16->Name == (FName)0x0)) || (pFVar16->Type == None)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair.Key.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                             ,0xb4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FRigElementKeyRedirector *)(*pcVar3)();
        return pFVar6;
      }
      Add(this,pFVar16,
          (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
          &pFVar16[1].Name,param_2);
      uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_d8 & ~uStack_e4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_f0 + 8));
      bVar4 = TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_f0,&local_c0);
    } while (bVar4);
  }
  return this;
}

// Add @ 14a2eac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigElementKeyRedirector::Add
          (FRigElementKeyRedirector *this,FRigElementKey *param_1,
          TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_2,
          URigHierarchy *param_3)

{
  int *piVar1;
  int iVar2;
  ForElementType<FRigElementKey> FVar3;
  undefined8 uVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FRigElementKey> FVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_c8 [32];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  FRigElementKey *local_90;
  TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *local_88;
  TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar6 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (((bVar6) && (param_1->Name != (FName)0x0)) && (param_1->Type != None)) {
    piVar1 = &param_2->ArrayNum;
    if (param_2->ArrayNum != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<FRigElementKey>)param_2;
      if (FVar3 != (ForElementType<FRigElementKey>)0x0) {
        FVar9 = FVar3;
      }
      FVar3 = (ForElementType<FRigElementKey>)((longlong)FVar9 + (longlong)param_2->ArrayNum * 0xc);
      for (; FVar9 != FVar3; FVar9 = (ForElementType<FRigElementKey>)((longlong)FVar9 + 0xc)) {
        if ((*(FName *)((longlong)FVar9 + 4) == param_1->Name) &&
           (*(ERigElementType *)FVar9 == param_1->Type)) {
          return;
        }
      }
      Convert(&local_80,param_2,param_3,true,true);
      if (local_80.ArrayNum != 0) {
        local_88 = &local_80;
        local_90 = param_1;
        TSet<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FRigElementKey_const_&,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>_>
                  ((TSet<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<FRigElementKey_const_&,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
                            *)local_94,(bool *)(local_94 + 4));
      }
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<FCachedRigElement>)0x0) {
        FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
      }
      local_90 = param_1;
      local_88 = (TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                  *)param_2;
      TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>_>
                ((TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                  *)&this->ExternalKeys,
                 (TPairInitializer<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
                  *)local_94,(bool *)(local_94 + 4));
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      uVar10 = 0;
      iVar2 = *piVar1;
      if (FVar3 != (ForElementType<FRigElementKey>)0x0) {
        param_2 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
                  )FVar3;
      }
      FVar3 = (ForElementType<FRigElementKey>)((longlong)param_2 + (longlong)iVar2 * 0xc);
      while( true ) {
        if (*piVar1 != iVar2) {
          `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_98);
        }
        if ((ForElementType<FRigElementKey>)param_2 == FVar3) break;
        uVar4 = *(undefined8 *)((longlong)param_2 + 4);
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar10 = uVar10 ^ *(byte *)param_2 + 0x9e3779b9 +
                          uVar10 * 0x40 + (uVar7 + (int)((ulonglong)uVar4 >> 0x20)) * 10 +
                          (uVar10 >> 2);
        param_2 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
                  )((longlong)param_2 + 0xc);
      }
      FVar5 = param_1->Name;
      uVar7 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
      uVar8 = ((uint)param_1->Type + (uVar7 + FVar5.Number) * 10) - uVar10 ^ uVar10 >> 0xd;
      uVar7 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
      uVar11 = (uVar10 - uVar8) - uVar7 ^ uVar7 >> 0xd;
      uVar8 = (uVar8 - uVar11) - uVar7 ^ uVar11 >> 0xc;
      uVar10 = (uVar7 - uVar8) - uVar11 ^ uVar8 << 0x10;
      uVar11 = (uVar11 - uVar10) - uVar8 ^ uVar10 >> 5;
      uVar7 = (uVar8 - uVar11) - uVar10 ^ uVar11 >> 3;
      uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 << 10;
      uVar7 = (uVar11 - uVar10) - uVar7 ^ uVar10 >> 0xf;
      uVar10 = this->Hash - uVar7 ^ uVar7 >> 0xd;
      uVar8 = (-0x61c88647 - uVar10) - uVar7 ^ uVar10 << 8;
      uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar8 >> 0xd;
      uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 0xc;
      uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 << 0x10;
      uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar8 >> 5;
      uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 3;
      uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 << 10;
      this->Hash = (uVar7 - uVar8) - uVar10 ^ uVar8 >> 0xf;
    }
  }
  return;
}

// Convert @ 14a2f71b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __cdecl
FRigElementKeyRedirector::Convert
          (TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,
          TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          URigHierarchy *param_2,bool param_3,bool param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  ForElementType<FRigElementKey> FVar4;
  ForElementType<FCachedRigElement> FVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FCachedRigElement> FVar8;
  uint uVar9;
  FCachedRigElement *this;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<FCachedRigElement>)0x0
  ;
  piVar2 = &param_1->ArrayNum;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 1;
  uVar9 = *piVar2;
  if (-1 < (int)uVar9) {
    if (1 < (int)uVar9) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FCachedRigElement>_>
                (0x20,8,uVar9,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
      uVar9 = *piVar2;
    }
    FVar4 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar4 != (ForElementType<FRigElementKey>)0x0) {
      param_1 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                FVar4;
    }
    FVar4 = (ForElementType<FRigElementKey>)((longlong)param_1 + (longlong)(int)uVar9 * 0xc);
    while( true ) {
      if (*piVar2 != uVar9) {
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((ForElementType<FRigElementKey>)param_1 == FVar4) break;
      if ((!param_4) ||
         (((bVar6 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)((longlong)param_1 + 4)), bVar6
           && (*(longlong *)((longlong)param_1 + 4) != 0)) && (*(char *)param_1 != '\0')))) {
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FCachedRigElement>_>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        FVar5 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar8 = (ForElementType<FCachedRigElement>)__return_storage_ptr__;
        if (FVar5 != (ForElementType<FCachedRigElement>)0x0) {
          FVar8 = FVar5;
        }
        this = (FCachedRigElement *)((longlong)iVar7 * 0x20 + (longlong)FVar8);
        (this->Key).Type = None;
        (this->Key).Name.ComparisonIndex = 0;
        (this->Key).Name.Number = 0;
        this->Index = 0xffff;
        this->ContainerVersion = -1;
        this->Element = (FRigBaseElement *)0x0;
        FCachedRigElement::UpdateCache(this,(FRigElementKey *)param_1,param_2);
        if (param_3) {
          uVar3 = *(undefined8 *)param_1;
          (this->Key).Type = (char)uVar3;
          *(int3 *)&(this->Key).field_0x1 = (int3)((ulonglong)uVar3 >> 8);
          (this->Key).Name.ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar3 >> 0x20);
          (this->Key).Name.Number = *(uint *)((longlong)param_1 + 8);
        }
      }
      param_1 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                ((longlong)param_1 + 0xc);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
}

// Convert @ 14a2f7340

TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __cdecl
FRigElementKeyRedirector::Convert
          (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,
          TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  ForElementType<FCachedRigElement> FVar2;
  ForElementType<FRigElementKey> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  ForElementType<FRigElementKey> FVar9;
  uint uVar10;
  ForElementType<FCachedRigElement> FVar11;
  ForElementType<FRigElementKey> FVar12;
  longlong lVar13;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<FRigElementKey>)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 1;
  __return_storage_ptr__->ArrayNum = 0;
  uVar10 = param_1->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (1 < (int)uVar10) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
              (0xc,4,uVar10,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar7 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar7) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar4)();
        return pTVar8;
      }
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<FCachedRigElement>)param_1;
      if (FVar2 != (ForElementType<FCachedRigElement>)0x0) {
        FVar11 = FVar2;
      }
      FVar12 = (ForElementType<FRigElementKey>)((longlong)FVar11 + lVar13);
      FVar9 = (ForElementType<FRigElementKey>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<FRigElementKey>)0x0) {
        FVar9 = FVar3;
      }
      if ((ulonglong)FVar9 <= (ulonglong)FVar12) {
        FVar9 = (ForElementType<FRigElementKey>)__return_storage_ptr__;
        if (FVar3 != (ForElementType<FRigElementKey>)0x0) {
          FVar9 = FVar3;
        }
        if (((ulonglong)FVar12 < (ulonglong)((longlong)FVar9 + (longlong)*piVar1 * 0xc)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
                          (0x40c,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<FRigElementKey>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<FRigElementKey>)0x0) {
        FVar9 = FVar3;
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0x20;
      *(undefined8 *)((longlong)FVar9 + (longlong)iVar7 * 0xc) = *(undefined8 *)FVar12;
      *(undefined4 *)((uchar *)((longlong)FVar9 + 8) + (longlong)iVar7 * 0xc) =
           *(undefined4 *)((longlong)FVar12 + 8);
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar10 < iVar7);
  }
  return __return_storage_ptr__;
}

// Convert @ 14a2f7520

TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __cdecl
FRigElementKeyRedirector::Convert
          (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ForElementType<FRigElementKey> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForElementType<FRigElementKey> FVar7;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<FRigElementKey>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 1;
  if (__return_storage_ptr__ ==
      (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
                      (0xc,4,iVar1,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FRigElementKey>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<FRigElementKey>)0x0) {
      FVar7 = FVar2;
    }
    memcpy((void *)((longlong)FVar7 + (longlong)iVar5 * 0xc),(param_1->AllocatorInstance).Data,
           (longlong)iVar1 * 0xc);
  }
  return __return_storage_ptr__;
}

// FindReverse @ 14a3064b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FRigElementKeyRedirector::FindReverse(FRigElementKeyRedirector *this,FRigElementKey *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FRigElementKey *pFVar8;
  longlong lVar9;
  FName *pFVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  FName *pFVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->InternalKeyToExternalKey).field_0x28;
  puVar1 = &(this->InternalKeyToExternalKey).field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->InternalKeyToExternalKey).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a30655d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = iVar14 + -1 + (int)lVar9;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14a30655d:
  uVar11 = *(uint *)&(this->InternalKeyToExternalKey).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->InternalKeyToExternalKey).field_0x8 -
                       *(int *)&(this->InternalKeyToExternalKey).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FRigElementKey *)(*pcVar4)();
    return pFVar8;
  }
  uVar6 = *(uint *)&(this->InternalKeyToExternalKey).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->InternalKeyToExternalKey).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a306660;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14a306660:
  while( true ) {
    if (*(int *)&(this->InternalKeyToExternalKey).field_0x8 -
        *(int *)&(this->InternalKeyToExternalKey).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar6 = *(uint *)(*(longlong *)&this->InternalKeyToExternalKey + 0x38 +
                     (longlong)TStack_60.CurrentBitIndex * 0x48);
    pFVar8 = (FRigElementKey *)
             (*(longlong *)&this->InternalKeyToExternalKey +
             (longlong)TStack_60.CurrentBitIndex * 0x48);
    pFVar10 = &pFVar8[1].Name;
    if (*(FName **)(pFVar8 + 4) != (FName *)0x0) {
      pFVar10 = *(FName **)(pFVar8 + 4);
    }
    pFVar17 = pFVar10 + (longlong)(int)uVar6 * 4;
    while( true ) {
      if (pFVar8[4].Name.Number != uVar6) {
        `TCheckedPointerIterator<FCachedRigElement_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar10 == pFVar17) break;
      if ((*(FName *)&pFVar10->Number == param_1->Name) &&
         ((ERigElementType)(pFVar10->ComparisonIndex).Value == param_1->Type)) {
        return pFVar8;
      }
      pFVar10 = pFVar10 + 4;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (FRigElementKey *)0x0;
}

