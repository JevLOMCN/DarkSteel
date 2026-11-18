// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// AddSkillDeckItem @ 14ba35ed0

void __thiscall
FDS_SkillDeckInfo::AddSkillDeckItem(FDS_SkillDeckInfo *this,FDS_SkillDeckItem *param_1)

{
  TArray<FDS_SkillDeckItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar4 = (this->SkillDeckItemList).ArrayNum;
  pTVar1 = &this->SkillDeckItemList;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  pFVar3 = pFVar5 + (longlong)iVar4 * 0xc;
  while( true ) {
    if ((this->SkillDeckItemList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_SkillDeckItem,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar3) break;
    if (*(int *)pFVar5 == param_1->SlotIndex) {
      *(int *)(pFVar5 + 4) = param_1->SkillID;
      return;
    }
    pFVar5 = pFVar5 + 0xc;
  }
  iVar4 = (this->SkillDeckItemList).ArrayNum;
  piVar2 = &(this->SkillDeckItemList).ArrayMax;
  if (iVar4 == *piVar2) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->SkillDeckItemList).ArrayNum = iVar4 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar4 * 0xc) = *(undefined8 *)param_1;
  *(int *)(pFVar3 + (longlong)iVar4 * 0xc + 8) = param_1->SkillLevel;
  return;
}

// GetSkillDeckItemBySkillID @ 14ba4ef10

FDS_SkillDeckItem * __thiscall
FDS_SkillDeckInfo::GetSkillDeckItemBySkillID(FDS_SkillDeckInfo *this,int param_1)

{
  FDS_SkillDeckItem *pFVar1;
  int iVar2;
  FDS_SkillDeckItem *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SkillDeckItemList).ArrayNum;
  pFVar3 = (FDS_SkillDeckItem *)(this->SkillDeckItemList).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->SkillDeckItemList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_SkillDeckItem,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->SkillID == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return &emptyItem;
}

// GetSkillDeckItemBySlotIndex @ 14ba4ef80

FDS_SkillDeckItem * __thiscall
FDS_SkillDeckInfo::GetSkillDeckItemBySlotIndex(FDS_SkillDeckInfo *this,int param_1)

{
  FDS_SkillDeckItem *pFVar1;
  int iVar2;
  FDS_SkillDeckItem *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SkillDeckItemList).ArrayNum;
  pFVar3 = (FDS_SkillDeckItem *)(this->SkillDeckItemList).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->SkillDeckItemList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_SkillDeckItem_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->SlotIndex == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return &emptyItem;
}

// GetSkillList @ 14ba4f020

TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FDS_SkillDeckInfo::GetSkillList
          (FDS_SkillDeckInfo *this,
          TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = (this->SkillDeckItemList).AllocatorInstance.Data;
  iVar2 = (this->SkillDeckItemList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->SkillDeckItemList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_SkillDeckItem_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(int *)(pFVar5 + 4) != 0) {
      UDS_SkillData::GetData
                ((ulong64)&local_res10,this->DataContainerKey,SUB41(*(int *)(pFVar5 + 4),0));
      bVar3 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar3) {
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8)
             = local_res10;
      }
    }
    pFVar5 = pFVar5 + 0xc;
  }
  return __return_storage_ptr__;
}

// GetSkillSlotDataMap @ 14ba4f400

TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
* __thiscall
FDS_SkillDeckInfo::GetSkillSlotDataMap
          (FDS_SkillDeckInfo *this,
          TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UObject *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  UObject *local_res8;
  TPairInitializer<int_const_&,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_&> local_res10;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  undefined1 local_68 [8];
  FScriptContainerElement *local_60;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> **local_58;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  pFVar7 = (this->SkillDeckItemList).AllocatorInstance.Data;
  iVar2 = (this->SkillDeckItemList).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0xc;
  do {
    if ((this->SkillDeckItemList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_SkillDeckItem_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) {
      return __return_storage_ptr__;
    }
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_70);
    bVar4 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_70,(void *)0x0);
    if (bVar4) {
LAB_14ba4f547:
      local_res10.Value = (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)0x0;
      local_res8 = (UObject *)0x0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_res8);
    }
    else {
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_70);
      this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)local_68);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba4f4e6:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_SkillData_NoRegister();
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba4f4e6;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_res8 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
      bVar4 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
      if (bVar4) goto LAB_14ba4f547;
      local_res10.Value = (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)local_res20;
    }
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res10.Value);
    if (!bVar4) {
      local_78.ObjectIndex = 0;
      local_78.ObjectSerialNumber = 0;
      local_res8 = (UObject *)0x0;
      FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_res8);
      local_res10.Value = (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)local_78;
    }
    local_58 = &local_res10.Value;
    local_60 = pFVar7;
    TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_&>_>
              ((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,&local_res10,(bool *)&local_60);
    pFVar7 = pFVar7 + 0xc;
  } while( true );
}

// ResetSkillDeck @ 14ba697f0

void __thiscall FDS_SkillDeckInfo::ResetSkillDeck(FDS_SkillDeckInfo *this)

{
  int *piVar1;
  
  piVar1 = &(this->SkillDeckItemList).ArrayMax;
  (this->SkillDeckItemList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->SkillDeckItemList).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateSkillSlot @ 14ba811f0

bool __thiscall
FDS_SkillDeckInfo::UpdateSkillSlot(FDS_SkillDeckInfo *this,int param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SkillDeckItemList).ArrayNum;
  pFVar3 = (this->SkillDeckItemList).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->SkillDeckItemList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_SkillDeckItem,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == param_1) {
      *(int *)(pFVar3 + 4) = param_2;
      *(int *)(pFVar3 + 8) = param_3;
      return true;
    }
    pFVar3 = pFVar3 + 0xc;
  }
  return false;
}

