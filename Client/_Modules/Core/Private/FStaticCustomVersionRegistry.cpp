// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Find @ 1419f88a0

TOptional<FCustomVersion> * __thiscall
FStaticCustomVersionRegistry::Find
          (FStaticCustomVersionRegistry *this,TOptional<FCustomVersion> *__return_storage_ptr__,
          FGuid *param_1)

{
  FName FVar1;
  int iVar2;
  _func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
  *p_Var3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FCustomVersion *pFVar9;
  FPendingRegistration *pFVar10;
  FName *pFVar11;
  FName local_res8;
  FGuid local_48 [4];
  
  local_48[0].A = param_1->A;
  local_48[0].B = param_1->B;
  local_48[0].C = param_1->C;
  local_48[0].D = param_1->D;
  pFVar9 = FCustomVersionContainer::GetVersion(&this->Registered,local_48);
  if (pFVar9 == (FCustomVersion *)0x0) {
    pFVar10 = TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
              ::Find((TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
                      *)&this->Queue,param_1);
    if (pFVar10 == (FPendingRegistration *)0x0) {
      __return_storage_ptr__->bIsSet = false;
    }
    else {
      p_Var3 = pFVar10->ValidatorFunc;
      pFVar11 = ::FName::FName(&local_res8,pFVar10->FriendlyName);
      uVar4 = param_1->B;
      uVar5 = param_1->C;
      uVar6 = param_1->D;
      iVar2 = pFVar10->Version;
      FVar1 = *pFVar11;
      (__return_storage_ptr__->TypedValue).Key.A = param_1->A;
      (__return_storage_ptr__->TypedValue).Key.B = uVar4;
      (__return_storage_ptr__->TypedValue).Key.C = uVar5;
      (__return_storage_ptr__->TypedValue).Key.D = uVar6;
      (__return_storage_ptr__->TypedValue).Version = iVar2;
      (__return_storage_ptr__->TypedValue).ReferenceCount = 1;
      (__return_storage_ptr__->TypedValue).Validator = p_Var3;
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->TypedValue).FriendlyName = FVar1;
    }
  }
  else {
    uVar4 = (pFVar9->Key).A;
    uVar5 = (pFVar9->Key).B;
    uVar6 = (pFVar9->Key).C;
    uVar7 = (pFVar9->Key).D;
    __return_storage_ptr__->bIsSet = true;
    iVar2 = pFVar9->Version;
    iVar8 = pFVar9->ReferenceCount;
    p_Var3 = pFVar9->Validator;
    (__return_storage_ptr__->TypedValue).Key.A = uVar4;
    (__return_storage_ptr__->TypedValue).Key.B = uVar5;
    (__return_storage_ptr__->TypedValue).Key.C = uVar6;
    (__return_storage_ptr__->TypedValue).Key.D = uVar7;
    FVar1 = pFVar9->FriendlyName;
    (__return_storage_ptr__->TypedValue).Version = iVar2;
    (__return_storage_ptr__->TypedValue).ReferenceCount = iVar8;
    (__return_storage_ptr__->TypedValue).Validator = p_Var3;
    (__return_storage_ptr__->TypedValue).FriendlyName = FVar1;
  }
  return __return_storage_ptr__;
}

// Get @ 1419fc200

FStaticCustomVersionRegistry * __cdecl FStaticCustomVersionRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FStaticCustomVersionRegistry&___ptr64___cdecl_FStaticCustomVersionRegistry::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FStaticCustomVersionRegistry&___ptr64___cdecl_FStaticCustomVersionRegistry::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FStaticCustomVersionRegistry&___ptr64___cdecl_FStaticCustomVersionRegistry::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FStaticCustomVersionRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__)
      ;
      _Init_thread_footer(&`public:_static_struct_FStaticCustomVersionRegistry&___ptr64___cdecl_FStaticCustomVersionRegistry::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_struct_FStaticCustomVersionRegistry&___ptr64___cdecl_FStaticCustomVersionRegistry::Get(void)'
          ::__l2::Singleton;
}

// RegisterQueue @ 141a14a80

void __thiscall FStaticCustomVersionRegistry::RegisterQueue(FStaticCustomVersionRegistry *this)

{
  TMap<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
  *this_00;
  int *piVar1;
  undefined1 *puVar2;
  FGuid *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FName FVar12;
  longlong lVar13;
  int iVar14;
  TMap<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
  *pTVar15;
  FGuid *pFVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FGuid *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  FName local_110;
  TMap<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
  *local_d0;
  TConstSetBitIterator<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> TStack_c8;
  undefined8 uStack_a8;
  FGuid **local_a0;
  uint *local_98;
  FName local_88;
  TOptional<FCustomVersion> local_80;
  
  iStack_e0 = *(int *)&(this->Queue).field_0xc08 - *(int *)&(this->Queue).field_0xc2c;
  if (iStack_e0 != 0) {
    iStack_100 = 0;
    local_e8 = 0;
    uStack_fc = 1;
    puVar2 = &(this->Queue).field_0xc10;
    iVar10 = *(int *)&(this->Queue).field_0xc20;
    this_00 = &this->Queue;
    iStack_ec = 0;
    if (iVar10 != 0) {
      puVar20 = *(uint **)&(this->Queue).field_0xc18;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar2;
      }
      uVar18 = *puVar20;
      while (uVar18 == 0) {
        lVar13 = (longlong)iStack_100;
        local_e8 = local_e8 + 0x20;
        iStack_100 = iStack_100 + 1;
        iStack_ec = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100)
        goto LAB_141a14b50;
        uVar18 = puVar20[lVar13 + 1];
      }
      uStack_fc = -uVar18 & uVar18;
      uVar4 = (ulonglong)uStack_fc * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iStack_ec = local_e8 + -1 + local_res18;
      if (iVar10 < iStack_ec) {
        iStack_ec = iVar10;
      }
    }
LAB_141a14b50:
    uVar18 = *(uint *)&(this->Queue).field_0xc20;
    uVar17 = uVar18 & 0xffffffe0;
    uStack_f0 = 0xffffffff;
    TStack_c8._padding_ = CONCAT44(uStack_fc,iStack_100);
    TStack_c8.CurrentBitIndex = iStack_ec;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    TStack_c8._28_4_ = iStack_ec;
    TStack_c8.BaseBitIndex = local_e8;
    uStack_a8 = CONCAT44(uStack_dc,iStack_e0);
    iVar14 = (int)uVar18 >> 5;
    local_108 = this_00;
    local_f8 = puVar2;
    iStack_e4 = iStack_ec;
    local_d0 = this_00;
    TStack_c8.Array = (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)puVar2;
    if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar5 = *(uint *)&(this->Queue).field_0xc20;
    if (uVar18 != uVar5) {
      puVar19 = *(undefined1 **)&(this->Queue).field_0xc18;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar2;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar14;
        uVar17 = uVar17 + 0x20;
        iVar14 = iVar14 + 1;
        uVar18 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_141a14c50;
        uVar18 = *(uint *)(puVar19 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uVar18 = local_res20 + -1 + uVar17;
      if ((int)uVar5 < (int)uVar18) {
        uVar18 = uVar5;
      }
    }
LAB_141a14c50:
    while( true ) {
      pTVar15 = local_d0;
      if (*(int *)(&local_d0->field_0x0 + 0xc08) - *(int *)(&local_d0->field_0x0 + 0xc2c) !=
          (int)uStack_a8) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_c8.CurrentBitIndex == uVar18) &&
          (TStack_c8.Array ==
           (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)puVar2)) &&
         (pTVar15 == this_00)) break;
      if (*(TMap<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
            **)(&pTVar15->field_0x0 + 0xc00) !=
          (TMap<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
           *)0x0) {
        pTVar15 = *(TMap<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
                    **)(&pTVar15->field_0x0 + 0xc00);
      }
      puVar20 = (uint *)(&pTVar15->field_0x0 + (longlong)TStack_c8.CurrentBitIndex * 0x30);
      pFVar16 = (FGuid *)(this->Registered).Versions.AllocatorInstance.Data;
      pFVar3 = (FGuid *)((longlong)pFVar16 + (longlong)(this->Registered).Versions.ArrayNum * 0x28);
      if (pFVar16 != pFVar3) {
        do {
          if (((puVar20[1] == pFVar16->B &&
               (uint)((ulonglong)*(undefined8 *)(puVar20 + 2) >> 0x20) == pFVar16->D) &&
              (uint)*(undefined8 *)(puVar20 + 2) == pFVar16->C) && *puVar20 == pFVar16->A) {
            local_138 = pFVar16;
            if (pFVar16 == (FGuid *)0x0) goto LAB_141a14d1f;
            if (pFVar16[1].A == puVar20[4]) {
              lVar13._0_4_ = pFVar16[2].A;
              lVar13._4_4_ = pFVar16[2].B;
              if ((lVar13 == 0) &&
                 (FCurrentCustomVersions::Get(&local_80,pFVar16), local_80.bIsSet != false)) {
                FVar12 = FCustomVersion::GetFriendlyName(&local_80.TypedValue);
                uVar6 = *(undefined8 *)FVar12;
                pFVar16[2].A = (int)uVar6;
                pFVar16[2].B = (int)((ulonglong)uVar6 >> 0x20);
              }
              FVar12.ComparisonIndex.Value = pFVar16[2].A;
              FVar12.Number = pFVar16[2].B;
              bVar9 = ::FName::Equals(FVar12,*(wchar_t **)(puVar20 + 6));
              if (!bVar9) goto LAB_141a14e7d;
            }
            else {
LAB_141a14e7d:
              local_a0 = &local_138;
              local_98 = puVar20;
              `FStaticCustomVersionRegistry::RegisterQueue'::__l12::<lambda_1>::operator()
                        (&local_a0);
            }
            local_138[1].B = local_138[1].B + 1;
            goto LAB_141a14e0d;
          }
          pFVar16 = (FGuid *)&pFVar16[2].C;
        } while (pFVar16 != pFVar3);
      }
      local_138 = (FGuid *)0x0;
LAB_141a14d1f:
      uVar6 = *(undefined8 *)(puVar20 + 8);
      pFVar11 = ::FName::FName(&local_88,*(wchar_t **)(puVar20 + 6));
      local_130 = *(undefined8 *)puVar20;
      uStack_128 = *(undefined8 *)(puVar20 + 2);
      pFVar7 = (this->Registered).Versions.AllocatorInstance.Data;
      local_110 = *pFVar11;
      local_120 = puVar20[4];
      uStack_11c = 1;
      uStack_118 = uVar6;
      if (((pFVar7 <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 <
           pFVar7 + (longlong)(this->Registered).Versions.ArrayMax * 0x28)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = (this->Registered).Versions.ArrayNum;
      piVar1 = &(this->Registered).Versions.ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,(ForAnyElementType *)&this->Registered,piVar1);
      }
      lVar13 = (longlong)iVar10;
      (this->Registered).Versions.ArrayNum = iVar10 + 1;
      pFVar7 = (this->Registered).Versions.AllocatorInstance.Data;
      *(undefined8 *)(pFVar7 + lVar13 * 0x28) = local_130;
      *(undefined8 *)(pFVar7 + lVar13 * 0x28 + 8) = uStack_128;
      *(ulonglong *)(pFVar7 + lVar13 * 0x28 + 0x10) = CONCAT44(uStack_11c,local_120);
      *(undefined8 *)(pFVar7 + lVar13 * 0x28 + 0x10 + 8) = uStack_118;
      *(FName *)(pFVar7 + lVar13 * 0x28 + 0x20) = local_110;
LAB_141a14e0d:
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
      FindFirstSetBit(&TStack_c8);
    }
    bVar9 = 0x20 < *(int *)&(this->Queue).field_0xcb8;
    if (!bVar9) {
      TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::UnhashElements((TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                        *)this_00);
    }
    puVar2 = &(this->Queue).field_0xc0c;
    *(undefined4 *)&(this->Queue).field_0xc08 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>_>
                (0x30,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>
                           *)this_00,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->Queue).field_0xc2c = 0;
    *(undefined4 *)&(this->Queue).field_0xc28 = 0xffffffff;
    iVar10 = *(int *)&(this->Queue).field_0xc24;
    *(undefined4 *)&(this->Queue).field_0xc20 = 0;
    if ((iVar10 < 0) || (0x40 < iVar10)) {
      *(undefined4 *)&(this->Queue).field_0xc24 = 0x40;
      TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Realloc
                ((TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                 &(this->Queue).field_0xc10,0);
    }
    if (bVar9) {
      *(undefined4 *)&(this->Queue).field_0xcb8 = 0x20;
      TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Rehash((TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)this_00);
    }
  }
  return;
}

// Unregister @ 141a2bbc0

void __thiscall
FStaticCustomVersionRegistry::Unregister(FStaticCustomVersionRegistry *this,FGuid *param_1)

{
  FCustomVersionContainer *pFVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong64 uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  
  if (*(int *)&(this->Queue).field_0xc08 != *(int *)&(this->Queue).field_0xc2c) {
    uVar11 = CityHash64((char *)param_1,0x10);
    iVar9 = TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                                 *)&this->Queue,(uint)uVar11,param_1);
    if (iVar9 != 0) {
      return;
    }
  }
  pFVar1 = &this->Registered;
  pFVar6 = (this->Registered).Versions.AllocatorInstance.Data;
  if (pFVar6 != pFVar6 + (longlong)(this->Registered).Versions.ArrayNum * 0x28) {
    uVar3 = param_1->C;
    uVar4 = param_1->D;
    pFVar12 = pFVar6;
    do {
      if (((uVar4 == *(int *)(pFVar12 + 0xc) && param_1->B == *(uint *)(pFVar12 + 4)) &&
          uVar3 == *(int *)(pFVar12 + 8)) && param_1->A == *(uint *)pFVar12) {
        uVar13 = (uint)(((longlong)pFVar12 - (longlong)pFVar6) / 0x28);
        if (uVar13 != 0xffffffff) goto LAB_141a2bcde;
        goto LAB_141a2bc84;
      }
      pFVar12 = pFVar12 + 0x28;
    } while (pFVar12 != pFVar6 + (longlong)(this->Registered).Versions.ArrayNum * 0x28);
  }
  uVar13 = 0xffffffff;
LAB_141a2bc84:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("KeyIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CustomVersion.cpp"
                     ,0xa5,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_141a2bcde:
  uVar14 = ~uVar13 >> 0x1f;
  uVar10 = 0;
  if ((int)uVar13 < (this->Registered).Versions.ArrayNum) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (pFVar1->Versions).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x28 + 0x14;
  *(int *)pFVar6 = *(int *)pFVar6 + -1;
  if (*(int *)pFVar6 == 0) {
    uVar10 = 0;
    if ((int)uVar13 < (this->Registered).Versions.ArrayNum) {
      uVar10 = uVar14;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar5 = (this->Registered).Versions.ArrayNum;
    pFVar6 = (pFVar1->Versions).AllocatorInstance.Data;
    iVar9 = iVar5 + ~uVar13;
    if (1 < iVar9) {
      iVar9 = 1;
    }
    if (iVar9 != 0) {
      memmove(pFVar6 + (longlong)(int)uVar13 * 0x28,pFVar6 + (longlong)(iVar5 - iVar9) * 0x28,
              (longlong)iVar9 * 0x28);
    }
    piVar2 = &(this->Registered).Versions.ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(ForAnyElementType *)pFVar1,(this->Registered).Versions.ArrayNum,
               &(this->Registered).Versions.ArrayMax);
  }
  return;
}

// operator() @ 15047fde0

bool __thiscall
`FStaticCustomVersionRegistry::RegisterQueue'::__l12::<lambda_1>::operator()(void *this)

{
  FGuid *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName FVar7;
  bool bVar8;
  FName local_res10 [3];
  FString local_58;
  TOptional<FCustomVersion> local_48;
  
  bVar8 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65518424725389456>);
  if (bVar5) {
    pFVar1 = (FGuid *)**(undefined8 **)this;
    lVar2._0_4_ = pFVar1[2].A;
    lVar2._4_4_ = pFVar1[2].B;
    if ((lVar2 == 0) && (FCurrentCustomVersions::Get(&local_48,pFVar1), local_48.bIsSet != false)) {
      FVar7 = FCustomVersion::GetFriendlyName(&local_48.TypedValue);
      uVar3 = *(undefined8 *)FVar7;
      pFVar1[2].A = (int)uVar3;
      pFVar1[2].B = (int)((ulonglong)uVar3 >> 0x20);
    }
    local_res10[0].ComparisonIndex.Value = pFVar1[2].A;
    local_res10[0].Number = pFVar1[2].B;
    ::FName::ToString(local_res10,&local_58);
    bVar8 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65518424725389456>,
                       &`public:___cdecl_`public:_void___cdecl_FStaticCustomVersionRegistry::RegisterQueue(void)___ptr64'::`12'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15047fed8;
    }
  }
  bVar5 = false;
LAB_15047fed8:
  if ((bVar8) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

