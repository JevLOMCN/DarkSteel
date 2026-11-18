// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b448e40

UClass * __cdecl UDS_CharSlotImplByRaidPartyData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharSlotImplByRaidPartyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharSlotImplByRaidPartyData",
               &Z_Registration_Info_UClass_UDS_CharSlotImplByRaidPartyData.InnerSingleton,
               StaticRegisterNativesUDS_CharSlotImplByRaidPartyData,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharSlotImplByRaidPartyData>,
               InternalVTableHelperCtorCaller<UDS_CharSlotImplByRaidPartyData>,local_res8,
               UDS_CharSlotImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharSlotImplByRaidPartyData.InnerSingleton;
}

// UDS_CharSlotImplByRaidPartyData @ 14b44d220

UDS_CharSlotImplByRaidPartyData * __thiscall
UDS_CharSlotImplByRaidPartyData::UDS_CharSlotImplByRaidPartyData
          (UDS_CharSlotImplByRaidPartyData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharSlotImplByRaidPartyData__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)&this->OnDropModeChangeDelegate = 0;
  *(undefined8 *)&(this->OnDropModeChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropModeChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickSlotButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnClickSlotButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->AddClickDel = 0;
  *(undefined8 *)&(this->AddClickDel).field_0x8 = 0;
  *(undefined4 *)&(this->AddClickDel).field_0x10 = 0;
  *(undefined8 *)&this->ChangeClickDel = 0;
  *(undefined8 *)&(this->ChangeClickDel).field_0x8 = 0;
  *(undefined4 *)&(this->ChangeClickDel).field_0x10 = 0;
  this->RaidPartySlotIndex = 0;
  this->CharLevel = 0;
  this->CharAscend = 0;
  this->IsDropMode = false;
  return this;
}

// UDS_CharSlotImplByRaidPartyData @ 14b44d2b0

UDS_CharSlotImplByRaidPartyData * __thiscall
UDS_CharSlotImplByRaidPartyData::UDS_CharSlotImplByRaidPartyData
          (UDS_CharSlotImplByRaidPartyData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharSlotImplByRaidPartyData__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)&this->OnDropModeChangeDelegate = 0;
  *(undefined8 *)&(this->OnDropModeChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropModeChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickSlotButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnClickSlotButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->AddClickDel = 0;
  *(undefined8 *)&(this->AddClickDel).field_0x8 = 0;
  *(undefined4 *)&(this->AddClickDel).field_0x10 = 0;
  *(undefined8 *)&this->ChangeClickDel = 0;
  *(undefined8 *)&(this->ChangeClickDel).field_0x8 = 0;
  *(undefined4 *)&(this->ChangeClickDel).field_0x10 = 0;
  this->RaidPartySlotIndex = 0;
  this->CharLevel = 0;
  this->CharAscend = 0;
  this->IsDropMode = false;
  return this;
}

// ~UDS_CharSlotImplByRaidPartyData @ 14b44ff40

void __thiscall
UDS_CharSlotImplByRaidPartyData::~UDS_CharSlotImplByRaidPartyData
          (UDS_CharSlotImplByRaidPartyData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_CharSlotImplByRaidPartyData__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ChangeClickDel);
  pvVar1 = *(void **)&(this->ChangeClickDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeClickDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AddClickDel);
  pvVar1 = *(void **)&(this->AddClickDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AddClickDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnClickSlotButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotButtonUpDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropModeChangeDelegate);
  pvVar1 = *(void **)&(this->OnDropModeChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropModeChangeDelegate);
  this->_padding_ = (longlong)&___7UDS_CharSlotImplBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b453ff0

UClass * __cdecl UDS_CharSlotImplByRaidPartyData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharSlotImplByRaidPartyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharSlotImplByRaidPartyData",
               &Z_Registration_Info_UClass_UDS_CharSlotImplByRaidPartyData.InnerSingleton,
               StaticRegisterNativesUDS_CharSlotImplByRaidPartyData,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CharSlotImplByRaidPartyData>,
               InternalVTableHelperCtorCaller<UDS_CharSlotImplByRaidPartyData>,local_res8,
               UDS_CharSlotImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharSlotImplByRaidPartyData.InnerSingleton;
}

// StaticRegisterNativesUDS_CharSlotImplByRaidPartyData @ 14b455120

void __cdecl
UDS_CharSlotImplByRaidPartyData::StaticRegisterNativesUDS_CharSlotImplByRaidPartyData(void)

{
  return;
}

// GetAddShiftSwitcherIndex @ 14bcf5850

int __thiscall
UDS_CharSlotImplByRaidPartyData::GetAddShiftSwitcherIndex(UDS_CharSlotImplByRaidPartyData *this)

{
  return (int)(this->IsDropMode != false);
}

// GetCharEvolution @ 14bcf5c10

int __thiscall
UDS_CharSlotImplByRaidPartyData::GetCharEvolution(UDS_CharSlotImplByRaidPartyData *this)

{
  return 0;
}

// GetCharLevel @ 14bcf5cb0

int __thiscall UDS_CharSlotImplByRaidPartyData::GetCharLevel(UDS_CharSlotImplByRaidPartyData *this)

{
  return this->CharLevel;
}

// IsAddShiftVisible @ 14bd04f30

bool __thiscall
UDS_CharSlotImplByRaidPartyData::IsAddShiftVisible(UDS_CharSlotImplByRaidPartyData *this)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  
  if (this->IsDropMode != true) {
    this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->RaidPartySlotIndex);
    return pFVar1->PlayerUID < 1;
  }
  return true;
}

// IsButtonVisible @ 14bd05280

bool __thiscall
UDS_CharSlotImplByRaidPartyData::IsButtonVisible(UDS_CharSlotImplByRaidPartyData *this)

{
  return false;
}

// IsHaveChar @ 14bd05c90

bool __thiscall UDS_CharSlotImplByRaidPartyData::IsHaveChar(UDS_CharSlotImplByRaidPartyData *this)

{
  bool bVar1;
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *this_01;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  this_01 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->RaidPartySlotIndex);
  bVar1 = FDS_RaidPartyMemberInfo::IsValidCharInfo(this_01);
  return bVar1;
}

// OnClickAddBtn @ 14bd0a880

void __thiscall
UDS_CharSlotImplByRaidPartyData::OnClickAddBtn(UDS_CharSlotImplByRaidPartyData *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->AddClickDel,&local_28)
  ;
  if ((*(int *)&(this->AddClickDel).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->AddClickDel).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnClickChangeBtn @ 14bd0a8d0

void __thiscall
UDS_CharSlotImplByRaidPartyData::OnClickChangeBtn(UDS_CharSlotImplByRaidPartyData *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ChangeClickDel,
             &local_28);
  if ((*(int *)&(this->ChangeClickDel).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ChangeClickDel).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnEventMouseButtonUp @ 14bd0d1e0

void __thiscall
UDS_CharSlotImplByRaidPartyData::OnEventMouseButtonUp
          (UDS_CharSlotImplByRaidPartyData *this,FDS_WidgetPointerEventField *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnClickSlotButtonUpDelegate,&local_28);
  if ((*(int *)&(this->OnClickSlotButtonUpDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnClickSlotButtonUpDelegate).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnEventMouseEnter @ 14bd0d3b0

void __thiscall
UDS_CharSlotImplByRaidPartyData::OnEventMouseEnter
          (UDS_CharSlotImplByRaidPartyData *this,FDS_WidgetPointerEventField *param_1)

{
  return;
}

// OnEventMouseLeave @ 14bd0d3f0

void __thiscall
UDS_CharSlotImplByRaidPartyData::OnEventMouseLeave
          (UDS_CharSlotImplByRaidPartyData *this,FDS_WidgetPointerEventField *param_1)

{
  return;
}

// OnEventOnDragCanceled @ 14bd0d400

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplByRaidPartyData::OnEventOnDragCanceled
          (UDS_CharSlotImplByRaidPartyData *this,FDS_DragDropEventField *param_1)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  iVar1 = this->RaidPartySlotIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDropModeChangeDelegate,&local_28);
  if ((*(int *)&(this->OnDropModeChangeDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnDropModeChangeDelegate).field_0x8, plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar1,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnEventOnDragDetected @ 14bd0d460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplByRaidPartyData::OnEventOnDragDetected
          (UDS_CharSlotImplByRaidPartyData *this,FDS_DragDropEventField *param_1)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  iVar1 = this->RaidPartySlotIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDropModeChangeDelegate,&local_28);
  if ((*(int *)&(this->OnDropModeChangeDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnDropModeChangeDelegate).field_0x8, plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar1,1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnEventOnDrop @ 14bd0d4c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharSlotImplByRaidPartyData::OnEventOnDrop
          (UDS_CharSlotImplByRaidPartyData *this,FDS_DragDropEventField *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((param_1->DragDropOperation).field0_0x0.DebugPtr != (UDragDropOperation *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->DragDropOperation,pUVar2);
    if ((bVar1) && ((param_1->DragDropOperation).field0_0x0.DebugPtr != (UDragDropOperation *)0x0))
    {
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->ChangeClickDel);
    }
  }
  return;
}

// SetContext @ 14bd1e910

void __thiscall
UDS_CharSlotImplByRaidPartyData::SetContext
          (UDS_CharSlotImplByRaidPartyData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_SlotInfoBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FDS_RaidPartyRepo *pFVar6;
  FDS_RaidPartyMemberInfo *this_00;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  TSharedPtr<FDS_ViewModelContext_CharSlotByRaidPartyData,1> local_90;
  TSharedPtr<FDS_ViewModelContext,1> local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_70;
  FDestructionSentinel local_60;
  longlong local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FReadAccessScope local_38;
  
  local_80.Object = param_1->Object;
  local_80.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_CharSlotImplBase::SetContext((UDS_CharSlotImplBase *)this,&local_80);
  local_70.Object = param_1->Object;
  local_70.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharSlotByRaidPartyData>(&local_90,&local_70);
  if (local_90.Object == (FDS_ViewModelContext_CharSlotByRaidPartyData *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4757317682146050032>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\CharSlot\\DS_CharSlotImplByRaidPartyData.cpp"
                       ,0x10,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar5 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar6);
    if (bVar5) {
      if (local_90.Object == (FDS_ViewModelContext_CharSlotByRaidPartyData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      this->RaidPartySlotIndex = (local_90.Object)->RaidPartySlotIndex;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&this->AddClickDel,&(local_90.Object)->AddClickDel);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&this->ChangeClickDel,&(local_90.Object)->ChangeClickDel);
      if (&(local_90.Object)->OnDropModeChangeDelegate != &this->OnDropModeChangeDelegate) {
        local_a8 = (undefined1  [8])0x0;
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_98 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_90.Object)->OnDropModeChangeDelegate,&local_38);
        if ((*(int *)&((local_90.Object)->OnDropModeChangeDelegate).field_0x10 != 0) &&
           (plVar1 = *(longlong **)&((local_90.Object)->OnDropModeChangeDelegate).field_0x8,
           plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x50))(plVar1,local_a8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropModeChangeDelegate,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                   (FWriteAccessScope *)&local_60);
        if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_a0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
          local_98 = 0;
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_a8);
      }
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&this->OnClickSlotButtonUpDelegate,&(local_90.Object)->OnClickSlotButtonUpDelegate)
      ;
      this->IsDropMode = (local_90.Object)->IsDropMode;
      pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      this_00 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex
                          (pFVar6,this->RaidPartySlotIndex);
      bVar5 = FDS_RaidPartyMemberInfo::IsValidCharInfo(this_00);
      if (bVar5) {
        *(int *)&this->_padding_ = (this_00->CharInfo).CharId;
        this->CharLevel = (this_00->CharInfo).CharLevel;
        this->CharAscend = (this_00->CharInfo).CharAscend;
        pTVar2 = ((local_90.Object)->RaidPartySlotInfo).SlotInfo.SharedReferenceCount.
                 ReferenceController;
        pFVar3 = ((local_90.Object)->RaidPartySlotInfo).SlotInfo.Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48 = this->_padding_;
        pTStack_40 = (TReferenceControllerBase<1> *)this->_padding_;
        this->_padding_ = (longlong)pFVar3;
        this->_padding_ = (longlong)pTVar2;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_40);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

