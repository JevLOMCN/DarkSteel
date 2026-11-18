// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// ~FDS_EquipmentItemCharacterData @ 14ba928c0

void __thiscall
FDS_EquipmentItemCharacterData::~FDS_EquipmentItemCharacterData
          (FDS_EquipmentItemCharacterData *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  *(undefined4 *)&(this->EquippedItemTIDMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EquippedItemTIDMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EquippedItemTIDMap);
  *(undefined4 *)&(this->EquippedItemUIDMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EquippedItemUIDMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EquippedItemUIDMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedEquipAllDelegate).field_0x8,
             *(int *)&(this->OnChangedEquipAllDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedEquipAllDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedEquipAllDelegate);
  (this->OnChangedEquipDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_EquipSlotType____CB_J__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate(this_00,(FDS_IDelegateCleanable *)this);
  }
  TSet<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnChangedEquipDelegate).Subscriptions);
  *(undefined4 *)&(this->OnChangedEquipDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnChangedEquipDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnChangedEquipDelegate).Subscriptions);
  return;
}

// EquipItem @ 14ba9e630

void __thiscall
FDS_EquipmentItemCharacterData::EquipItem
          (FDS_EquipmentItemCharacterData *this,EDS_EquipSlotType *param_1,long64 param_2)

{
  long64 local_res18 [2];
  EDS_EquipSlotType *local_18;
  long64 *local_10;
  
  local_10 = local_res18;
  local_res18[0] = param_2;
  local_18 = param_1;
  TSet<TTuple<enum_EDS_EquipSlotType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_EquipSlotType_const_&,__int64_&>_>
            (&this->EquippedItemUIDMap,
             (TPairInitializer<EDS_EquipSlotType_const_&,__int64_&> *)&stack0x00000008,
             (bool *)&local_18);
  FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::Broadcast
            (this,param_1,local_res18[0]);
  TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnChangedEquipAllDelegate,*param_1,local_res18[0]);
  return;
}

// GetAllEquippedItemTIDList @ 14baa3bf0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FDS_EquipmentItemCharacterData::GetAllEquippedItemTIDList
          (FDS_EquipmentItemCharacterData *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *pTVar7;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *pTVar8;
  TMap<EDS_EquipSlotType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,int,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  UDS_ItemDataSet *this_00;
  UObject *pUVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_ec;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr local_e0;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *local_d8;
  undefined8 uStack_d0;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<EDS_EquipSlotType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,int,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar16 = 0;
  iVar17 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar19 = 0;
  if (*(int *)&(this->EquippedItemUIDMap).field_0x8 - *(int *)&(this->EquippedItemUIDMap).field_0x34
      < 1) {
    puVar3 = &(this->EquippedItemTIDMap).field_0x10;
    uVar11 = 1;
    iVar4 = *(int *)&(this->EquippedItemTIDMap).field_0x28;
    local_d8 = (TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
                *)&this->EquippedItemTIDMap;
    iVar12 = iVar19;
    if (iVar4 != 0) {
      puVar21 = *(uint **)&(this->EquippedItemTIDMap).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar3;
      }
      uVar18 = *puVar21;
      iVar19 = iVar16;
      iVar17 = iVar16;
      while (uVar18 == 0) {
        lVar15 = (longlong)iVar17;
        iVar19 = iVar19 + 0x20;
        iVar17 = iVar17 + 1;
        iVar12 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14baa3f3d;
        uVar18 = puVar21[lVar15 + 1];
      }
      uVar11 = -uVar18 & uVar18;
      uVar2 = (ulonglong)uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_res20 = (int)lVar15;
      iVar12 = iVar19 + -1 + local_res20;
      if (iVar4 < iVar12) {
        iVar12 = iVar4;
      }
    }
LAB_14baa3f3d:
    uVar18 = *(uint *)&(this->EquippedItemTIDMap).field_0x28;
    uVar22 = uVar18 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uVar11,iVar17);
    TStack_90.CurrentBitIndex = iVar12;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar18 >> 5;
    TStack_90._28_4_ = iVar12;
    TStack_90.BaseBitIndex = iVar19;
    uStack_70 = CONCAT44(uStack_ec,
                         *(int *)&(this->EquippedItemTIDMap).field_0x8 -
                         *(int *)&(this->EquippedItemTIDMap).field_0x34);
    local_98 = (TMap<EDS_EquipSlotType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,int,0>_>
                *)local_d8;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar13;
    }
    pTVar7 = local_d8;
    uVar11 = *(uint *)&(this->EquippedItemTIDMap).field_0x28;
    if (uVar18 != uVar11) {
      puVar20 = *(undefined1 **)&(this->EquippedItemTIDMap).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar3;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
      while (uVar18 == 0) {
        lVar15 = (longlong)iVar17;
        uVar22 = uVar22 + 0x20;
        iVar17 = iVar17 + 1;
        uVar18 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14baa4050;
        uVar18 = *(uint *)(puVar20 + lVar15 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar18 = (int)lVar15 + -1 + uVar22;
      if ((int)uVar11 < (int)uVar18) {
        uVar18 = uVar11;
      }
    }
LAB_14baa4050:
    while( true ) {
      pTVar9 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        `TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_90.CurrentBitIndex == uVar18) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (pTVar9 == (TMap<EDS_EquipSlotType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,int,0>_>
                     *)pTVar7)) break;
      local_res8 = *(undefined8 *)(*(longlong *)pTVar9 + (longlong)TStack_90.CurrentBitIndex * 0x10)
      ;
      iVar19 = __return_storage_ptr__->ArrayNum;
      if (iVar19 == __return_storage_ptr__->ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar19 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar19 * 4) =
           local_res8._4_4_;
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  else {
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_e8);
    bVar10 = FWeakObjectPtr::IsValid(&local_e8);
    if (bVar10) {
      puVar3 = &(this->EquippedItemUIDMap).field_0x10;
      uVar11 = 1;
      iVar4 = *(int *)&(this->EquippedItemUIDMap).field_0x28;
      local_d8 = &this->EquippedItemUIDMap;
      iVar12 = iVar17;
      if (iVar4 != 0) {
        puVar21 = *(uint **)&(this->EquippedItemUIDMap).field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)puVar3;
        }
        uVar18 = *puVar21;
        iVar19 = iVar16;
        iVar17 = iVar16;
        while (uVar18 == 0) {
          lVar15 = (longlong)iVar17;
          iVar19 = iVar19 + 0x20;
          iVar17 = iVar17 + 1;
          iVar12 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14baa3cde;
          uVar18 = puVar21[lVar15 + 1];
        }
        uVar11 = -uVar18 & uVar18;
        uVar2 = (ulonglong)uVar11 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res18 = (int)lVar15;
        iVar12 = iVar19 + -1 + local_res18;
        if (iVar4 < iVar12) {
          iVar12 = iVar4;
        }
      }
LAB_14baa3cde:
      uVar18 = *(uint *)&(this->EquippedItemUIDMap).field_0x28;
      TStack_c0._padding_ = CONCAT44(uVar11,iVar17);
      uVar11 = uVar18 & 0xffffffe0;
      TStack_c0.CurrentBitIndex = iVar12;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar18 >> 5;
      TStack_c0._28_4_ = local_4c;
      TStack_c0.BaseBitIndex = iVar19;
      uStack_a0 = CONCAT44(uStack_ec,
                           *(int *)&(this->EquippedItemUIDMap).field_0x8 -
                           *(int *)&(this->EquippedItemUIDMap).field_0x34);
      local_c8 = local_d8;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
      if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar13;
      }
      pTVar7 = local_d8;
      uVar22 = *(uint *)&(this->EquippedItemUIDMap).field_0x28;
      if (uVar18 != uVar22) {
        puVar20 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x20;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = puVar3;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
        while (uVar18 == 0) {
          lVar15 = (longlong)iVar17;
          uVar11 = uVar11 + 0x20;
          iVar17 = iVar17 + 1;
          uVar18 = uVar22;
          if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14baa3df0;
          uVar18 = *(uint *)(puVar20 + lVar15 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar18 = (int)lVar15 + -1 + uVar11;
        if ((int)uVar22 < (int)uVar18) {
          uVar18 = uVar22;
        }
      }
LAB_14baa3df0:
      while( true ) {
        pTVar8 = local_c8;
        if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
          `TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
        }
        if (((TStack_c0.CurrentBitIndex == uVar18) &&
            (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
           (pTVar8 == pTVar7)) break;
        puVar1 = (undefined8 *)(*(longlong *)pTVar8 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
        local_d8 = (TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
                    *)*puVar1;
        uStack_d0 = puVar1[1];
        this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_e8);
        UDS_ItemDataSet::GetItemDataByUID(this_00,(ulong64)&local_e0);
        bVar10 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_e0,(void *)0x0);
        if (!bVar10) {
          pUVar14 = FWeakObjectPtr::Get(&local_e0);
          uVar5 = *(undefined4 *)&pUVar14[8].field_0x10;
          iVar19 = __return_storage_ptr__->ArrayNum;
          if (iVar19 == __return_storage_ptr__->ArrayMax) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar19 + 1;
          *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar19 * 4) =
               uVar5;
        }
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetAllEquippedItemUIDList @ 14baa40f0

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
FDS_EquipmentItemCharacterData::GetAllEquippedItemUIDList
          (FDS_EquipmentItemCharacterData *this,
          TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *local_res18;
  undefined8 uStack_90;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->EquippedItemUIDMap).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->EquippedItemUIDMap;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar11 = *(int *)&(this->EquippedItemUIDMap).field_0x28;
  uVar9 = 1;
  iVar15 = 0;
  iVar17 = 0;
  iVar10 = iVar15;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->EquippedItemUIDMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    iVar17 = 0;
    iVar15 = 0;
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14baa41ae;
      uVar14 = puVar18[lVar13 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iVar10 = iVar17 + -1 + local_res10;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_14baa41ae:
  uVar14 = *(uint *)&(this->EquippedItemUIDMap).field_0x28;
  uStack_90 = CONCAT44(uVar9,iVar15);
  uVar9 = uVar14 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  iVar15 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->EquippedItemUIDMap).field_0x8 -
                       *(int *)&(this->EquippedItemUIDMap).field_0x34);
  local_res18 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar11 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar12;
  }
  pTVar7 = local_res18;
  uVar4 = *(uint *)&(this->EquippedItemUIDMap).field_0x28;
  if (uVar14 != uVar4) {
    puVar16 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar9 = uVar9 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14baa42b1;
      uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = (int)lVar13 + -1 + uVar9;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14baa42b1:
  while( true ) {
    if (*(int *)&(this->EquippedItemUIDMap).field_0x8 -
        *(int *)&(this->EquippedItemUIDMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar7))
    break;
    uVar6 = *(undefined8 *)(*(longlong *)pTVar2 + (longlong)TStack_60.CurrentBitIndex * 0x18 + 8);
    iVar11 = __return_storage_ptr__->ArrayNum;
    if (iVar11 == __return_storage_ptr__->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar11 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8) = uVar6
    ;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// GetEquipSlotType @ 14baa9bb0

EDS_EquipSlotType __cdecl
FDS_EquipmentItemCharacterData::GetEquipSlotType(int param_1,EDS_SlotType param_2)

{
  return (uint)param_2 * 1000 + param_1;
}

// GetEquipSlotTypeByItemType @ 14baa9bd0

EDS_EquipSlotType __cdecl
FDS_EquipmentItemCharacterData::GetEquipSlotTypeByItemType(EDS_ItemType *param_1)

{
  EDS_ItemType *pEVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  EDS_EquipSlotType EVar7;
  longlong lVar8;
  longlong lVar9;
  EDS_ItemType *pEVar10;
  uint uVar11;
  int iVar12;
  EDS_EquipSlotType *pEVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  iVar14 = 0;
  uVar5 = 1;
  uVar15 = EquipSlotTypeMap._40_4_;
  uVar6 = 0;
  if (uVar15 != 0) {
    puVar16 = (uint *)&EquipSlotTypeMap.field_0x10;
    if (EquipSlotTypeMap._32_8_ != 0) {
      puVar16 = (uint *)EquipSlotTypeMap._32_8_;
    }
    uVar6 = *puVar16;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar6 = uVar15;
      if ((int)(((int)(uVar15 - 1) >> 0x1f & 0x1fU) + (uVar15 - 1)) >> 5 < iVar12)
      goto LAB_14baa9c7d;
      uVar6 = puVar16[lVar8 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar17 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar6 = local_res18 + -1 + iVar14;
    if ((int)uVar15 < (int)uVar6) {
      uVar6 = uVar15;
    }
  }
LAB_14baa9c7d:
  bVar3 = EquipSlotTypeMap._40_1_;
  uVar11 = uVar15 & 0xffffffe0;
  uVar17 = EquipSlotTypeMap._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar12);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,EquipSlotTypeMap._8_4_ - EquipSlotTypeMap._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&EquipSlotTypeMap.field_0x10;
  if (((int)uVar15 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    EVar7 = (*pcVar2)();
    return EVar7;
  }
  uVar6 = EquipSlotTypeMap._40_4_;
  if (uVar15 != uVar6) {
    uVar17 = EquipSlotTypeMap._40_8_ & 0xffffffff;
    lVar8 = 0x154cf7450;
    if (EquipSlotTypeMap._32_8_ != 0) {
      lVar8 = EquipSlotTypeMap._32_8_;
    }
    uVar5 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar12 * 4);
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar12;
      uVar11 = uVar11 + 0x20;
      iVar12 = iVar12 + 1;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar12) goto LAB_14baa9d80;
      uVar5 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar17 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
    uVar17 = (ulonglong)uVar11;
  }
LAB_14baa9d80:
  while( true ) {
    if (EquipSlotTypeMap._8_4_ - EquipSlotTypeMap._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar17) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&EquipSlotTypeMap.field_0x10))
    break;
    pEVar13 = (EDS_EquipSlotType *)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + EquipSlotTypeMap._0_8_);
    pEVar10 = *(EDS_ItemType **)(pEVar13 + 2);
    pEVar1 = pEVar10 + (int)pEVar13[4];
    if (pEVar10 != pEVar1) {
      do {
        if (*pEVar10 == *param_1) {
          return *pEVar13;
        }
        pEVar10 = pEVar10 + 1;
      } while (pEVar10 != pEVar1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return None;
}

// GetEquippedItemData @ 14baa9e70

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __thiscall
FDS_EquipmentItemCharacterData::GetEquippedItemData
          (FDS_EquipmentItemCharacterData *this,EDS_EquipSlotType *param_1)

{
  EDS_EquipSlotType EVar1;
  longlong lVar2;
  int iVar3;
  long64 *plVar4;
  EDS_EquipSlotType *in_R8;
  undefined1 *puVar5;
  undefined8 local_res8;
  
  EVar1 = *in_R8;
  if (*(int *)&(this->EquippedItemUIDMap).field_0x8 !=
      *(int *)&(this->EquippedItemUIDMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->EquippedItemUIDMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->EquippedItemUIDMap).field_0x48 + ~None & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->EquippedItemUIDMap;
      do {
        if (*(EDS_EquipSlotType *)(lVar2 + (longlong)iVar3 * 0x18) == EVar1) {
          plVar4 = TMapBase<enum_EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>_>
                   ::FindChecked(&this->EquippedItemUIDMap,EVar1);
          UDS_ItemData::GetData((ulong64)param_1,this->EntityID,SUB81(*plVar4,0));
          return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
        }
        iVar3 = *(int *)(lVar2 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  param_1[0] = None;
  param_1[1] = None;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetEquippedItemUID @ 14baaa040

long64 __thiscall
FDS_EquipmentItemCharacterData::GetEquippedItemUID
          (FDS_EquipmentItemCharacterData *this,EDS_EquipSlotType *param_1)

{
  EDS_EquipSlotType EVar1;
  longlong lVar2;
  int iVar3;
  long64 *plVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->EquippedItemUIDMap).field_0x8 !=
      *(int *)&(this->EquippedItemUIDMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->EquippedItemUIDMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->EquippedItemUIDMap).field_0x48 + ~None & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->EquippedItemUIDMap;
      do {
        if (*(EDS_EquipSlotType *)(lVar2 + (longlong)iVar3 * 0x18) == EVar1) {
          plVar4 = TMapBase<enum_EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>_>
                   ::FindChecked(&this->EquippedItemUIDMap,EVar1);
          return *plVar4;
        }
        iVar3 = *(int *)(lVar2 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return 0;
}

// GetSlotBaseTID @ 14baafd50

int __cdecl FDS_EquipmentItemCharacterData::GetSlotBaseTID(int param_1,EDS_SlotType param_2)

{
  return (uint)param_2 * 1000 + param_1;
}

// GetSlotNumberByItemType @ 14baafe30

int __cdecl FDS_EquipmentItemCharacterData::GetSlotNumberByItemType(EDS_ItemType *param_1)

{
  EDS_ItemType *pEVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  EDS_ItemType *pEVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  uVar5 = 1;
  iVar13 = 0;
  uVar14 = EquipSlotTypeMap._40_4_;
  uVar6 = 0;
  if (uVar14 != 0) {
    puVar15 = (uint *)&EquipSlotTypeMap.field_0x10;
    if (EquipSlotTypeMap._32_8_ != 0) {
      puVar15 = (uint *)EquipSlotTypeMap._32_8_;
    }
    uVar6 = *puVar15;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar6 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14baafedd;
      uVar6 = puVar15[lVar8 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar16 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar6 = local_res18 + -1 + iVar13;
    if ((int)uVar14 < (int)uVar6) {
      uVar6 = uVar14;
    }
  }
LAB_14baafedd:
  bVar3 = EquipSlotTypeMap._40_1_;
  uVar10 = uVar14 & 0xffffffe0;
  uVar16 = EquipSlotTypeMap._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar11);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,EquipSlotTypeMap._8_4_ - EquipSlotTypeMap._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&EquipSlotTypeMap.field_0x10;
  if (((int)uVar14 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar11 = (*pcVar2)();
    return iVar11;
  }
  uVar6 = EquipSlotTypeMap._40_4_;
  if (uVar14 != uVar6) {
    uVar16 = EquipSlotTypeMap._40_8_ & 0xffffffff;
    lVar8 = 0x154cf7450;
    if (EquipSlotTypeMap._32_8_ != 0) {
      lVar8 = EquipSlotTypeMap._32_8_;
    }
    uVar5 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar11 * 4);
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14baafff0;
      uVar5 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar16 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
    uVar16 = (ulonglong)uVar10;
  }
LAB_14baafff0:
  while( true ) {
    if (EquipSlotTypeMap._8_4_ - EquipSlotTypeMap._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar16) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&EquipSlotTypeMap.field_0x10))
    break;
    piVar12 = (int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + EquipSlotTypeMap._0_8_);
    pEVar7 = *(EDS_ItemType **)(piVar12 + 2);
    pEVar1 = pEVar7 + piVar12[4];
    if (pEVar7 != pEVar1) {
      do {
        if (*pEVar7 == *param_1) {
          return *piVar12 % 1000;
        }
        pEVar7 = pEVar7 + 1;
      } while (pEVar7 != pEVar1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return 0;
}

// Init @ 14bab2f60

void __thiscall
FDS_EquipmentItemCharacterData::Init(FDS_EquipmentItemCharacterData *this,ulong64 param_1)

{
  this->EntityID = param_1;
  return;
}

// InitiailizeTableInfo @ 14bab6800

void __cdecl FDS_EquipmentItemCharacterData::InitiailizeTableInfo(void)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res8 [16];
  TArray<FDS_SlotBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  longlong local_18;
  longlong local_10;
  
  if (EquipSlotTypeMap._8_4_ == EquipSlotTypeMap._52_4_) {
    FDS_SlotBaseTableRow::GetAll(&local_28);
    TSet<TTuple<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reserve(&EquipSlotTypeMap,local_28.ArrayNum);
    iVar2 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar3.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_SlotBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar3.Data == pFVar1) break;
      local_18 = *(longlong *)FVar3.Data + 8;
      local_10 = *(longlong *)FVar3.Data + 0x20;
      TSet<TTuple<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_EquipSlotType_const_&,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_const_&>_>
                (&EquipSlotTypeMap,
                 (TPairInitializer<EDS_EquipSlotType_const_&,TArray<EDS_ItemType,TSizedDefaultAllocator<32>_>_const_&>
                  *)(local_res8 + 8),(bool *)&local_18);
      FVar3.Data = FVar3.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// IsEquippedByTID @ 14bab7f80

bool __thiscall
FDS_EquipmentItemCharacterData::IsEquippedByTID(FDS_EquipmentItemCharacterData *this,int param_1)

{
  undefined1 *puVar1;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *pTVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  UDS_ItemDataSet *this_00;
  UObject *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  FWeakObjectPtr local_d8;
  FWeakObjectPtr local_d0;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  FWeakObjectPtr local_90;
  undefined8 local_88;
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_90);
  bVar9 = FWeakObjectPtr::IsValid(&local_90);
  if (bVar9) {
    puVar1 = &(this->EquippedItemUIDMap).field_0x10;
    iVar5 = *(int *)&(this->EquippedItemUIDMap).field_0x28;
    pTVar2 = &this->EquippedItemUIDMap;
    iStack_c0 = 0;
    local_a8 = 0;
    uStack_bc = 1;
    iStack_ac = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(this->EquippedItemUIDMap).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar15 = *puVar17;
      while (uVar15 == 0) {
        lVar12 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        iStack_ac = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14bab804d;
        uVar15 = puVar17[lVar12 + 1];
      }
      uStack_bc = -uVar15 & uVar15;
      uVar4 = (ulonglong)uStack_bc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_ac = local_a8 + -1 + local_res20;
      if (iVar5 < iStack_ac) {
        iStack_ac = iVar5;
      }
    }
LAB_14bab804d:
    iStack_a0 = *(int *)&(this->EquippedItemUIDMap).field_0x8 -
                *(int *)&(this->EquippedItemUIDMap).field_0x34;
    uVar15 = *(uint *)&(this->EquippedItemUIDMap).field_0x28;
    uStack_b0 = 0xffffffff;
    uVar14 = uVar15 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
    TStack_78.CurrentBitIndex = iStack_ac;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar15 >> 5;
    TStack_78._28_4_ = iStack_ac;
    TStack_78.BaseBitIndex = local_a8;
    uStack_58 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = pTVar2;
    local_b8 = puVar1;
    iStack_a4 = iStack_ac;
    local_80 = pTVar2;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    uVar6 = *(uint *)&(this->EquippedItemUIDMap).field_0x28;
    if (uVar15 != uVar6) {
      puVar16 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar12 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14bab8160;
        uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_98 = (int)lVar12;
      uVar15 = local_98 + -1 + uVar14;
      if ((int)uVar6 < (int)uVar15) {
        uVar15 = uVar6;
      }
    }
LAB_14bab8160:
    while( true ) {
      pTVar8 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_78.CurrentBitIndex == uVar15) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2)
         ) break;
      puVar3 = (undefined8 *)(*(longlong *)pTVar8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
      local_50 = *puVar3;
      uStack_48 = puVar3[1];
      TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_d0);
      bVar9 = FWeakObjectPtr::IsValid(&local_d0);
      if (bVar9) {
        this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_d0);
        UDS_ItemDataSet::GetItemDataByUID(this_00,(ulong64)&local_d8);
      }
      else {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8101333524654588234>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Item\\DS_ItemDataUtil.cpp"
                           ,0x14a,"false");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        local_d8.ObjectIndex = 0;
        local_d8.ObjectSerialNumber = 0;
        local_88 = 0;
        FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_88);
      }
      bVar9 = FWeakObjectPtr::IsValid(&local_d8);
      if ((bVar9) &&
         (pUVar11 = FWeakObjectPtr::Get(&local_d8), *(int *)&pUVar11[8].field_0x10 == param_1)) {
        return true;
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return false;
}

// IsEquippedByUID @ 14bab8280

bool __thiscall
FDS_EquipmentItemCharacterData::IsEquippedByUID(FDS_EquipmentItemCharacterData *this,long64 param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->EquippedItemUIDMap).field_0x10;
  iVar3 = *(int *)&(this->EquippedItemUIDMap).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->EquippedItemUIDMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bab832d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14bab832d:
  uVar11 = *(uint *)&(this->EquippedItemUIDMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->EquippedItemUIDMap).field_0x8 -
                       *(int *)&(this->EquippedItemUIDMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->EquippedItemUIDMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bab8430;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14bab8430:
  while( true ) {
    if (*(int *)&(this->EquippedItemUIDMap).field_0x8 -
        *(int *)&(this->EquippedItemUIDMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_EquipSlotType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(longlong *)
         (*(longlong *)&this->EquippedItemUIDMap + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
        == param_1) {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// IsEquippedItem @ 14bab8530

bool __thiscall
FDS_EquipmentItemCharacterData::IsEquippedItem
          (FDS_EquipmentItemCharacterData *this,EDS_EquipSlotType param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->EquippedItemUIDMap).field_0x8 !=
      *(int *)&(this->EquippedItemUIDMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->EquippedItemUIDMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->EquippedItemUIDMap).field_0x48 + ~None & param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        if (*(EDS_EquipSlotType *)(*(longlong *)&this->EquippedItemUIDMap + (longlong)iVar1 * 0x18)
            == param_1) goto LAB_14bab858f;
        iVar1 = *(int *)(*(longlong *)&this->EquippedItemUIDMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14bab858f:
  return iVar1 != -1;
}

// UnEquipItem @ 14bacfff0

void __thiscall
FDS_EquipmentItemCharacterData::UnEquipItem
          (FDS_EquipmentItemCharacterData *this,EDS_EquipSlotType *param_1)

{
  EDS_EquipSlotType local_res8 [2];
  
  local_res8[0] = *param_1;
  if (*(int *)&(this->EquippedItemUIDMap).field_0x8 !=
      *(int *)&(this->EquippedItemUIDMap).field_0x34) {
    TSet<TTuple<enum_EDS_EquipSlotType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_EDS_EquipSlotType>(&this->EquippedItemUIDMap,local_res8[0],local_res8);
  }
  FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::Broadcast(this,param_1,0)
  ;
  TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnChangedEquipAllDelegate,*param_1,0);
  return;
}

// UpdateEquipmentData @ 14bad7540

void __thiscall
FDS_EquipmentItemCharacterData::UpdateEquipmentData
          (FDS_EquipmentItemCharacterData *this,EquipResponse *param_1)

{
  EDS_EquipSlotType local_res8 [2];
  int local_res10 [2];
  TPairInitializer<EDS_EquipSlotType_&,int_&> local_res18;
  EDS_EquipSlotType *local_18;
  int *local_10;
  
  local_res10[0] = (param_1->_impl_).item_id_;
  local_res8[0] = (uint)(byte)(param_1->_impl_).slot_type_ * 1000 + (param_1->_impl_).slot_index_;
  FDS_ItemBaseTableRow::GetRef((longlong)local_res10[0],true);
  local_18 = local_res8;
  local_10 = local_res10;
  TSet<TTuple<enum_EDS_EquipSlotType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_EquipSlotType_&,int_&>_>
            (&this->EquippedItemTIDMap,&local_res18,(bool *)&local_18);
  TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnChangedEquipAllDelegate,local_res8[0],0);
  return;
}

// UpdateEquipmentData @ 14bad75c0

void __thiscall
FDS_EquipmentItemCharacterData::UpdateEquipmentData
          (FDS_EquipmentItemCharacterData *this,SpawnCharacterResponse *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  EDS_EquipSlotType EVar7;
  TMap<EDS_EquipSlotType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,int,0>_>
  *this_00;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  FDS_ItemBaseTableRow *pFVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  EDS_EquipSlotType local_res18 [2];
  uint local_res20 [2];
  TPairInitializer<EDS_EquipSlotType_&,int_&> local_78;
  TMap<EDS_EquipSlotType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,int,0>_>
  *local_68;
  EDS_EquipSlotType *local_60;
  uint *local_58;
  FDestructionSentinel local_50;
  
  uVar2 = (param_1->_impl_).equip_visual_item_id_vec_.soo_rep_.field0_0x0.long_rep.elements_int;
  local_78.Value = &(param_1->_impl_).equip_visual_item_id_vec_.soo_rep_.field0_0x0.long_rep.size;
  if ((uVar2 & 4) == 0) {
    uVar10 = (uint)uVar2 & 3;
  }
  else {
    uVar10 = *local_78.Value;
  }
  if (0 < (int)uVar10) {
    local_68 = &this->EquippedItemTIDMap;
    lVar16 = 0;
    do {
      this_00 = local_68;
      uVar2 = (param_1->_impl_).equip_visual_item_id_vec_.soo_rep_.field0_0x0.long_rep.elements_int;
      piVar12 = local_78.Value;
      if ((uVar2 & 4) != 0) {
        piVar12 = (int *)(uVar2 & 0xfffffffffffffff8);
      }
      local_res20[0] = piVar12[lVar16];
      pFVar13 = FDS_ItemBaseTableRow::GetRef((longlong)(int)local_res20[0],true);
      local_res18[0] = GetEquipSlotTypeByItemType(&pFVar13->ItemType);
      local_60 = local_res18;
      local_58 = local_res20;
      TSet<TTuple<enum_EDS_EquipSlotType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_EquipSlotType_&,int_&>_>
                (this_00,&local_78,(bool *)&local_60);
      EVar7 = local_res18[0];
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnChangedEquipAllDelegate,(FWriteAccessScope *)&local_50);
      puVar1 = &(this->OnChangedEquipAllDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar14 = *(int *)&(this->OnChangedEquipAllDelegate).field_0x10 - 1;
      if (-1 < (int)uVar14) {
        lVar15 = (longlong)(int)uVar14 << 4;
        bVar6 = false;
        do {
          uVar11 = 0;
          if ((int)uVar14 < *(int *)&(this->OnChangedEquipAllDelegate).field_0x10) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(this->OnChangedEquipAllDelegate).field_0x8;
          if (((*(int *)(lVar15 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar15 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,EVar7,0), cVar9 == '\0')) {
            bVar6 = true;
          }
          lVar15 = lVar15 + -0x10;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      puVar1 = &(this->OnChangedEquipAllDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnChangedEquipAllDelegate,false);
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uVar10);
  }
  return;
}

// UpdateEquipmentData @ 14bad77f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_EquipmentItemCharacterData::UpdateEquipmentData
          (FDS_EquipmentItemCharacterData *this,SqlEquipmentTable *param_1)

{
  TMap<EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EquipSlotType,__int64,0>_>
  *this_00;
  longlong lVar1;
  bool bVar2;
  int iVar3;
  long64 *plVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UDS_ItemData *this_01;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined1 auStackY_1c8 [32];
  EDS_EquipSlotType local_188 [2];
  TPairInitializer<EDS_EquipSlotType_const_&,__int64_&> local_180;
  long64 local_170;
  FWeakObjectPtr local_168;
  EDS_EquipSlotType *local_160;
  long64 *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  lVar1 = (param_1->_impl_).item_uid_;
  this_00 = &this->EquippedItemUIDMap;
  local_188[0] = (uint)(byte)(param_1->_impl_).slot_type_ * 1000 + (param_1->_impl_).slot_index_;
  lVar8 = lVar1;
  if (lVar1 == 0) {
    if (*(int *)&(this->EquippedItemUIDMap).field_0x8 !=
        *(int *)&(this->EquippedItemUIDMap).field_0x34) {
      puVar7 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->EquippedItemUIDMap).field_0x38;
      }
      iVar3 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->EquippedItemUIDMap).field_0x48 + ~None &
                                local_188[0]) * 4);
      if (iVar3 != -1) {
        do {
          if (*(EDS_EquipSlotType *)(*(longlong *)this_00 + (longlong)iVar3 * 0x18) == local_188[0])
          {
            plVar4 = TMapBase<enum_EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>_>
                     ::FindChecked(this_00,local_188[0]);
            lVar8 = *plVar4;
            if (lVar8 < 1) {
              return;
            }
            goto LAB_14bad78b1;
          }
          iVar3 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
  }
  else {
LAB_14bad78b1:
    UDS_ItemData::GetData((ulong64)&local_180.Value,this->EntityID,SUB81(lVar8,0));
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_180.Value);
    if (bVar2) {
      if (lVar1 == 0) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_180.Value);
        FDS_DataPropertyDelegate_bool_DelegateWrapper
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 4),false);
        local_180.Key._0_4_ = local_188[0];
        if (*(int *)&(this->EquippedItemUIDMap).field_0x8 !=
            *(int *)&(this->EquippedItemUIDMap).field_0x34) {
          TSet<TTuple<enum_EDS_EquipSlotType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>,FDefaultSetAllocator>
          ::RemoveImpl<enum_EDS_EquipSlotType>(this_00,local_188[0],(EDS_EquipSlotType *)&local_180)
          ;
        }
        FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::Broadcast
                  (this,local_188,0);
        TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->OnChangedEquipAllDelegate,local_188[0],0);
      }
      else {
        if (*(int *)&(this->EquippedItemUIDMap).field_0x8 !=
            *(int *)&(this->EquippedItemUIDMap).field_0x34) {
          puVar7 = *(undefined1 **)&(this->EquippedItemUIDMap).field_0x40;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &(this->EquippedItemUIDMap).field_0x38;
          }
          iVar3 = *(int *)(puVar7 + (ulonglong)
                                    (*(int *)&(this->EquippedItemUIDMap).field_0x48 + ~None &
                                    local_188[0]) * 4);
          if (iVar3 != -1) {
            do {
              if (*(EDS_EquipSlotType *)(*(longlong *)this_00 + (longlong)iVar3 * 0x18) ==
                  local_188[0]) {
                plVar4 = TMapBase<enum_EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>_>
                         ::FindChecked(&this->EquippedItemUIDMap,local_188[0]);
                uVar9 = (undefined1)*plVar4;
                goto LAB_14bad79bc;
              }
              iVar3 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar3 * 0x18);
            } while (iVar3 != -1);
          }
        }
        uVar9 = false;
LAB_14bad79bc:
        UDS_ItemData::GetData((ulong64)&local_168,this->EntityID,(bool)uVar9);
        bVar2 = FWeakObjectPtr::IsValid(&local_168);
        if (bVar2) {
          pUVar6 = FWeakObjectPtr::Get(&local_168);
          FDS_DataPropertyDelegate_bool_DelegateWrapper
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 4),false);
        }
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_180.Value);
        FDS_DataPropertyDelegate_bool_DelegateWrapper
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 4),true);
        local_160 = local_188;
        local_158 = &local_170;
        local_170 = lVar8;
        TSet<TTuple<enum_EDS_EquipSlotType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_EquipSlotType_const_&,__int64_&>_>
                  (this_00,&local_180,(bool *)&local_160);
        FDS_FilteredEventDelegate<enum_EDS_EquipSlotType_const_,__int64_const_>::Broadcast
                  (this,local_188,local_170);
        TMulticastDelegate<void___cdecl(enum_EDS_EquipSlotType,__int64),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->OnChangedEquipAllDelegate,local_188[0],local_170);
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_180.Value);
        if (*(longlong *)&pUVar6[0x19].field_0x20 != 0) {
          this_01 = (UDS_ItemData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_180.Value);
          UDS_ItemData::SetNewSymbol(this_01,false);
        }
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_EquipmentItemCharacterData::UpdateEquipmentData",0x33,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x112,L"itemData is nullptr. (%ld)")
        ;
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  return;
}

