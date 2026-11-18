// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b5851d0

UClass * __cdecl UDS_RingCommandDeckDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RingCommandDeckDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RingCommandDeckDataSet",
               &Z_Registration_Info_UClass_UDS_RingCommandDeckDataSet.InnerSingleton,
               StaticRegisterNativesUDS_RingCommandDeckDataSet,0xe8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_RingCommandDeckDataSet>,
               InternalVTableHelperCtorCaller<UDS_RingCommandDeckDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RingCommandDeckDataSet.InnerSingleton;
}

// UDS_RingCommandDeckDataSet @ 14b587040

UDS_RingCommandDeckDataSet * __thiscall
UDS_RingCommandDeckDataSet::UDS_RingCommandDeckDataSet
          (UDS_RingCommandDeckDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RingCommandDeckDataSet__6B_;
  (this->ActionBaseIdList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionBaseIdList).ArrayNum = 0;
  (this->ActionBaseIdList).ArrayMax = 0;
  this->SelectedDeckIndex = (TTuple<int,int>)0x0;
  *(undefined8 *)&this->RingCmdDeckSlotIndexDelegate = 0;
  *(undefined8 *)&(this->RingCmdDeckSlotIndexDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RingCmdDeckSlotIndexDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->RingCmdDeckSlotIndexDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_RingCommandDeckDataSet @ 14b5879d0

void __thiscall
UDS_RingCommandDeckDataSet::~UDS_RingCommandDeckDataSet(UDS_RingCommandDeckDataSet *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_RingCommandDeckDataSet__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RingCmdDeckSlotIndexDelegate).field_0x8,
             *(int *)&(this->RingCmdDeckSlotIndexDelegate).field_0x10);
  pvVar1 = *(void **)&(this->RingCmdDeckSlotIndexDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RingCmdDeckSlotIndexDelegate);
  pFVar2 = (this->ActionBaseIdList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b589130

UClass * __cdecl UDS_RingCommandDeckDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RingCommandDeckDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RingCommandDeckDataSet",
               &Z_Registration_Info_UClass_UDS_RingCommandDeckDataSet.InnerSingleton,
               StaticRegisterNativesUDS_RingCommandDeckDataSet,0xe8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_RingCommandDeckDataSet>,
               InternalVTableHelperCtorCaller<UDS_RingCommandDeckDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RingCommandDeckDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_RingCommandDeckDataSet @ 14b589bb0

void __cdecl UDS_RingCommandDeckDataSet::StaticRegisterNativesUDS_RingCommandDeckDataSet(void)

{
  return;
}

// UDS_RingCommandDeckDataSet @ 14ba33170

UDS_RingCommandDeckDataSet * __thiscall
UDS_RingCommandDeckDataSet::UDS_RingCommandDeckDataSet
          (UDS_RingCommandDeckDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RingCommandDeckDataSet__6B_;
  (this->ActionBaseIdList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionBaseIdList).ArrayNum = 0;
  (this->ActionBaseIdList).ArrayMax = 0;
  this->SelectedDeckIndex = (TTuple<int,int>)0x0;
  *(undefined8 *)&this->RingCmdDeckSlotIndexDelegate = 0;
  *(undefined8 *)&(this->RingCmdDeckSlotIndexDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RingCmdDeckSlotIndexDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->RingCmdDeckSlotIndexDelegate).field_0x18 = 2;
  return this;
}

// AddActionBase @ 14ba34f00

void __thiscall
UDS_RingCommandDeckDataSet::AddActionBase(UDS_RingCommandDeckDataSet *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->ActionBaseIdList;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->ActionBaseIdList).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 4;
  while( true ) {
    if (pFVar4 == pFVar2) {
      if (iVar3 == (this->ActionBaseIdList).ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar1->AllocatorInstance,&(this->ActionBaseIdList).ArrayMax);
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      (this->ActionBaseIdList).ArrayNum = iVar3 + 1;
      *(int *)(pFVar2 + (longlong)iVar3 * 4) = param_1;
      return;
    }
    if (*(int *)pFVar4 == param_1) break;
    pFVar4 = pFVar4 + 4;
  }
  return;
}

// GetSelectedRingCommandData @ 14ba4ed00

TSharedPtr<FDS_RingCommandSlotData,1> * __thiscall
UDS_RingCommandDeckDataSet::GetSelectedRingCommandData
          (UDS_RingCommandDeckDataSet *this,
          TSharedPtr<FDS_RingCommandSlotData,1> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_RingCommandDeckData *this_00;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) goto LAB_14ba4ed31;
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  if (pUVar3 == (UObject *)0x0) {
LAB_14ba4ed7f:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_RingCommandDeckData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14ba4ed7f;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar2) {
    this_00 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&local_res8);
    UDS_RingCommandDeckData::GetRingCommandData
              (this_00,__return_storage_ptr__,(int *)&(this->SelectedDeckIndex).field_0x4);
    return __return_storage_ptr__;
  }
LAB_14ba4ed31:
  __return_storage_ptr__->Object = (FDS_RingCommandSlotData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsValidCheck @ 14ba5da00

bool __thiscall
UDS_RingCommandDeckDataSet::IsValidCheck
          (UDS_RingCommandDeckDataSet *this,SqlRingCommandTable *param_1)

{
  char cVar1;
  bool bVar2;
  FDS_ActionBaseTableRow *this_00;
  FDS_ContentsTotalMenuTableRow *this_01;
  FDS_ItemBaseTableRow *this_02;
  
  cVar1 = (char)(param_1->_impl_).cmd_type_;
  if (cVar1 == '\x01') {
    this_02 = FDS_ItemBaseTableRow::GetRef((longlong)(param_1->_impl_).cmd_value_,true);
    bVar2 = FDS_ItemBaseTableRow::IsValid(this_02);
    if (bVar2) {
      return this_02->IsRingCmdAble != false;
    }
  }
  else {
    if (cVar1 == '\x02') {
      this_01 = FDS_ContentsTotalMenuTableRow::GetRef((longlong)(param_1->_impl_).cmd_value_,true);
      bVar2 = FDS_ContentsTotalMenuTableRow::IsValid(this_01);
      if (!bVar2) {
        return false;
      }
      cVar1 = this_01->IsRingCmdAble;
    }
    else {
      if (cVar1 != '\x03') {
        return true;
      }
      this_00 = FDS_ActionBaseTableRow::GetRef((longlong)(param_1->_impl_).cmd_value_,true);
      cVar1 = FDS_ActionBaseTableRow::IsValid(this_00);
    }
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// SetData @ 14ba6dc10

void __thiscall
UDS_RingCommandDeckDataSet::SetData(UDS_RingCommandDeckDataSet *this,SqlRingCommandTable *param_1)

{
  char cVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  bool bVar4;
  FDS_ActionBaseTableRow *this_00;
  FDS_ContentsTotalMenuTableRow *this_01;
  FDS_ItemBaseTableRow *this_02;
  UObject *pUVar5;
  UDS_RingCommandDeckData *this_03;
  ulong64 uVar6;
  int local_res10 [2];
  FWeakObjectPtr local_res18;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_68;
  uint local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  cVar1 = (char)(param_1->_impl_).cmd_type_;
  if (cVar1 == '\x01') {
    this_02 = FDS_ItemBaseTableRow::GetRef((longlong)(param_1->_impl_).cmd_value_,true);
    bVar4 = FDS_ItemBaseTableRow::IsValid(this_02);
    if (bVar4) {
      bVar4 = this_02->IsRingCmdAble == false;
      goto LAB_14ba6dc95;
    }
LAB_14ba6dc9b:
    iStack_54 = (param_1->_impl_).deck_index_;
    iStack_50 = (param_1->_impl_).slot_index_;
    local_48 = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58 = local_58 & 0xffffff00;
    local_68.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
    *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(iStack_54,local_58);
    *(ulonglong *)(local_68.AllocatorInstance.Data + 8) = CONCAT44(uStack_4c,iStack_50);
    *(undefined8 *)(local_68.AllocatorInstance.Data + 0x10) = local_48;
    FDS_RingCommandService::RequestRingCommandSetting(&local_68);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
      return;
    }
  }
  else {
    if (cVar1 == '\x02') {
      this_01 = FDS_ContentsTotalMenuTableRow::GetRef((longlong)(param_1->_impl_).cmd_value_,true);
      bVar4 = FDS_ContentsTotalMenuTableRow::IsValid(this_01);
      if (!bVar4) goto LAB_14ba6dc9b;
      bVar4 = this_01->IsRingCmdAble == false;
LAB_14ba6dc95:
      if (bVar4) goto LAB_14ba6dc9b;
    }
    else if (cVar1 == '\x03') {
      this_00 = FDS_ActionBaseTableRow::GetRef((longlong)(param_1->_impl_).cmd_value_,true);
      bVar4 = FDS_ActionBaseTableRow::IsValid(this_00);
      bVar4 = !bVar4;
      goto LAB_14ba6dc95;
    }
    iVar3 = (param_1->_impl_).deck_index_;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (bVar4) {
      uVar6 = 0;
    }
    else {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      uVar6 = *(ulong64 *)(pUVar5 + 1);
    }
    UDS_RingCommandDeckData::GetData((ulong64)&local_res18,uVar6,SUB41(iVar3,0));
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar4) {
      this_03 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&local_res18);
      local_res10[0] = (param_1->_impl_).slot_index_;
      iVar3 = (param_1->_impl_).cmd_value_;
      FVar2 = *(FScriptContainerElement *)&(param_1->_impl_).cmd_type_;
      UDS_RingCommandDeckData::GetRingCommandData
                (this_03,(TSharedPtr<FDS_RingCommandSlotData,1> *)&local_68,local_res10);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        *local_68.AllocatorInstance.Data = FVar2;
        *(longlong *)(local_68.AllocatorInstance.Data + 0x10) = (longlong)iVar3;
        *(undefined1 *)&this_03->_padding_ = 1;
        bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this_03->_padding_,
                           (void *)0x0);
        if (!bVar4) {
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_03->_padding_);
          pUVar5[4].field_0x8 = 1;
          bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar5 + 4),
                             (void *)0x0);
          if (!bVar4) {
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar5 + 4));
            pUVar5[3].field_0x20 = 1;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(local_68.ArrayMax,local_68.ArrayNum));
    }
    *(undefined1 *)&this->_padding_ = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar5[3].field_0x20 = 1;
    }
  }
  return;
}

// SetSelectedDeckIndex @ 14ba74a10

void __thiscall
UDS_RingCommandDeckDataSet::SetSelectedDeckIndex
          (UDS_RingCommandDeckDataSet *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  TTuple<int,int> TVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_48;
  
  if ((param_1 != *(int *)&this->SelectedDeckIndex) ||
     (param_2 != *(int *)&(this->SelectedDeckIndex).field_0x4)) {
    this_00 = &this->RingCmdDeckSlotIndexDelegate;
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_48);
      puVar1 = &(this->RingCmdDeckSlotIndexDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar10 = *(int *)&(this->RingCmdDeckSlotIndexDelegate).field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar10 < *(int *)&(this->RingCmdDeckSlotIndexDelegate).field_0x10) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(this->RingCmdDeckSlotIndexDelegate).field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(this->RingCmdDeckSlotIndexDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    TVar5._4_4_ = param_2;
    TVar5._0_4_ = param_1;
    this->SelectedDeckIndex = TVar5;
  }
  return;
}

