// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b709bc0

UClass * __cdecl UDS_VM_WorldMap_IndoorFloorInfoList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoList.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IndoorFloorInfoList",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IndoorFloorInfoList,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_IndoorFloorInfoList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IndoorFloorInfoList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoList.InnerSingleton;
}

// UDS_VM_WorldMap_IndoorFloorInfoList @ 14b711a40

UDS_VM_WorldMap_IndoorFloorInfoList * __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::UDS_VM_WorldMap_IndoorFloorInfoList
          (UDS_VM_WorldMap_IndoorFloorInfoList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IndoorFloorInfoList__6B_;
  (this->EntryBindingEventField_IndoorFloorInfoList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_IndoorFloorInfoList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_IndoorFloorInfoList).UserObjectList.ArrayMax = 0;
  (this->RegisterSlotIndoorGroupID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisterSlotIndoorGroupID).ArrayNum = 0;
  (this->RegisterSlotIndoorGroupID).ArrayMax = 0;
  this->SeletedIndex = 0;
  this->CurIndoorGroupID = 0;
  this->CurFloor = 0;
  this->GroupID = 0;
  this->CurMapIndoorFloorTableID = 0;
  return this;
}

// UDS_VM_WorldMap_IndoorFloorInfoList @ 14b711ab0

UDS_VM_WorldMap_IndoorFloorInfoList * __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::UDS_VM_WorldMap_IndoorFloorInfoList
          (UDS_VM_WorldMap_IndoorFloorInfoList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IndoorFloorInfoList__6B_;
  (this->EntryBindingEventField_IndoorFloorInfoList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_IndoorFloorInfoList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_IndoorFloorInfoList).UserObjectList.ArrayMax = 0;
  (this->RegisterSlotIndoorGroupID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisterSlotIndoorGroupID).ArrayNum = 0;
  (this->RegisterSlotIndoorGroupID).ArrayMax = 0;
  this->SeletedIndex = 0;
  this->CurIndoorGroupID = 0;
  this->CurFloor = 0;
  this->GroupID = 0;
  this->CurMapIndoorFloorTableID = 0;
  return this;
}

// ~UDS_VM_WorldMap_IndoorFloorInfoList @ 14b7135e0

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::~UDS_VM_WorldMap_IndoorFloorInfoList
          (UDS_VM_WorldMap_IndoorFloorInfoList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IndoorFloorInfoList__6B_;
  pFVar1 = (this->RegisterSlotIndoorGroupID).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_IndoorFloorInfoList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716c90

IClassDescriptor * __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::GetFieldNotificationDescriptor
          (UDS_VM_WorldMap_IndoorFloorInfoList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_IndoorFloorInfoList::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717e90

UClass * __cdecl UDS_VM_WorldMap_IndoorFloorInfoList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoList.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IndoorFloorInfoList",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IndoorFloorInfoList,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_IndoorFloorInfoList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IndoorFloorInfoList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IndoorFloorInfoList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMap_IndoorFloorInfoList @ 14b718aa0

void __cdecl
UDS_VM_WorldMap_IndoorFloorInfoList::StaticRegisterNativesUDS_VM_WorldMap_IndoorFloorInfoList(void)

{
  return;
}

// BindModel @ 14c06c370

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::BindModel(UDS_VM_WorldMap_IndoorFloorInfoList *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangeIndoorGroupID_IndoorInfoListDel,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_IndoorFloorInfoList>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangeIndoorGroupID_IndoorInfoListDel,
               (UDS_VM_WorldMap_IndoorFloorInfoList *)&stack0x00000010,(pmf_e595c4a1 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->IndoorFloorListItemIndexChangeDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_IndoorFloorInfoList>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar1->IndoorFloorListItemIndexChangeDelegate,
               (UDS_VM_WorldMap_IndoorFloorInfoList *)&stack0x00000010,(pmf_0b4bda47 *)this);
  }
  return;
}

// InitViewModel @ 14c08c790

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::InitViewModel(UDS_VM_WorldMap_IndoorFloorInfoList *this)

{
  return;
}

// OnChangeIndoorGroupID @ 14c092040

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::OnChangeIndoorGroupID
          (UDS_VM_WorldMap_IndoorFloorInfoList *this,int param_1)

{
  int iVar1;
  FDS_MapIndoorGroupTableRow *pFVar2;
  UDS_WorldMapEvent *pUVar3;
  
  pFVar2 = FDS_MapIndoorGroupTableRow::Get((longlong)param_1,true);
  if ((pFVar2 != (FDS_MapIndoorGroupTableRow *)0x0) &&
     (iVar1 = pFVar2->ID_MapIndoorFloor, 0 < iVar1)) {
    if (this->CurMapIndoorFloorTableID == iVar1) {
      pUVar3 = UDS_WorldMapEvent::GetEvent();
      if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
        FDS_EventDelegate<int_const_>::Broadcast(&pUVar3->ChangedSeletedIndoorFloor,param_1);
        return;
      }
    }
    else {
      this->CurMapIndoorFloorTableID = iVar1;
      this->CurIndoorGroupID = param_1;
      UpdateSlotList(this,iVar1);
    }
  }
  return;
}

// OnCloseInit @ 14c093040

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::OnCloseInit(UDS_VM_WorldMap_IndoorFloorInfoList *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnItemSelectedChange @ 14c096440

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::OnItemSelectedChange
          (UDS_VM_WorldMap_IndoorFloorInfoList *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UDS_WorldMapEvent *pUVar6;
  int iVar7;
  
  if (param_1) {
    iVar7 = this->SeletedIndex + -1;
    this->SeletedIndex = iVar7;
    if (iVar7 < 0) {
      iVar4 = 0;
LAB_14c096461:
      this->SeletedIndex = iVar4;
      return;
    }
  }
  else {
    iVar7 = this->SeletedIndex + 1;
    iVar4 = (this->RegisterSlotIndoorGroupID).ArrayNum + -1;
    this->SeletedIndex = iVar7;
    if (iVar4 < iVar7) goto LAB_14c096461;
    if (iVar7 < 0) {
      return;
    }
  }
  if ((iVar7 < (this->RegisterSlotIndoorGroupID).ArrayNum) &&
     (pUVar6 = UDS_WorldMapEvent::GetEvent(), pUVar6 != (UDS_WorldMapEvent *)0x0)) {
    uVar1 = this->SeletedIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->RegisterSlotIndoorGroupID).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar6->ChangeIndoorGroupID,
               *(int *)((this->RegisterSlotIndoorGroupID).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 4));
  }
  return;
}

// OnSetViewModel @ 14c099de0

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::OnSetViewModel
          (UDS_VM_WorldMap_IndoorFloorInfoList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14c0adbd0

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::UnbindModel(UDS_VM_WorldMap_IndoorFloorInfoList *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangeIndoorGroupID_IndoorInfoListDel,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->IndoorFloorListItemIndexChangeDelegate,this);
  }
  return;
}

// UpdateSlotList @ 14c0afe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_IndoorFloorInfoList::UpdateSlotList
          (UDS_VM_WorldMap_IndoorFloorInfoList *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UDS_VM_WorldMap_IndoorFloorInfoList *pUVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDS_MapIndoorFloorTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_01;
  ForAnyElementType FVar13;
  longlong lVar14;
  FDS_ViewModelContext *pFVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined1 auStackY_218 [32];
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  UDS_VM_WorldMap_IndoorFloorInfoList *local_1b8;
  longlong local_1b0;
  int local_1a8;
  UDS_UserObjectListItem *local_1a0;
  FName local_198;
  int local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1b8 = this;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_IndoorFloorInfoList);
  piVar1 = &(this->RegisterSlotIndoorGroupID).ArrayMax;
  (this->RegisterSlotIndoorGroupID).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RegisterSlotIndoorGroupID).AllocatorInstance,0,piVar1);
  }
  pFVar8 = FDS_MapIndoorFloorTableRow::Get((longlong)param_1,true);
  if (pFVar8 == (FDS_MapIndoorFloorTableRow *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_WorldMap_IndoorFloorInfoList::UpdateSlotList",0x33,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,0x37,L"mapIndoorFloorTableRow  nullptr")
    ;
    FVar13.Data = (FScriptContainerElement *)local_168._padding_;
  }
  else {
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0 = (pFVar8->ID_IndoorGroup).ArrayNum;
    lVar14 = (longlong)local_1c0;
    pFVar2 = (pFVar8->ID_IndoorGroup).AllocatorInstance.Data;
    if (local_1c0 == 0) {
      local_1bc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1c0,0,&local_1c8,local_1c0,&local_1bc);
      memcpy(local_1c8.Data,pFVar2,lVar14 << 2);
    }
    iVar7 = pFVar8->StartFloor;
    iVar17 = local_1c0 + -1 + iVar7;
    uVar16 = local_1c0 - 1;
    local_1a8 = iVar7;
    if (iVar7 <= iVar17) {
      lVar14 = (longlong)(int)uVar16 * 4;
      local_1b0 = lVar14;
      do {
        pFVar15 = (FDS_ViewModelContext *)0x0;
        if (((iVar17 != 0) && (-1 < (int)uVar16)) && ((int)uVar16 < local_1c0)) {
          this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (this_00 != (UDS_UserObjectListItem *)0x0) goto LAB_14c0b0061;
          }
          else if (this_00 != (UDS_UserObjectListItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14c0b0061:
            pFVar10 = ::operator_new(0x30);
            if (pFVar10 != (FDS_ViewModelContext *)0x0) {
              *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
              *(undefined4 *)((longlong)&pFVar10[1].DerivedStaticStruct + 1) = 0;
              *(undefined2 *)((longlong)&pFVar10[1].DerivedStaticStruct + 5) = 0;
              *(undefined1 *)((longlong)&pFVar10[1].DerivedStaticStruct + 7) = 0;
              pFVar10->DerivedStaticStruct = (UStruct *)0x0;
              (pFVar10->ViewModelName).ComparisonIndex = 0;
              (pFVar10->ViewModelName).Number = 0;
              pFVar10->_padding_ =
                   (longlong)&___7FDS_ViewModelConext_WorldMapIndoorFloorInfoSlot__6B_;
              pFVar10[1]._padding_ = 0;
              *(undefined1 *)&pFVar10[1].DerivedStaticStruct = 0;
              pFVar15 = pFVar10;
            }
            pTVar11 = ::operator_new(0x20);
            if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
              pTVar11 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar11->SharedReferenceCount = (atomic<int>)0x1;
              pTVar11[1]._padding_ = (longlong)ViewModelContextDeleter;
              pTVar11->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFDS_ViewModelConext_WorldMapIndoorFloorInfoSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
              ;
              pTVar11->WeakReferenceCount = (atomic<int>)0x1;
              *(FDS_ViewModelContext **)&pTVar11[1].SharedReferenceCount = pFVar15;
            }
            if ((pFVar15 == (FDS_ViewModelContext *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar12 = FDS_ViewModelConext_WorldMapIndoorFloorInfoSlot::StaticStruct();
            pFVar15->DerivedStaticStruct = (UStruct *)pUVar12;
            this_01 = UDS_ViewModelContextManager::GetInst();
            if (this_01 != (UDS_ViewModelContextManager *)0x0) {
              if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar11->SharedReferenceCount =
                     (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_188.Object = pFVar15;
              local_188.SharedReferenceCount.ReferenceController = pTVar11;
              UDS_ViewModelContextManager::RegisterContext(this_01,&local_188);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_188.SharedReferenceCount.ReferenceController);
            }
            pFVar15->ViewModelTemplateKey = W_WorldMapIndoorFloorSlot;
            *(int *)((longlong)&pFVar15[1]._padding_ + 4) = iVar17;
            uVar18 = ~uVar16 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar16 < local_1c0) {
              uVar6 = uVar18;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined4 *)&pFVar15[1]._padding_ = *(undefined4 *)(local_1c8.Data + lVar14);
            iVar7 = local_1b8->CurIndoorGroupID;
            uVar6 = 0;
            if ((int)uVar16 < local_1c0) {
              uVar6 = uVar18;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(bool *)&pFVar15[1].DerivedStaticStruct = iVar7 == *(int *)(local_1c8.Data + local_1b0)
            ;
            uVar6 = 0;
            if ((int)uVar16 < local_1c0) {
              uVar6 = uVar18;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar4 = local_1b8;
            pTVar20 = &local_1b8->RegisterSlotIndoorGroupID;
            pFVar19 = local_1c8.Data + local_1b0;
            pFVar2 = (pTVar20->AllocatorInstance).Data;
            if (((pFVar2 <= pFVar19) &&
                (pFVar19 < pFVar2 + (longlong)(local_1b8->RegisterSlotIndoorGroupID).ArrayMax * 4))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = (pUVar4->RegisterSlotIndoorGroupID).ArrayNum;
            if (iVar7 == (pUVar4->RegisterSlotIndoorGroupID).ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar20->AllocatorInstance,
                                 &(pUVar4->RegisterSlotIndoorGroupID).ArrayMax);
            }
            this = local_1b8;
            (pUVar4->RegisterSlotIndoorGroupID).ArrayNum = iVar7 + 1;
            *(undefined4 *)((pTVar20->AllocatorInstance).Data + (longlong)iVar7 * 4) =
                 *(undefined4 *)pFVar19;
            if (*(char *)&pFVar15[1].DerivedStaticStruct == '\x01') {
              local_1b8->SeletedIndex = (local_1b8->RegisterSlotIndoorGroupID).ArrayNum + -1;
            }
            if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_178.Object = pFVar15;
            local_178.SharedReferenceCount.ReferenceController = pTVar11;
            UDS_UserObjectListItem::AddContext(this_00,&local_178);
            local_1a0 = this_00;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField_IndoorFloorInfoList,
                       (TObjectPtr<UDS_UserObjectListItem>)&local_1a0);
            uVar16 = uVar16 - 1;
            lVar14 = local_1b0 + -4;
            local_1b0 = lVar14;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar11);
            iVar7 = local_1a8;
          }
        }
        iVar17 = iVar17 + -1;
      } while (iVar7 <= iVar17);
    }
    local_190 = FFieldNotificationClassDescriptor::EntryBindingEventField_IndoorFloorInfoList.
                BitNumber;
    local_198 = FFieldNotificationClassDescriptor::EntryBindingEventField_IndoorFloorInfoList.
                FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    FVar13.Data = local_1c8.Data;
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return;
}

